//#include <iostream>      //Задача 1
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	int a;
//	cout << "Введите длину в сантиметрах: ";
//	cin >> a;
//	cout << "Количество метров: "<<a/100<<","<<" количество сантиметров: "<<a%100;
//
//	return 0;
//}



//#include <iostream>      //Задача 2
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	int a,b;
//	cout << "Введите длину: ";
//	cin >> a;
//	cout << "Введите ширину: ";
//	cin >> b;
//	cout << "Площадь прямоугольника: "<<a*b;
//
//	return 0;
//}





//#include <iostream>       //Задача 3
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	int a;
//	cout << "Введите температуру в градусах Цельсия: ";
//	cin >> a;
//	cout << "Температура в градусах Фаренгейда: "<<((a*9)/5)+32;
//
//
//	return 0;
//}



//#include <iostream>       //Задача 4
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	int a;
//	cout << "Введите число: ";
//	cin >> a;
//	if (a % 2 == 0) {
//		cout << "Число четное";
//	}
//	else {
//		cout << "Число нечетное";
//	}
//
//
//	return 0;
//}



//#include <iostream>         //Задача 5
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	int a;
//	cout << "Введите число: ";
//	cin >> a;
//	if (a % 3 == 0 && a%5==0) {
//		cout << "Число делится на 3 и на 5";
//	}
//	else if (a%3==0) {
//		cout << "Число делится на 3";
//	}
//	else if (a % 5 == 0) {
//		cout << "Число делится на 5";
//	}
//	else {
//		cout << "Число не делится на 5 и на 3";
//	}
//
//
//	return 0;
//}




//#include <iostream>         //Задача 6
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "RU");
//    int a;
//    cout << "Введите возраст: ";
//    cin >> a;
//    if (a < 18 && a>0) {
//        cout << "Возраст меньше 18 лет";
//    }
//    else if (a >= 18 && a <= 60) {
//        cout << "Возраст от 18 и до 60 лет";
//    }
//    else if (a > 60) {
//        cout << "Возраст больше 60 лет";
//
//    }
//    else {
//        cout << "Неправильно введён возраст";
//    }
//    return 0;
//}





//#include <iostream>       //Задача 7
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "RU");
//    int a;
//
//    cout << "Введите число: ";
//    cin >> a;
//
//    for (int i = 1; i <= a; i++) {
//        cout << i << "^2=" << i * i << endl;
//    }
//
//    return 0;
//}






//#include <iostream>        //Задача 8
//#include <string>
//using namespace std;
// 
//int main() {
//    setlocale(LC_ALL, "RU");
//
//
//    string s;
//    int suma = 0;
//
//    getline(cin, s);
//
//    string buk = "aeiouAEIOU";
//
//    for (char el : s) {
//        for (char glas : buk) {
//            if (el == glas) {
//                suma++;
//            }
//        }
//    }
//
//    cout << "Гласных букв: " << suma;
//    return 0;
//}





//#include <iostream>      //Задача 9
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "RU");
//
//    int a;
//    int suma = 0;
//
//    cout << "Введите число: ";
//    cin >> a;
//
//    for (int i = 1; i <= a; i++) {
//        if (i % 2 == 0 || i % 5 == 0) {
//            suma += i;
//        }
//    }
//    cout << suma;
//
//    return 0;
//}





//#include <iostream>      //Задача 10
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "RU");
//    int a;
//
//    cout << "Введите число: ";
//    cin >> a;
//
//    if (a < 0) {
//        cout << "Число отрицательное";
//    }
//    else if (a > 0) {
//        cout << "Число положительное";
//    }
//    else {
//        cout << "Число равно 0";
//    }
//
//    return 0;
//}





//#include <iostream>       //Задача 11
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "RU");
//    for (int i = 32; i < 127; i++) {
//        char c = static_cast<char>(i);
//        cout << i << " " << c << endl;
//    }
//
//    return 0;
//}