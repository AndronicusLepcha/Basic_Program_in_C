/* Write a program to implement linear search on 1-D array (Create your own header file) */
#include<stdio.h>
#include"myheader.h"
void main(){
int arr[10],n,i;
printf("\n Enter the size of an array::\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
search(arr,n);
}
