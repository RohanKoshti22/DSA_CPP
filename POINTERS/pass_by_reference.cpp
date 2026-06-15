#include<iostream>
using namespace std;

void changeA(int* ptr ){
    *ptr = 20;
}
// void changeA(int &b ){
//    b = 20;
// }
int main(){
    int a = 10;
changeA(&a);

cout<< "New value of a is :" << a << endl;

    return 0;
}