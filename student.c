#include<stdio.h>

int bubbleSort(float a[], int n) {
  int j, i;
  float temp;

  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - 1 - i; j++) {
      if(a[j] > a[j + 1]) {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
  return 0;
}

int main () {
  int n;

  printf("\n Enter the Numbers of Students : ");
  scanf("%d", &n);

  float a[n];

    printf("\n Enter Each Student Percentage : ");
    for (int r = 0; r < n; r++) {
      scanf("%f", &a[r]);
    }

    bubbleSort(a, n);

    printf("\n Student Percentage : \n");
    for(int r = 0; r < n; r++) {
      printf("%.2f", a[r]);
    }
    printf("\n");

    return 0;
}