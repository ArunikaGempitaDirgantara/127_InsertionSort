// InsertionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int n;
int arr[11];

void input() { //procedur untuk input
	while (true) { //looping
		cout << "Masukkan banyaknya elemen pada array : "; //Output ke layar
		cin >> n; //Input dari pengguna
		if (n <= 20) //Jika n kurang dari sama dengan 20
			break; //Keluar dari loop
		else { //Jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n"; //Output ke layar
		}
	}
	cout << endl; //Output baris kosong
	cout << "==========" << endl; //Output ke layar
	cout << "Masukkan elemen array" << endl; //Output ke layar
	cout << "==========" << endl; //Output ke layar

	for (int i = 0; i < n; i++) { //Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": "; //Output ke layar
		cin >> a[i]; //Input dari pengguna
	}
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
