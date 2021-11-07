#include<bits/stdc++.h>
using namespace std;

typedef struct mylist{
    int data;
    struct mylist *next;
}node;

void insert(node *s,int data)
{
    while(s->next!=NULL)
    {
        s=s->next;
    }
    s->next=(node*)malloc(sizeof(node));
    s->next->data=data;
    s->next->next=NULL;
}

void display(node *s)
{
    while(s->next!=NULL)
    {
        cout<<s->next->data<<" ";
        s=s->next;
    }
    cout<<endl;
}

void searchnode(node *s, int data)
{
    int count=0;
     while(s->next!=NULL)
    {
        if(s->next->data==data)
        {
            count++;
        }
        s=s->next;
    }
    cout<<"Total "<<count<<" results found"<<endl;

}

void deletenode(node *s,int data)
{
    while(s->next!=NULL)
    {
        if(s->next->data==data)
        {
            s->next=s->next->next;
            return;
        }
        s=s->next;
    }
}

int main()
{
    node *first=(node*)malloc(sizeof(node));
    first->next=NULL;
    insert(first,9);
    insert(first,11);
    insert(first,4);
    insert(first,2);
    insert(first,5);

    display(first);

    deletenode(first,11);

    display(first);

    searchnode(first,5);
    display(first);

}
