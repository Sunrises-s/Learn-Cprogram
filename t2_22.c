#include <stdio.h>
#include <assert.h>
#include <string.h>
//int main(void)
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	int n = 10;
//	int m = 20;
//	const int* p = &n;
//	//*p = 20;//ok?
//	p = &m; //ok?
//}

//int main()
//{
//	int n = 10;
//	int m = 20;
//	int const *p = &n;
//	*p = 20; //ok?
//	p = &m; //ok?
//	return 0;
//}

//char* My_strcop(char* des, const char* str) 
//{
//
//	while (*des++ = *str++);
//	return (des);
//}

//char* strcpy(char* dst, const char* src)
//{
//	char* cp = dst;
//	assert(dst && src);
//	while (*dst++ = *src++)
//		; /* Copy src over dst */
//	return(dst);
//}
//
//int main(void)
//{
//	char a[] = "12345";
//	char b[] = "xxxxxxxxxxxxxx";
//	printf("%s", strcpy(b, a));
//	return 0;
//}

//int main(void)
//{
//	char* str1 = "abcdefghijklmn";
//	char str2[] = "abcd";
//
//	//*(str1 + 2) = 'e';
//	*(str2 + 2) = 'e';
//	printf("%u", sizeof(str1));
//	printf("%s", str2);
//
//	return 0;
//}

// ͳ�ƶ�������1�ĸ���
// дһ���������ز�����������1�ĸ���.
// ����15 00001111 4��1 

//size_t number_of_1(int n)//�������ֶ�������1�ĸ���
//{
//	unsigned int num = n;   //������
//	size_t c = 0;
//	const unsigned int a = 1;
//	do
//	{
//		if (num & a)
//			c++;		
//	} while (num >>= 1);
//	return c;
//}
//
//int main()
//{
//	int a = -1;
//	printf("%zd", number_of_1(a));
//	return 0;
//}

// ���������������в�ͬλ�ĸ���
// ʵ����������m��n�Ķ����Ʊ����, �ж��ٸ�λ��ͬ?
// 1999  2299  ���:7
//size_t number_of_1(int n)//�������ֶ�������1�ĸ���
//{
//	unsigned int num = n;   //������
//	size_t c = 0;
//	const unsigned int a = 1;
//	do
//	{
//		if (num & a)
//			c++;		
//	} while (num >>= 1);
//	return c;
//}
//
//size_t number_of_di(int m, int n)
//{
//	int num = m ^ n;
//	return number_of_1(num);
//}
//
//int main(void)
//{
//	int m = 1999;
//	int n = 2299;
//	printf("%zd", number_of_di(m, n));
//	return 0;
//}

// ��ӡ���������Ƶ�����λ��ż��λ
// ��ȡһ���������������������е�ż��λ������λ, �ֱ��ӡ������������.
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//��ӡż��λ
//	for (int i = 31; i >= 1; i-=2 )
//	{
//		printf("%d ", (a>>i) & 1);
//	}
//	printf("\n");
//	//��ӡ����λ
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//
//	return 0;
//}

//int main()
//{
//	int  arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	for (int i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int cnt = 0;
int fib(int n)
{
	cnt++;
	if (n == 0) { return 1; }
	else if (n == 1) { return 2; }
	else { return fib(n - 1) + fib(n - 2); }
}

void main()
{
	fib(8);
	printf("%d", cnt);
}