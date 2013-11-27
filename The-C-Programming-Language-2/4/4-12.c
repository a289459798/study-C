/*
 * 问题：用递归的方式编写itoa函数
 */
#include <stdio.h>
int main()
{
	void atoi2(int n, char s[]);
	int n = 106;
	char s[100];
	atoi2(n, s);
	printf("%s\n", s);
	return 0;
}

void atoi2(int n, char s[])
{
	static  int i;
	if(n < 0)
	{
		i = 0;
		n = -n;
		s[i++] = '-';
	}
	if(n / 10)
		atoi2(n / 10, s);
	s[i++] = n % 10 + '0';
	s[i] = '\0';
}
