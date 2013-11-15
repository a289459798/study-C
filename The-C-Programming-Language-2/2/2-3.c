/*
 * 问题：编写函数htoi把16进制数字组成的字符串转换成等价的数值
 */
#include <stdio.h>
int main(void)
{
	printf("%d\n", htoi("0x25"));
	return 0;
}

int htoi(char s[])
{
	int n = 0, i = 0;
	if(s[i] == '0'){
		i++;
		if(s[i] == 'x' || s[i] == 'X')
			i++;
	}
	while(1){
		if(s[i] >= '0' && s[i] <= '9')
			n = 16 * n + s[i] - '0';
		else if(s[i] >= 'a' && s[i] <= 'f')
			n = 16 * n + s[i] - 'a' + 10;
		else if(s[i] >= 'A' && s[i] <= 'F')
			n = 16 * n + s[i] - 'A' + 10;
		else
			break;
		i++;
	}
	return n;
}
