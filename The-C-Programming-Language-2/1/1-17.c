/*
 * 问题：将字符超过80的行打印出来
 */
#include <stdio.h>
#define MAXLINE 1000
#define MAXLENGTH 80
int getline2(char line[], int maxline);
int main(int argc, char *argv[])
{
	int len;
	char line[MAXLINE];
	if(len = getline2(line, MAXLINE) > MAXLENGTH){
		printf("%s", line);
	}
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
