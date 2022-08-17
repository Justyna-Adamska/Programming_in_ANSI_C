#include <stdio.h>

/* wypisz zestawienie temperatur Fahrenheita-Celsiusza dla f = 0, 20, ..., 300*/
/*wersja zmiennopozycyjna (float)*/
	
	int
main()

{
        float fahr, celsius;
        int lower, upper, step;

        lower = 0; /* dolna granica temperatur */
        upper = 300;/* górna granica*/
        step = 20; /* rozmiar kroku*/

        fahr = lower;
	printf("Temperatury Fahrenheita - Celsiusza\n\n\n\n");

        while (fahr<=upper) {
                celsius = (5.0/9.0)*(fahr-32.0);
                printf("%3.0f\t%6.1f\n", fahr, celsius);
                fahr = fahr + step;

        }
        return 0;
}


