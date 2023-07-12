#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

// ������� ��� ��������� ��������� ������� � ������������ � ��������� ������
int getNextVertex(int height) {
    if (height % 2 == 0) {
        return height / 2;
    } else {
        return 3 * height + 1;
    }
}

// ������� ��� ���������� ������������� ������
void sortVertices(vector<int>& vertices) {
    for (int i = 0; i < vertices.size() - 1; i++) {
        for (int j = 0; j < vertices.size() - i - 1; j++) {
            if (vertices[j] > vertices[j + 1]) {
                int temp = vertices[j];
                vertices[j] = vertices[j + 1];
                vertices[j + 1] = temp;
            }
        }
    }
}

int main() {
    int i;
    cin >> i;

    vector<int> vertices;
    vertices.push_back(8848); // ��������� ��������� �������

    // ���������� ������ ������������� ������
    for (int height = 8848; height > 1; ) {
        height = getNextVertex(height);
        if (height > 8848)
            break;
        
        vertices.push_back(height);
    }

    // ��������� ������ �� ����������� �����
    sortVertices(vertices);

    // ���������, ���� �� � ������ ������� � ������� i
    if (i <= vertices.size()) {
        cout << vertices[i - 1] << endl;
    } else {
        cout << -1 << endl;
    }

	system("pause");
    return 0;
}