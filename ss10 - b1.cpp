#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[5] = {1, 2, 3, 4, 5};
	int n = 5;
	int x;
	int Exist = 0;
	printf("Enter random number: ");
	scanf("%d", &x);
	for (int i = 1; i <= n; i++){
		if (x >= a[0] && x <= a[n - 1]){
			Exist = 1;
		}
	}
	printf("%d", a[x]);
	return 0;
}
