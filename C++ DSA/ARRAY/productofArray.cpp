#include<iostream>
using namespace std;

 int productArr(int arr[] ,int size){
int product = 1;

for (int i = 0; i < size; i++)
{
    product = product * arr[i];

}
return product;
 }
 
int main(){
    int arr [] = {1,2,3,4,5};
    int size = 5;
    int result = productArr(arr,size);

    cout << result << endl;
    
    return 0;
}