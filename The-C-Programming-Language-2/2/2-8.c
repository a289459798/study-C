/*
 * 问题：编写函数righthot,将x向右循环移动n位，返回结果
 * 分析：向右移动后，将右边的n位移动到最左边
 */
#include <stdio.h>
int main(void)
{
	int x = 149, n = 1;
	printf("%d\n", righthot(x, n));
	return 0;
}

int righthot(int x, int n)
{
	int t, len;	//用于存放x向右移被填充的值，即最右边的n位
	len = getLength(x);
	printf("%d\n", len);
	t = ~0;	//1...1
	t = t << n;	//1...10..0
	t = ~t;	//0...01...1
	t = x & t;	//0...0x...x

	x = x >> n;	//0...0x...x
	t = t << (len - n); //0...0x...x0...0
	return x | t;
}

int getLength(int x)
{
	int i;
	for(i=0; x > 0; i++)
		x = x >> 1;
	return i;
}
