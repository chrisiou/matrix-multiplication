#include <stdio.h>

void scan_matrix(int matrix[][3]);
void matrix_multiplication(int result[][3], int a[][3], int b[][3]);
void print_matrix(int matrix[][3]);

int main() {
  int a[3][3];
  int b[3][3];
  int result[3][3];

  scan_matrix(a);
  scan_matrix(b);

  matrix_multiplication(result, a, b);

  print_matrix(result);

  return 0;
}

void scan_matrix(int matrix[][3]) {
  int i;

  for (i=0; i<3; i++) {
    scanf("%d %d %d", &matrix[i][0], &matrix[i][1], &matrix[i][2]);
  }
}


void matrix_multiplication(int result[][3], int a[][3], int b[][3]) {
  int i, j, k;
  int sum = 0;

  for (i=0; i<3; i++) {
    for (j=0; j<3; j++) {
      for (k=0; k<3; k++) {
        sum += a[i][k] * b[k][j];
      }
    result[i][j] = sum;
    sum = 0;
    }
  }
}

void print_matrix(int matrix[][3]) {
  int i, j;

  for (i=0; i<3; i++) {
    for (j=0; j<3; j++) {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
}