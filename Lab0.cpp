// Лабораторна робота №0
#include <iostream>
using namespace std;

int main()
{
    const int MAX = 100;
    double A[MAX], B[MAX], C[MAX];
    int nA, nB, nC, i, m;

    // 1. Введення кількості елементів масиву
    do {
        cout << "Input number N < " << MAX << endl;
        cin >> nA;
    } while (nA <= 0 || nA > MAX);

    nB = nC = 0;

    // 2. Введення елементів масиву A
    for (i = 0; i < nA; i++) {
        cout << "A[" << i << "]=";
        cin >> A[i];
    }

    // 3. Введення індексу m
    do {
        cout << "Input index m ( 0 <= m <= " << nA - 1 << ") " << endl;
        cin >> m;
    } while (m < 0 || m >= nA);

    // 4. Розподіл елементів: більші за A[m] ідуть у масив B, інші — у масив C
    for (i = 0; i < nA; i++) {
        if (A[i] > A[m]) {
            B[nB++] = A[i];
        }
        else {
            C[nC++] = A[i];
        }
    }

    // 5. Виведення результатів
    cout << "\nRezult " << endl;
    cout << "B : " << endl;
    for (i = 0; i < nB; i++) {
        cout << B[i] << "\t";
    }
    cout << "\nC : " << endl;
    for (i = 0; i < nC; i++) {
        cout << C[i] << "\t";
    }
    cout << endl;

    return 0;
}