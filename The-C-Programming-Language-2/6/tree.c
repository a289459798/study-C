#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAXWORD 100
struct tnode{
	char * word;
	int count;
	struct tnode *left;
	struct tnode *right;
} *tree;
char * getword();
struct tnode *addtree(struct tnode *p, char *w);
void treeprint(struct tnode *p);
int main(void)
{
	char *word = NULL, *t;
	int lim;
	word = (char *)malloc(MAXWORD);
	f:while(word = getword()){
		t = word;
		lim = MAXWORD;
		for(; --lim; word++){
			if(*word == EOF)
				goto f2;
			else if(!isalpha(*word) && *word != '\0')
				goto f;
		}
		//进行树查找
		tree = addtree(tree, t);
	}
	f2:treeprint(tree);
	free(word);
	return 0;
}

char * getword()
{
	int c, lim = MAXWORD;
	char *w = NULL;
	w = (char *)malloc(lim);
	while(isspace(c = getchar()));	//忽略前面的空格
	for(; --lim > 0; w++){
		if(isspace(c) || c == EOF){
			break;
		}
		*w = c;
		c = getchar();
	}
	if(c == EOF)
		*w++ = EOF;
	*w = '\0';
	while(*(--w));
	w++;
	return w;
}


struct tnode *addtree(struct tnode *p, char *w)
{
	int c;
	if(p == NULL){	//空树
		p = (struct tnode *) malloc(sizeof(struct tnode));	//初始化
		p->word = (char *) malloc(strlen(w)+1); /* +1 for '\0' */
		p->word = w;
		p->count = 1;
		p->left = p->right = NULL;	//初始化左右子树
	}else if((c = strcmp(p->word, w)) == 0){	//等于根节点
		p->count++;
	}else if(c < 0){
		p->left = addtree(p->left, w);	//查找左子树
	}else{
		p->right = addtree(p->right, w);	//查找右子树
	}
	return p;
}

void treeprint(struct tnode *p)
{
	if(p != NULL){
		treeprint(p->left);
		printf("%4d %s\n", p->count, p->word);
		treeprint(p->right);
	}
}
