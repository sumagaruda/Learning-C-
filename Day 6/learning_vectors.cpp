#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.pop_back();
    
    for (int i=3; i<8; i++)
    {
       v.push_back(8-i);    
    }
    sort(v.begin(), v.end());
    
    for (int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    int a[100] = {5,6,7,3,2,1};
    sort(a,a+6);
    cout << endl<< "Sorted array is " << endl;
    
    for (int i=0; i<6; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}