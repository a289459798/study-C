/*
 * 问题：编写any函数，查找s2中的任意字符在s1第一次出现的位置
 */
#include <stdio.h>
int main(void)
{
	printf("%d\n", any("123456", "3456"));
	return 0;
}

int any(char s1[], char s2[])
{
	int i, j;
	for(i = 0; s1[i] != '\0'; i++){
		for(j = 0; s2[j] != '\0'; j++){
			if(s1[i] == s2[j])
				return i;
		}
	}
	return -1;
}
