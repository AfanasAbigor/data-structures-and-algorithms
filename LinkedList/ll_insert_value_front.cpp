#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* link;
};

struct Node* head;

void print_ll()
{
    struct Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }
}

void insert_val(int val)
{
    struct Node* temp =(struct Node*) malloc(sizeof(struct Node));
    temp->data = val;
    temp->link = head;
    head = temp;
}

int main()
{
    head = NULL;
    insert_val(1);
    insert_val(3);
    insert_val(5);
    insert_val(7);
    insert_val(9);

    print_ll();

    return 0;
}
