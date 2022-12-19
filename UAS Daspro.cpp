#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
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
  // proses input array
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
