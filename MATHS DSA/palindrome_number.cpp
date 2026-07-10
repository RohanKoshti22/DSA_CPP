#include <iostream>
#include <climits>
using namespace std;

int reverseNumber(int x) {
    int rev = 0;

    while (x != 0) {
        int digit = x % 10;

        // Overflow check
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
            return 0;

        rev = rev * 10 + digit;
        x /= 10;
    }

    return rev;
}

bool isPalindrome(int x) {

    if (x < 0)
        return false;

    int revNum = reverseNumber(x);

    return x == revNum;
}

int main() {

    int n;

    cout << "Enter number: ";
    cin >> n;

    if (isPalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}