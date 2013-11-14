/*
 * 问题：获取各数据类型的取值范围
 * 需要调用limits.h文件
 */
#include <stdio.h>
#include <limits.h>
int main(void)
{
	printf("Signed Char min :%d\n", SCHAR_MIN);
	printf("Signed Char max :%d\n", SCHAR_MAX);
	printf("Unsigned Char max :%d\n", UCHAR_MAX);
	printf("Signed int min :%d\n", INT_MIN);
	printf("Signed int max :%d\n", INT_MAX);
	printf("Unsigned int max :%d\n", UINT_MAX);
	printf("Signed short min :%d\n", SHRT_MIN);
	printf("Signed short max :%d\n", SHRT_MAX);
	printf("Unsigned short max :%d\n", USHRT_MAX);
	printf("Signed log min :%d\n", LONG_MIN);
	printf("Signed log max :%d\n", LONG_MAX);
	printf("Unsigned log max :%d\n", ULONG_MAX);
	return 0;
}
