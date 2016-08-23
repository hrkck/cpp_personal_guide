#include <stdio.h>
#include <stdlib.h>
int randIntGenerator();

int main(){
        int b;
        int i;
        for (i = 0; i < 1000; i++) {
                b = randIntGenerator();
                printf("%d, ", b);
        }

        return 0;
}

int randIntGenerator(){
        signed int r = rand() % 52;
        return r = r + (r < 26 ? 50 : -101);
}
