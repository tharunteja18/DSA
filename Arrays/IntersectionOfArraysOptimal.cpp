#include<bits/stdc++.h>
using namespace std;

void intersectionArray(vector<int> arr1, vector<int> arr2)
{
    int n1=arr1.size();
    int n2=arr2.size();
    int i=0;
    int j=0;
    vector<int> result;

    while(i<n1 && j<n2)
    {
        if(arr1[i]==arr2[j])
        {
            result.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else 
        {
            j++;
        }
    }
    cout << "The resultant intersection array is "<< endl;
    for(int a: result)
    {
        cout  << a << " ";
    }
}
int main()
{
    vector<int> arr1={0,1,2,2,3,3,4,5,6};
    vector<int> arr2={0,2,3,3,5,6,6,7};

    intersectionArray(arr1,arr2);

}