/* ----------- Selection Sort ------------
*Time complexity : O(n2)
*/

#include<stdio.h>
#include "genUtils.c"

void main(){
  int list[20];
  int i,j,size;
  int minAt;

  size=populateArray(list);

  printf("Unsorted list:\n");
  printArray(list,size);

  /*
  */
  for(i=0;i<size;i++){
    minAt=i;
    for(j=i+1;j<size;j++){
      if(list[minAt]>list[j]){
        minAt=j;
      }
    }
    //make sure no swapping is performed when there is no value less then the i th index's
    if(minAt!=i){
      Swap(&list[minAt],&list[i]);
    }
    printf("After pass %d :  ",i+1 );
    printArray(list,size);
  }

  printf("Sorted list:\n");
  printArray(list,size);
}
