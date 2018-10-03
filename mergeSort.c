/*-------- Merge Sort------------
*Divide and Conquer strategy
*Time complexity : O(n log(n))
*/

#include<stdio.h>
#include "genUtils.c"

void MergeSort(int *, int, int);
void Merge(int *, int, int, int);

void main(){
  int list[20],size;
  size=populateArray(list);

  printf("unsorted list is: \n");
  printArray(list,size);

  MergeSort(list,0,size-1);

  printf("List after Sorting: \n");
  printArray(list,size);

}

void MergeSort(int *array, int start, int end){
  if(start == end){
    return;
  }
  int mid = (start + end)/2;
  MergeSort(array,start,mid);
  MergeSort(array,mid+1,end);

  Merge(array,start,end,mid);

}

void Merge(int *array, int start, int end, int mid){
  int size = (end - start)+1;
  int temp[size],tempIndex=0;

  int i=start,j=mid+1;

  //this divides array into two subarrays 1st from start to mid and 2nd from
  //mid+1 to end, checks for the lesser item between i th index and j th index
  //and copies the lesser item to the temp array.

  while(i<=mid && j<= end){
    if(array[i]<=array[j]){
      temp[tempIndex++]=array[i++];
    }
    if(array[j]<array[i]){
      temp[tempIndex++]=array[j++];
    }
  }

  //if there are any items left in any subarray, copy them to the temp
  while(i<=mid){
    temp[tempIndex++]=array[i++];
  }
  while(j<=end){
    temp[tempIndex++]=array[j++];
  }

  //Copying items from temp array to original
  tempIndex=0;
  for(i=start;i<=end;i++){
    array[i]=temp[tempIndex++];
  }
  //printf("temp[tempIndex] %d",temp[--tempIndex]);
}
