#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // SZIE OF VECTOR
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    cout << "size of vec is " << vec.size() << endl;
    for (char val : vec)
    {
        cout << val << endl;
    }

    cout << " " << endl;
    // PUSH BACK FUNCTION
    vector<int> vec1;

    vec1.push_back(25);
    vec1.push_back(35);
    vec1.push_back(45);
    cout << "size =" << vec1.size() << endl;
    vec1.pop_back(); //POP BACK FUNCTION
    for (int i : vec1)
    {
        cout << i << endl;
    }
    cout<<"Front is"<<vec1.front()<<endl;   // prints front element 
    cout<<"Back is"<<vec1.back()<<endl; // prints last element
    cout<<"Back is"<<vec1.at(1)<<endl; // prints specific index element
    return 0;
}