/*-------- Insertion Sort------------
*Time complexity : O(n2)
* Uses genUtils.c as a dependency, so don't forget to place it
* in the same directory
*/

#include<stdio.h>
#include"genUtils.c"

void inSort(int *,int);
void main()
{
   int list[20],size;
   /*call populateArray() function from genUtils.c that takes an array,
   * populates it with user input and returns size of the array
   */
   size=populateArray(list);


   printf("Unsorted list:\n");
   printArray(list,size);


   inSort(list,size);

   printf("\nSorted list:\n");
   printArray(list,size);

}

void inSort(int *list,int size){
  int i,j,itemToBePlaced;

  //Insertion sort Logic
  /* the outer loop assumes that the i-1 part of the array is already
  * sorted, so the code looks at the i th element and then the inner
  * loop finds it's place in the sorted array, and finally place it to
  * it's position.
  */
  for(i=1;i<size;i++)
  {
     itemToBePlaced=list[i];
     for(j=i-1;list[j]>itemToBePlaced && j>=0;j--)
     {
       //if the i th
       list[j+1]=list[j];
     }
     list[j+1]=itemToBePlaced;
     printf("After pass %d :  ",i);
     printArray(list,size);
  }
}
