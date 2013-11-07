/*
 * 问题：打印EOF的值
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	//因为EOF在stdio.h中定义了该常量
	printf("EOF:%d\n", EOF);
	return 0;
}
