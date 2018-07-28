#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct singlelinkedlist
{
    int data;
    struct singlelinkedlist*link;
    }node;
node*head,*lst;
node*create_node(node*lst)//create node function
{
    node*temp;
    temp=(node*)malloc(sizeof(node));
    printf("Enter node data::");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(lst==NULL)
    {
        head=temp;
        lst=temp;
        }
    else
    {
        lst->link=temp;
        lst=temp;
        }
    return(lst);
    }
int display(node*h)//display function
{
    printf("Your Linked List::\n");
    printf("Address of Head::%p\n",h);
    while(h!=NULL)
    {
        printf("[%d|%p]--->",h->data,h->link);
        h=h->link;
        }
    printf("NULL\n");
    return(0);
    }
int count_node(node*h)//node count function
{
    int nofn=0;
    while(h!=NULL)
    {
        nofn++;
        h=h->link;
        }
    return(nofn);
    }
int srch_val(node*h)//search by value function
{
    int val,pos=0;
    printf("Enter node data to search::");
    scanf("%d",&val);
    while(h!=NULL)
    {
        pos++;
        if(h->data==val)
        {
            printf("%d found at %d node.",val,pos);
            return(0);
            }
        h=h->link;
        }
    printf("\nSorry there is no node having %d value.",val);
    return(0);
    }
int srch_pos(node*h)//search by position function
{
    int pos,count=0;
    printf("Enter position of node::");
    scanf("%d",&pos);
    while(h!=NULL)
    {
        count++;
        if(count==pos)
        {
            printf("Value at %d node is %d.",pos,h->data);
            return(0);
            }
        h=h->link;
        }
    printf("\nSorry there is no node at %d postion.",pos);
    return(0);
    }
int srch_node()//search menu function
{
    int typ;
    do
    {
        printf("\nYou are in Search menu::\nPress 1 to Search by Value::\nPress 2 to Search by Position::\nPress 0 to Exit::\n");
        scanf("%d",&typ);
        switch(typ)
        {
            case 1:
                srch_val(head);
                break;
            case 2:
                srch_pos(head);
                break;
            case 0:
                printf("Fire Exit from Search Menu.");
                return(0);
            default:
                printf("\nWRONG INPUT::TRY AGAIN");
            }
        }while(typ!=0);
    }
int insrt_head()//head insertion function
{
    node*temp;
    temp=(node*)malloc(sizeof(node));
    printf("Enter node data for new node::");
    scanf("%d",&temp->data);
    temp->link=head;
    head=temp;
    return(0);
    }
int insrt_end(node*h)
{
    node*temp;
    temp=(node*)malloc(sizeof(node));
    printf("Enter node data for new node::");
    scanf("%d",&temp->data);
    temp->link=NULL;
    while(h->link!=NULL)
    {
        h=h->link;
        }
    h->link=temp;
    lst=temp;//lst always point to last node
    return(0);
    }
int insrt_bfr(node*h)//insertion before node function
{
    node*temp;
    int val;
    printf("Enter node data Before which you want to Append node::");
    scanf("%d",&val);
    if(h->data==val)
    {
        insrt_head();
        return(0);
        }
    else
    {
        while(h!=NULL)
        {
            if(h->link->data==val)
            {
                temp=(node*)malloc(sizeof(node));
                printf("Enter node data for new node::");
                scanf("%d",&temp->data);
                temp->link=h->link;
                h->link=temp;
                return(0);
                }
            h=h->link;
            }
        }
    return(0);
    }
int insrt_aft(node*h)//after insertion function
{
    node*temp;
    int val;
    printf("Enter node data After which you want to Append node::");
    scanf("%d",&val);
    while(h!=NULL)
    {
        if(h->data==val)
        {
            temp=(node*)malloc(sizeof(node));
            printf("Enter node data for your new node::");
            scanf("%d",&temp->data);
            temp->link=h->link;
            h->link=temp;
            return(0);
            }
        h=h->link;
        }
    if(h==NULL)
    {
        insrt_end(head);
        return(0);
        }
    }
