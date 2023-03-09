// 使用qsort函数排序整型
//#include <stdio.h>
//#include <stdlib.h>
//
//int compare(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main(void)
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(int), compare);
//	// 打印数组
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

/*
    使用qsort()排序结构体数据, 通过名字来排序, 通过姓名来排序
    名字排序要使用strcmp函数来进行比较.
*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//int sort_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//
//
//int main(void)
//{
//	struct Stu s[] = { {"zhangsan", 12},{"lisi", 34},{"wangwu", 10} };
//	size_t sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), sort_by_age);  //根据年龄来排序
//	qsort(s, sz, sizeof(s[0]), sort_by_name);  //根据年龄来排序
//
//	//打印结构体
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s  %d\n", s[i].name, s[i].age);
//	}
//	return 0;
//}


//实现冒泡排序
//#include <stdio.h>
////冒泡排序函数
//void bubble_sort(int* arr, int s)
//{
//	for (int i = 0; i < s-1; i++)
//	{
//		for (int j = 0; j < (s-i-1); j++)
//		{
//			if (arr[j] > arr[j + 1]) {    //如果前面的数比后面的数小, 就交换
//				arr[j] = arr[j] ^ arr[j + 1];
//				arr[j+1] = arr[j] ^ arr[j + 1];
//				arr[j] = arr[j] ^ arr[j + 1];
//			}
//		}
//	}
//}
//
//int main(void)
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	// 打印数组
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

// 使用冒泡排序来模拟qsort()函数
// qsort(void* base, size_t num, size_t size,int (*compar)(const void*,const void*))
//#include <stdio.h>
//#include <string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void swp(char* e1, char* e2, size_t size)//交换, 一个字节一个字节的交换, 交换size个字节即可
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		*(e1 + i) = (*(e1 + i)) ^ (*(e2 + i));
//		*(e2 + i) = (*(e1 + i)) ^ (*(e2 + i));
//		*(e1 + i) = (*(e1 + i)) ^ (*(e2 + i));
//	}
//}
////冒泡排序
//void bubble_sort(void* base, 
//				 size_t num, 
//				 size_t size, 
//				 int (*compar)(const void*, const void*)
//				)
//{
//	for (size_t i = 0; i < num-1; i++) 
//	{
//		for (size_t j = 0; j < (num-i-1); j++)
//		{
//			//判断交换条件, 如果前面比后面大, 返回正数, 前面比后面小返回负数, 相等返回0.
//			if (compar((char*)base+size*j, (char*)base + size * (j+1))>0)
//			{
//				swp((char*)base + size * j, (char*)base + size * (j + 1), size);//交换两个变量
//			}
//			
//		}
//	}
//}
//
//int sort_by_age(const void* e1, const void* e2)
//{
//	return (((struct Stu*)e1)->age) - (((struct Stu*)e2)->age);
//}
//int sort_by_name(const void* e1, const void* e2)
//{
//	return strcmp(e2,e1);
//}
//
//int main(void)
//{
//	struct Stu s[] = { {"zhangsan", 12},{"lisi", 34},{"wangwu", 10} };
//	size_t sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s, sz, sizeof(s[0]), sort_by_age);  //根据年龄来排序
//	bubble_sort(s, sz, sizeof(s[0]), sort_by_name);  //根据年龄来排序
//	
//	//打印结构体
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s  %d\n", s[i].name, s[i].age);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(arr + 0));
//	//printf("%d\n", sizeof(*arr));
//	//printf("%d\n", sizeof(arr[1]));
//	//printf("%d\n", sizeof(&arr));
//	//printf("%d\n", sizeof(&arr + 1));
//	//printf("%d\n", sizeof(&arr[0] + 1));
//	/*printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));*/
//
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[0][0]));
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n", sizeof(a[0] + 1));
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(*(a + 1)));
//	printf("%d\n", sizeof(&a[0] + 1));
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a[3]));
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p);
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%#x", ptr1[-1], *ptr2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	int a = c[1][1];
//	//char** cp[] = { c + 3,c + 2,c + 1,c };
//	//char*** cpp = cp;
//	//printf("%s\n", **++cpp);
//	//printf("%s\n", *-- * ++cpp + 3);
//	//printf("%s\n", *cpp[-2] + 3);
//	//printf("%s\n", cpp[-1][-1] + 1);
//	//printf("%s\n", c[1]+1);
//
//	return 0;
//}

