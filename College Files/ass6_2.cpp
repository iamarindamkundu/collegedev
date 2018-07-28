#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct stack
{
    int data;
    struct stack*link;
    }node;
node*head,*ptr;
node*push(node*ptr,int data)
{
    node*temp;
    int swap;
    temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->link=ptr;
    if(ptr==NULL)
    {
        head=temp;
        ptr=temp;
        }
    else
    {
        head=temp;
        ptr=temp;
        }
    return(ptr);
    }
int pop(node*h)
{
    node*temp;
    int data;
    temp=h;
    head=h->link;
    data=h->data;
    free(temp);
    return(data);
    }
int display(node*h)
{
    printf("\nYour Stack::\n");
    while(h!=NULL)
    {
        printf("\t\t|%d|\n",h->data);
        printf("\t\t----\n");
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
        printf("\nYou are in Menu::\nPress 1 to PUSH::\nPress 2 to POP::\nPress 3 to DISPLAY::\nPress 0 to Exit::\n");
        scanf("%d",&typ);
        switch(typ)
        {
            case 1:
                printf("Enter data::");
                scanf("%d",&data);
                ptr=push(ptr,data);
                break;
            case 2:
                if(head!=NULL)
                {
                    data=pop(head);
                    printf("\n%d is poped.",data);
                }
                else
                {
                    printf("\nStack is Empty.\n");
                    ptr=head;
                }
                break;  
            case 3:
                if(head==NULL)
                    printf("\nStack is Empty.\n");
                else
                    display(head);
                break;
            case 0:
                printf("\nThank You...\n");
                return(0);
            default:
                printf("\nWRONG INPUT::TRY AGAIN");
            }
        }while(typ!=0);   
    }
int main()
{
    printf("Lets Create a Stack using Linked list::\n");
    menu();
    getch();
    return(0);
    }
