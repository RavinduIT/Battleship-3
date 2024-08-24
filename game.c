#include <stdio.h>

int main() {
    
    // Taking inputs
    int R, C, N, x, y;
    scanf("%d %d %d", &R, &C, &N);

    int ships[R][C];
    // Creating the grid
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d ", &ships[i][j]);
        }
    }

    int L = 0;
    for (int k = 0; k < N; k++) {
        scanf("%d %d", &x, &y);
        if (ships[x][y] == 1) {
             L = 1;
          } else {
               L = 0;
        } 
    }
    if (L == 1) {
        printf("Isuru\n");
    } else {
        printf("Dulaj\n");
    }
    return 0;
}




/*#include <stdio.h>

int main() {
    
    // Taking inputs
    int R, C, N, x, y;
    scanf("%d %d %d", &R, &C, &N);

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

    for (int k = 0; k < N; k++) {
        scanf("%d %d", &x, &y);
        if (ships[x][y] == 1) {
             count--;
          }else{
            N--;
        } 
    }
    if (count == 0) {
        printf("Isuru\n");
    } else {
        printf("Dulaj\n");
    }
    return 0;
}*/