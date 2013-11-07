/*
 * 问题：修改温度转换程序，使之能在转换表之前打印标题
 */
#include <stdio.h>
void main(void)
{
	float f = 0, c;
	int lower = 0, step = 20, upper = 300;
	printf("f c\n");
	while(f <= upper){
		c = (5.0/9.0)*(f-32.0);
		printf("%3.0f %6.1f\n", f, c);
		f = f + step;
	}
}
