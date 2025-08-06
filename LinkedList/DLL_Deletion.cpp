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
    // cout << "array sizee :" << arr.size() << endl;
    Node* head=new Node(arr[0],nullptr,nullptr);
    Node* temp=head;

    for(int i=1;i<arr.size();i++)
    {
        Node* newNode = new Node(arr[i],temp,nullptr);
        temp->next=newNode;
        temp=newNode;

    }
    // cout << "head value " <<head->val << endl;
    // cout << "temp value " <<temp->val << endl;
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
Node* DeleteHead(Node* head)
{
    if(head==NULL || head->next==nullptr)
    {
    return NULL;
    }
    Node* temp=head;
    head =head->next;
    head->prev=nullptr;
    temp->next=nullptr;
    delete temp;
    return head;

}
Node* DeleteTail(Node* head)
{
    if(head==nullptr || head->next==nullptr)
    {
        return NULL;
    }
    Node* temp=head->next;
    while (temp->next!=nullptr)
    {
        temp=temp->next;
    }
    Node* prevNode=temp->prev;
    prevNode->next=nullptr;
    temp->prev=nullptr;
    delete temp;
    return head;   
}

Node* DeleteKthElement(Node* head,int k)
{                
                                                                                                                                    
    if(head==NULL || (head->next==NULL && head->prev==NULL))
    {
        return NULL;
    }
    int count=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        cout << "inside while";
        count++;
        if(count==k) break;
        temp = temp->next;
    }
    cout << temp->val;
    Node* prevNode = temp->prev;
    Node* nextNode = temp->next;
    
    
     if(prevNode==NULL)
    {
        return DeleteHead(head);
    }
    else if(nextNode==NULL)
    {
        return DeleteTail(head);
    }
    else
    {
        prevNode->next=temp->next;
        nextNode->prev=temp->prev;
        temp->next=nullptr;
        temp->prev=nullptr;

        delete temp;
        return head;
    }

}
Node* DeleteNode(Node* head,int val)
{
    if(head==NULL)
    {
        return nullptr;
    }
    Node* temp=head;
    while(temp->val!=val)
    {
        temp=temp->next;
    }

    Node* prevNode=temp->prev;
    Node* nextNode=temp->next;

    if(nextNode==NULL)
    {
        prevNode->next=nullptr;
        temp->prev=nullptr;
        delete temp;
        return head;
    }
    prevNode->next=nextNode;
    nextNode->prev=prevNode;
    temp->next=nullptr;
    temp->prev=nullptr;

    delete temp;
    return head;
}

int main()
{
    vector<int> arr={1,5,4,7};
    Node* head2 = changeArr2LL(arr);
    
    // head= DeleteHead(head);
    // head= DeleteTail(head);
    // Node* head= DeleteKthElement(head2,3);
    Node* head=DeleteNode(head2,7);
        
    print(head);

}

