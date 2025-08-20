#include<bits/stdc++.h>
using namespace std;

void moveAllZeros(vector<int> arr)
{
    int n=arr.size();
    int i=0;
    int j=0;
    for(int a=0;a<n;a++)
    {
        if(arr[a]==0)
        {
            i=a;
            j=a+1;
            cout << arr[i] << " "<< arr[j] << endl;
            break;
        }
    }
    while(arr[j]!=0 && j<n)
    {
        swap(arr[j],arr[i]);
        ++i;
        ++j;
    }
    else
    {
        ++j;
    }

    for(int a:arr)
    {
        cout << a << " ";
    }
}

int main()
{
    vector<int> arr={1,0,2,3,0,4,0,1};

    moveAllZeros(arr);

}