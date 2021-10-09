#include <stdio.h>
#include <stdlib.h>
void createNodeList(); //Functions declerations
void displayList();     //Functions declerations
void deletefirstnode(); //Functions declerations
void deletemiddlenode();    //Functions declerations
void deletelastnode();  //Functions declerations

struct node
{
    int data; //data of the linked list 
    struct node *addr; //address for the linked list
}*stnode;

int main()
{
    int n,ch;
    printf("\t Creating a single linked list");
    printf("\n Enter the number of the node you want in the linked list:\t");
    scanf("%d",&n);
    createNodeList(n);
    displayList();
    printf("\nEnter your choice");
    printf("\n1.Deletion of a node at the beginning of linked list\n2. Deletion of a node which lies between any two nodes of the list\n3.Deletion of a node at the end of the list");
    scanf("%d",&ch);
   
    switch(ch)
    {
        case 1: deletefirstnode();
        break;
        case 2:deletemiddlenode();
        break;
        case 3:deletelastnode();
        break;
        default: printf("\nEnter a valid input!");
    }
    return 0;
}
//Functions Definitions
void createNodeList(int n)
{
    struct node *fnode, *temp;
    int num,i;
    stnode = (struct node *)malloc(sizeof(struct node));  //stnode can also be called as head 
    if (stnode==NULL)
        {
            printf("\nMemory cannot be allocated");
        }
    else
    {
        printf("\n Enter the data of the 1 node:");
        scanf("%d",&num);
        stnode->data=num; 
        stnode->addr=NULL; //links the address of the first node to the NULL
        temp=stnode;
        //adding n nodes in the linked list
        for(i=2;i<=n;i++)
        {
                fnode =(struct node*)malloc(sizeof(struct node));
                if (fnode==NULL)
            {
                printf("\nMemory cannot be allocated");
            }
               else{
                   printf("\nEnter the data for the %d node:",i);
                   scanf("%d",&num);
                   fnode->data=num;
                   fnode->addr=NULL;
                   temp->addr=fnode;
                   temp=temp->addr;
                   
               }     
        }
        
    }
}
void displayList()
{
    struct node *temp;
    
    if (stnode == NULL)
    {
        printf("\nThe List is empty");
    }
    else{
        temp=stnode;
        while(temp != NULL)
        {
            printf("\nData = %d",temp->data);
            temp=temp->addr;
        }
    }
}

void deletefirstnode()
{
   struct node *delete;
   if(stnode==NULL)
   {
       printf("\n The List is Empty!");
   }
   else
   {
       delete=stnode;
       stnode=stnode->addr;
       printf("\nDeleted data%d",delete->data);
       free(delete);
       printf("\nUpdated List");
       displayList();
   }
}

void deletelastnode()
{
    struct node *delete, *temp;
    if(stnode==NULL)
   {
       printf("\n The List is Empty!");
   }
   else
   {
       delete=stnode;
       temp=stnode;
   }
   while(delete->addr != NULL)
   {
       temp=delete;
       delete=delete->addr;
       
   }
   //printf("the data before last is %d",temp->data);
   temp->addr=NULL;
   printf("data deleted is %d",delete->data);
   free(delete);
   printf("\n updated list is ");
   displayList();
   
}

void deletemiddlenode()
{
    struct node *delete, *temp;
    int num;
    printf("\n Enter the location you want to delete:");
    scanf("%d",&num);
    temp= stnode;
    delete= stnode;

        for(int i=2;i<=num;i++)
        {
            temp=delete;
            delete=delete->addr;
           
             if(delete == NULL)
                break;
        }
        //printf("my delete pointer is pointing to %d",delete->data);
        //printf("my temp pointer is pointing to %d",temp->data);
       if(delete != NULL)
        {
           // if(delete == stnode)
             //  stnode = stnode->addr;

            temp->addr = delete->addr;
           delete->addr = NULL;

            free(delete);

            printf("SUCCESSFULLY DELETED NODE FROM MIDDLE OF LIST\n");
            displayList();
        }
        else
        {
            printf("Invalid position unable to delete.");
        }
   
}