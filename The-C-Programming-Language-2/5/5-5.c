/*
 * 问题：分别编写strncpy、strncat、strncmp函数
 */
#include <stdio.h>
void strncpy2(char *s, char *t, int n);
void strncat2(char *s, char *t, int n);
int main(void)
{
	char *s = "123";
	char *t = "1234567890";
	int n = 3;
	printf("%d\n", strncmp2(s, t, n));
	return 0;
}

void strncpy2(char *s, char *t, int n)
{
	while(*t && n-- > 0)
		*s++ = *t++;
	*s = '\0';
}

void strncat2(char *s, char *t, int n)
{
	while(*s)
		s++;
	while(*t && n-- > 0)
		*s++ = *t++;
	*s = '\0';
}

int strncmp2(char *s, char *t, int n)
{
	while(n-- > 0){
		if(*s != *t)
			return *s - *t;
		s++;
		t++;
	}
	return 0;
}
