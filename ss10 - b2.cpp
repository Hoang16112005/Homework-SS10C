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
int main(){
	int a[5] = {13, 67, 45, 34, 98};
	int n = 5;
	bubbleSort(a, n);
	for (int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
