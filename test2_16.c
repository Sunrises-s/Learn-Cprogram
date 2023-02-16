//不使用string库函数实现字符串反转
#include <stdio.h>

// int My_strlen(char* str)//获得数组长度
// {
// 	int i = 1;
// 	while(str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return i;
// }

// void reverse_string(char* str)//字符串反转
// {
// 	int right = My_strlen(str) - 1;
// 	int left = 0;
// 	char temp = 0;
// 	while(left < right)
// 	{
// 		temp = *(str + left);
// 		*(str + left) = *(str + right);
// 		*(str + right) = temp;
// 		right--;
// 		left++;
// 	}
// }

// int main(void)
// {
// 	char arr[] = "abcdef";
// 	reverse_string(arr);

// 	printf("%s", arr);
// 	return 0;
// }

//使用递归实现
// void reverse_string(char* str)
// {
// 	char tem = *str;
// 	int len = My_strlen(str);
// 	*str = *(str + len - 1);
// 	*(str + len - 1) = '\0';
// 	if (len > 1)
// 		reverse_string(str+1);
// 	*(str + len - 1) = tem;
// }

// int main(void)
// {
// 	char arr[] = "abcdef";
// 	reverse_string(arr);

// 	printf("%s", arr);
// 	return 0;
// }

/*******************************************************************************************************/
//输入一个非负整数, 返回组成他的数字之和, 1729,返回19
// int DigitSum(unsigned int n)
// {
// 	static int sum = 0;
// 	sum += n%10;
// 	n /= 10;
// 	if (n != 0)
// 	{
// 		DigitSum(n);
// 	}
// 	return sum;
// }

// int main(void)
// {
// 	unsigned int num = 0;
// 	scanf("%u", &num);
// 	printf("%d",DigitSum(num));

// 	return 0;
// }
/*******************************************************************************************************/
// 冒泡排序: 两两相邻的元素进行比较, 并且尽可能的话需要交换. 数组算的sizeof与形参指向地址的地址计算的sizeof肯定是1.
// void bubble_sort(int* arr)
// {
// 	//计算数组元素个数
// 	int sz = 10;
// 	for (int i = 0; i < sz; ++i)
// 	{
// 		for (int j = 0; j < (sz-1-i); j++)
// 		{
// 			if (arr[j] > arr[j+1])
// 			{
// 				int temp = arr[j];
// 				arr[j] = arr[j+1];
// 				arr[j+1] = temp;
// 			}
// 		}
// 	}
// }

// int main(int argc, char const *argv[])
// {
// 	int a[] = {1, 3, 5, 6, 8, 9, 0, 2, 4, 7};
// 	int* pa = a;
// 	bubble_sort(a);

// 	for(int i=0; i<(sizeof(a)/sizeof(a[0])); i++)
// 	{
// 		printf("%d", *(pa+i));
// 	}

// 	return 0;
// }

/*******************************************************************************************************/
//冒泡排序的改进
void bubble_sort(int* arr)
{
	//计算数组元素个数
	int sz = 10;
	int flag = 1;
	for (int i = 0; i < sz; ++i)
	{
		for (int j = 0; j < (sz-1-i); j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		} 
	}
}

int main(int argc, char const *argv[])
{
	int a[] = {1, 3, 5, 6, 8, 9, 0, 2, 4, 7};
	int* pa = a;
	bubble_sort(a);

	for(int i=0; i<(sizeof(a)/sizeof(a[0])); i++)
	{
		printf("%d", *(pa+i));
	}

	return 0;
}