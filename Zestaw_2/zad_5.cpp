#include <bits/stdc++.h>

using namespace std;

vector<int> wym(int n) {
	vector<int> tab;
	
	for(int i = 0; i < n; i++) {
		tab.push_back(i);
	}
	
	return tab;
}

int main() {
	int n;
	
	cin >> n;
	
	vector<int> cos = wym(n);
	
	for(int i = 0; i < cos.size(); i++) {
		cout << cos[i] << "  ";
	}
}
