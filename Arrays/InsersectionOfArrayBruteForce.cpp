#include<bits/stdc++.h>
using namespace std;


void intersectionOfArrays(vector<int> arr1,vector<int> arr2)
{
    int n1=arr1.size();
    int n2=arr2.size();
    vector<int> visitedArray(n1);
    vector<int> result;

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j] && visitedArray[j]==0)
            {
                result.push_back(arr1[i]);
                visitedArray[j]=1;
                break;
            }
        }
    }
    cout << "The resultant array is :" << endl;
    for(int a: result)
    {
        cout << a << " ";
    }

}
int main()
{
    vector<int> arr1={1,2,2,3,3,4,5,6};
    vector<int> arr2={2,3,3,5,6,6,7};
    intersectionOfArrays(arr1,arr2);

}