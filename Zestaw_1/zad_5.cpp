#include<bits/stdc++.h>

using namespace std;

vector<int> podzielnePrzezTrzy(vector<int> tab) {
	vector<int> wynik;
	
	for(int i = 0; i < tab.size(); i++) {
		if(tab[i] % 3 == 0 && tab[i] % 2 != 0) {
			wynik.push_back(tab[i]);
		}
	}
	
	return wynik;
}

int main()
{
	int n, liczba;
	vector<int> ciag;
	
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> liczba;
		ciag.push_back(liczba);
	}
	
	vector<int>wynik = podzielnePrzezTrzy(ciag);
	
	for(int i = 0; i < wynik.size(); i++) {
		cout << wynik[i] << "  ";
	}
}

