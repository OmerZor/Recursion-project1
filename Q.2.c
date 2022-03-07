#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define N 4 


int path_exists(int mat[][N], int rows, int cols);

void main() {
	int rows = 0;
	int cols = 0;
	int mat[N][N];
	

	printf("plese enter nums\n");

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &mat[i][j]);
		}
	}
	int res = path_exists(mat, rows, cols);

	(res == 1) ? printf("there is a path") : printf("there isn't any path");
}

int path_exists(int mat[][N], int rows, int cols) {
	

	if (rows == N - 1 && cols == N - 1) {
		if (mat[rows][cols] == 1) {
			return 1;
		}
		else
		return 0;
	}
	
		

	if (rows< N-1 &&mat[rows+1][cols] == 1) {
		return path_exists(mat, rows + 1, cols);
	}
	if (cols<N-1&&mat[rows][cols+1] == 1) {
		return path_exists(mat, rows, cols + 1);
	}
	if (cols < N-1&&rows<N-1&&mat[rows+1][cols+1] == 1) {
		return path_exists(mat, rows + 1, cols + 1);
	}
}


