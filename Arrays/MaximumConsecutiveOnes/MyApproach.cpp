#include<bits/stdc++.h>
using namespace std;


int findMaxConsecutiveOnes(vector<int> vec)
{
    int finalval=0;
    int val=0;

    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]==1)
        {
            val++;
        }
        else{
            if(val>finalval)
            {
                finalval=val;
            }
            val=0;
        }
    }
    if(val>finalval)
    {
        finalval=val;
    }
    return finalval;
}
int main()
{
    vector<int> vec={1, 1, 0, 0, 1, 1, 1, 0};
    int result = findMaxConsecutiveOnes(vec);
    cout << "The maximum count is :" << result;
}