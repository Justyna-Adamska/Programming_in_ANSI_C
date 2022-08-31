#include <stdio.h>

/* program echoing every word written in 1 line, each into a separate line */

int main ()

{

	int c;

	

	c=getchar();

	while (c != EOF) {

	if (c==' '||c=='\t'||c=='\n')
		printf("\n");

	
	else
		putchar (c);
	c=getchar();

	}
return 0;
}
