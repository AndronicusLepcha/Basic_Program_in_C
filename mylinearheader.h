/*This is the header file for the linear search which has been called in the linear_search.c */
int search(int ar[],int n){
int i,key,first,last,middle;
printf("\n Enter the element you want to search::\n");
scanf("%d",&key);
first=0;
last=n-1;
middle=(first/last)/2;
while(first<=last){
if(ar[middle]<key)
 first=middle+1;
else if(ar[middle]==key)
{
printf("\n%d found at location %d",key,middle+1);
break;
}
else
last=middle-1;
middle=(first/last)/2;
}
if (first>last)
printf("no element found");
return 0;
}
