#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define HASHSIZE 101
struct tlist{
	struct tlist *next;
	char *name;
	char *defn;
} *hashtab[HASHSIZE];

int main(void)
{
	return 0;
}

//hash
unsigned hash(char *s)
{
	unsigned hashval;
	for(hashval = 0; *s != '\0'; s++){
		hashval = *s + 31 * hashval;
	}
	return hashval % HASHSIZE;
}

//hash查找是否已经定义
struct tlist *lookup(char *s)
{
	struct tlist *np;
	for(np = hashtab[hash(s)]; np != NULL; np = np->next){
		if(strcmp(s, np->name) == 0){
			return np;
		}
	}
	return NULL;
}

struct tlist *install(char *name, char *defn)
{
	struct tlist *np;
	//判断是否存在
	if((np = lookup(name)) == NULL){
		np = (struct tlist *)malloc(sizeof(*np));
		//给name分配内存
		np->name = (char *)malloc(sizeof(name) + 1);
		//如果分配内存失败
		if(np == NULL || np->name == NULL)
			return NULL;
		np->name = name;
		np->next = hashtab[hash(name)];
		hashtab[hash(name)] = np;
	}
	else
		free((void *)np->defn);
}
