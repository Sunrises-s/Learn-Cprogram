//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
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

//int/* cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0) { return 1; }
//	else if (n == 1) { return 2; }
//	else { return fib(n - 1) + fib(n - 2); }
//}
//
//void main()
//{
//	fib(8);
//	printf("%d", cnt);
//	
//}*/

/*
	��������������A��B
	���A��B����С������
	ʾ��: ����5 7  ���35
*/
//int mini(int a, int b)
//{
//	int c = 1;
//	while (1) 
//	{
//		if ((a * c % b) == 0) { break; }
//		else 
//		{
//			c++;
//		}
//	}
//	return a * c;
//}
//int main(void)
//{
//	unsigned int A = 0;
//	unsigned int B = 0;
//	scanf("%d %d",&A, &B);
//	printf("��С��������%d", mini(A, B));
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	gets(arr);
//	printf("%s", arr);
//	return 0;
//}

//���������ֽ����С���ֽ���ĸ�����һ��С�������жϵ�ǰ�������ֽ���
//int main()
//{
//	int a = 0x3abf7890;
//	char* pa = (char *) & a;
//	printf("%x--->%p\n", *pa, pa);
//	printf("%x--->%p\n", *(pa + 1), pa + 1);
//	printf("%x--->%p\n", *(pa + 2), pa + 2);
//	printf("%x--->%p\n", *(pa + 3), pa + 3);
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

// ��ӡһ������,13��
//int main()
//{
//	int n = 100;
//	//scanf("%d", &n);
//	//��ӡ������
//	for (int i = 0; i < n; i++)
//	{
//		//��ӡ�ո�
//		for (int j = 0; j < (n-1-i); j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (int k = 0; k < (2 * i + 1); k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ������
//	for (int i = 0; i < n - 1; i++)
//	{
//		//��ӡ�ո�
//		for (int j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (int k = 0; k < (2*n-2*i-3); k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// ����ˮ, һƿ��ˮ1��Ǯ, ������ƿ��һƿ, ����20��Ǯ, ��������ˮ?
//int main()
//{
//	int m = 1;//Ǯ
//	int pop = m;//��ˮ��
//	int pop_b = 0;//��ˮƿ��
//	int pop_d = 0;//���˼�ƿ
//	do
//	{
//		//����ˮ�ȹ�
//		pop_b += pop;
//		pop_d += pop;
//		//��ˮƿ����ˮ
//		pop = pop_b / 2;
//		pop_b = pop_b % 2;
//
//	} while (pop);
//	printf("����%dƿ��ˮ, ���ڻ���%d����ˮƿ", pop_d, pop_b);
//	return 0;
//}

//����������
//����һ��������
//���������
//���һ����������������λС��
//#include <stdio.h>
//int main()
//{
//	double a = 0;
//	scanf("%lf", &a);
//	printf("%.3f", a);
//	return 0;
//}

//����������
//����һ���ַ�����Χ��ascii��Χ��
//���������
//�������ַ�

//#include <stdio.h>
//int main(void) 
//{
//	char c = 0;
//	scanf("%c", &c);
//	printf("%c", c);
//	return 0;
//}

//����������
//һ������ 3 ���������ÿո������
//���������
//������ڶ���������ֵ��
//#include <stdio.h>
//int main(void)
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d", b);
//	return 0;
////}
//����������
//һ�ж���һ�� char ���͵��ַ���
//���������
//�������ַ���ɵ� 3 * 3 ���Ρ�
//#include <stdio.h>
//int main(void)
//{
//	char c = getchar();
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%c", c);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����������
//����һ��char�����ַ�
//���������
//���һ��������ַ����ĶԽ��߳�5���ַ�����б���õ�����
//#include <stdio.h>
//int main(void)
//{
//	char c = getchar();
//	//��ӡ������
//	for (int i = 0; i < 3; i++)
//	{
//		//��ӡ�ո�
//		for (int j = 0; j < 2-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ�ַ�
//		for (int k = 0; k < 2*i+1; k++)
//		{
//			printf("%c", c);
//		}
//		printf("\n");
//	}
//	//��ӡ������
//	for (int i = 0; i < 2; i++)
//	{
//		//��ӡ�ո�
//		for (int j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ�ַ�
//		for (int k = 0; k < 3-i*2; k++)
//		{
//			printf("%c", c);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����һ���ַ���������ַ���Ӧ��ASCII�롣
//#include <stdio.h>
//int main(void)
//{
//	char c = getchar();
//	printf("%d", c);
//	return 0;
//}

