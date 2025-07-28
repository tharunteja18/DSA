#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    bubble_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    
}


// Push the max to the last by adjecent swaps
// Time Complexity -> O(n^2) both worse and average case
//                  -> O(n) for best case when all the elements are already sorted




// int arr[]={1,5,4,0,9,7};
    // for(int i=0;i<6;i++)
    // {
    //     for(int j=0;j<6-i-1;j++)
    //     {
    //         if(arr[j]>arr[j+1])
    //         {
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
    // cout << "After sorting:";

    // for(int i=0;i<6;i++)
    // {
    //     cout << arr[i] << " ";
    // }