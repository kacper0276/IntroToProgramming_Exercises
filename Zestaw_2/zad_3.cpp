#include <bits/stdc++.h>

using namespace std;

bool czy_kwadrat(int n) {
	int a = 1;
	
	for(;;) {
		if((a*a) == n) {
			return 1;
		}
		
		if(a >= n) {
			return 0;
		}
		
		a++;
	}
}

int main() {
	int n;
	
	cin >> n;
	
	if(czy_kwadrat(n)) {
		cout << "TAK \n";
	} else {
		cout << "NIE \n";
	}
}
