#include<bits/stdc++.h>
using namespace std;

void unionOfArrays(vector<int> vec1,vector<int> vec2)
{
    set<int> set;

    for(int i=0;i<vec1.size();i++)
    {
        set.insert(vec1[i]);
    }
    for(int i=0;i<vec2.size();i++)
    {
        set.insert(vec2[i]);
    }
    for(auto it=set.begin();it!=set.end();it++)
    {
        cout << *(it) << " ";
    }
}
int main()
{
    vector<int> vec1={1,2,3,4,5,6};
    vector<int> vec2 ={2,4,5,6,7};
    unionOfArrays(vec1,vec2);
}