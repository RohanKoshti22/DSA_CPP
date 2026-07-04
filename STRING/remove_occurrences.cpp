#include<iostream>
#include<string>
using namespace std;
string removeOcurrences(string s , string part){
    while(s.length() > 0 && s.find(part) < part.length() ){
        s.erase(s.find(part) , part.length());

    }
    return s;
}
int main(){
    string s,part;
    
    cout << "Enter String :";
    cin >> s;
    cout << "Enter part:";
    cin >> part;
    
cout << removeOcurrences(s,part)<<endl;

    return 0;
}