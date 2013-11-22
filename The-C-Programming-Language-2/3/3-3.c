/*
 * 问题：编写函数expand，将诸如a-z一类，展开为abcdefg...xyz
 */
#include <stdio.h>
void expand(char s1[], char s2[]);
int main(void)
{
	char s1[] = "-a-z0-9z-a-";
	char s2[100];
	expand(s1, s2);
	printf("%s\n", s2);
	return 0;
}

void expand(char s1[], char s2[])
{
	int i, t, j = 0;
	for(i = 0; s1[i] != '\0'; i++){
		if(s1[i+1] == '-' && s1[i+2]>s1[i] && i != 0 && s1[i+2] != '\0'){
			t = s1[i];
			while(t < s1[i+2]){
				s2[j++] = t++;
			}
			i++;
		}
		else
			s2[j++] = s1[i];
	}
	s2[j] = '\0';
}
