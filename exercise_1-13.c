#include <stdio.h>

/*
 * Write a program to print a histogram of the lengths of the words
 * in its input. It is easy to draw the histogram with the bars horizontal;
 * a vertical orientation is more challenging.
 */
#define MAX_WORD_LENGTH 10

int main()
{
    int c, wl, done;
    c = wl = done = 0;
    int arr[MAX_WORD_LENGTH + 1];

    // zero out the array
    for (int i = 0; i < MAX_WORD_LENGTH + 1; i++)
        arr[i] = 0;

    // prepare array indexes for histogram
    while (done == 0)
    {
        c = getchar();
        if (c == ' ' || c == '\t' || c == '\n' || c == EOF)
        {
            if (!(wl > MAX_WORD_LENGTH))
            {
                ++arr[wl - 1];
            }
            else
            {
                ++arr[MAX_WORD_LENGTH];
            }
            wl = 0;
        }
        else
        {
            ++wl;
        }
        if (c == EOF)
            done = 1;
    }

    // draw the histogram
    printf("\n");
    for (int i = 0; i < MAX_WORD_LENGTH + 1; i++)
    {
        if (!(i == MAX_WORD_LENGTH))
        {
            printf("%-3d| ", i + 1);
        }
        else
        {
            printf(">%-2d| ", i);
        }
        int j = 0;
        while (j < arr[i])
        {
            printf("*");
            ++j;
        }
        printf("\n");
    }
}