#include <bits/stdc++.h>

using namespace std;

int pierwiastek(float liczba) {
	for (int i = 0; i<20; i++)
    {
        if (i*i == liczba)
        {
            return i;
        }
    }

}

int main() {
	cout << pierwiastek(2);
}
