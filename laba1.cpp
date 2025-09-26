//#include <iostream> 
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//
//	float a;
//	cout << "Введите температуру: ";
//	cin >> a;
//
//	if (a < 0) {
//		cout << "Наденьте зимнюю одежду" << endl;
//	}
//	else if (a >= 0 && a <= 10) {
//		cout << "Наденьте тёплую одежду" << endl;
//	}
//	else if (a >= 11 && a <= 20) {
//		cout << "Наденьте лёгкую одежду" << endl;
//	}
//	else {
//		cout << "Наденьте летнюю одежду" << endl;
//	}
//	return 0;
//}

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");

	int a;
	int res = 0;
	cout << "Введите количество поездок: ";
	cin >> a;
	for (int i = 0; i < a; i++) {
		res += 5;
	}
	cout << "Общая стоимость: " << res;
	return 0;
}