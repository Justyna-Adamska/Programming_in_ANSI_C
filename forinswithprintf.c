
#include <stdio.h>

/*zestawienie temperatur Fahrenheita-Celsiuszaz dodatkowymi naglowkami*/

int main ()

{
	int fahr;
	int a;
	for (fahr=0, a=1; fahr<=300; fahr=fahr+20, a=a+1)
	printf("Iteracja %d\n%3d %6.1f\n",a, fahr, (5.0/9.0)*(fahr-32));


 

return 0;
}
