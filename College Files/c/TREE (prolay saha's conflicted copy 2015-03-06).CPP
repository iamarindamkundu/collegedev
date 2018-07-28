#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct node
{
struct node *left;
int data;
struct node *right;
}node;

//arguements with function defination with pointer prototype//
node *makenode();
void maketree(node *);
void inorder(node *);
void preorder(node *);
void postorder(node *);
int count(node *);


//globally declaration
int cnt=0;
char ans;

//main function
void main()
{
node *root;
int c;
clrscr();

root=makenode();
maketree(root);

while(1)
{
	printf("\n\t\tpress c or C to count no. of nodes in the tree:--");
	printf("\n\t\tpress i or I to traverse the tree inorder:--");
	printf("\n\t\tpress p or P to traverse the tree preorder:--");
	printf("\n\t\tpress n or N to traverse the tree postorder:--");
	printf("\n\t\tpress x or X to exit:--");
	fflush(stdin);

	printf("\n\nput your choice==");
	scanf("%s",&ans);

	if(toupper(ans)=='C')
	{
	c=count(root);
	printf("\n\nno. of node count is==%d",c);
	}

	if(toupper(ans)=='I')
	{
	printf("\n\t\tthe sequence for inorder is==>");
	inorder(root);
	}

	if(toupper(ans)=='P')
	{
	printf("\n\t\tthe sequence for preorder is==>");
	preorder(root);
	}

	if(toupper(ans)=='N')
	{
	printf("\n\t\tthe sequence for postorder is==>");
	postorder(root);
	}

	if(toupper(ans)=='X')
	{
	exit(0);
	break;
	}
	}

getch();
}


node *makenode()
{
int data;
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\n\t\tenter node data to put at the root of the tree==");
scanf("%d",&data);

temp->data=data;
temp->left=NULL;
temp->right=NULL;

return(temp);
}


void maketree(node *root)
{
char ch;
printf("\n\n\t want to add left subtree of the previous parent tree(y/n)==");
fflush(stdin);
ch=getchar();

if(toupper(ch)=='Y')
{
root->left=makenode();
maketree(root->left);
}

printf("\n\nwant to add right subtree of the or that previously created parent tree(y/n)==");
fflush(stdin);
ch=getchar();

if(toupper(ch)=='Y')
{
root->right=makenode();
maketree(root->right);
}
}

void inorder(node *tree)
{
if(tree!=NULL)
{
inorder(tree->left);
printf("[%d]---->",tree->data);
inorder(tree->right);
}
}

void preorder(node *tree)
{
if(tree!=NULL)
{
printf("[%d]---->",tree->data);
preorder(tree->left);
preorder(tree->right);
}
}


void postorder(node *tree)
{
if(tree!=NULL)
{
postorder(tree->left);
postorder(tree->right);
printf("[%d]---->",tree->data);
}
}

int count(node *tree)
{
if(tree!=NULL)
{
count(tree->left);
cnt++;
count(tree->right);
}
return(cnt);
}


