/*
	PROGRAM UNTUK MENGHITUNG NILAI FAKTORIAL DARI SUATU BILANGAN
	Written by : Izzu Zantya Fawwas

	Ketentuan program
	1. program hanya menerima inputan bilangan non-negatif, selain itu maka error

	Bugs list
	1. inputan mulai angka >= 17 menyebabkan hasilnya tidak valid
*/

#include <iostream>

using namespace std;

// deklarasi fungsi faktorial
int faktorial(int bilangan) {

	// jika nilai variabel bilangan sama dengan nol
	if (bilangan == 0) {
		// kembalikan nilai satu
		return 1;
	}
	
	// rekursi fungsi faktorial
	return bilangan * faktorial(bilangan - 1);
}

int main()
{

	cout << "//////////////////////////////////////////////////////\n\nPROGRAM UNTUK MENGHITUNG NILAI FAKTORIAL DARI SUATU BILANGAN\nWritten by : Izzu Zantya Fawwas\n\nKetentuan program\n1. program hanya menerima inputan bilangan non-negatif, selain itu maka error\n\nBugs list\n1. inputan mulai angka >= 17 menyebabkan hasilnya tidak valid\n\n//////////////////////////////////////////////////////\n\n";

	// deklarasi variabel bilangan
	int bilangan;

	// input bilangan dari user
	utama : cout << "Masukkan bilangan : ";
	cin >> bilangan;

	// jika bilangan dari user tidak negatif
	if (bilangan >= 0) {

		// tampilkan hasilnya
		cout << bilangan << "! = " << faktorial(bilangan) <<endl<<endl;
	}
	else {
		// jika bilangan dari user bernilai negatif maka tampilkan error
		cout << "Error..."<<endl<<endl;
	}

	// pengulangan program
	goto utama;

	return 0;
}