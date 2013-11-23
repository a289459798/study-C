/*
 * 问题：编写strindex(s, t)函数,返回字符串t在字符串s中最后出现的位置
 */
#include <stdio.h>
int main(void)
{
	char s[] = "12334567345";
	char t[] = "345";
	printf("%d\n", strindex(s, t));
	return 0;
}

int strindex(char s[], char t[])
{
	int pos = -1, i, j, temp;
	for(i = 0; s[i] != '\0'; i++){
		temp = i;
		for(j = 0; t[j] != '\0'; j++){
			if(s[temp++] != t[j])
				break;
		}
		if(t[j] == '\0')
			pos = i;
	}
	return pos;
}
