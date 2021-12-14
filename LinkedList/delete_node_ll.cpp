#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* link;
};

struct Node* head;

void print()
{
    struct Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->link;
    }
}

void insert_val(int value)
{
    struct Node* temp =(struct Node*) malloc(sizeof(struct Node));
    temp->data = value;
    temp->link = NULL;

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        struct Node* t = head;
        while(t->link != NULL)
        {
            t = t->link;
        }
        t->link = temp;
    }
}

void position(int pos)
{
    if(pos==1)
    {
        struct Node* temp = head;
        head = head->link;
        free(temp);
    }
    else
    {
        struct Node* temp1 = head;
        for(int i=1; i<= pos-2; i++)
        {
            temp1 = temp1->link;
        }
        struct Node* temp2;
        temp2 = temp1->link;
        temp1->link = temp2->link;
        free(temp2);
    }
}

int main()
{
    head = NULL;
    insert_val(10);
    insert_val(20);
    insert_val(30);
    insert_val(40);
    insert_val(50);

    position(1);

    print();

    return 0;
}
