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
    Node(int val,Node* next)
    {
        this->data=val;
        this->next=next;
    }
};


Node* convertArr2LL(vector<int> &arr)
{
    if(arr.size()==0) return nullptr;
    Node* head = new Node(arr[0]);
    Node* current=head;

    for(int i=1;i<arr.size();i++)
    {
        Node* newNode = new Node(arr[i]);
        current->next=newNode;
        current = current->next;
    }

    return head;
}
Node* insertAtHead(Node* head, int k)
{
    if(head==NULL) 
    {
        Node* head =new Node(k);
        return head;
    }

    Node* newNode = new Node(k,head);
    return newNode;
}
void print(Node* head)
{

    if(head==NULL)cout << "The LL is empty";
    Node* temp=head;
    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}
Node* insertAtTail(Node* head, int val)
{
    if(head==nullptr)
    {
        Node* temp=new Node(val);
        return temp;
    }

    // Node* temp=head->next;
    // while(temp!=nullptr)
    // {
    //     if(temp->next==nullptr)
    //     {
    //         Node* newNode= new Node(val);
    //         temp->next=newNode;
    //         break;
    //     }
    //     temp=temp->next; 
    // }
    // return head;
    Node* temp=head;
    while(temp->next!=nullptr)
    {
        temp = temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
    return head;
}

Node* insertAtPosition(Node* head,int k)
{
if(head==nullptr) return new Node(k);
if(k==1)
{
    Node* newNode = new Node(k);
    newNode->next=head;
    newNode=head;
    return head;
}

int c=0;
Node* prev=NULL;
Node* temp=head;
while(temp!=nullptr)
{
    c++;
    if(c==k)
    {
        Node* newNode=new Node(55);
        prev->next=newNode;
        newNode->next=temp;
        break;
    }
    prev=temp;
    temp = temp->next;
}
return head;
}


Node* insertAtPositionStriver(Node* head, int k, int el)
{
    if(head==nullptr)
    {
        if(k==1)
        {
            return new Node(el);
        }
        else
        {
            return NULL;
        }
    }
    if(k==1)
    {
        return new Node(el,head);
        
    }

    int count=0;
    Node* temp=head;
    while(temp!=nullptr)
    {
        count++;
        if(count==(k-1))
        {
            Node* newNode=new Node(el,temp->next);
            temp->next=newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}
Node* insertElebeforeVal(Node* head,int el,int val)
{
    if(head==nullptr)
    {
        return NULL;
    }
    else if(head->data==val)
    {
        return new Node(el,head);
    }

    Node* temp=head;
    while(temp->next!=nullptr)
    {
        if(temp->next->data==val)
        {
            Node* newNode=new Node(el,temp->next);
            temp->next=newNode;
            break;
        }
        temp=temp->next;
    }
    return head;

}
int main()
{
    vector<int>  arr={15,8,9,2,0};
    Node* head = convertArr2LL(arr);
    // head = insertAtHead(head,18);
    
    // head=insertAtTail(head,111);

    //insert at position - my way
    // head=insertAtPosition(head,5);

    // insert at position strivers way

    // int position=6;
    // int element = 99;
    // head=insertAtPositionStriver(head,position,element);

    //insert the element before the value x
    int val=9;
    int el=100;
    head= insertElebeforeVal(head,el,val);
    print(head);




}