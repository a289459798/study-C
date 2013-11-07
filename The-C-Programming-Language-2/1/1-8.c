/*
 * 问题：统计空格、制表符、换行符的个数
 * 解析：空格是' ',制表符是'\t',换行符是'\n'
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	int bCount = 0, tCount = 0, nCount = 0;
	char c;
	while((c = getchar()) != EOF){
		if(c == ' ')
			bCount++;
		else if(c == '\t')
			tCount++;
		else if(c == '\n')
			nCount++;
	}
	printf("bCount:%d\n", bCount);
	printf("tCount:%d\n", tCount);
	printf("nCount:%d\n", nCount);
}
