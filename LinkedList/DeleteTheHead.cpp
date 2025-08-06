#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data=val;
        next=nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr)
{
    if(arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* current=head;

    for(int i=1;i<arr.size();i++)
    {
        Node* nodeAdd=new Node(arr[i]);
        current->next=nodeAdd;
        current = current->next;
    }

    return head;
}

Node* removeHead(Node* head)
{
    if(head==NULL) return head;

    Node* temp=head;
    head = head->next;
    delete temp;

    return head;

}

void printLL(Node* head)
{
    Node* temp=head;
    if(temp==NULL)
    {
        cout << "There is no LL";
    }
    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp= temp->next;
    }
}

Node* removeTail(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return NULL;                
    }
    Node* temp=head;
    while(temp->next->next != NULL)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}

Node* removeK(Node* head,int k)
{
    if(head==NULL)
    {
        return head;
    }
    if(k==1)
    {
        Node* temp=head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    int c=0;
    Node* prev=NULL;
    while(temp!=NULL)
    {
        c++;
        if(c==k)
        {
                prev->next=prev->next->next;
                free(temp);
                break;

        }
        prev = temp;

        temp=temp->next;
    }

    return head;

}

Node* removeEl(Node* head,int el)
{
    if(head==NULL)
    {
        return head;
    }
    if(head->data == el)
    {
        Node* temp=head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    Node* prev=NULL;
    while(temp!=NULL)
    {
        if(temp->data == el)
        {
                prev->next=prev->next->next;
                free(temp);
                break;
        }
        prev = temp;
        temp=temp->next;
    }
    return head;
}
int main()
{
    vector<int> arr={1,51,2,5,6,9,87};
    Node* head = convertArr2LL(arr);
    // Node* headAfterRemoved = removeHead(head);
    // printLL(headAfterRemoved);

    // Node* LLAfterRemoveTail= removeTail(head);
    // printLL(LLAfterRemoveTail);
    
    // Node* afterKremove= removeK(head,3);
    // printLL(afterKremove);

    Node* afterElRemove= removeEl(head,9);
    printLL(afterElRemove);


}