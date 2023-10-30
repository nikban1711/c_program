#include <stdio.h>

int main()
{
    float temperature_in_celsius;

    printf("the temperature in celsius is :\n", temperature_in_celsius);
    scanf("%f", &temperature_in_celsius);

    float temperature_in_fahrenheit = (temperature_in_celsius * 9 / 5) + 32;

    printf("temperature in fahrenheit is %f", temperature_in_fahrenheit);
    return 0;
}
