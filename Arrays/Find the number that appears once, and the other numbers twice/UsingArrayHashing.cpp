#include<bits/stdc++.h>
using namespace std;


int singleNumber(vector<int> arr)
{
    int maxi=arr[0];
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    int hashArr[maxi+1]={0};
    for(int i=0;i<arr.size();i++)
    {
        hashArr[arr[i]]++;
    }

    for(int i=0;i<maxi+1;i++)
    {
        if(hashArr[i]==1)
        {
            return i;
        }
    }

}

int main()
{
    vector<int> vec={8,1,3,0,6,6,0,8,1};
    int res = singleNumber(vec);
    cout << "The element is "<< res;
}