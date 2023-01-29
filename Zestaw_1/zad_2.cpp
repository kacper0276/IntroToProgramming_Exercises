#include<bits/stdc++.h>

using namespace std;

int sumaParz(vector<int> ciag) {
	int suma = 0;
	for(int i = 0; i < ciag.size(); i++) {
		if(ciag[i] % 2 == 0) {
			suma += ciag[i];
		}
	}
	
	return suma;
}

int sumaNieparz(vector<int> ciag) {
	int suma = 0;
	for(int i = 0; i < ciag.size(); i++) {
		if(ciag[i] % 2 != 0) {
			suma += ciag[i];
		}
	}
	
	return suma;
}
int main()
{
	vector<int> ciag;
	int liczba;
	
	for(int i = 0; i < 10; i++) {
		cin >> liczba;
		ciag.push_back(liczba);
	}
	
	int suma_parzysta = sumaParz(ciag);
	int suma_nieparzysta = sumaNieparz(ciag);
	
	cout << suma_nieparzysta << "   " << suma_parzysta; 
}

