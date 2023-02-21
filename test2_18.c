//#include <stdio.h>

//测试右移操作符
// int main(void)
// {
// 	int a = -1;
// 	printf("%d", a>>1);
// 	return 0;
// }

//交换两个数字不使用第三个变量.
// int main(void)
// {
// 	int a = 10;
// 	int b = 20;
// 	a = a^b;
// 	b = a^b;
// 	a = a^b;
// 	printf("%d  %d",a,b);
// 	return 0;
// }

// int main()
// {
// int i = 0,a=0,b=2,c =3,d=4;
// i = a++ && ++b && d++;
// //i = a++||++b||d++;
// printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
// return 0;
// }

// int main()
// {

// 	int a = 3;

// 	printf("%d\n", a + --a);


// 	return 0;
// }

// int main()
// {
// int i = 10;
// i = i-- - --i * ( i = -3 ) * i++ + ++i;
// printf("i = %d\n", i);
// return 0;
// }
// int fun()
// {
// static int count = 1;
// return ++count;
// }
// int main()
// {
// int answer;
// answer = fun() - fun() * fun();
// printf( "%d\n", answer);//输出多少？
// return 0;
// }

// int main()
// {
// 	int arr[] = {1,2,3,(4,5),6};  //逗号表达式，只产生一个结果
// 	printf("%d\n", sizeof(arr));
// 	return 0;
// }

//实现函数init()初始化数组全为0
//实现print()打印数组的每个元素
//实现reverse()函数完成数组元素的逆置
// void init(int* arr, int sz)
// {
// 	for(int i = 0; i < sz; i++)
// 	{
// 		arr[i] = 0;
// 	}
// }
// void print(int* arr, int sz)
// {
// 	for(int i = 0; i < sz; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}	
// 	printf("\n");
// }
// void reverse(int* arr, int sz)
// {
// 	int left = 0;
// 	int right = sz - 1;

// 	while(left < right)	
// 	{
// 		arr[left] = arr[left] ^ arr[right];
// 		arr[right] = arr[left] ^ arr[right];
// 		arr[left] = arr[left] ^ arr[right];
// 		left++;
// 		right--;
// 	}
// }

// int main()
// {
// 	int arr[] = {1,2,3,4,5,6,7,8,9};
// 	int sz = sizeof(arr)/sizeof(arr[0]);
// 	reverse(arr, sz);

// 	for(int i = 0; i < sz; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	return 0;
// }

//交换两个数组元素
// void reverse(int* arr1, int* arr2, int sz)
// {
// 	for (int i = 0; i < sz; ++i)
// 	{
// 		arr1[i] = arr1[i] ^ arr2[i];
// 		arr2[i] = arr1[i] ^ arr2[i];
// 		arr1[i] = arr1[i] ^ arr2[i];
// 	}
// }

// void print(int* arr, int sz)//打印数组
// {
// 	for(int i = 0; i < sz; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}	
// 	printf("\n");
// }

// int main()
// {
// 	int arr1[] = { 1,2,3,4,5,6,7,8 };
// 	int arr2[] = { 8,7,6,5,4,3,2,1 };
// 	int sz = sizeof(arr1)/sizeof(arr1[0]);
// 	reverse(arr1, arr2, sz);
// 	print(arr1,sz);
// 	print(arr2,sz);

// 	return 0;
// }

// int main()
// {
// 	int a = 0x11223344;
// 	char* pa = &a;
// 	*pa = 0;
// 	printf("%#p\n", pa);
// 	printf("%#x\n", a);

// 	return 0;
// }

// int main()
// {
	
// 	int a = 10;
// 	void* p = &a;
// 	*(int*)p = 20;
// 	printf("%d", a);

// 	return 0;
// }

//#include <stdio.h>
//
//int main()
//{
//	printf("%zd",sizeof(int));
//	return 0;
//}

#include <stdio.h>

//#define N_VALUES 5
//int main() {
//	float values[N_VALUES];
//	float* vp;
//	//指针+-整数；指针的关系运算
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	for (int i = 0; i < N_VALUES; i++) {
//		printf("%f", values[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int My_strlen(char* str)
//{
//	char* a = str;
//	while (*a != '\0') {
//		a++;
//	}
//	return a - str;
//}
//int main()
//{
//	char a[] = "hello word!";
//	printf("%d", My_strlen(a));
//	return 0;
//}
#include <stdio.h>

struct stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	struct stu a;
}