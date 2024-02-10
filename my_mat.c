#include <stdio.h>
#include "my_mat.h"



void buildMatrix(int matrix[MatSize][MatSize]) {
    for (int i = 0; i < MatSize; i++) {
        for (int j = 0; j < MatSize; j++) {
            // Get input from the user
            scanf("%d", &matrix[i][j]);
        }
    }
}

void hasPath(int dist[MatSize][MatSize], int Mi, int Mj){
    if (dist[Mi][Mj] == 0)
        printf("False");
    else
        printf("True");
}


//print the shortest path length from Mi to Mj
void shortestPathLength(int dist[MatSize][MatSize], int Mi, int Mj){
    if (dist[Mi][Mj] == 0)
        printf("-1");                                                    // this may be a future problem if they want me to print an intiger
    else
        printf("%d", dist[Mi][Mj]);
}




/*----------additional functions----------*/

//make a shortest path matrix
void MakeDist(int matrix[MatSize][MatSize], int dist[MatSize][MatSize]){
    // copy the matrix to dist
    int i, j, k;
    for (i = 0; i < MatSize; i++){
        for (j = 0; j < MatSize; j++){
            dist[i][j] = matrix[i][j];
        }
    }
    //Floyd Warshall algorithm for shortest path to all nodes from all nodes
    for (k = 0; k < MatSize; k++){
        for (i = 0; i < MatSize; i++){
            for (j = 0; j < MatSize; j++){
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    
}