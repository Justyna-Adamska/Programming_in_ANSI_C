 #include <stdio.h>

/*zlicz wiersze wejściowe */

int main ()

{

	int c, nl, ns, nt;

	nl=0;
	ns=0;
	nt=0;

	while ((c = getchar()) !=EOF) {

	if (c=='\n')

		++nl;
	if (c==' ')

		++ns;

	if (c=='\t')

		++nt;
	}
	printf("liczba wierszy:%d\nliczba spacji: %d\n liczba tabulacji: %d\n", nl,ns,nt);

	return 0;

}
