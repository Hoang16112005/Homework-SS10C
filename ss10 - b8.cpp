#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n){

for (int i = 0; i < n; i++){
	for (int j = 0; j < n - i - 1; j++){
		if(a[j] > a[j + 1]){
			swap(a[j], a[j + 1]);
		}
	}
  }
}
int main() {
    int n, m;
    printf("Enter number of row: ");
    scanf("%d", &n);
    printf("Enter number of column: ");
    scanf("%d", &m);

    int a[n][m];

    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &a[j][i]);
        }
    }

    for (int i = 0; i < n; i++) {
        bubbleSort(a[i], n);
    }
    printf("Array after arranging:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
