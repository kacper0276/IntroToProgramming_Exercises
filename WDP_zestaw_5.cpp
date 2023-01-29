#include<bits/stdc++.h>

using namespace std;

void zad_2(int a, int b, int c) {
	
	if(a == b || a == c || b == c) {
		cout << "TAK \n";
	} else {
		cout << "NIE \n";
	}
}

int zad_3(int n) {
	int suma = 0;
	
	for(int i = 1; i <= n; i+=2) {
		suma += i;
	}
	
	return suma;
}

int zad_4(int tab[], int size, int m) {
	int ile = 0;
	
	for(int i = 0; i < size; i++) {
		if(tab[i] == m) {
			ile++;
		}
	}
	
	return ile;
}

int zad_5(vector<int> tab) {
	double suma = 0;
	int wynik = 0;
	
	for(int i = 0; i < tab.size(); i++) {
		suma += tab[i];
	}
	
	double srednia = suma/10;
	
	for(int i = 0; i < tab.size(); i++) {
		if(tab[i] > srednia) {
			wynik++;
		}
	} 
	
	return wynik;
}

bool zad_6(int array[], int size) {
	for(int i = 0; i < size - 1; i++) {
		if(array[i] < array[i+1]) {
			return 0;
		}
	}
	
	return 1;
}

int main() {
	
//	Zad. 2
	zad_2(2, 3, 2);
	
//	Zad. 3
	cout << zad_3(12) << endl;
	
//	Zad. 4
	int array[] = {2, 3, 4, 2, 2}, size = 5, m = 2;
	cout << zad_4(array, size, m) << endl;
	
//	Zad. 5
	vector<int> tab;
	for(int i = 0; i < 10; i++) {
		int pom;
		cin >> pom;
		tab.push_back(pom);
	}
	
	cout << zad_5(tab) << endl;
	
//	Zad. 6
	int array_6[] = {1, 2, 3, 4, 5}, rozmiar = 4;
	
	if(zad_6(array_6, rozmiar)) {
		cout << "TAK \n";
	} else {
		cout << "NIE \n";
	}
}
