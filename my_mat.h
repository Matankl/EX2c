

//Define variables
#define MatSize 10
#define MaxWeight 20
#define ItemsSize 5



// will create a matrix of size 10x10
void buildMatrix(int[MatSize][MatSize]);

// will print True if there is a path from i to j False otherwise
void hasPath(int[MatSize][MatSize], int, int);

// prints the size of shortest path from i to j if there is no path it will print -1
void shortestPathLength(int[MatSize][MatSize], int, int);



/*----------additional functions----------*/

//make the distance matrix using floyd warshall algorithm 0 is no path and any positive number is the distance
void MakeDist(int[MatSize][MatSize], int[MatSize][MatSize]);




