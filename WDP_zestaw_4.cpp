#include<bits/stdc++.h>

using namespace std;

void zad_2(int n) {
	for(int i = 1; i <= n; i++) {
		if(i % 2 == 0) {
			cout << i << endl;
		}
	}
}

string zad_3(int n) {
	
	if(n == 0) {
		return "2";
	}
	if(n == 1) {
		return "22";
	}
	
	
	return zad_3(n-1) + "2";
	
//zad_3(4)	zad_3(3) zad_3(2) zad_3(1) zad_3(0) 
//	22222			2222		222		22	
}

int zad_4(int tab[], int size, int n) {
	int ile = 0;
	
	for(int i = 0; i < size; i++) {
		if(tab[i] > n) {
			ile++;
		}
	}
	
	return ile;
}

vector<int> zad_5(vector<int> tab) {
	vector<int> reverse;
	
	for(int i = tab.size() - 1; i >= 0; i--) {
		reverse.push_back(tab[i]);
	}
	
	return reverse;
}

bool zad_6(int n) {
	vector<int> tab;
	
	if(n < 0) {
		return 0;
	}
	
	if(n < 10) {
		return 1;
	}
	
	while(n > 0) {
		int pom = n % 10;
		tab.push_back(pom);
		n /= 10;
	} 
	
	int size = tab.size() - 1, iterable = 0;
	
	while(size > iterable) {
		if(tab[size] != tab[iterable]) {
			return 0;
		}
		
		--size;
		++iterable;
	}
	
	return 1;
}

int main()
{
//	Zad. 2
	int n2;
	cin >> n2;
	zad_2(n2);
	
//	Zad. 3
	cout << zad_3(5) << endl;
	
//	Zad. 4
	int array[] = {5, 5, 5, 7, 1};
	int size = 5;
	int n = 10;
	cout << zad_4(array, size, n) << endl;
	
//	Zad. 5
	int liczba;
	vector<int> tab;
	
	for(int i = 0; i < 10; i++) {
		cin >> liczba;
		tab.push_back(liczba);
	}
	
	vector<int> reverse = zad_5(tab);
	
	for(auto el: reverse) {
		cout << el << "  ";
	}
	cout << endl;
	
//	Zad. 6
	if(zad_6(4556)) {
		cout << "TAK \n";
	} else {
		cout << "NIE \n";
	}
}

