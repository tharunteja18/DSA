#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> vec)
{
    int ele=0;
    int n=vec.size();

    for(int i=0;i<n;i++)
    {
        ele=ele^vec[i];
    }

    return ele;
}

int main()
{
    vector<int> vec={8,1,0,6,6,0,2,8,1};
    int res = singleNumber(vec);
    cout << "The element which appear only once is : " << res;
}