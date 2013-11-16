/*
 * 问题：编写函数invert，将x的第p位开始的n位进行求反
 * 注：p是从右往左，0开始
 * 即x=1001001,p=3,n=3 得到：1000111
 * 只需要组装一个数将与x需替换的位弄成1，其他位为0，在与x进行异或(xor)运算
 */
#include <stdio.h>
int main(void)
{
	int x = 73;	//1001001
	int p=3, n=3;
	printf("%d\n", invert(x, p, n));
	return 0;
}

int invert(int x, int p, int n)
{
	int t;	//用于组装一个数
	t = ~0;	//所有位全部为1,1...1
	t = t << n;	//得到1...10...0
	t = ~t;	//得到0...01...1
	t = t << (p+1-n);	//移动到与x对应位置,0...01...10...0
	return x ^ t;
}
