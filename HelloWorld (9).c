#include<stdio.h>
int main()
{
  int array[101],item,i,n;
  printf("enter the size of array\n");
  scanf("%d",&n);
  printf("enter the array elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&array[i]);
    
  }
  printf("enter the element to be searched for\n");
  scanf("%d",&item);
  for(i=0;i<n;i++)
  {if(array[i]==item)
  printf("the element is at postion:%d",i);
  }
}