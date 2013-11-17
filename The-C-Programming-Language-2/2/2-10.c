/*
 * 问题：用条件表达式代替if..else..，实现lower函数
 */
#include <stdio.h>
void lower2(char s[]);
int main(void)
{
	char s[] = "ADSHFkjhdfkhKHAKSDHKkd";
	lower2(s);
	printf("%s\n", s);
	return 0;
}

void lower2(char s[])
{
	int i;
	for(i = 0; s[i] != '\0'; i++)
		s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? s[i]+32 : s[i];
}
