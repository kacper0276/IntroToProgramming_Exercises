#include <bits/stdc++.h>

using namespace std;

bool pitagoras(int a, int b, int c) {
	if((a * a) + (b*b) == (c*c)) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int a, b, c;
	
	cin >> a >> b >> c;
	
	if(pitagoras(a,b,c)) {
		cout << "TAK \n";
	} else {
		cout << "NIE \n";
	}
}