//��������ת��Ϊ�������ͣ�Ҫ���������롣
//#include <stdio.h>
//int main(void)
//{
//	double a = 0;
//	scanf("%lf", &a);
//	//���������
//	if (a > 0) {
//		if ((a - (int)a) > 0.5) 
//		{
//			printf("%d", (int)a + 1);
//		}
//		else
//			printf("%d", (int)a);
//	}
//	else {
//		if ((a - (int)a) < -0.5)
//		{
//			printf("%d", (int)a - 1);
//		}
//		else
//			printf("%d", (int)a);
//	}
//	
//	return 0;
//}

//����3�Ƴɼ���Ȼ������Ƴɼ�������ɼ�Ϊ������ʽ��
//#include <stdio.h>
//int main(void)
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("score1=%d,score2=%d,score3=%d", a, b, c);
//	return 0;
//}

//��������һ��ѧ����ѧ�ţ��Լ�3�ƣ�C���ԣ���ѧ��Ӣ��ɼ���
//����Ļ�������ѧ����ѧ�ţ�3�Ƴɼ���ע������ɼ�ʱ��������������ұ���2λС������
//#include <stdio.h>
//#include <math.h>
//
//double siwu(double x) {
//	double factor = pow(10, 2);
//	double rounded = round(x * factor);
//	return rounded / factor;
//}
//
//int main(void)
//{
//	// ����ѧ��
//	unsigned long long int a;
//	double b, c, d;
//	scanf("%lld;%lf,%lf,%lf", &a, &b, &c, &d);
//	printf("The each subject score of No. %lld is %.2lf, %.2lf, %.2lf.", a, siwu(b), siwu(c), siwu(d));
//
//	return 0;
//}

//����
//����һ���˵ĳ������ڣ����������գ������������е��ꡢ�¡��շֱ������

//���ݷ�Χ���������1990��y��2015 ���·�����1��m��12  ��������1��d��30
//����������
//����ֻ��һ�У��������ڣ����������գ�������֮�������û�зָ�����
//���������
//���У���һ��Ϊ������ݣ��ڶ���Ϊ�����·ݣ�������Ϊ�������ڡ����ʱ����·ݻ�����Ϊ1λ������Ҫ��1λ��ǰ�油0��
//#include <stdio.h>
//int main()
//{
//	int bore = 0;
//	scanf("%8d",&bore);
//	while (getchar() != '\n');//
//	//ǰ��λ�����,��λ���·�,��λ����
//	int year = bore / 10000;
//	int day = bore % 100;
//	int month = (bore / 100) % 100;
//	printf("year=%04d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", day);
//
//	return 0;
//}

/*
  ����������������Χ-2^31 ~ 2^31-1�������������������
*/
//#include <stdio.h>
//int main(void)
//{
//	int a, b;
//	scanf("a=%d,b=%d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}

/*
	�����дӢ����ĸ, ���СдӢ����ĸ
*/
//#include <stdio.h>
//int main(void)
//{
//	char c = 0;
//	while (scanf("%c", &c) != EOF) {
//		while (getchar() != '\n');
//		printf("%c\n", c+32);
//	}
//	return 0;
//}

/*
   ����һ��ʮ��������,��ӡһ��ʮ������,����15λ�ֿ�
*/
//#include <stdio.h>
//int main(void)
//{
//	int a = 0xABCDEF;
//	printf("%15d", a);
//	return 0;
//}

/*
	�����ʮ��������1234��Ӧ�İ˽��ƺ�ʮ�����ơ�
*/
//#include <stdio.h>
//int main(void)
//{
//	int a = 1234;
//	printf("%#o %#X", a, a);
//	return 0;
//}

/*
	�Ӽ��̶���һ���ַ���һ��������һ�������ȸ���������˳��������ǣ����ÿո�ָ������������� 6 λС����
	��˳������ַ��������������ȸ��������ÿո�ָ������������� 6 λС��
*/
//#include <stdio.h>
//int main(void)
//{
//	char a;
//	int b;
//	float c;
//	scanf("%c", &a);
//	scanf("%d", &b);
//	scanf("%f", &c);
//	printf("%c %d %.6f", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d%8d%8d", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a+b);
//	return 0;
//}