/*. Write a program to implement binary search on 1-D array (Create your own header file)*/
#include <stdio.h>
#include"mylinearheader.h"
void main(){
int arr[10],size,i;
printf("\n Enter the size of an array::\n");
scanf("%d",&size);
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
search(arr,size);
}

