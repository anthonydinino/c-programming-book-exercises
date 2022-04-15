#include <stdio.h>

/*
* Write a program to copy its input to its output,
* replacing each string of one or more blankstput,t
* by a single blank
*/

int main(){
	int c;

    while ( (c=getchar()) != EOF) {
        if (c == 92) {
            putchar('\\');
            putchar('\\');
        }
        else if (c == 9) {
            putchar('\\');
            putchar('t');
        }
        else if (c == 8) {
            putchar('\\');
            putchar('b');
        }
        else{
			putchar(c);
		}
    }
    return 0;
}