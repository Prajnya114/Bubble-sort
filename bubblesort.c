#include<stdio.h>
void main()
{
int n,a[10],i,j,temp;
printf("enter the number of elements \n");
scanf("%d",&n);
printf("enter the array elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
 {
   for(j=0;j<n-1;j++)
    {
      if(a[j]>a[j+1])
       {
         temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
       }
    }
 }
printf("sorted elements are \n");
}
