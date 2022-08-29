#include <stdio.h>

/* program rewriting input to output and replacing every character with additional space sign*/

int main ()

{

	int c;

	c=getchar();

	while (c != EOF) {

	putchar(c);
	printf(" ");
	c=getchar();

	}
return 0;
}
