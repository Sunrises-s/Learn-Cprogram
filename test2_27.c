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
#include <stdio.h>

void bubble_sort(void* base, 
				 size_t num, 
				 size_t size, 
				 int (*compar)(const void*, const void*)
				)
{
	
}

int main(void)
{

	return 0;
}





