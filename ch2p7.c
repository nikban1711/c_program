#include <stdio.h>
#include <math.h>

int main()
{
    double angle;
    double a, b, c, d, e, f;
    printf("enter angle\n");
    scanf("%lf", &angle);
    a = sin(angle);
    b = cos(angle);
    c = tan(angle);

    printf("sin(%0.2lf)=%0.2lf\n", angle, a);

    printf("cos(%0.2lf)=%0.2lf\n", angle, b);

    printf("tan(%0.2lf)=%0.2lf\n", angle, c);

    printf("cosec(%0.2lf)=%0.2lf\n", angle, 1 / a);

    printf("sec(%0.2lf)=%0.2lf\n", angle, 1 / b);

    printf("cot(%0.2lf)=%0.2lf\n", angle, 1 / c);

    return 0;
}