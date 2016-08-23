#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int getFactorialOf(int number);

int main() {
        int number;
        scanf("%d", &number);
        int result = getFactorial(number);
        printf("%d", result);
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        return 0;
}

int getFactorial(int number){
        if ((number == 0) || (number == 1)) {
                return 1;
        } else {
                return number * getFactorial(number - 1);
        }
}