int insrt_node()//insertion menu
{
    int typ;
    do
    {
        printf("\nYou are in Insertion menu::\nPress 1 to Insert at Head::\nPress 2 to Insert at End::\nPress 3 to Insert Before a node::\nPress 4 to Insert After a node::\nPress 0 to Exit::\n");
        scanf("%d",&typ);
        switch(typ)
        {
            case 1:
                insrt_head();
                display(head);
                break;
            case 2:
                insrt_end(head);
                display(head);
                break;
            case 3:
                insrt_bfr(head);
                display(head);
                break;
            case 4:
                insrt_aft(head);
                display(head);
                break;
            case 0:
                printf("Fire Exit from Insertion Menu.");
                return(0);
            default:
                printf("\nWRONG INPUT::TRY AGAIN");
            }
        }while(typ!=0);
    }
int del_head(node*h)//function to delete head
{
    node*temp;
    temp=h;
    head=h->link;
    free(temp);
    return(0);
    }
int del_end(node*h)//function to delete end
{
    node*temp;
    while(h->link->link!=NULL)
    {
        h=h->link;
        }
    temp=h->link;
    h->link=NULL;
    lst=h;
    free(temp);
    return(0);
    }
int del_pos(node*h)//function to delete by position
{
    node*temp;
    int pos,count=2;
    printf("Enter position to Delete::");
    scanf("%d",&pos);
    if(pos==1)
    {
        del_head(head);
        return(0);
        }
    else
    {
        while(h->link!=NULL)
        {
            if(count==pos)
            {
                temp=h->link;
                h->link=h->link->link;
                free(temp);
                }
            count++;
            h=h->link;
            }
        if(count==pos)
        {
            del_end(head);
            return(0);
            }
        }
    printf("\nSorry there is no node at %d position.",pos);
    return(0);
    }
int del_val(node*h)//function to delete by value
{
    node*temp;
    int val;
    printf("Enter node data to Delete::");
    scanf("%d",&val);
    if(h->data==val)
    {
        del_head(head);
        return(0);
        }
    else
    {
        while(h->link!=NULL)
        {
            if(h->link->data==val)
            {
                temp=h->link;
                h->link=h->link->link;
                free(temp);
                return(0);
                }
            h=h->link;
            }
        if(h->data==val)
        {
            del_end(head);
            return(0);
            }
        }
    printf("\nSorry there is no Linked List having %d value.",val);
    return(0);
    }
int del_node()//delete menu
{
    int typ;
    do
    {
        printf("\nYour are in Delete Menu::\nPress 1 to Delete Head::\nPress 2 to Delete End::\nPress 3 to Delete by Position::\nPress 4 to Delete by Value::\nPress 0 to Exit::\n");
        scanf("%d",&typ);
        switch(typ)
        {
            case 1:
                del_head(head);
                display(head);
                break;
            case 2:
                del_end(head);
                display(head);
                break;
            case 3:
                del_pos(head);
                display(head);
                break;
            case 4:
                del_val(head);
                display(head);
                break;
            case 0:
                printf("Fire Exit from Delete Menu.\n");
                return(0);
            default:
                printf("\nWRONG INPUT::TRY AGAIN\n");
            }
        }while(typ!=0);
    }
int menu()
{
    int typ,nofn;
    head=NULL;
    lst=head;
    do
    {
        printf("\nPress 1 to Create node::\nPress 2 to Display Linked list::\nPress 3 to Count node::\nPress 4 to Search node::\nPress 5 to Insert node::\nPress 6 to Delete node::\nPress 0 to Exit::\n");
        scanf("%d",&typ);
        switch(typ)
        {
            case 1:
                lst=create_node(lst);
                break;
            case 2:
                if(head==NULL)
                    printf("\nSorry there is no Linked List.\n");
                else
                    display(head);
                break;
            case 3:
                if(head==NULL)
                    printf("\nSorry there is no Linked List.\n");
                else
                {
                    nofn=count_node(head);
                    printf("No of node in Linked List::%d",nofn);
                }
                break;
            case 4:
                if(head==NULL)
                    printf("\nSorry there is no Linked List.\n");
                else
                    srch_node();
                break;
            case 5:
                if(head==NULL)
                    printf("\nSorry there is no Linked List.\n");
                else
                    insrt_node();
                break;
            case 6:
                if(head==NULL)
                    printf("\nSorry there is no Linked List.\n");
                else
                    del_node();
                break;
            case 0:
                printf("\nThank You...");
                return(0);
            default:
                printf("\nWRONG INPUT::TRY AGAIN\n");
            }
        }while(typ!=0);
    }
int main()
{
    printf("Let's create a Single Linked List.\n");
    menu();
    getch();
    return(0);
    }
