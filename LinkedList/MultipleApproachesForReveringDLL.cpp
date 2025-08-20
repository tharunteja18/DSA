#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this->val=data;
        this->prev=nullptr;
        this->next=nullptr;
    }
    Node(int data, Node* prev1, Node* next1)
    {
        this->val=data;
        this->prev=prev1;
        this->next=next1;
    } 
};
Node* changeArr2LL(vector<int> arr)
{
    if(arr.size()==0)
    {
        return NULL;
    }
    
    Node* head=new Node(arr[0],nullptr,nullptr);
    Node* temp=head;

    for(int i=1;i<arr.size();i++)
    {
        Node* newNode = new Node(arr[i],temp,nullptr);
        temp->next=newNode;
        temp=newNode;
    }
    return head;
}

void print(Node* head)
{
    if(head==NULL)
    {
        cout << "The LL is empty";
    }
    Node* temp=head;
    while(temp!=nullptr)
    {
        cout << temp->val << " ";
        temp=temp->next;
    }
}

Node* RevereTheDLL(Node* head)
{
    if(head==NULL)
    {
        return nullptr;
    }
    stack<int> st;
    Node* temp=head;
    while(temp!=nullptr)
    {
        st.push(temp->val);
        temp=temp->next;
    }
    cout << "printing the stack"<< endl;
    
    Node* tem=head;
    while(tem!=NULL)
    {
        tem->val=st.top();
        st.pop();
        tem=tem->next;
    }
    return head;
}
Node* RevereTheDLLUsingLinkes(Node* head)
{
    if(head==NULL)
    {
        return nullptr;
    }

    Node* temp=head;

while(temp!=nullptr)
{
    Node* prevNode=temp->prev;
    temp->prev=temp->next;
    temp->next=prevNode;

    temp=temp->prev;
}

return temp->next->prev;

}
int main()
{
    vector<int> arr={2,50,90,100,500};
    Node* head = changeArr2LL(arr);
    
    Node* newHead = RevereTheDLL(head);
    Node* newHead = RevereTheDLLUsingLinkes(head);
    print(newHead);
}