/*
 * 问题：将温度转换程序用函数的方式实现
 */
#include <stdio.h>
float ftoc(float f);
void main(void)
{
	float f = 0, c;
	int lower = 0, step = 20, upper = 300;
	printf("f c\n");
	while(f <= upper){
		c = ftoc(f);
		printf("%3.0f %6.1f\n", f, c);
		f = f + step;
	}
}

float ftoc(float f)
{
	return (5.0/9.0)*(f-32.0);
}
