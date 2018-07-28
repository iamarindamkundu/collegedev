{
	
printf("\n---------INSERTION MENU----------\nPress 1 to insert at head\nPress 2 to insert at tail\nPress 3 to insert before a node\nPress 4 to insert after a node: ");
			
scanf("%d",&ch);
				
switch(ch)
					
{
					 
 	case 1:
						
		ins_head(head);
						
		break;
					
	case 2:
						
		ins_tail(head);
						
		break;
					
	case 3:
						
		ins_before(head);
						
		break;
					
	case 4:
						
		ins_after(head);
					
		break;
					
	default:
						
		printf("\nWRONG CHOICE");
					
}
				
printf("\nAganin(y/n)?");
				
scanf("%s",&c);
				
}
while(c=='y'||c=='Y');
				
printf("\n RETURN TO MAIN MENU ");
			
}
		
list(node*ptr)
			
{
do
			
	{
	printf("\n--------MAIN MENU--------\nPress 1 to create\nPress 2 to insert\nPress 3 to display\n");
				
		scanf("%d",&ch);
					
switch(ch)	
						
	{
						
		case 1:
	ptr=link(ptr);
							
			break;
						
		case 2 :      ins(head);
							
			break;
						
		case 3:
	dis(head);
							
			break;
						
		default :  printf("\nWRONG CHOICE ");
						
                 }
					
printf("\nAGAIN(y/n)?");
					
scanf("%s",&c);
				
}
while(c=='y'||c=='Y');
				
printf("\nALL EXIT ");
			
}
		
main()
			
{

ptr=NULL;
			
head=NULL;
			
list(ptr);
			
}
				
		


