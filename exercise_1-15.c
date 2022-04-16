#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float convertToCelcius(float fahr);

/*
 * Rewrite the temperature conversion program
 * of Section 1.2 to use a function for conversion.
 */
int main()
{
    float fahr;
    printf("%-4s\t%-7s\n", "Fahr", "Celcius");
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    {
        printf("%-4.0f\t%-7.1f\n", fahr, convertToCelcius(fahr));
    }
}

float convertToCelcius(float fahr)
{
    return fahr * (9.0 / 5.0) + 32;
}
