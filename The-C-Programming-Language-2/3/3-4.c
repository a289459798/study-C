/*
 * 问题：分析上面的例子不能处理最大负数，并修改该函数，让他能正确输出结果
 *
 * 分析：在进行 n = -n 这步操作的时候，由于补码能表示的最大正数是2^(n-1) - 1 ，所以当n等于-2^(n-1)的时候，进行-n操作，结果不对
 */

#include <stdio.h>
void itoa2(int n, char s[]);
int main(void)
{
	return 0;
}

void itoa2(int n, chat s[])
{
	
}
