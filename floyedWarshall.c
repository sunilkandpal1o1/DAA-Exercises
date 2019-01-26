/*--------- Dynamic Programming------------
*Implementation of Floyed Warshall algo - All pair shortest path
*
*/

#include<stdio.h>

void printGraph(int graph[10][10],int node){ //when passing multidimensional array bounds are needed
  int i,j;
  printf(" X |");
  for(j=1;j<=node;j++){
    printf("%3d ",j);
  }
  printf("\n ________________\n");
  for(i=1;i<=node;i++){
    printf("%2d |",i);
    for(j=1;j<=node;j++){
      printf("%3d ",graph[i][j]);
    }
    printf("\n");
  }
}


void main(){
  int graph[10][10],node;
  int i,j;
  int iteration;
  printf("Enter the number of nodes in the graph: ");
  scanf("%d",&node );
  for(i=1;i<=node;i++){
    for(j=1;j<=node;j++){
      printf("Distance from node %d to node %d :(0 for not connected and 9999 if no direct edge)\n",i,j);
      scanf("%d", &graph[i][j]);
    }
  }
  
  printGraph(graph,node);
  printf("\n");

  iteration=1;
  while(iteration<=node){
    for(i=1;i<=node;i++){
      for(j=1;j<=node;j++){
        if(graph[i][j]>graph[i][iteration]+graph[iteration][j]){
          graph[i][j]=graph[i][iteration]+graph[iteration][j];
        }
        
      }
    }

    printf("G%d\n",iteration);
    printGraph(graph,node);
    printf("\n");
  
    iteration++;
  }

  printf("\n\nShortest distance matrix-\n",iteration);
  printGraph(graph,node);
  printf("\n");


}