/*
 * 问题：用指针编写strcat(s, t)函数，将字符串t添加到s结尾处
 */
#include <stdio.h>
void strcat2(char *s, char *t);
int main(void)
{
	char s[100] = "12345";
	char t[] = "abcde";
	strcat2(s, t);
	printf("%s\n", s);
	return 0;
}

void strcat2(char *s, char *t)
{
	while(*s++);
	s--;
	while(*s++ = *t++);
}
