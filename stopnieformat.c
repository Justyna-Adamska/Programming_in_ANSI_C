#include <stdio.h>

/* wypisz zestawienie temperatur Fahrenheita-Celsiusza dla f = 0, 20, ..., 300*/
int
main()

{
        int fahr, celsius;
        int lower, upper, step;

        lower = 0; /* dolna granica temperatur */
        upper = 300;/* górna granica*/
        step = 20; /* rozmiar kroku*/

        fahr = lower;
        while (fahr<=upper) {
                celsius = 5*(fahr-32)/9;
                printf("%3d\t%6d\n", fahr, celsius);
                fahr = fahr + step;

        }
        return 0;
}

