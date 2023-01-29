#include<bits/stdc++.h>
using namespace std;

int zad2() {
	int suma = 0;
	
	for(int i = -100; i <= 0; i++) {
		if(i % 2 != 0) {
			suma += i;
		}
	}
	
	return suma;
}

bool czyPierwsza_Zad_3(int n) {
	if(n < 2){
		return false;
	}
	
	for(int i = 2; i * i <= n; i++) {
		if(n % i == 0) {
			return false;
		}
	}
	
	return true;
}

int zad4(int tab[], int size) {
	int max = 0;
	
	for(int i = 0; i < size; i++) {
		if(tab[i] > max && tab[i] % 2 != 0) {
			max = tab[i];
		}
	}
	
	if(max == 0) {
		return -1;
	}
	
	return max;
}

vector<int> zad_5(vector<int> tab) {
	vector<int> zamiana;
	
	for(int i = 0; i < tab.size(); i++) {
		int pom = tab[i] * tab[i];
		
		zamiana.push_back(pom);
	}
	
	return zamiana;
}

bool zad6(int n) {
	int jednosci, dziesiatki;
	
		jednosci = n%10;
		n/=10;
		dziesiatki = n%10;
	
		if(jednosci == dziesiatki) {
			return 1;
		} 
		
		return 0;
}

int main()
{
	
//	Zad. 2
	cout << zad2() << endl;	
	
//	Zad. 3
	if(czyPierwsza_Zad_3(5)) {
		cout << "TAK \n";
	} else {
		cout << "NIE \n";
	}
	
//	Zad. 4
	int array[] = {2, 3, 2};
	cout << zad4(array, 3) << endl;
	
//	Zad. 5
	vector<int> tab;
	
	for(int i = 0; i < 10; i++) {
		int liczba;
		cin >> liczba;
		tab.push_back(liczba);
	}	
	
	vector<int> wynik = zad_5(tab);
	
	for(auto el: wynik) {
		cout << el << " ";
	}
	cout << endl;

//	Zad. 6
	if(zad6(112)) {
		cout << "TAK \n";
	}else {
		cout << "NIE \n";
	}
	
	int a = 4^4;
	
	cout << a << endl;
}

