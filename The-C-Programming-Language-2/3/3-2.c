/*
 * 问题：编写函数escape(s, t),将字符串t拷贝到s中，并将字符串中的换行与制表换成对应的\n与\t，用switch实现，并编写对应的还原函数
 */
#include <stdio.h>
void escape2(char s[], char t[]);
void unescape2(char s[], char t[]);
int main(void)
{
	char s[100] = "123456789";
	char t[] = "sdf	fgfg	fgfg";
	escape2(s, t);
	printf("%s\n", s);
	char s2[100] = "123456789";
	char t2[] = "sdf	fgfg	fgfg";
	unescape2(s2, t2);
	printf("%s\n", s2);
	return 0;
}

void escape2(char s[], char t[])
{
	int i = 0, j = 0;
	while(s[i] != '\0')
		i++;
	while(t[j] != '\0'){
		switch(t[j]){
			case '\n':
				s[i++] = '\\';		//这里不能写成\\n 因为这里是2个字符，所以要分开
				s[i++] = 'n';
				break;
			case '\t':
				s[i++] = '\\';
				s[i++] = 't';
				break;
			default:
				s[i++] = t[j];
				break;
		}
		j++;
	}
	s[i] = '\0';
}

void unescape2(char s[], char t[])
{
	int i = 0, j = 0;
	while(s[i] != '\0')
		i++;
	while(t[j] != '\0'){
		if(t[j] == '\\'){
			switch(s[++j]){
				case 'n':
					s[i++] = '\n';
					break;
				case 't':
					s[i++] = '\t';
					break;
				default:
					s[i++] = '\\';
					s[i++] = s[j];
			}
		}
		else
			s[i++] = t[j++];
	}
	s[i] = '\0';
}
