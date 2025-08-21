#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> vec)
{
    int n=vec.size();
    sort(vec.begin(), vec.end());
    if(vec[0]!=vec[1])
    {
        return vec[0];
    }
    else if(vec[n-1]!=vec[n-2])
    {
        return vec[n-1];
    }
    for(int i=1;i<n-1;i++)
    {
        if(vec[i]!=vec[i-1] && vec[i]!=vec[i+1])
        {
            return vec[i];
        }
    }
    return -1;
}
int main()
{
    vector<int> vec={8,1,0,6,6,0,8,1};
    int res = singleNumber(vec);
    if(res==-1)
    {
        cout << "No single elements present";
    }
    else
    {
        cout << "The element which appear only once is : " << res;
    }
}