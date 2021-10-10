#include <stdio.h>
#include "Func.h"


void menu(void);

void menu(void) {
    printf("1. Zadanie 1 summ(int n)\n");
    printf("2. Zadanie 2 summ2(double eps)\n");
    printf("3. Zadanie 3 print(int n, int k)\n");
    printf("4. Zadanie 4 findFirstElement(double eps)\n");
    printf("5. Zadanie 5 findFirstNegativeElement(double eps)\n");
    printf("6. Vihod\n");
}

int main(void)
{
    int n, k, p;
    double eps;
    do {
        menu();
        printf("vvedite nomer zadaniya\n");
        scanf_s("%d", &p);
        system("cls");
        switch (p) {
        case 1:
            printf("vvedite n\n");
            scanf_s("%d", &n);
            printf("sum = %lf\n", sum(n));
            break;
        case 2:
            printf("vvedite eps\n");
            scanf_s("%lf", &eps);
            printf("summ2 = %lf\n", summ2(eps));
            break;
        case 3:
            printf("vvedite n i k\n");
            scanf_s("%d", &n);
            scanf_s("%d", &k);
            print(n, k);
            break;
        case 4:
            printf("vvedite eps\n");
            scanf_s("%lf", &eps);
            printf("nomer pervogo chlena s tocnhostiu = %d\n", findFirstElement(eps));
            break;
        case 5:
            printf("vvedite eps\n");
            scanf_s("%lf", &eps);
            printf("nomer pervogo otricatelnogo chlena s tocnhostiu =  %d\n", findFirstNegativeElement(eps));
            break;
        case 6:
            system("cls");
            p = 7;
            break;
        default:
            printf("Wrong task");
        }
    } while (p < 7 && p > 0);
    return 0;
}