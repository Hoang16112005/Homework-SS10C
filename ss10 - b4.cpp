#include <bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n){
	for (int i = 0; i < n - 1; i++){
		int min_pos = i; //save the smallest index
		for (int j = i + 1; j < n; j++){// check indexs behind the present index and update the smallest index
		if (a[j] < a[min_pos]){
			min_pos = j;
		}
	}
	swap(a[i], a[min_pos]);
  }
} 
int main(){
	int a[5] = {13, 67, 45, 34, 98};
	int n = 5;
	selectionSort(a, n);
	for (int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
