#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *addr;
};
int main()
{
    struct node *root;
    struct node *first=NULL;
    struct node *second=NULL;
    struct node *third=NULL;
    
    first=(struct node*)malloc (sizeof(struct node));
    second=(struct node*)malloc (sizeof(struct node));
    third=(struct node*)malloc (sizeof(struct node));
    
    root=first;
    first->data=10;
    first->addr=second;
    second->data=100;
    second->addr=third;
    third->data=300;
    third->addr=NULL;
    printf("Node 1  data is %d and address is %p\n",first->data,first->addr);//First node pointer (addr) is pointing to the address of second node
    printf("The address of the second node is %p\n",first->addr);
     printf("Node 2 data is %d and address is %p\n",second->data,second->addr);
      printf("Node 3  data is %d and address is %p\n",third->data,third->addr);
    return 0;
    
    
}