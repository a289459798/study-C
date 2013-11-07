/*
 * 问题：将用户输入的制表替换成\t，换行替换成\n，反斜杠替换成\\
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	char c;
	while((c = getchar()) != EOF){
		if(c == '\t')
			printf("\\t");
		else if (c == '\n')
			printf("\\n");
		else if(c == '\\')		
			printf("\\\\");		/*注意\==\\*/
		else
			printf("%c", c);
	}
	return 0;
}
