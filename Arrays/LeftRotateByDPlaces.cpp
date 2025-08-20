#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    
    int d=3;
    while(d!=0)
    {
        int lme=arr[0];
        for(int i=1;i<7;i++)
        {
            arr[i-1]=arr[i];
        }
        arr[6]=lme;
        d--;
        for(int i:arr)
        {
            cout << i << " " ;
        }
        cout << endl;
    }

}