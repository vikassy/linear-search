#include<stdio.h>
//main funstion
void main()
{
  int arr[20],k;
  int n,i,flag=0;
  //input
  printf("enter the number of elements of the array\n");
  scanf("%d",&n);
  printf("enter the elements of the array\n");
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  printf("enter the key element you want to search for\n");
  scanf("%d",&k);
  //linear search
  for(i=0;i<n;i++)
  {
      if(arr[i]==k)
      {
          printf("key found at pos %d\n",i+1);flag =1;break;
      }
  }
  if(flag ==0)
  {
      printf("element not found\n");
  }
}
