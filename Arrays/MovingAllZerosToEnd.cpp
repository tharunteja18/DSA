#include<bits/stdc++.h>
using namespace std;

void moveAllZeros(vector<int> arr)
{
    int n=arr.size();
    int count=0;
    for(auto it=arr.begin();it!=arr.end();it++)
    {
        if(*(it)==0)
        {
            arr.erase(it);
            count++;
        }
    }
    int i=n-count;//8-3=5
    while (i!=n)
    {
        arr.push_back(0);
        i++;
    }
    
    for(int a:arr)
    {
        cout << a << endl;
    }
}
int main()
{
    vector<int> arr={1,0,2,3,0,4,0,1};

    moveAllZeros(arr);

}