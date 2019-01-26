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

int stringLen(char a[]){
  int i=0;
  while(a[i]!='\0'){
    i++;
  }
  return i;
}

void stringCopy(char from[],char to[]){
  int i=0;
  while(from[i]!='\0'){
    to[i]=from[i];
    i++;
  }
  to[i]=from[i];
}
