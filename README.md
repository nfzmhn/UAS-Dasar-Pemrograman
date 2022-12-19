# Ujian Akhir Semester 
<br>Mata Kuliah 	: Dasar Pemrograman
<br> Nama		: Zidni Nurfauzi Mahen
<br>NIM		:	1227050137
<br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
<br> Reposystory ini berisikan 2 program array 2 dimensi, program pertama adalah untuk menginputkan matriks kemudian transpose dari nilai matriks yang di inputkan, kemudian program kedua menentukan bilangan yang habis dibagi 3, 5, dan 7.

## Source Code

	#include <iostream>
	#include <iomanip>

	using namespace std;

	int main(){
		cout <<"NAMA	: Zidni Nurfauzi Mahen"<<endl;
		cout <<"NIM	: 1227050137"<<endl;
		cout <<"==============================="<<endl<<endl;
		cout << "	Program Input Matriks" << endl;
		cout << "=========================================" << endl;
		cout << endl;


	  int baris, kolom, i, j;
	  cout << "Masukan jumlah baris matriks: ";
	  cin >> baris;

	  cout << "Masukan jumlah kolom matriks: ";
	  cin >> kolom;
	  cout << endl;
	  int matriks[baris][kolom];


	  for(i = 0; i < baris ; i++){
	    for(j = 0; j < kolom; j++){
	      cout << "ELement Matriks [" <<i+1<<"."<<j+1<< "] : ";
	      cin >> matriks[i][j];
	    }
	    cout << endl;
	  }

	  cout << "Hasil matriks: " << endl;

	  // menampilkan array
	  for(i = 0; i < baris ; i++){
	    for(j = 0; j < kolom; j++){
	      cout << setw(3) << matriks[i][j] < " ";
	    }
	    cout << endl;
	  }
	  cout <<endl<<"Transpose Matriks"<<endl;
	  int tr [baris][kolom];
	  for (int i=0; i<baris; i++){
		for (int j = 0; j<kolom; j++){
			tr [j][i] = matriks [i][j];
		  }
	  }
	  cout <<"Hasil Transpose Matriks : "<<endl;
	  for (int i = 0; i<kolom; i++){
		for (int j = 0; j<baris; j++){
			cout <<tr[i][j]<<" ";
		  }
		  cout <<endl;
	  }
	  cout <<"PROGRAM ARRAY 2 DIMENSI"<<endl;
	  cout <<"=============================="<<endl;
	  int b1, k1;
	  cout <<"Input Jumlah Baris : "<<endl;
	  cin >>b1;
	  cout <<"Input Jumlah Kolom : "<<endl;
	  cin >>k1;

	  int m1[b1][k1];
	  for(i = 0; i < baris ; i++){
	    for(j = 0; j < kolom; j++){
	      cout << "ELement Matriks [" <<i+1<<"."<<j+1<< "] : ";
	      cin >> m1[i][j];
	    }
	    cout << endl;
	  }
	  cout << "Hasil Matriks:"<< endl;
		for(int i = 0; i<baris; i++){
		for(int j = 0; j<kolom; j++){
			cout << m1[i][j] << " ";
		}
		cout << endl;
	}
	for(int i = 0; i<baris; i++){
		for(int j = 0; j<kolom; j++){
			if(m1[i][j]%3 == 0 && m1[i][j]%5 == 0 && m1[i][j]%7 == 0 ){
				cout << "bilangan :" << m1[i][j] << endl;
			}

		}
	}
	cout << endl;

	  return 0;
	}

## Output
NAMA    : Zidni Nurfauzi Mahen
NIM     : 1227050137
=========================================
Program Input Matriks
=========================================

Masukan jumlah baris matriks: 2
Masukan jumlah kolom matriks: 2

ELement Matriks [1.1] : 1
ELement Matriks [1.2] : 2

ELement Matriks [2.1] : 3
ELement Matriks [2.2] : 4

Hasil matriks:
  1  2
  3  4

Transpose Matriks
Hasil Transpose Matriks :
1 3
2 4
PROGRAM ARRAY 2 DIMENSI
==============================
Input Jumlah Baris : 2
Input Jumlah Kolom : 2
ELement Matriks [1.1] : 210
ELement Matriks [1.2] : 105

ELement Matriks [2.1] : 1
ELement Matriks [2.2] : 2

Hasil Matriks:
210 105
1 2
bilangan :210
bilangan :105


--------------------------------
Process exited after 23.59 seconds with return value 0
Press any key to continue . . .
