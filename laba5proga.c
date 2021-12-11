#include <stdio.h>

int main(){
  int arr[9] = {10, 20, 30, 40, 50, 60, 70};
  int mat[2][2] = {1, 2, 1, 1};
  int mat2[2][2] = {3, 1, 0, 2};
  int ans[2][2] = {0};

  system("chcp 1251");
  printf("MY array:\n");
  for (int i = 0; i < 7; i++) {
    printf("%d", arr[i]);
    printf(" ");
  }
  printf("\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        ans[i][j] += mat[i][k] * mat2[k][j];
      }
    }
  }
  for(int x = 0; x < 2; x++) {
    for (int y = 0; y < 2; y++) {
      printf("%d", ans[x][y]);
      printf(" ");
    }
    for (int y = 0; y < 2; y++) {
      printf("%d", ans[y][x]);
      printf(" ");
    }
    printf("\n");
  }
  return 0;
}
