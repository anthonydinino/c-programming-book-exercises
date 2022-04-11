#include <stdio.h>

/*
* Verify that the expression getchar() != EOF is 0 or 1
*/

int main(){
    printf("Press enter:");
    printf("The value of getchar() != EOF: %d \n", getchar() != EOF);
    return 0;
}
