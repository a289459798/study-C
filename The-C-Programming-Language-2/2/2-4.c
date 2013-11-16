/*
 * 问题：重写squeeze函数，把字串s1与字串s2相匹配的项都删除，类似求差集
 */
#include <stdio.h>
void squeeze(char s1[], char s2[]);
int main(void)
{
	char s1[] = "123456";
	char s2[] = "345678";
	squeeze(s1, s2);
	printf("%s\n", s1);
	return 0;
}

void squeeze(char s1[], char s2[])
{
	int i, j, k = 0, flag = 1;
	for(i = 0; s1[i] != '\0'; i++){
		for(j = 0; s2[j] != '\0'; j++){
			if(s1[i] == s2[j])
				flag = 0;
		}
		if(flag == 1)
			s1[k++] = s1[i];
		flag = 1;
	}
	s1[k] = '\0';
}
