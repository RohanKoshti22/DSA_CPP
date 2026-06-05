#include<iostream>
using namespace std;

int DecimalToBinary(int Decnum){
    
    int ans = 0, pow = 1;  
    // ans → final binary number store karega
    // pow → place value (1,10,100...) ke liye use hota hai

    while(Decnum > 0){
        
        // Step 1: remainder nikaalo
        int rem = Decnum % 2;
        // %2 se binary digit milta hai (0 ya 1)

        // Step 2: decimal ko divide karo
        Decnum /= 2;
        // /2 karne se number chhota hota hai next iteration ke liye

        // Step 3: remainder ko correct place pe add karo
        ans += (rem * pow);
        // rem × place value (1,10,100...)

        // Step 4: place value badhao
        pow *= 10;
        // next binary digit ke liye shift (1 → 10 → 100...)
    }

    return ans;
}

int main(){
    int Decnum = 50;
    cout << DecimalToBinary(Decnum) << endl;
    return 0;
}
// %2 se remainder lo (binary digit)
// Usko place (1,10,100...) se multiply karo
// Result me add karo
// Number ko /2 karo
// Place ko *10 karo
// Repeat until number = 0