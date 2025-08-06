#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        this->data=val;
        this->next=nullptr;
    }
};


int main()
{
    vector<int> list={1,2,5,6,8};
    // fun(list);
    Node* head=nullptr;

    Node* temp=head;

    Node* newNode=new Node(10);

    if(temp==nullptr)
    {
        temp=newNode;
    }
    // while(temp!=nullptr)
    // {
    //     temp = temp->next;
    // }
    // temp->next=newNode;
    // temp=newNode;

    cout << "The value is : " << temp->data;

}