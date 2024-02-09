#include <stdio.h>
#include <stdbool.h>
#include "my_mat.h"

 void setItems(char* items,int* value,int* weight, int len){
        for (int i = 0; i < len; ++i)
    {
        scanf(" %s",&items[i]);
    
    
        scanf(" %d",&value[i]);
    
        scanf(" %d",&weight[i]);
    }  
}
int max(int a, int b) {
    return (a > b) ? a : b;
}
int knapSack (int weights[], int values[] , int selected_bool[]){
  int i,w=0;

  int K[LEN+1][W+1] = {0};
            
    // Build table K[][] in bottom up manner
    for (i = 0; i <= LEN; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i==0 || w==0){
                //selected[i] = 1;
                K[i][w] = 0;
            }
            else if (weights[i-1] <= w){
                selected_bool[i] = 1;
                K[i][w] = max(values[i-1] + K[i-1][w-weights[i-1]], K[i-1][w]);
            }
            else{
                selected_bool[i]=0;
                K[i][w] = K[i-1][w];
                }
        }
     }
    //printf("\nItems selected : ");
    int tempW = W;
    int y = 0; //to index in selected
    for (int x = LEN; x > 0; x--){
        if ((tempW-weights[x-1] >= 0) && (K[x][tempW] - K[x-1][tempW-weights[x-1]] == values[x-1]) ){
            selected_bool[y++] = x-1; //store current index and increment y
            tempW-=weights[x-1];
        }
    }
    int arr[5]={0};
 for(int j = y-1; j >= 0; j-- ){
   
    arr[selected_bool[j]]=1;
   

 }
 for(int i=0;i<5;i++){
    selected_bool[i]=arr[i];
 }


   return K[LEN][W];




}
void getMatFromUser(int** matrix, int size) {
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++){
            // printf("matrix[%d][%d]: ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int minDistance(int dist[], int sptSet[]) {
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++) {
        if (!sptSet[v] && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

int dijkstra(int **matrix, int src, int dest,const int len) {
    

    int dist[V],counter=0,min,u;
    bool sptSet[V];

    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }

    dist[src] = 0;

while (++counter < len)
    {
        min = INT_MAX;

        for (int vert = 0; vert < len; ++vert)
        {
            if (sptSet[vert] || dist[vert] > min)
                continue;

            min = dist[vert];
            u = vert;
        }

        sptSet[u] = true;

        for (int v = 0; v < len; v++)
        {
            if (sptSet[v] || !matrix[u][v] || dist[u] == INT_MAX || (dist[u] + matrix[u][v] >= dist[v]))
                continue;

            dist[v] = dist[u] + matrix[u][v];
        }
    }
    return dist[dest];
}

    int findShortestPath(int **matrix,int i,int j,int len){
        int ans= dijkstra(matrix,i,j,len);
        if(ans==0 || ans==INT_MAX){
            return -1;
        }
        else{
            return ans;
        }
        
    }


int isPath(int** Matrix,int src,int dest,int size){
    int istrue = findShortestPath(Matrix,src,dest,size);
    if (istrue>0)
    {
        return true;
    }
    else{
     
        return false;
    }
}
