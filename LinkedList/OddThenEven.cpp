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

Node* oddThenEven(Node* head)
{
if(head==nullptr)
{
    return nullptr;
}
int count=0;
Node* Otemp;
Node* Etemp;
Node* temp=head;
Node* OFirstNode;
Node* EFirstNode;

while(temp!=NULL)
{
    count++;
    if(count==1)
    {
        OFirstNode=temp;
        break;
    }
    if(count==2)
    {
        EFirstNode=temp;
    }
    if(count%2!=0)
    {
        Otemp=temp;
        Otemp->next=Otemp;
        temp->next=temp;
    }
    else
    {
        Etemp=temp;
        Etemp->next=Etemp;
        temp->next=temp;
    }

}
Otemp->next=EFirstNode;
return OFirstNode;

}
int main()
{
    vector<int> arr1={1,3,4,2,5,6};
    Node* head = changeArr2LL(arr1);
    Node* head1 = oddThenEven(head);
    
    print(head1);
}