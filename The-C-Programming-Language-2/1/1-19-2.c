/*
 * 问题：编写一个reverse（s）函数，将用户输入行颠倒输出
 */
#include <stdio.h>
#define MAXLINE 1000
void reverse(char s[]);
int getline2(char line[], int maxline);
int main(int argc, char *argv[])
{
	char s[MAXLINE];
	int len;
	if((len = getline2(s, MAXLINE)) > 0){
		reverse(s);
		printf("%s", s);

	}
}

int getline2(char line[], int maxline)
{
	char c;
	int i;
	for(i = 0; i<maxline && (c = getchar()) != EOF && c!='\n'; i++)
		line[i] = c;
	if(c == '\n')
		line[i++] = c;
	line[i] = '\0';
	return i;
}

void reverse(char s[])
{
	char t;
	int i = 0, j;
	while(s[i] != '\0')
		i++;
	i--;									//此时i指向\0，需要向前移一位
	if(s[i] == '\n')
		i--;								//如果最后一个是\n，换行符，需要向前移动一位
	for(j=0; j<i; j++, i--){				//实现两两交换
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
