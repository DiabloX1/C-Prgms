#include <stdio.h>
#include <stdlib.h>
struct listNode
{
    int key;
    struct listNode *next;
};
void ins_beg(struct listNode *head,int d)
{
    struct listNode *temp=(struct listNode*)malloc(sizeof(struct listNode));
    temp->next=head;
    head=temp;
}
void ins_end(struct listNode *end,int d)
{
    struct listNode *temp=(struct listNode*)malloc(sizeof(struct listNode));
    end->next=temp;
    temp=end;
}
void ins_pos(struct listNode *head,int pos,int d)
{
    if(pos==1)
    {
        ins_beg(head,d);
        return;
    }
    struct listNode *temp=head;
    int c=1;
    while(c<pos-1)
    {
        temp=temp->next;
        c++;
    }
    struct listNode *ins=(struct listNode*)malloc(sizeof(struct listNode));
    ins->next=temp->next;
}
void display(struct listNode *head)
{
    struct listNode *temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->key);
        temp=temp->next;
    }
    printf("\n");
}
