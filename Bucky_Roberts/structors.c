#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employees.h"

int main(){
        struct employee mike;
        strcpy(mike.firstname, "Mikey");
        strcpy(mike.lastname, "Smackeringo");

        printf("%s %s", mike.firstname, mike.lastname);

        return 0;
}
