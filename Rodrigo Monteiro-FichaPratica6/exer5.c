#include <stdio.h>

#define N 6

void print_matrix(int matrix[][N], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiply_by_diagonal(int matrix[][N], int result[][N], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int diagonal_element = matrix[i][i];
        for (int j = 0; j < cols; j++) {
            result[i][j] = diagonal_element * matrix[i][j];
        }
    }
}

int main() {
    int A[N][N] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36}
    };
    int B[N][N];
    
    multiply_by_diagonal(A, B, N, N);
    
    printf("Matriz A:\n");
    print_matrix(A, N, N);
    
    printf("\nMatriz B:\n");
    print_matrix(B, N, N);
    
    return 0;
}
