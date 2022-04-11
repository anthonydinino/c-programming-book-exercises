#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/*
* Modify the termperature conversion program
* to print the table in reverse order,
* that is, from 300 degrees to 0
*/

int main(){
    float fahr;
    printf("%-4s\t%-7s\n", "Fahr", "Celcius");
    for(fahr = UPPER; fahr >= LOWER; fahr -= STEP){
        printf("%-4.0f\t%-7.1f\n", fahr, fahr * (9.0/5.0) + 32);
    }
}
