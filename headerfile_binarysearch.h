
void search(int ar[], int size){
int i,key;
printf("\n Enter the element you want to search::\n");
scanf("%d",&key);
for(i=0;i<size;i++){
if(ar[i]==key){
printf("the element is in %d address",i);
}
}
}