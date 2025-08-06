#include<bits/stdc++.h>
using namespace std;

struct Node
{
    public:
    int data;
    Node* next;
    public:
    Node(int data,Node* next)
    {
        this->data = data;
        this->next = next;
    }
    Node(int data)
    {
        this->data=data;
        this->next=nullptr;
    }
};

Node* convertArray2LL(vector<int> vec)
{
    Node* head=new Node(vec[0]);
    // cout << "the head value is " << head->data;//0
    // cout << "the head next is "<< head->next;//nullpointer

    Node* mover=head;

    for(int i=1;i<vec.size();i++)
    {       
        cout << "the value of i is :" << vec[i]<< endl;
         Node* temp=new Node(vec[i]);
         mover->next=temp;
         mover=temp;
    }

    return head;
}

int main()
{
    vector<int> vec={2,5,8,3,91};
    Node* head = convertArray2LL(vec);
    // dont tamper the head
    // while(head->next!=nullptr)
    // {
    //     cout << head->data << endl;
    //     head=head->next;

    // }

    Node* temp=head;

    while(temp)
    {
        cout << temp->data<< " ";
        temp=temp->next;
    }

    
    

}
