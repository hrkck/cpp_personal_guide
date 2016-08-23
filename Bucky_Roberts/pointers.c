#include <stdio.h>
#include <stdlib.h>

int main(){
        /*
           int var = 10;
           printf("Adress \t\t name \t value\n");
           printf("%p \t %s \t %d", &var, "myVar", var);
           int * pvar = &var;
           printf("\n");
           printf("Adress \t\t name \t value\n");
           printf("%p \t %s \t %d\n", pvar, "myVar", var);
           printf("%p \t %s \t %p\n", &pvar, "myVar", pvar);
           printf("deferencing the pointer %d", *pvar);
         */

        int i;
        int fiveelement[5] = { 4, 32, 2, 5, 65};

        printf("Element \t\t MemoryAdress \t\t Value\n");
        for (i = 0; i < 5; i++) {
                printf("five element[%d] \t %p \t %d\n", i, &fiveelement[i], fiveelement[i]);
        }

        puts("");
        printf("FiveELements \t\t %p \t %d \n ", fiveelement + 2, *(fiveelement + 2));

        return 0;
}
