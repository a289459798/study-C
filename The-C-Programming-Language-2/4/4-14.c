/*
 * 问题：定义宏swap(t, x, y)，交换t类型的2个参数
 */
#include <stdio.h>
#define swap(t, x, y){\
	t temp;\
	temp = x;\
	x = y;\
	y = temp;\
}
int main(void)
{
	int x = 1, y = 2;
	swap(int, x, y);
	printf("%d:%d\n", x, y);
	return 0;
}
