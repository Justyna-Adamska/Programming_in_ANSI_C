#include <stdio.h>

int main()

{
/*zlicz znaki wejściowe, wersja 1*/

	long nc;
	
	nc=0;
	while(getchar() !=EOF){
	   ++nc;
	printf("%ld\n", nc);
	}
return 0;
}

