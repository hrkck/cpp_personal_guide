#include "../include/day25.h"


int day25() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n = 0;
    int number = 0;
    bool prime = true;

    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> number;
        
        if(number == 1){
            cout << "Not prime" << endl;
            continue;
        }
        
        // for(size_t j = 0; j < number; j++)
        // {
        //     if(number / j == 0){
        //         std::cout << "Not Prime" << '\n';
        //         prime = false;
        //         break;
        //     }else{
        //         prime = true;
        //         continue;
        //     }
        // }
        // ABOVE CODE GIVES
        // ILLEGAL OPERATION RUNTIME ERROR
        
        int sq = sqrt(number);
        for(int i = 2; i <= sq; i++) {
            if(number%i == 0){
                cout << "Not prime" << endl;
                prime = false;
                break;
            }
        }
        if(prime == true){
            cout << "Prime" << endl;
        }
        
        prime = true;
        
    }
    
    return 0;
}
