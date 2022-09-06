#include <stdio.h>


int power(int m, int n); /*declaration of function*/

/* test of the power function*/

int main ()

{

	int i;

	for(i=0; i<10; ++i)
		printf("%d %d %d\n", i, power(2,i), power(-3,i));

return 0;

} 

/*power: increase base to the power n; n>=0*/

int power (int base, int n)

{

	int i,p;

	p=1;
	for(i=0; i<n; ++i)
	p=p*base;
return p;
}
