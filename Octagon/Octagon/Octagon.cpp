#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL,"Rus");
    int a, b;
	cout<<"������� ������� a: "<<endl;
    cin >> a;
	cout<<"������� ������� b: "<<endl;
    cin >> b ;

    double given_area = a + b * sqrt(2);

    if (floor(given_area) == given_area) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

	system("pause");
    return 0;
}