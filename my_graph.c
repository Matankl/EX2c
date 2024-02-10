#include <stdio.h>
#include "my_mat.h"

int main() {

    // Declare a 10x10 matrixes
    int matrix[10][10];
    int dist[10][10];

    // Declare input
    char input;


    //main loop: scan for input and call the appropriate function
    do
    {
        scanf("%c", &input);

        // if A call buildMatrix (function 1)
        if (input == 'A')
        buildMatrix(matrix);
        MakeDist(matrix, dist);
        
        
        // if B call hasPath (function 2)
        if (input == 'B')
        {
            int Mi, Mj;
            scanf("%d %d", &Mi, &Mj);
            hasPath(dist, Mi, Mj);
        }

        // if C call shortestPathLength (function 3)
        if (input == 'C')
        {
            int Mi, Mj;
            scanf("%d %d", &Mi, &Mj);
            shortestPathLength(dist, Mi, Mj);
        }


    } while (input != 'd' && input != 'EOF');
    



    // Display the matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;


}

/* ---------------------------- possible future bugs ----------------------------

in the main loop, there may be a problem with the input, as the input is a char, and the scanf is for an int,
this may cause a problem, and the program may not work as intended







*/