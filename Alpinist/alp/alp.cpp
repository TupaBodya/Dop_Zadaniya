#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int nextHeight(int X) { 
    if (X % 2 == 0) {
        return X / 2;
    } else {
        return 3 * X + 1;
    }
}

bool RightHeight(int X) {
    return X < 8848;
}

vector<int> listPerspectiveHeights(int startHeight) { 
    vector<int> perspectives;
    int currentHeight = startHeight;
    while (RightHeight(currentHeight)) {
        if (currentHeight == 8848) {
            perspectives.push_back(currentHeight);
            break;
        } else if (currentHeight % 2 == 0) {
            perspectives.push_back(currentHeight);
            currentHeight = nextHeight(currentHeight);
        } else {
            currentHeight = nextHeight(currentHeight);
        }
    }
;

    return perspectives;
}

int main() {
	 setlocale(LC_ALL, "Russian");
	 system("color F0");
    int startHeight;
    cout << "Введите начальную высоту: ";
    cin >> startHeight;

    vector<int> perspectives = listPerspectiveHeights(startHeight); 
    sort(perspectives.begin(), perspectives.end());

    int i;
    cout << "Введите номер вершины в списке: ";
    cin >> i;

    if (i <= perspectives.size()) { 
        cout << "Высота " << i << "-й вершины: " << perspectives[i-1] << endl;
    } else {
        cout << -1 << endl;
    }

	system("pause");

    return 0;
	
}
