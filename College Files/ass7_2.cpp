#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct queue
{
    int data;
    struct queue*link;
    }node;
node*head,*ptr;
node*enq(node*ptr,int data)
{
    node*temp;
    temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->link=NULL;
    if(ptr==NULL)
    {
        head=temp;
        ptr=temp;
        }
    else
    {
        ptr->link=temp;
        ptr=temp;
        }
    return(ptr);
    }
int deq(node*h)
{
    int data=h->data;
    head=h->link;
    free(h);
    return(data);
    }
int display(node*h)
{
    printf("\nYour Queue::\n\t\t");
    while(h!=NULL)
    {
        printf("|%d|",h->data);
        h=h->link;
        }
    return(0);
    }
int menu()
{
    int typ,data;
    head=NULL;
    ptr=head;
    do
    {
        printf("\nYou are in Menu::\nPress 1 to EnQUEUE::\nPress 2 to DeQUEUE::\nPress 3 to DISPLAY::\nPress 0 to EXIT::\n");
        scanf("%d",&typ);
        switch(typ)
        {
            case 1:
                printf("Enter data::");
                scanf("%d",&data);
                ptr=enq(ptr,data);
                break;
            case 2:
                if(head==NULL)
                {
                    printf("\nSorry the Queue is empty.");
                    ptr=NULL;
                    }
                else
                {
                    data=deq(head);
                    printf("\n%d is Deleted.",data);
                    }
                break;
            case 3:
                if(head==NULL)
                    printf("\nSorry the Queue is empty.");
                else
                    display(head);
                break;
            case 0:
                printf("\nThank You...");
                return(0);
            default:
                printf("\nWRONG INPUT::TRY AGAIN");
            }
        }while(typ!=0);
    }
int main()
{
    printf("Lets Create a Queue using Linked list::\n");
    menu();
    getch();
    return(0);
    }
