#include<bits/stdc++.h>

using namespace std;

int min(int liczba[6], int size) {
	int mini = 100000;
	
	for(int i = 0; i < size; i++) {
		if(liczba[i] < mini) {
			mini = liczba[i];
		}
	}
	
	if(mini < 0) {
		return mini;
	} else {
		return 0;
	}
}

int main()
{
	int array[6] = {1, 2, 3, 1, 1, 10};
	
	cout << min(array, 6);
}

