#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n-1];
    int s1=0;
    for(int i=0;i<n-1;i++)
    {
            cin >> arr[i];
            s1+=arr[i];
    }
    int actalsum=n*(n+1)/2;

    cout << "missing number is :"<< actalsum-s1;
}