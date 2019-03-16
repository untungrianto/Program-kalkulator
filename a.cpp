#include<iostream>
using namespace std;
int main()
{
	int angka[10][10];
	int i, x;
	int pilih;
	int max, min, total=0;
	float rerata = 0;
	string ulang;
	cout << "Array Multidimensi 10 X 10" << endl;
	cout << "==============================" << endl;
	cout << endl;
	for(i=0 ; i < 10 ; i++){
		for (x=0 ; x < 10 ; x++){
			cout << "Input data ke [" << i << "][" << x << "] : "; cin >> angka[i][x];
		}
		cout << endl;
	}
	cout << "=============================" << endl;
	cout << "Fitur yang tersedia : " << endl;
	cout << "1. Menampilkan Array" << endl;
	cout << "2. Mencari Nilai Terbesar" << endl;
	cout << "3. Mencari Nilai Terkecil" << endl;
	cout << "4. Menghitung Nilai Rata-Rata" << endl;
	cout << "5. Menghitung Nilai Total" << endl;
	cout << endl;
	balik :
	cout << "Anda memilih nomor [1-5] ? : "; cin >> pilih;
	cout << endl;
	switch (pilih){
		case 1 :
			cout << "======== Menampilkan Array ========" << endl;
			cout << endl;
			for (i=0 ; i < 10 ; i++){
				for (x=0z; x < 10 ; x++){
					cout << angka[i][x] << "  ";
				}
				cout << endl << endl;
			}
			break;
		case 2 :
			cout << "======== Nilai Terbesar ========" << endl;
			cout << endl;
			int max1[10];
			for (i=0 ; i < 10 ; i++){			//baris
				for (x=0 ; x < 10 ; x++){		//kolom
					if(x == 0){
						max1[i] = angka[i][0];
					} else if (angka[i][x] > max1[i]){
						max1[i] = angka[i][x];
					}
				}
				if (i == 0){
					max = max1[0];
				} else if (max1[i] > max){
					max = max1[i];
				}
			}
			cout << "Angka Terbesar yaitu " << max << endl;
			break;
		case 3 :
			cout << "======== Nilai Terkecil ========" << endl;
			cout << endl;
			int min1[10];
			for (i=0 ; i < 10 ; i++){			//baris
				for (x=0 ; x < 10 ; x++){		//kolom
					if(x == 0){
						min1[i] = angka[i][0];
					} else if (angka[i][x] < min1[i]){
						min1[i] = angka[i][x];
					}
				}
				if (i == 0){
					min = min1[0];
				} else if (min1[i] < min){
					min = min1[i];
				}
			}
			cout << "Angka Terkecil yaitu " << min << endl;
			break;
		case 4 :
			cout << "========= Nilai Rerata =========" << endl;
			cout << endl;
			float jumlah[10];
			float hitung[10];
			jumlah[i] = 0;
			for (i=0 ; i < 10 ; i++){
				hitung[i] = 0;
				for (x=0 ; x < 10 ; x++){
					hitung[i] += angka[i][x];		
				}
				jumlah[i] = hitung[i]/10;
				rerata += jumlah[i]/10;
			}
			cout << "Reratanya yaitu " << rerata << endl;
			break;
		case 5 :
			cout << "========= Nilai Total ==========" << endl;
			cout << endl;
			int total1[10];
			for (i=0 ; i < 10 ; i++){
				total1[i] = 0;
				for (x=0 ; x < 10 ; x++){
					total1[i] += angka[i][x];
				}
				total += total1[i];
			}
			cout << "Nilai Totalnya yaitu " << total << endl;
			break;
		default :
			cout << "Maaf, menu tidak terdaftar." << endl;
			break;	
	}
	cout << "Pilih lagi [Y/N] ? : "; cin >> ulang;
	cout << endl;
	if (ulang == "y" || ulang == "Y"){
		goto balik;
	} else if (ulang == "n" || ulang == "N"){
		goto akhir;
	}
	akhir :
	cout << "Tengkyu" << endl;
	return 0;
}