/*
    编程题: 杨氏矩阵
    题目内容: 有一个数字矩阵,矩阵的每行从左到右都是递增的, 矩阵从上到下是递增的, 请编写程序在这样的矩阵中查找某个数字是否存在.
    要求: 时间复杂度小于O(N),遍历数组不满足要求.
*/
//方法1. 二分查找法
//#include <stdio.h>
//
//int main(void)
//{
//	//使用二维数组来存放矩阵
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	//查找一个数字, 二分查找, 先找中间的比较之后选择左半部分还是右半部分
//	int left = 0;//数组左下标
//	int right = sizeof(arr) / sizeof(int) - 1;//右下标
//	int mid;//中间值下标
//	//输入一个数字
//	int input = 0;
//	scanf("%d",&input);
//	while (left <= right)
//	{
//		mid = (right + left) / 2;
//		if (input == *(*(arr + 0) + mid)) 
//		{
//			printf("找到了");
//			break;
//		}
//		else if (input < *(*(arr + 0) + mid))//小于中间值
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//	if (left > right) 
//	{
//		printf("没找到");
//	}
//	return 0;
//}

/*
    字符串左旋
    题目内容: 实现一个函数, 可以左旋字符串中的k个字符
    例如: ABCD左旋1个字符得到BCDA, 左旋两个得到CDAB
*/
//#include <stdio.h>
//#include <string.h>
////左旋str字符串k个字符,循环左移k次
//void str_left(char* str, int k)
//{
//	int num = strlen(str);
//	int temp = 0;
//	//循环k次, 每次左移1位
//	for (int j = 0; j < k; j++)
//	{
//		temp = str[0];//更新temp值
//		for (int i = 1; i < num; i++)
//		{
//			str[i - 1] = str[i];
//		}
//		//将第一个元素放到最后面
//		str[num - 1] = temp;
//	}
//}
//
//int main(void)
//{
//	char str[] = "ABCDEFGHI";
//	str_left(str, 5);  //左旋3个字符
//	printf("%s", str);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char arr[20] = "hello";
//	strcat(arr,arr);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//	puts(str);
//	return 0;
//}

/*
    实现strstr()函数
*/
//#include <stdio.h>
//#include <string.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//    if (0 == *str2)
//        return (char*)str1;
//    char* flag = str1;
//    int i = 0;
//    while (str1[i])//str1结束了跳出循环.
//    {
//        if (str2[0] == str1[i])//比较str2首字母与str1相等的位置,并且记录下来
//        {
//            flag = &str1[i];
//            size_t j = 1;
//            while (str2[j]) //当str2结束了跳出循环
//            {
//                if (str1[i + j] != str2[j]) //如果不相等跳出循环
//                {
//                    goto table;
//                }
//                j++;
//            }
//            return flag;
//        }
//        table: i++;
//    }
//    //如果str1走完了,都没有相等的,则返回NULL.
//    return NULL;
//}

//int main(void)
//{
//    char str1[] = "abbbcdefg";
//    char str2[] = "bc";
//    char* str3 = my_strstr(str1, str2);
//    printf("%s",str3);
//
//    return 0;
//}

//#include <stdio.h>
//#include <errno.h>
//int main(void)
//{
//    printf("%s\n", strerror(0));
//    printf("%s\n", strerror(1));
//    printf("%s\n", strerror(2));
//    printf("%s\n", strerror(3));
//    printf("%s\n", strerror(4));
//    printf("%s\n", strerror(5));
//    printf("%s\n", strerror(6));
//
//    return 0;
//}

//#include <stdio.h>
//#include <ctype.h>
//int main(void)
//{
//    char a = 97;
//    printf("%d", isdigit(a));
//    return 0;
//}

//#include <stdio.h>
//#include <memory.h>
//#include <assert.h>
////实现memory copy函数的功能
//void* my_memcpy(void* destination, const void* source, size_t num)
//{
//    assert(destination && source);
//    for (size_t i = 0; i < num; i++)//循环num个字节,使用char*指针来进行copy
//    {
//        *((char*)destination + i) = *((char*)source + i);
//    }
//    return destination;
//}
//
//int main(void)
//{
//    int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//    int arr1[20] = { 0 };
//    int* arr2 = (int*)my_memcpy(arr1, arr, sizeof(arr1));
//    for (int i = 0; i < 20; i++)
//    {
//        printf("%d\n", arr2[i]);
//    }
//    return 0;
//}

// 实现memory move函数的功能
//#include <stdio.h>
//#include <memory.h>
//int main(void)
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//    memmove(arr, arr + 4, 5*4);
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d\n", arr[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//    typedef struct book
//    {
//        char name[20];
//        int price;
//    }books;
//
//    books a = { "hello", 20 };
//    printf("%s\n", a.name);
//    printf("%d\n", a.price);
//
//    return 0;
//}

