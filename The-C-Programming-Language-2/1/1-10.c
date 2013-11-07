/*
 * 问题：将用户输入的制表替换成\t，换行替换成\n，反斜杠替换成\\
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	char c;
	while((c = getchar()) != EOF){
		if(c == '\t')
			printf("\\t");		/*注意：有些人可能每次输出麻烦，会都先赋值给c最后统一输出，但这样是错的，因为c定义的时候是字符，不是字符串*/
		else if (c == '\n')
			printf("\\n");
		else if(c == '\\')		
			printf("\\\\");		/*注意\==\\*/
		else
			printf("%c", c);
	}
	return 0;
}
