#include <stdio.h>

/*
*Write a program to count blanks, tabs and newlines
*/

int main(){
    long blanks = 0;
    long tabs = 0;
    long newlines = 0;
    int c;

    while((c = getchar()) != EOF){
        if(c == '\n')
            ++newlines;
        else if(c == ' ')
            ++blanks;
        else if(c == '\t')
            ++tabs;
    }

    printf("Blanks = %ld\n", blanks);
    printf("Tabs = %ld\n", tabs);
    printf("Newlines = %ld\n", newlines);
    return 0;
}
