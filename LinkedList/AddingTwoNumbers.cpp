#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node* next;

    Node(int data)
    {
        this->val=data;
        this->next=nullptr;
    }
    Node(int data,Node* next1)
    {
        this->val=data;
        this->next=next1;
    }
    
};
Node* convertArrToLL(vector<int> vec)
{
    if(vec.size()==0) return NULL;

    Node* head=new Node(vec[0]);
    Node* temp=head;

    for(int i=1;i<vec.size();i++)
    {
        Node* NN =new Node(vec[i]);
        NN->next=temp;
        temp=NN;
    }
    return temp;
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
        temp = temp->next;
    }
    
}
Node* AddingTwoNumber(Node* head1,Node* head2)
{
    int carry=0;
    Node* t1=head1;
    Node* t2=head2;
    Node* DN=new Node(-1);
    Node* curr=DN;

    while(t1!=NULL || t2!=NULL)
    {
        int sum=carry;
        if(t1!=nullptr) sum+=t1->val;
        if(t2!=nullptr) sum+=t2->val;

        Node* NN=new Node(sum%10);
        curr->next=NN;
        curr=NN;
        carry=sum/10;

        if(t1!=nullptr) t1 = t1->next;
        if(t2!=nullptr) t2 = t2->next;

    }
    if(carry!=0)
    {
        Node* temp = new Node(carry);
        curr->next=temp;
        curr=temp;
    }
    return DN->next;
}
int main()
{
   vector<int> vec1={5,3};
   vector<int> vec2={9,9,5,4};

   Node* head1 =convertArrToLL(vec1);
   Node* head2 =convertArrToLL(vec2);
//    print(head1);
//    print(head2);

    Node* res =AddingTwoNumber(head1,head2);
    print(res);

}
