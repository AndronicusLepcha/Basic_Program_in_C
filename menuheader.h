void insert(int a[], int number) //For inserting element to the array!
{
int i,n,index;
printf("Input index should be less than %d:\n",number);
scanf("%d",&index); // the address you want enter the data or the element.
if(index<number)
{
	printf("enter the new element\n");
	scanf("%d",&n);
	printf("Before insertion\n");
		for(i=0;i<number;i++)
			{
				printf("%d\t",a[i]);	
			}
		a[index]=n; //Entering the value;
	
		printf("\nAfter insertion\n");
			for(i=0;i<number;i++)
			{
				printf("%d\t",a[i]);
			}
}
	else{
	printf("\n The element does not exist in the array");
	}
}
void delete(int a[],int number) //For deleting the Element!
{
int i,index;
printf("Enter the index you want to delete:\n");
scanf("%d",&index);
  if(index>=number+1)
  	{
  		printf("\nDeletion is not posible!!");
	}
else{
	for(i=index;i<number-1;i++)
	{	
		a[i]=a[i+1];
	}
    }
	for(i=0;i<number-1;i++)
		{
			printf("%d\t",a[i]);
		}
}

void search(int a[],int number)For searching the Element!
{
int i,key;
printf("Enter the element you want to search");
scanf("%d",&key);
for(i=0;i<number;i++)
   {
	if(key==a[i])
	{
		printf("the element you are searching is in %d location\n",i);
	}	
   } 
}
void display(int a[],int num)
{
int i;
for(i=0;i<num;i++)
	{
		printf("%d\t",a[i]);
	}
}

void reverse(int ar[],int num)
{
int i;
	for(i=num;i>=1;i--)
		{
			printf("%d\t",i);
		}
}


void zero(int ar[],int num)
{
int i,count=0;
for(i=0;i<num; i++)
	{
	if(ar[i]!=0){
			ar[count++]=ar[i];//adding all the elements greater to zeroes in the first 
	            }
	}
	while(count<num)
	{ 
		ar[count++]=0; //adding the 0 in the last
 	}
}
