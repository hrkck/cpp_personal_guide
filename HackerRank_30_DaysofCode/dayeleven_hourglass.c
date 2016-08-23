#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
        int arr[6][6];
        printf("Enter a 6X6 array (I know it's not easy.): \n");
        for (int arr_i = 0; arr_i < 6; arr_i++) {
                for (int arr_j = 0; arr_j < 6; arr_j++) {
                        scanf("%d", &arr[arr_i][arr_j]);
                }
        }
        int hourGlass[3][3], ihour, jhour;
        int SUM = 0;
        int MAXSUM_hourGlass = -1023;
        int i, j;

        for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
                        // Create hourGlass Array:
                        for (ihour = 0; ihour < 3; ihour++) {
                                for (jhour = 0; jhour < 3; jhour++) {
                                        hourGlass[ihour][jhour] = arr[ihour + i][jhour + j];
                                }
                        }
                        // Calculate the SUM of the hourGlasses:
                        for (ihour = 0; ihour < 3; ihour++) {
                                for (jhour = 0; jhour < 3; jhour++) {
                                        if ((ihour == 1) && ((jhour == 0) || (jhour == 2))) {
                                                continue;
                                        } else {
                                                SUM = SUM + hourGlass[ihour][jhour];
                                        }
                                }
                        } // printf("%d\n", SUM); //Print SUM of every single HOURGLASS if needed.

                        // Print the hourGlasses if needed:
                        /*
                           int sumof = 0;
                           for(ihour = 0; ihour<3; ihour++){
                            for(jhour = 0; jhour<3; jhour++){
                                printf("%d", hourGlass[ihour][jhour]);
                                if(ihour == 1 && (jhour == 0 || jhour == 2)){
                                    continue;
                                }else{
                                    sumof = sumof + hourGlass[ihour][jhour];
                                }
                            }
                            printf("\n");
                           }printf("###%d### \n", sumof);
                         */

                        // Decide if the SUM is the maximum sum:
                        if (SUM > MAXSUM_hourGlass) {
                                MAXSUM_hourGlass = SUM;
                        }
                        SUM = 0;
                }
        }
        printf("%d", MAXSUM_hourGlass);
        return 0;
}
