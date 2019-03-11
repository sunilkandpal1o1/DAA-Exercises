/*---------- Dynamic Programming ----------------
*Longest Common Subsequence between two strings
*sequence can be non contiguous
*/

#include "genUtils.c"
#include<stdio.h>
void main(){
  char str1[7]={'a','u','a','i','l','l','\0'};
  char str2[10]={'s','a','i','n','l','l','u','i','u','\0'};

  int str1Len = 7, str2Len = 10;     //change the value according to the lenght of str1 and str2
  int table[str2Len][str1Len];

  char lcs[7];
  int lcsLen,index;
  int i,j;

  //create table
  for(i=0;i<str2Len;i++){
    for(j=0;j<str1Len;j++){
      if( i==0 || j==0){
        table[i][j]=0;
      }
      else if(str1[j-1]==str2[i-1]){
        table[i][j]=table[i-1][j-1]+1;
       
      }
      else{
        table[i][j]=table[i-1][j]>table[i][j-1]?table[i-1][j]:table[i][j-1];
      }
      
    }
  }

  
  for(i=0;i<str2Len;i++){
    for(j=0;j<str1Len;j++){
      printf(" %d ",table[i][j]);
    }
    printf("\n");
  }

  //Find the sequence from the table
  i=str2Len-1;
  j=str1Len-1;
  lcsLen = table[i][j];
  index = lcsLen;
  lcs[index--]='\0';
  while(i!=0 && j!=0){
    if(str2[i-1] == str1[j-1]){
      lcs[index] = str1[j-1];
      index--;
      i--;j--;
    }else if(table[i-1][j] > table[i][j-1]){
      i--;
    }else{
      j--;
    }
  }

  printf("String1: %s\n",str1);
  printf("String2: %s\n",str2);
  printf("Longest Common Subsequence: lenght- %d sequence- %s\n",lcsLen,lcs);
}