#include<stdio.h>
int i;
void printArray(int *array,int size)
{
   for(i=0;i<size;i++)
   {
      printf("%2d  ",*(array+i));
   }
   printf("\n");
}


int populateArray(int *list)
{
   int size;
   printf("Enter size:");
   scanf("%d",&size);
   printf("Enter %d items(press Enter after each item):\n",size);
   for(i=0;i<size;i++)
   {
      scanf("%d",(list+i));
   }
   return size;
}


//Swap
void Swap(int *a, int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
