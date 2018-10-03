/*--------- Graph representation ------------
*using Adjacency Matrix
*/

#include<stdio.h>
void createGraph(){
  int graph[10][10],node;
  int i,j;
  printf("Enter the number of nodes in the graph: ");
  scanf("%d",&node );
  for(i=1;i<=node;i++){
    for(j=1;j<=node;j++){
      printf("Is node %d connected to node %d :(1 for connected and 0 for not connected)\n",i,j);
      scanf("%d", &graph[i][j]);
    }
  }
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
  createGraph();
}
