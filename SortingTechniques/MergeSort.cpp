#include<bits/stdc++.h>
using namespace std;

void mergesort(int l,int mid,int h, int arr[])
{
    int temp[h-l+1];
    int i=l;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=h)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=arr[j];
            k++;
            j++;
        }

    }
    while(i<=mid)
    {
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j<=h)
    {
        temp[k]=arr[j];
        k++;
        j++;
    }

    for(int i = l;i<=h;i++)
    {
        arr[i]=temp[i-l];
    }
    
}

void merge_sort(int l,int h, int arr[])
{

    if(l>=h)
    return;
    else
    {
        int mid=(l+h)/2;
        merge_sort(l,mid,arr);
        merge_sort(mid+1,h,arr);
        mergesort(l,mid,h,arr);
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
    
    int l=0;
    int h=5;
    merge_sort(l,h,arr);
    
    for(int i=0;i<6;i++)
    {
        cout  << arr[i] << " ";
    }
}
