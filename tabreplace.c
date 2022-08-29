#include <stdio.h>

/* echo program that additionally replaces every tab with \t sign and backspace with \b sign  and every backslash with two slashes (\\)*/

int main ()

{

	int c;

	

	c=getchar();

	while (c != EOF) {

	if (c=='\t')
		printf("\\t");

	else if (c=='\b')
		printf("\\b");

	else if (c=='\\')
		printf("\\\\");
	else
		putchar (c);
	c=getchar();

	}
return 0;
}
