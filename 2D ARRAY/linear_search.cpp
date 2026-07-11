#include<iostream>
using namespace std;
void linearSearch(int matrix[] [3] ,int rows, int cols, int target){
    for (int i = 0; i < rows; i++)
    {
        for(int j = 0 ; j < cols ; j++){
            if(matrix [i][j] == target){
                cout << "the Cells  are " << i << " " <<  j << endl;
                return ;
            }
        }
    }
    cout << "cells not found" << endl;

}
int main(){
    int matrix [4][3];
    int rows = 4;
    int cols = 3; 

    cout<<"Enter the numbers: \n ";
for (int i = 0; i < rows; i++)
{
    for(int j = 0 ; j < cols ; j++){
cin >> matrix[i][j] ;
    }
}
int target ;
cout<< "Enter the targeted value" ;
cin >> target;

linearSearch(matrix,rows,cols,target);
    return 0;
}