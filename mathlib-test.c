#include "mathlib.c"

#include <math.h>
#include <stdio.h>
#include <unistd.h> //for getop()
#define OPTIONS "asctl"

int main(int argc, char **argv) {
    int opt = 0;
    while ((opt = getopt(argc, argv, OPTIONS)) != -1) {
        switch (opt) {
        case 'a': //run all tests
            printf("  x            arcSin           Library        Difference\n");
            printf("  -            ------           -------        ----------\n");
            for (double i = -1.0; i < 1.0; i += 0.1) {
                double tmpx = arcSin(i);
                double tmpx2 = asin(i);
                printf(" %7.4lf % 16.8lf % 16.8lf % 16.10lf\n", i, tmpx, tmpx2, tmpx2 - tmpx);
            };
            printf("  x            arcCos           Library        Difference\n");
            printf("  -            ------           -------        ----------\n");
            for (double i = -1.0; i < 1.0; i += 0.1) {
                double tmpx = arcCos(i);
                double tmpx2 = acos(i);
                printf(" %7.4lf % 16.8lf % 16.8lf % 16.10lf\n", i, tmpx, tmpx2, tmpx2 - tmpx);
            };
            printf("  x            arcTan           Library        Difference\n");
            printf("  -            ------           -------        ----------\n");
            for (double i = 1.0; i < 10.0; i += 0.1) {
                double tmpx = arcTan(i);
                double tmpx2 = atan(i);
                printf(" %7.4lf % 16.8lf % 16.8lf % 16.10lf\n", i, tmpx, tmpx2, tmpx2 - tmpx);
            };
            printf("  x            Log              Library        Difference\n");
            printf("  -            ------           -------        ----------\n");
            for (double i = 1.0; i < 10.0; i += 0.1) {
                double tmpx = Log(i);
                double tmpx2 = log(i);
                printf(" %7.4lf % 16.8lf % 16.8lf % 16.10lf\n", i, tmpx, tmpx2, tmpx2 - tmpx);
            };

            break;
        case 's': //arcsin
            printf("  x            arcSin           Library        Difference\n");
            printf("  -            ------           -------        ----------\n");
            for (double i = -1.0; i < 1.0; i += 0.1) {
                double tmpx = arcSin(i);
                double tmpx2 = asin(i);
                printf(" %7.4lf % 16.8lf % 16.8lf % 16.10lf\n", i, tmpx, tmpx2, tmpx2 - tmpx);
            };
            break;
        case 'c': //arcCos
            printf("  x            arcCos           Library        Difference\n");
            printf("  -            ------           -------        ----------\n");
            for (double i = -1.0; i < 1.0; i += 0.1) {
                double tmpx = arcCos(i);
                double tmpx2 = acos(i);
                printf(" %7.4lf % 16.8lf % 16.8lf % 16.10lf\n", i, tmpx, tmpx2, tmpx2 - tmpx);
            };
            break;
        case 't': //arctan
            printf("  x            arcTan           Library        Difference\n");
            printf("  -            ------           -------        ----------\n");
            for (double i = 1.0; i < 10.0; i += 0.1) {
                double tmpx = arcTan(i);
                double tmpx2 = atan(i);
                printf(" %7.4lf % 16.8lf % 16.8lf % 16.10lf\n", i, tmpx, tmpx2, tmpx2 - tmpx);
            };
            break;
        case 'l': //log
            printf("  x            Log              Library        Difference\n");
            printf("  -            ------           -------        ----------\n");
            for (double i = 1.0; i < 10.0; i += 0.1) {
                double tmpx = Log(i);
                double tmpx2 = log(i);
                printf(" %7.4lf % 16.8lf % 16.8lf % 16.10lf\n", i, tmpx, tmpx2, tmpx2 - tmpx);
            };
            break;
        }
    }
    return 0;
}
