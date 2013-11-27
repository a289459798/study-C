/*
 * 问题：让逆波兰运算中支持%运算，注意考虑负数的情况
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>	//主要用于fmod 函数
#include <float.h>
#define MAXOP 100	//最大输入
#define MAXVAL 100	//栈最大空间
#define MAXBUF 100	//存放当前字符
#define NUMBER '0'
int op = 0, bufp = 0;
double val[MAXVAL];
char buf[MAXBUF];
void push(double f);
void ungetch(int c);
double pop(void);
int main(void)
{
	int type;
	double op2;
	char s[MAXVAL];
	while((type = getop(s)) != EOF){
		switch(type){
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '*':
				push(pop() * pop());
				break;
			case '/':
				op2 = pop();
				if(op2 != 0.0)
					push(pop() / op2);
				else
					printf("被除数不能为空!\n");
			case '%':
				op2 = pop();
				if(op2 != 0.0)
					push(fmod(pop(), op2));	//注意，此时这里不能直接用%运算，因为%不能对double类型进行运算，否则编译失败,如果在gcc编译的时候提示未定义fmod函数，请在gcc编译的时候加-lm 参数
				else
					printf("被求余不能为空!\n");
				break;
			case '\n':
				printf("结果：%.8g\n", pop());
			default:
				break;
				
		}
	}
	return 0;
}

//压栈
void push(double f)
{
	if(op < MAXVAL)
		val[op++] = f;
	else
		printf("超出最大值!\n");
}
//出栈
double pop(void)
{
	if(op > 0)
		return val[--op];
	else
		printf("栈空!\n");
}
//判断字符类型
int getop(char s[])
{
	int i, c;
	//获取第一个非空字符
	while((s[0] = c = getch()) == ' ' || c == '\t');
	s[1] = '\0';
	if(!isdigit(c) && c != '.')
		return c;	//c不是数
	//如果是数，获取整个数字
	i = 0;
	if(isdigit(c))
		while(isdigit(s[++i] = c = getch()));
	if(c == '.')
		while(isdigit(s[++i] = c = getch()));
	s[i] = '\0';
	if(c != EOF)	//将这个字符存起来，不然在使用getchar时，就获取不到这个字符了
		ungetch(c);
	return NUMBER;
}

int getch(void)
{
	return bufp > 0 ? buf[--bufp] : getchar();
}
void ungetch(int c)
{
	if(bufp > MAXBUF)
		printf("超出最大值!\n");
	buf[bufp++] = c;
}
