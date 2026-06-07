#include<iostream>
using namespace std;

int BinaryToDecimal(int BinNum){

    int ans = 0, pow = 1;
    // ans → final decimal value store karega
    // pow → 2 ki power (1,2,4,8...) ke liye use hota hai

    while (BinNum > 0)
    {
        // Step 1: Last digit nikaalo
        int rem = BinNum % 10;
        // %10 se last binary digit milta hai (0 ya 1)

        // Step 2: Multiply karo 2^position se aur add karo
        ans += (rem * pow);
        // rem × power (1,2,4,8...)

        // Step 3: Last digit hatao
        BinNum /= 10;
        // /10 karne se last digit remove ho jata hai

        // Step 4: Power badhao
        pow *= 2;
        // next step ke liye power double hoti hai (1→2→4→8...)
    }

    return ans;
}

int main(){
    int BinNum = 101010;
    cout << BinaryToDecimal(BinNum) << endl;

    return 0;
}

// %10 se last digit lo
// usko 2 ki power se multiply karo
// ans me add karo
// number ko /10 karo
// power ko *2 karo
// repeat until number = 0