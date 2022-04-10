#include <stdio.h>

int main(){
    float fahr;
    printf("%-4s\t%-7s\n", "Fahr", "Celcius");
    for(fahr = 300; fahr >= 0; fahr -= 20){
        printf("%-4.0f\t%-7.1f\n", fahr, fahr * (9.0/5.0) + 32);
    }
}
