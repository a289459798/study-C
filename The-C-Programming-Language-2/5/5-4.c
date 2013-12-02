/*
 * 问题：编写strend(s, t)函数，如果t出现在s尾部返回1，否则返回0
 */
#include <stdio.h>
int main(void)
{
	char *s = "489";
	char *t = "489";
	printf("%d\n", strend2(s, t));
	return 0;
}

int strend2(char *s, char *t)
{
	char *c = t;
	while(*s)
		s++;
	while(*t)
		t++;
	while(*s == *t && c != t){
		s--;
		t--;
	}
	if(t == c && *s != '\0')
		return 1;
	return 0;
}
