// Loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Masukkan jumlah data: ";
    int a; "Masukkan jumlah data: ";
    cin >> a;

    int jumlahGenap = 0;
    int jumlahGanjil = 0;

    for (int i = 1; i < a; i++) {
        if (i % 2 == 0) {
            jumlahGenap += i;
        }
        else {
            jumlahGanjil += i;
        }
    }
    cout << "Jumlah total bilangan genap: " << jumlahGenap << endl;
    cout << "Jumlah total bilangan ganjil: " << jumlahGanjil << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
