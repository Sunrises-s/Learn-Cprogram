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

// 统计二进制中1的个数
// 写一个函数返回参数二进制中1的个数.
// 比如15 00001111 4个1 

//size_t number_of_1(int n)//返回数字二进制中1的个数
//{
//	unsigned int num = n;   //处理负数
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

// 求两个数二进制中不同位的个数
// 实现两个整数m和n的二进制表达中, 有多少个位不同?
// 1999  2299  输出:7
//size_t number_of_1(int n)//返回数字二进制中1的个数
//{
//	unsigned int num = n;   //处理负数
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

// 打印整数二进制的奇数位和偶数位
// 获取一个整数二进制序列中所有的偶数位和奇数位, 分别打印出二进制序列.
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//打印偶数位
//	for (int i = 31; i >= 1; i-=2 )
//	{
//		printf("%d ", (a>>i) & 1);
//	}
//	printf("\n");
//	//打印奇数位
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
	输入两个正整数A和B
	输出A和B的最小公倍数
	示例: 输入5 7  输出35
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
//	printf("最小公倍数是%d", mini(A, B));
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	gets(arr);
//	printf("%s", arr);
//	return 0;
//}

//请简述大端字节序和小端字节序的概念，设计一个小程序来判断当前机器的字节序。
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
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
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

// 打印一个菱形,13行
//int main()
//{
//	int n = 100;
//	//scanf("%d", &n);
//	//打印上三角
//	for (int i = 0; i < n; i++)
//	{
//		//打印空格
//		for (int j = 0; j < (n-1-i); j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (int k = 0; k < (2 * i + 1); k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下三角
//	for (int i = 0; i < n - 1; i++)
//	{
//		//打印空格
//		for (int j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (int k = 0; k < (2*n-2*i-3); k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 喝汽水, 一瓶汽水1块钱, 两个空瓶换一瓶, 给你20块钱, 换多少汽水?
//int main()
//{
//	int m = 1;//钱
//	int pop = m;//汽水数
//	int pop_b = 0;//汽水瓶数
//	int pop_d = 0;//喝了几瓶
//	do
//	{
//		//将汽水喝光
//		pop_b += pop;
//		pop_d += pop;
//		//汽水瓶换汽水
//		pop = pop_b / 2;
//		pop_b = pop_b % 2;
//
//	} while (pop);
//	printf("喝了%d瓶汽水, 现在还有%d个汽水瓶", pop_d, pop_b);
//	return 0;
//}

//输入描述：
//输入一个浮点数
//输出描述：
//输出一个浮点数，保留三位小数
//#include <stdio.h>
//int main()
//{
//	double a = 0;
//	scanf("%lf", &a);
//	printf("%.3f", a);
//	return 0;
//}

//输入描述：
//输入一个字符，范围在ascii范围内
//输出描述：
//输出这个字符

//#include <stdio.h>
//int main(void) 
//{
//	char c = 0;
//	scanf("%c", &c);
//	printf("%c", c);
//	return 0;
//}

//输入描述：
//一行输入 3 个整数，用空格隔开。
//输出描述：
//请输出第二个整数的值。
//#include <stdio.h>
//int main(void)
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d", b);
//	return 0;
////}
//输入描述：
//一行读入一个 char 类型的字符。
//输出描述：
//输出这个字符组成的 3 * 3 矩形。
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

//输入描述：
//输入一个char类型字符
//输出描述：
//输出一个用这个字符填充的对角线长5个字符，倾斜放置的菱形
//#include <stdio.h>
//int main(void)
//{
//	char c = getchar();
//	//打印上三角
//	for (int i = 0; i < 3; i++)
//	{
//		//打印空格
//		for (int j = 0; j < 2-i; j++)
//		{
//			printf(" ");
//		}
//		//打印字符
//		for (int k = 0; k < 2*i+1; k++)
//		{
//			printf("%c", c);
//		}
//		printf("\n");
//	}
//	//打印下三角
//	for (int i = 0; i < 2; i++)
//	{
//		//打印空格
//		for (int j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		//打印字符
//		for (int k = 0; k < 3-i*2; k++)
//		{
//			printf("%c", c);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//输入一个字符，输出该字符相应的ASCII码。
//#include <stdio.h>
//int main(void)
//{
//	char c = getchar();
//	printf("%d", c);
//	return 0;
//}

//将浮点数转换为整数类型，要求四舍五入。
//#include <stdio.h>
//int main(void)
//{
//	double a = 0;
//	scanf("%lf", &a);
//	//正数情况下
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

//输入3科成绩，然后把三科成绩输出，成绩为整数形式。
//#include <stdio.h>
//int main(void)
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("score1=%d,score2=%d,score3=%d", a, b, c);
//	return 0;
//}

//依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，
//在屏幕上输出该学生的学号，3科成绩（注：输出成绩时需进行四舍五入且保留2位小数）。
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
//	// 输入学号
//	unsigned long long int a;
//	double b, c, d;
//	scanf("%lld;%lf,%lf,%lf", &a, &b, &c, &d);
//	printf("The each subject score of No. %lld is %.2lf, %.2lf, %.2lf.", a, siwu(b), siwu(c), siwu(d));
//
//	return 0;
//}

//描述
//输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。

//数据范围：年份满足1990≤y≤2015 ，月份满足1≤m≤12  ，日满足1≤d≤30
//输入描述：
//输入只有一行，出生日期，包括年月日，年月日之间的数字没有分隔符。
//输出描述：
//三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。输出时如果月份或天数为1位数，需要在1位数前面补0。
//#include <stdio.h>
//int main()
//{
//	int bore = 0;
//	scanf("%8d",&bore);
//	while (getchar() != '\n');//
//	//前四位是年份,两位是月份,两位是日
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
  输入两个整数，范围-2^31 ~ 2^31-1，交换两个数并输出。
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
	输入大写英文字母, 输出小写英文字母
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
   给你一个十六进制数,打印一个十进制数,限制15位字宽
*/
//#include <stdio.h>
//int main(void)
//{
//	int a = 0xABCDEF;
//	printf("%15d", a);
//	return 0;
//}

/*
	请输出十进制整数1234对应的八进制和十六进制。
*/
//#include <stdio.h>
//int main(void)
//{
//	int a = 1234;
//	printf("%#o %#X", a, a);
//	return 0;
//}

/*
	从键盘读入一个字符，一个整数，一个单精度浮点数，按顺序输出它们，并用空格分隔，浮点数保留 6 位小数。
	按顺序输出字符、整数、单精度浮点数，用空格分隔，浮点数保留 6 位小数
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