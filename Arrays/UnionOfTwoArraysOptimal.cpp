#include<bits/stdc++.h>
using namespace std;


void unionOfArrays(vector<int> vec1,vector<int> vec2)
{
    int i=0;
    int j=0;
    int n1=vec1.size();
    int n2=vec2.size();
    vector<int> temp;
    while(i<n1 && j<n2)
    {
        if(vec1[i] < vec2[j])
        {
            temp.push_back(vec1[i]);
            while(vec1[i]==vec1[i+1])
            {
                i++;
            }
            i++;
        }
        else if (vec2[j]< vec1[i])
        {
                temp.push_back(vec2[j]);
                while(vec2[j]==vec2[j+1])
                {
                    j++;
                }
                j++;
        }
        else if (vec1[i]==vec2[j])
        {
            temp.push_back(vec1[i]);
             while(vec1[i]==vec1[i+1])
            {
                i++;
            }
            i++;
            while(vec2[j]==vec2[j+1])
                {
                    j++;
                }
                j++;

        } 
    }
    while(i<n1)
    {
        temp.push_back(vec1[i]);
        while(vec1[i]==vec1[i+1])
            {
                i++;
            }
        i++;
    }
    while(j<n2)
    {
        temp.push_back(vec2[j]);
        while(vec2[j]==vec2[j+1])
                {
                    j++;
                }
        j++;
    }

    for(int it: temp)
    {
        cout << it << " ";
    }
}

int main()
{
    vector<int> vec1={1,2,3,4,5,6,10,11,11};
    vector<int> vec2 ={2,4,5,6,7,8,8,12,12};
    unionOfArrays(vec1,vec2);

}