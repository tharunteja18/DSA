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
    while(temp!=NULL)
    {
        cout << temp->val << " ";
        temp=temp->next;
    }
}
Node* InsertBeforeHead(Node* head,int el)
{
    if(head==NULL)
    {
        return new Node(el);
    }
    
    Node* newNode=new Node(el,nullptr,head);
    head->prev=newNode;
    return newNode;

}
Node* InsertAfterTail(Node* head,int val)
{

    if(head==nullptr)
    {
        return new Node(val);
    }
    Node* temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    Node* newNode=new Node(val,temp,nullptr);
    temp->next=newNode;
    return head;


}
// there will be atleast one element
Node* InsertionBeforeTail(Node* head,int val)
{
    if(head->next==nullptr)
    {
        return InsertBeforeHead(head,val);
    }
    Node* temp=head;

    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    Node* prevN = temp->prev;
    Node* newNode=new Node(val,prevN,temp);
    prevN->next=newNode;
    temp->prev = newNode;
    return head;

}
Node* InsertionAtKthNode(Node* head,int k,int val)
{
    if(k==1)
    {
        return InsertBeforeHead(head,val);
    }
    Node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        if(count==k)
        {
            break;
        }
        temp=temp->next;
    }
    Node* prev=temp->prev;
    Node* newNode=new Node(val,prev,temp);
    temp->prev=newNode;
    prev->next=newNode;
    return head;
}

void InsertingBeforeGivenNode(Node* node, int val)
{
    Node* prev=node->prev;
    Node* newNode=new Node(val,prev,node);
    prev->next=newNode;
    node->prev=newNode;

    
}
int main()
{
    vector<int> arr={1,2,50,90};
    Node* head = changeArr2LL(arr);
    // head=InsertBeforeHead(head,10);
    // head=InsertAfterTail(head,100);
    // head=InsertionBeforeTail(head,100);
    // head=InsertionAtKthNode(head,1,1000);
    InsertingBeforeGivenNode(head->next->next,110);
    print(head);
}
