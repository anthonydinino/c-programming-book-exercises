#include <stdio.h>

/*
 * Write a program to print a histogram of the frequencies
 * of different characters in its input
 */
#define MAX_CHARACTERS 256

int main()
{
    int c = 0;
    int arr[MAX_CHARACTERS];

    // zero out the array
    for (int i = 0; i < MAX_CHARACTERS; i++)
    {
        arr[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        arr[c]++;
    }

    // draw the histogram
    printf("\n");
    for (int i = 0; i < MAX_CHARACTERS + 1; ++i)
    {
        printf("%-3d| ", i);
        for (int j = 0; j < arr[i]; ++j)
            printf("*");
        printf("\n");
    }
}