//Code to do linear search
//Input: Array
//Output: Element found or not
//By: Bhuvan
//Date: <write the date here!!>

#include <stdio.h>
#include <stdlib.h> //for using malloc
//main function
void main()
{
  int arr[20],k;
  int n,i;
  //for dynamic allocation of memory
  //int *array;
  //input
  printf("enter the number of elements of the array\n");
  scanf("%d",&n);
  //or maybe you can make it dynamic
  //array = (int *)malloc(sizeof(int));
  printf("enter the elements of the array\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  //for(i=0;i<n;i++)
  //{
  //  scanf("%d",&array[i]);
  //}
  printf("enter the key element you want to search for\n");
  scanf("%d",&k);
  //linear search
  for(i=0;i<n;i++)
      if(arr[i]==k)
      {
          printf("key found at pos %d\n",i+1);
          break;
      }
  if(i == n)
      printf("element not found\n");
}
