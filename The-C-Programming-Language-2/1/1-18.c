/*
 * 问题：将每个输入行尾部的空格、制表删除，并删除空格行
 * 分析：先将数组下标移到最后一个元素，再往左移，判断是否为空格或制表
 */
#include <stdio.h>
#define MAXLINE 1000
int getline2(char line[], int maxline);
int rtrim(char line[]);
int main(int argc, char *argv[])
{
	int len;
	char line[MAXLINE];
	if((len = getline2(line, MAXLINE)) > 0){
		if(rtrim(line) > 0)
			printf("%s", line);
	}
}

int rtrim(char line[])
{
	int i = 0;
	while(line[i] != '\n')			//移到数组最后
		i++;
	for(--i; i>0; i--){
		if(line[i] != ' ' && line[i] != '\t')	//找到第一个不是空格或制表
			break;
	}
	if(i > 0){
		line[++i] = '\n';						//在最后添加回车
		line[++i] = '\0';						//添加结束符
	}
	return i;
}

int getline2(char line[], int maxline)
{
	int i;
	char c;
	for(i=0; i<maxline && (c = getchar()) != EOF && c != '\n'; i++)
		line[i] = c;
	if(c == '\n')
		line[i++] = c;
	line[i] = '\0';
	return i;
}
