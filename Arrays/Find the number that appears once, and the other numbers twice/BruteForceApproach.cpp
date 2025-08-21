#include<bits/stdc++.h>
using namespace std;


int singleNumber(vector<int> arr)
{
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {   
            if(arr[j]==arr[i])
            {
                count++;
            }
        }
        if(count==1)
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    vector<int> vec={8,1,2,0,6,6,0,8,1};
    int res = singleNumber(vec);
    if(res==-1)
    cout << "No element is present";
    else
    cout << "The number whcih appear only once is : "<< res;
}