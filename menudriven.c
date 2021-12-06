#include<stdio.h>
#include"header.h"
int main()
{
int arr[100],i,y,index,number,n,key;
printf("\n Enter the size of an array:\n");
scanf("%d",&number);
printf("\n Enter the array:");
       for(i=0;i<number;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("************MENU************");
	printf("\n1.Insert \n2.Delete\n3.Search\n4.Display\n5.Reverse\n6.Move all zeroes to bottom\n");
	printf("Enter your choice\n");
	scanf("%d",&y);

	switch(y){
	case 1: insert(arr,number);
	        break;
	case 2: delete(arr,number);
		break;
	case 3:search(arr,number);
		break;
	
	case 4:display(arr,number);
		break;
	
	case 5:reverse(arr,number);
		break;
	case 6:zero(arr,number);
		display(arr,number);
		break;
		}   
	}	
