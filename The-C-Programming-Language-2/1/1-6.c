/*
 * 问题：验证表达式getchat() != EOF 是0还是1
 * 有人跟我说之前的代码不符合c99标准，小弟在这里say sorry，小弟也是初学者，大家多多包含
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	int result;
	while(result = (getchar() != EOF))
		printf("getchar() != EOF ? %d\n", result);
	printf("getchar() != EOF ? %d\n", result);
	return 0;
}
