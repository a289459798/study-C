/*
 * 问题：将单词一行一个输出
 * 这里不考虑是否符合单词的规则，将所有空格、制表、换行分开的我们都视为一个单词，就算它是数字
 */
#include <stdio.h>
#define IN  1
#define OUT  0
int main(int argc, char *argv[])
{
	char c, state = OUT;
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\n' || c == '\t'){
			if(state == IN){
				printf("\n");
				state = OUT;
			}
		}
		else if(state == OUT){
			printf("%c", c);
			state = IN;
		}
		else
			printf("%c", c);
	}
	return 0;
}
