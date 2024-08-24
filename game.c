#include <stdio.h>

int main() {
    
    // Taking inputs
    int R, C, N;
    scanf("%d %d %d", &R, &C, &N);

    int ships[R][C];
    
    // Creating the grid
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d ", &ships[i][j]);
        }
    }
    int guess[N][2];
    for( int i = 0; i < N; i++){
        scanf("%d %d", &guess[i][0], &guess[i][1]);
    }

    for(int i = 0; i < N; i++){
        int Row = guess[i][0];
        int Col = guess[i][1];
        if(ships[Row][Col] == 0){
            printf("Dulaj\n");
            return 0;
        }
    }
    printf("Isuru\n");
    return 0;
}