/*
 * 问题：写一个温度转华氏的程序
 * C = (5/9)*(F-32)  =>  F = C*9/5+32
 */
#include <stdio.h>
void main(void)
{
	int lower = 0, upper = 300, step = 20;
	float c = 0, f;
	printf("F    C\n");
	while(c <= upper){
		f = c*9.0/5.0+32.0;
		printf("%3.0f %6.1f\n", f, c);
		c = c + step;
	}
}
