#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, D;

    printf("Masukkan nilai a: ");
    scanf("%lf", &a);

    printf("Masukkan nilai b: ");
    scanf("%lf", &b);

    printf("Masukkan nilai c: ");
    scanf("%lf", &c);

    D = b * b - 4 * a * c;

    if (D < 0)
    {
        printf("Akar-akar persamaan kuadrat imajiner.\n");
    }
    else if (D > 0)
    {
        printf("Akar-akar persamaan kuadrat riil dan berbeda.\n");
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("Akar pertama = %.2lf\n", x1);
        printf("Akar kedua = %.2lf\n", x2);
    }
    else if (D == 0){
        printf("Akar-akar persamaan kuadrat kembar.\n");
        printf("Akar persamaan kuadrat = %.2lf\n", -b / (2 * a));
    }

        return 0;
    }
