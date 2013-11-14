/*
 * 问题：将输入中的制表符替换成数目相同的空白符，每隔n列有个制表符的停止位
 */
#include <stdio.h>
#define TABSTOP 5
void detab(void);
int main(void)
{
	detab();
	return 0;
}

void detab(void)
{
	int pos = 1, c, t;
	while((c = getchar()) != EOF){
		if(c == '\t'){
			t = TABSTOP - (pos-1) % TABSTOP;
			while(t-- > 0)
				printf(" ");
			pos++;
		}
		else if(c == '\n'){
			pos = 1;
			printf("%c", c);
		}
		else{
			pos++;
			printf("%c", c);
		}
	}
}
