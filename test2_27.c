// ʹ��qsort������������
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
//	// ��ӡ����
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

/*
    ʹ��qsort()����ṹ������, ͨ������������, ͨ������������
    ��������Ҫʹ��strcmp���������бȽ�.
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
//	qsort(s, sz, sizeof(s[0]), sort_by_age);  //��������������
//	qsort(s, sz, sizeof(s[0]), sort_by_name);  //��������������
//
//	//��ӡ�ṹ��
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s  %d\n", s[i].name, s[i].age);
//	}
//	return 0;
//}


//ʵ��ð������
//#include <stdio.h>
////ð��������
//void bubble_sort(int* arr, int s)
//{
//	for (int i = 0; i < s-1; i++)
//	{
//		for (int j = 0; j < (s-i-1); j++)
//		{
//			if (arr[j] > arr[j + 1]) {    //���ǰ������Ⱥ������С, �ͽ���
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
//	// ��ӡ����
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

// ʹ��ð��������ģ��qsort()����
// qsort(void* base, size_t num, size_t size,int (*compar)(const void*,const void*))
//#include <stdio.h>
//#include <string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void swp(char* e1, char* e2, size_t size)//����, һ���ֽ�һ���ֽڵĽ���, ����size���ֽڼ���
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		*(e1 + i) = (*(e1 + i)) ^ (*(e2 + i));
//		*(e2 + i) = (*(e1 + i)) ^ (*(e2 + i));
//		*(e1 + i) = (*(e1 + i)) ^ (*(e2 + i));
//	}
//}
////ð������
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
//			//�жϽ�������, ���ǰ��Ⱥ����, ��������, ǰ��Ⱥ���С���ظ���, ��ȷ���0.
//			if (compar((char*)base+size*j, (char*)base + size * (j+1))>0)
//			{
//				swp((char*)base + size * j, (char*)base + size * (j + 1), size);//������������
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
//	//bubble_sort(s, sz, sizeof(s[0]), sort_by_age);  //��������������
//	bubble_sort(s, sz, sizeof(s[0]), sort_by_name);  //��������������
//	
//	//��ӡ�ṹ��
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
//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
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
    �����: ���Ͼ���
    ��Ŀ����: ��һ�����־���,�����ÿ�д����Ҷ��ǵ�����, ������ϵ����ǵ�����, ���д�����������ľ����в���ĳ�������Ƿ����.
    Ҫ��: ʱ�临�Ӷ�С��O(N),�������鲻����Ҫ��.
*/
//����1. ���ֲ��ҷ�
//#include <stdio.h>
//
//int main(void)
//{
//	//ʹ�ö�ά��������ž���
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	//����һ������, ���ֲ���, �����м�ıȽ�֮��ѡ����벿�ֻ����Ұ벿��
//	int left = 0;//�������±�
//	int right = sizeof(arr) / sizeof(int) - 1;//���±�
//	int mid;//�м�ֵ�±�
//	//����һ������
//	int input = 0;
//	scanf("%d",&input);
//	while (left <= right)
//	{
//		mid = (right + left) / 2;
//		if (input == *(*(arr + 0) + mid)) 
//		{
//			printf("�ҵ���");
//			break;
//		}
//		else if (input < *(*(arr + 0) + mid))//С���м�ֵ
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
//		printf("û�ҵ�");
//	}
//	return 0;
//}

/*
    �ַ�������
    ��Ŀ����: ʵ��һ������, ���������ַ����е�k���ַ�
    ����: ABCD����1���ַ��õ�BCDA, ���������õ�CDAB
*/
//#include <stdio.h>
//#include <string.h>
////����str�ַ���k���ַ�,ѭ������k��
//void str_left(char* str, int k)
//{
//	int num = strlen(str);
//	int temp = 0;
//	//ѭ��k��, ÿ������1λ
//	for (int j = 0; j < k; j++)
//	{
//		temp = str[0];//����tempֵ
//		for (int i = 1; i < num; i++)
//		{
//			str[i - 1] = str[i];
//		}
//		//����һ��Ԫ�طŵ������
//		str[num - 1] = temp;
//	}
//}
//
//int main(void)
//{
//	char str[] = "ABCDEFGHI";
//	str_left(str, 5);  //����3���ַ�
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
    ʵ��strstr()����
*/
//#include <stdio.h>
//#include <string.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//    if (0 == *str2)
//        return (char*)str1;
//    char* flag = str1;
//    int i = 0;
//    while (str1[i])//str1����������ѭ��.
//    {
//        if (str2[0] == str1[i])//�Ƚ�str2����ĸ��str1��ȵ�λ��,���Ҽ�¼����
//        {
//            flag = &str1[i];
//            size_t j = 1;
//            while (str2[j]) //��str2����������ѭ��
//            {
//                if (str1[i + j] != str2[j]) //������������ѭ��
//                {
//                    goto table;
//                }
//                j++;
//            }
//            return flag;
//        }
//        table: i++;
//    }
//    //���str1������,��û����ȵ�,�򷵻�NULL.
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
////ʵ��memory copy�����Ĺ���
//void* my_memcpy(void* destination, const void* source, size_t num)
//{
//    assert(destination && source);
//    for (size_t i = 0; i < num; i++)//ѭ��num���ֽ�,ʹ��char*ָ��������copy
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

// ʵ��memory move�����Ĺ���
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

