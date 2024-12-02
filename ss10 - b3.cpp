#include <bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n){

for (int i = 1; i < n; i++){
	int x = a[i], pos = i - 1; // get element at index i
	while (pos >= 0 && x < a[pos]){
		a[pos + 1] = a[pos];
		--pos;
	}
	a[pos + 1] = x;
  }
}
int main(){
	int a[5] = {13, 67, 45, 34, 98};
	int n = 5;
	insertionSort(a, n);
	for (int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
