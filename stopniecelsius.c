#include <stdio.h>

/* wypisz zestawienie temperatur Fahrenheita-Celsiusza dla f = 0, 20, ..., 300*/
/*wersja zmiennopozycyjna (float)*/

        int
main()

{
        float fahr, celsius;
        int lower, upper, step;

        lower = 0; /* dolna granica temperatur */
        upper = 100;/* górna granica*/
        step = 10; /* rozmiar kroku*/

        celsius = lower;
        printf("Temperatury Celsiusza na Fahrenheita\n\n\n\n");

        while (celsius<=upper) {
                fahr = (celsius*9.0/5.0)+32;
                printf("%3.0f\t%6.1f\n", celsius, fahr);
                celsius = celsius + step;

        }
        return 0;
}

