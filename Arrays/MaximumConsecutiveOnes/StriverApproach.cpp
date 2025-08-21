#include<bits/stdc++.h>
using namespace std;


int findMaxConsecutiveOnes(vector<int> vec)
{
    int maxi=0;
    int count=0;

    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]==1)
        {
            count++;
            maxi=max(count,maxi);
        }
        else{
            count=0;
        }
    }

    return maxi;
}
int main()
{
      vector<int> vec={1, 1, 0, 0, 1, 1, 1, 0};
    int result = findMaxConsecutiveOnes(vec);
}