/*
 * 问题：将一段较长的输入行拆成多行，拆行的位置在第n列之前的最后一个非空字符之后
 */
#include <stdio.h>
#define N 5
int main(void)
{
	char c;
	int pos = 1,	//记录当前字符的位置
		pos2 = 0;	//记录最后一个不为空的位置
	while((c = getchar()) != EOF){
		if(pos != N){	//还没到换行位置
			if(c != ' '){
				if(pos2 != pos-1)		//如果之前位置与最后一个不为空的位置不一样，则证明之间有空格出现，需要补上
					printf(" ");
				printf("%c", c);
				pos2 = pos;		//将最后一个不为空指向当前
			}
			pos++;		//移向下一个字符
		}
		else{
			while(pos - ++pos2 > 0)
				printf(" ");		//补以前的空格
			if(c != ' '){		//最后一个不为空
				printf("%c", c);
				printf("\n");
			}else{
				printf("\n");
				printf(" ");
			}
			pos = 1;
			pos2 = 0;
		}
	}
	return 0;
}
