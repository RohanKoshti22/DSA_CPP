#include<iostream>
#include<vector>
using namespace std;

int main(){

    // -----vector integer-----
//   vector<int>vec ;
//   vector<int>vec = {1,2,3} ;
//   vector<int>vec (5,0) ;

// for (int i : vec){
//     cout<<i<<endl;

// }

    // -----vector char -----
   vector<char> vec = {'a','b','c','d','e'};
   for (char val : vec){
    cout<<val<<endl;
   }
    return 0;
}