/*
 * 问题：编写一个reverse（s）函数，将字符串s倒序
 */
#include <stdio.h>
void reverse(char s[]);
int main(int argc, char *argv[])
{
	char s[] = "0123456789";
	reverse(s);
	printf("%s\n", s);
}

void reverse(char s[])
{
	char t;
	int i = 0, j;
	while(s[i] != '\0')
		i++;
	i--;									//此时i指向\0，需要向前移一位
	for(j=0; j<i; j++, i--){				//实现两两交换
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
