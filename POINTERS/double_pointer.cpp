#include<iostream>
using namespace std;

int main(){
    int a = 10 ;
    int *ptr = &a;
    int** parentptr = &ptr;

    // cout << &ptr <<endl;
    // cout << parentptr <<endl;
    // cout << &a <<endl;

    cout << *(&a) <<endl;   //derefrencing operator
    cout<<*parentptr <<endl;
    cout<<parentptr <<endl;
    return 0;
}