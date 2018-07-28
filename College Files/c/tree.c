#include<stdio.h>

#include<stdlib.h>

typedef struct bin_tree
	
{
		
struct bin_tree*lc,*rc;
		
int data;
	
}node;
	
node*tree;
	
create()
		
{
			
int val;
			
node*ptr,*temp,*aux;
			
ptr=(node*)malloc(sizeof(node));
			
printf("\nEnter Data:: ");
			
scanf("%d",&val);
			
ptr->data=val;
			
ptr->lc=NULL;
			
ptr->rc=NULL;
			
if(tree==NULL)
				
tree=ptr;
			
else
				
{

	temp=tree;
					
while(temp!=NULL)
						
{
							
aux=temp;
							
if(val>tree->data)
								
temp=temp->rc;
							
else
								
temp=temp->lc;
						
}
					
if(val>aux->data)
					
	aux->rc=ptr;
					
else
						
aux->lc=ptr;
				
}
		
}
	
main()
		
{
		
	tree=NULL;
	
		printf("\nLEts's build a binary search tree\n");
	
		menu();
			
printf("\nTHE INORDER TRAVERSAL OF THE TREE\n");
		
	inorder(tree);
			
printf("NULL");
		
}
	
menu()
		
{
			
char ch;
			
printf("\nFirst make the root\n");
			
do
		
		
{
					

create();
					
printf("   AGAIN(Y/y)? ");
					
scanf("%s",&ch);
				
}
while(ch=='y'||ch=='Y');
		
}
	
inorder(node*temp)
		
{
			
if(temp!=NULL)
				
{
				
inorder(temp->lc);
				
printf("[%d]->",temp->data);
			
	inorder(temp->rc);
				
}
		
 }
	
