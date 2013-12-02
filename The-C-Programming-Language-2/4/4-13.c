/*
 * 问题：用递归的方式编写reverse函数
 */
#include <stdio.h>

void reverse2(char s[]);
int main(void)
{
	char s[] = "sdfkjhsdfkhsdkjfh";
	reverse2(s);
	printf("%s\n", s);
	return 0;
}

void reverse2(char s[])
{
	static int i = 0;
	static int j = 0;
	static int len = 0;
	int t;
	if(j == 0){
		while(s[len++]);
		len--;
		j = len;
		j--;
	}
	if(i < j){
		t = s[i];
		s[i] = s[j];
		s[j] = t;
		j--;
		i++;
		reverse2(s);

	}
	s[len] = '\0';

}
