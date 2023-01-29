#include<bits/stdc++.h>

using namespace std;

int rekurencja(int n) {
	if(n == 0) {
		return 0;
	} 
	if(n == 1) {
		return 1;
	}
	
	return rekurencja(n-1) + 2*rekurencja(n-2);
}

int main()
{
	cout << rekurencja(10);
}

