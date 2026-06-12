#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int totalwater(vector<int> &height)
{
    int maxwater = 0;
    int i = 0, j = height.size() - 1;
    while (i < j)
    {
        int width = j - i;
        int ht = min(height[i], height[j]);
        int area = width * ht;
        maxwater = max(maxwater, area);
        height[i] < height[j] ? i++ : j--;


    }
    return maxwater;
}
int main()
{
    vector<int>height= {1,8,6,2,5,4,8,3,7};
    cout<<totalwater(height)<<endl;
     return 0;
}