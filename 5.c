#include <stdio.h>

int main()
{
    float temperature_in_fahrenheit;

    printf("the temperature in fahrenheit is :\n", temperature_in_fahrenheit);
    scanf("%f", & temperature_in_fahrenheit);

    float temperature_in_centigrade = (temperature_in_fahrenheit -32) *(5.0/9);

    printf("temperature in centigrade is %f", temperature_in_centigrade);
    return 0;
}
