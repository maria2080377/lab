#include <iostream> 
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");

	int a[10];
	int suma = 0;

	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}

	int mini = a[0];

	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
		suma += a[i];

		if (a[i] < mini) {
			mini = a[i];
		}
	}
	cout << endl;
	cout<< "Сумма: "<< suma << endl;
	cout << "Минимальное значение: " << mini << endl;

	for (int i = 1; i < 10; i++) {
		int k = a[i];
		int j = i - 1;

		while (j >= 0 && a[j] > k) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = k;
	}

	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	return 0;
}