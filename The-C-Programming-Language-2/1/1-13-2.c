/*
 * 问题：打印输入的字串中单词长度的竖向直方图
 * 
 * 同上，本题也不考虑所输入的是数字还是字母，此题我们将用到数组，将不同长度的单词存到对应的计数器当中，为防止数组越界，我们需要定义一个允许的最大单词长度
 */
#include <stdio.h>
#define MAXLENGTH 15
#define OUT 0
#define IN 1
int main(int argc, char *argv[])
{
	int i, j, arr[MAXLENGTH],	//定义数组并申请空间，用于不同长度的单词计数器
		state = OUT,			//跟教程一样，用于判断此时是在单词里面还是外面
		maxCount = 0,			//用于记录最大个数
		count = 0;				//用于对每个单词的计数
	char c,
		map = '#';				//用于显示直方图
	for(i=0; i<MAXLENGTH; i++){
		arr[i] = 0;				//将数组的所有元素初始化
	}

	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\t' || c == '\n'){	//此时表示前一个单词的长度计算完成
			state = OUT;
			if(count >= MAXLENGTH){				//对于大于指定长度的单词通通记录到允许的最大长度计数中
				arr[MAXLENGTH-1]++;
				if(maxCount < arr[MAXLENGTH-1])
					maxCount = arr[MAXLENGTH-1];
			}
			else if(count > 0){
				arr[count]++;
				if(maxCount < arr[count])
					maxCount = arr[count];		//记录最大值
			}
			count = 0;							//对单词计数器清零
		}
		else if(state == OUT){
			state = IN;
			count++;
		}
		else
			count++;
	}
	for(j = maxCount; j >= 0; j--){

		for(i=0; i<MAXLENGTH; i++){
			if(arr[i] > 0){
				if(j > 0){

					if(arr[i] >= j)
						printf("        %c        ", map);
					else
						printf("                 ");
				}
				else
					printf("单词长度%2d,个数%d  ", i,arr[i] );
			}
		}
		printf("\n");
	}
	return 0;
}
