#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n-1];
    int val=1;
    for(int i=0;i<n-1;i++)
    {
        cin >> arr[i];
    }
    
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==val)
        {
            val++;
        }
        else
        {
            cout<< "The missing element is " << val;
            break;
        }
    }
}