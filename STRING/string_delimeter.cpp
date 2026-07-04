#include<iostream>

using namespace std;

int main(){
    char str[100];

    cout <<"enter the array"<<endl;
    cin.getline(str,100,'.');
    cout << str << endl;
    return 0;
}