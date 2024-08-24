#include <stdio.h>

int main() {
    
    // Taking inputs
    int R, C, N, x, y;
    scanf("%d %d %d", &R, &C, &N);
    if(R >= 20 || C >= 20 || N >= 5){
        return 0;
    }

    int ships[R][C];
    int count = 0;
    // Creating the grid
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d ", &ships[i][j]);
            if (ships[i][j] == 1){
                count++;
            }
        }
    }
    int k = 0;
    while ( k < N ) {
        scanf("%d %d", &x, &y);
        if(x >= 0 && x < R && y >= 0 && y < C){
            if (ships[x][y] == 1) {
                 ships[x][y] = 0;
                 count--;
                 k++;
             }else{
                N--;
            }
        } 
    }
    if (count == 0) {
        printf("Isuru\n");
    } else {
        printf("Dulaj\n");
    }
    return 0;
}