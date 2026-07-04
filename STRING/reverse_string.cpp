#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string reverse_words(string s) {
    reverse(s.begin(), s.end());

    string ans = "";
    int n = s.length();

    for (int i = 0; i < n; i++) {
        string word = "";

        while (i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }

        reverse(word.begin(), word.end());

        if (word.length() > 0) {
            ans += " " + word;
        }
    }

    return ans.substr(1);   // Fixed
}

int main() {
    string s;

    cout << "Enter string: ";
    getline(cin, s);

    cout << reverse_words(s);

    return 0;
}