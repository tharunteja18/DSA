#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    int xor1=0;
    int xor2=0;
    int x=0;

    for(int i=0;i<n-1;i++)
    {
        cin >> x;
        vec.push_back(x);
    } 
    for(int i=0;i<n-1;i++)
    {
        xor1 = xor1^vec[i];
        xor2=xor2^(i+1);
    }
    xor2=xor2^n;

    // for(int i=1;i<=n;i++)
    // {
    //     xor2=xor2^i;
    // }
    int res=xor1^xor2;
    cout << "The result is : "<< res;
    
}