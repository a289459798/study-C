/*
 * 问题：将用户输入的字串输出来，并将多个连续的空格替换成一个
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	char c;
	char c2;	//记录上一次输入
	while((c = getchar()) != EOF){
		if(c2 != ' ' || c != ' ')
			printf("%c", c);
		c2 = c;
	}
	return 0;
}
