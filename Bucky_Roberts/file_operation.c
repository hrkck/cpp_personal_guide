#include <stdio.h>
#include <stdlib.h>

int main(){
        FILE* fPointer; // create the file operator
        // Write to the FILE:
        fPointer = fopen("file_operation.txt", "w");

        fprintf(fPointer, "This is how it all starts...\n");
        fprintf(fPointer, "How it all continues\n");
        fprintf(fPointer, "The times were good...\n");
        fprintf(fPointer, "While it went... good :p .");
        fclose(fPointer); // Close the Operator after finishing.

        // Reopen the operator to read files, this time:
        fPointer = fopen("theAuthor.txt", "r");
        char singleline[150]; // the char array to be assigned to the lines.

        // Reading line by line:
        while (!feof(fPointer)) {
                fgets(singleline, 150, fPointer);
                printf("%s", singleline);
        }
        fclose(fPointer); // Closing the operator after finishing the job:

        /* TO APPEND TO AND EXISTING FILE:
           FILE * fPointer;
           fPointer = fopen("thefile.txt", "a"); // 'a' makes the job.
           fprintf(fPointer, "the must-append sentence");
           fclose(fPointer);
         */

        return 0;
}
