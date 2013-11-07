/*
 * 问题：修改温度转换程序，使之能在转换表之前打印标题
 * C = (5/9)*(F-32)
 */
#include <stdio.h>
void main(void)
{
	float f, c;
	int lower = 0, step = 20, upper = 300;
	printf("F     C\n");
	for(f = upper; f >= lower; f = f - step){
		c = (5.0/9.0)*(f-32.0);
		printf("%3.0f %6.1f\n", f, c);
	}
}
