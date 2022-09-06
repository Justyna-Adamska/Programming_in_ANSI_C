#include <stdio.h>

/*program that counts digits(occurrence of each of the digits), white space, other*/

int main ()

{

	int c, i, nwhite, nother;

	int ndigit[10];

	nwhite = nother = 0;

	for (i=0; i<10; ++i)/* initializes elements of an array*/
	     ndigit[i]=0;


	while ((c=getchar()) != EOF)

	  if (c>='0' && c<'9')
		++ndigit[c-'0'];
	  else if (c ==' ' || c =='\n' || c =='\t')
		++nwhite;
          else
		++nother;

	printf("cyfry=");
	
	for (i=0; i<10; ++i)/*prints an array*/
		printf(" %d", ndigit[i]);
	printf(", białe znaki = %d, inne = %d\n", nwhite, nother);
return 0;
}
