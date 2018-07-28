#include<stdio.h>

#define max 5

int i,num,cq[max],ch,front=-1,rear=-1;

char c;

int main()
	
{
	
do
		
{
	
        printf("\n------------------MENU------------------\n");
		
        printf("\n1 to enque\n2 to delqueue\n3 to display\t");
		
        scanf("%d",&ch);
		
            switch(ch)
			
            {
				
             	case 1 : 
ins();
					
                     break;
				


            	 case 2 : 
del();
					
                     break;
				

             
            	 case 3 : dis();
					
                     break;
				
 

            	 default :
 printf("\n ERROR FOUND IN ENTRY ");
			
            }
		
  printf("\nAGAIN(y/n)?");
		
  scanf("%s",&c);
		
}

  while(c=='y'||c=='Y');
		

 printf("EXIT\n\t\n\t\n\t");
	
 return;
	
}
	
 
ins()//logic starts here
	
{
	
      if(front==(rear+1)%max)
		
           {
	
             printf("\nQUEUE is full ");
		
           }
	
      else
		
           {
		
             printf("\nEnter number :\t");
		
             scanf("%d",&num);
           
}			
      if(front==-1)
				
                 {
	front=0;
				

                         rear=0;
				
                 }
			

      else
				
                 {
				
                     rear=(rear+1)%max;
				
                  }
		
   cq[rear]=num;
		
     }
	
 }
	
del()
	
 {
	

if(front==-1)
		
 {
 
    printf("\nQUEUE is now empty");
		
  }
	
else
		
 {
		
  num=cq[front];
		
   printf("\nDEleted element is %d",cq[front]);
		
   if(front==rear)
			
   {
      
        front=-1;
		
 	rear=-1;
			
    }
		
else
			
   {     front=(front+1)%max;
			
    }
		
  }
	
}
	
dis()
	
 {
	if(front==-1)
	
      printf("\nQUEUE IS EMPTY ");
	
else
		
         {
		for(i=front;i!=rear;i=(i+1)%max)
			
                  {
	printf("\n\t[%d]\n\t",cq[i]);
			
                   }
		
            printf("\n\t[%d]\n\t",cq[i]);
		
         }
	
 }
	
