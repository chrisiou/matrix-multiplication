#include <stdio.h>

// void matrix_multiplication(int result[][3], int a[][3], int b[][3]);
void print_matrix(int matrix[3][3]);


int main() {
  int a[3][3];
  int b[3][3];
  int i;

  for (i=0; i<3; i++) {
    scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
  }

  for (i=0; i<3; i++) {
    scanf("%d %d %d", &b[i][0], &b[i][1], &b[i][2]);
  }

  print_matrix(a);
  print_matrix(b);

  return 0;
}

void print_matrix(int matrix[3][3]) {
  int i, j;

  for (i=0; i<3; i++) {
    for (j=0; j<3; j++) {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }

  printf("\n");
}