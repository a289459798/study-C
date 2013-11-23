/*
 * 问题：编写itob(n, s, b),将整数n转换成对应的b进制，存到字符串s中
 */
#include <stdio.h>
void itob(int n, char s[], int b);
void reverse2(char *s, char *s2);
int main(void){
	char s[64];
	int n = 10;
	itob(n, s, 16);
	printf("%s\n", s);
	return 0;
}

void itob(int n, char s[], int b)
{
	int i = 0, t;
	char s2[64];
	do{
		t = n % b;
		s2[i++] = t >= 10 ? (t-10) + 'A' : t + '0';
		n = n / b;
	}while(n != 0);
	s2[i] = '\0';
	reverse2(s2, s);
}

void reverse2(char *s, char *s2)
{
	while(*s)
		s++;
	s--;
	while(*s2++ = *s--);
	*s = '\0';
}
