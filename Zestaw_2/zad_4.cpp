#include <bits/stdc++.h>

using namespace std;

int ile_nieparzystych(int a[], int n) {
	int suma = 0;
	
	for(int i = 0; i < n; i++) {
		if(a[i] % 2 != 0) {
			suma += a[i];
		}
	}
	
	return suma;
}

int main() {
	int a[10] = {1, 1, 1, 2, 2, 2, 1, 2, 1, 2}, n = 10;
	
	cout << ile_nieparzystych(a, n);
}
