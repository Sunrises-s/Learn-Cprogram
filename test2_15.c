// //接收一个无符号整型值, 按照顺序打印它的每一位. 如输入123,输入1 2 3
// #include <stdio.h>

// void print(unsigned int n){
// 	if (n > 9)
// 	{
// 		print(n / 10);
// 	}
// 	printf("%d ", n % 10);
// }

// int main(void)
// {
// 	unsigned int num = 0;
// 	scanf("%u", &num);
// 	print(num);

// 	return 0;
// }

/**************************************************************************/
// 编写函数不允许创建临时变量，求字符串的长度
// #include <stdio.h>

// int My_strlen(char *p1){
// 	if (*p1 == '\0') return 0;
// 	else return 1 + My_strlen(p1+1);
// }

// int main(int argc, char const *argv[])
// {
// 	char *p = "hello";
// 	int len = My_strlen(p);
// 	printf("%d", len);
// 	getchar();
// 	return 0;
// }

/**************************************************************************/
// 求n的阶乘
// #include <stdio.h>

// int jc(unsigned int n)
// {
// 	if (n>1){
// 		return n * jc(n-1);
// 	}
// 	else return 1;
// }

// int main(void)
// {
// 	unsigned int num = 3;
// 	printf("%d", jc(num));

// 	return 0;
// }

/*****************************************************/
//求第n个斐波那契数。（不考虑溢出）前两个之和等于第三个数 1 1 2 3 5 8 13 21 34 55
// #include <stdio.h>

// int fid(int n){
// 	int a = 1;
// 	int b = 1;
// 	int c = 1;
	
// 	while(n>2)
// 	{
// 		c = a+b;
// 		a = b;
// 		b = c;
// 		n--;
// 	}
// 	return c;
// }

// int main(void){
// 	int n = 0;
// 	scanf("%d", &n);
// 	printf("%d\n", fid(n));

// 	return 0;
// }

/**************************************************************************/
//汉诺塔问题以及青蛙跳台问题遗留
/**************************************************************************/

#include <stdio.h>
int main(void)
{
	
	
	return 0;
}




