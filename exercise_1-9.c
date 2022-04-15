#include <stdio.h>

/*
* Write a program to copy its input to its output,
* replacing each string of one or more blanks
* by a single blank
*/

int main(){
	int c;
	_Bool spaced = 0;
	while((c = getchar()) != EOF)
		{
			if(c == ' ' && spaced != 1){
				spaced = 1;
				putchar(c);
			}
			else if (c != ' '){
				spaced = 0;
				putchar(c);
			}
		}
}