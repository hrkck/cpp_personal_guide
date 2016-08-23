#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// TODO : gives "Segmenation Fault" error on terminal.


int main(){
        printf("#############");

        int number = 10;
        int remain;
        int arrayOfRemainders[1023];
        int index = 0;
        int numberAfterDivided;
        int binaryNumber;

        while (numberAfterDivided > 1) {
                printf("#############");
                remain = number % 2;
                printf("#############");

                numberAfterDivided = number / 2;
                arrayOfRemainders[index] = remain;
                printf("#############");
                index = index + 1;
        }
        int i;
        for (i = 0; i < sizeof(arrayOfRemainders); i++) {
                binaryNumber = 10 * i + arrayOfRemainders[i];
        }
        printf("%d", binaryNumber);
        return 0;
}

/*
   int integerToBinary(int number){
    int remainder;
    int arrayOfRemainders[1023];
    int index = 0;
    int numberAfterDivided;
    int binaryNumber;

    while (numberAfterDivided>1){
        remainder = number%2;
        numberAfterDivided = number/2;
        arrayOfRemainders[index] = remainder;
        index = index + 1;
    }
    int i;
    for(i = 0; i<sizeof(arrayOfRemainders); i++){
        binaryNumber = 10*i + arrayOfRemainders[i];
    }
    return binaryNumber;
   }*/
