#include <stdio.h>

/*program calculating function y=ax+b*/


int linaxb (int m, int n, int o);

int main (){

int result = linaxb(1,2,3);
	printf ("%d\n", result);
}


int linaxb (int a, int x, int b){

	int wynik;

	wynik = (a*x)+b;

return wynik;

}
