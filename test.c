#include <stdio.h>
#include <string.h>   //strlen
#include <stdlib.h>

int main(void){
	char ch[2048];
	//scanf("%s",&ch);

	gets(ch);
	size_t length= strlen(ch);
	int k='c'-'1';

	int i;
	for(i=0;i<length;i++){
		ch[i]+=k;
		putchar(ch[i]);
	}
	return 0;
}
