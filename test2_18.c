#include <stdio.h>

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

int main()
{
int i = 0,a=0,b=2,c =3,d=4;
i = a++ && ++b && d++;
//i = a++||++b||d++;
printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
return 0;
}