#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* link;
};

struct Node* head;

void print()
{
    struct Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }
}

void insert_el(int value)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = value;
    temp->link = NULL;

    if(head == NULL)
    {
        head = temp;
    }
    else{
        struct Node* t = head;
        while(t->link != NULL)
        {
            t = t->link;
        }
        t->link = temp;
    }
}

int main()
{
    head = NULL;

    insert_el(5);
    insert_el(15);
    insert_el(25);
    insert_el(35);
    insert_el(45);


    print();

    return 0;
}
