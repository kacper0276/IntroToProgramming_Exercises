#include <bits/stdc++.h>

using namespace std;

bool czy_jest(vector<int> tab, int n) {
	for(int i = 0; i < tab.size(); i++) {
		if(tab[i] == n) {
			return true;
		}
	}
	return false;
} 

void rozklad(int n) {
	int a = 1, b = 1;
	vector<int> bez;
	
	while(a < n) {
		b++;
		
		if((a*a) + (b*b) == n && !czy_jest(bez, b)) {
			cout << "A: " << a << " B: " << b << endl;
			bez.push_back(a);
		}
		
		if(b >= n) {
			a++;
			b=1;
		}
		
	}
}

int main() {
	int n;
	
//	cin >> n;
	
//	rozklad(n);
//	cout << endl;
	
	rozklad(5);
	cout << endl;
	
	rozklad(29);
	cout << endl;
	
	rozklad(125);
	cout << endl;
	
	rozklad(85);
	cout << endl;
	
	rozklad(173);
	cout << endl;
}
