#include <stdio.h>

/*
* Write a program that prints it's input one word per line
*/

int main(){
	int c;

    while ( (c=getchar()) != EOF){
        if (c == ' ' || c == '\t'){
            c = '\n';
        }
        putchar(c);
    }
}