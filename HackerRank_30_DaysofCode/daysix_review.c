#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        // THE WORKING COPY OF THE CODE IS DERIVED FROM ORGINAL SOURCE;
        // FROM manish1996 ON https://www.hackerrank.com/challenges/30-review-loop/forum
        int t;
        printf("Enter a range (let it be short please) : \n");
        scanf("%d", &t);
        int a = 0;
        for (a = 0; a < t; a++) {
                int i = 0, j = 1;
                char string[10000];
                printf("Enter the %d. String: \n", a + 1);
                scanf(" %[^\n]s", string);
                for (i = 0; i <= strlen(string) - 1; i = i + 2) {
                        printf("%c", string[i]);
                }
                printf(" ");
                for (j = 1; j <= strlen(string) - 1; j = j + 2) {
                        printf("%c", string[j]);
                }
                printf("\n");
        }
        /* Enter your code here. Read input from STDIN. Print output to STDOUT

           THIS CODE BELOW DOES NOT WORK:
           int T;
           int i;
           scanf("%d", &T);
           for(i = 0 ; i<T;i++){
            char S[1000];
            scanf("%[^\n]s", S);
            int index;
            for(index = 0; index<=strlen(S)-1; index = index + 2){
                printf("%c", S[index]);
            }
            printf(" ");
            for(index = 1; index<=strlen(S)-1; index = index +2){
                printf("%c", S[index]);
            }
            printf("\n");
           }*/
        return 0;
}
