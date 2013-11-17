/*
 * 问题：x & (x-1) 用于把最后的1去掉，分析一下原因。并用该方法改写bitcount函数，使执行效率更高
 *
 * 原因分析：在求'与'的时候，相同位真与真才只真，当一个数-1后，与他最后一个1对应的数必定变成0，所以在'与'运算的时候，就变成了0
 */
#include <stdio.h>
int main(void)
{
	int x = 67; //1000011
	printf("%d\n", bitcount(x));
	return 0;
}

int bitcount(unsigned x)
{
	int count = 0;
	while(x != 0){
		x = x & (x-1);
		count++;
	}
	return count;
}
