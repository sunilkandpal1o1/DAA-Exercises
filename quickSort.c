/*-------- Quick Sort------------
*Divide and Conquer
*Time complexity :
*Average case - n log(n))
*Worst case - O(n2)
*/

#include<stdio.h>
#include "genUtils.c"

void Quicksort(int *, int,int);
int Partition(int*, int ,int);
void Swap(int*,int*);

int size;

void main(){
  int list[20];
  size=populateArray(list);
  printf("unsorted list is: \n");
  printArray(list,size);

  Quicksort(list,0,size-1);

  printf("List after Sorting: \n");
  printArray(list,size);

}


void Quicksort(int *array,int start, int end){
    if( start < end ){
      int mid = Partition(array,start,end);
      //printArray(array,end+1);
      //printf("mid found at %d, array afterwards: ",mid);
      //printArray(array, sizeof array / sizeof *array); // sizeof part to calculate lenght of array though it doesn't work for array as parameter
      printArray(array,size);
      Quicksort(array,start,mid-1);
      Quicksort(array,mid+1,end);
    }
}


int Partition(int *array,int start,int end){
  int j,i;
  int pivot = array[end];
  i=start-1;
  printf("pivot is : %2d, ",pivot);
  for(j=start;j<end;j++){
    if(array[j]<= pivot){
      i=i+1;
      Swap(&array[i],&array[j]);
    }
  }
  Swap(&array[i+1],&array[end]);
  return i+1;
}
