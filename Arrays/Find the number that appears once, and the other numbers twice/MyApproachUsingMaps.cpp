#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> vec)
{
    map<int,int> mp;
    for(int i=0;i<vec.size();i++)
    {
        mp[vec[i]]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        // for printing the key values
        // cout << it->first << " : "<< it->second << endl;
        if(it->second == 1)
        {
            return it->first;
        }
    }
}
int main()
{
    vector<int> vec={8,1,0,6,6,0,7,8,1};
    int res = singleNumber(vec);
    cout << "the single element is : " << res;
}