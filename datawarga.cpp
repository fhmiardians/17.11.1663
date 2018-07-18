#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class Anggota{ // anggota sebagai sebuah class
	public:
		//atribut yang ada
		string namakk;
		string anggotakeluarga;
		int nomerrumah;
		int jumlah;
};

int main(){
	int tc;
	
	Anggota keluarga; //kelarga sebagai sebuah objek
	
	cout<<"Testcase: ";
	cin>>tc;
	
	for(int i=0;i<tc;i++){
		cin.ignore(); //untuk mengembalikan enter
		cout<<"Nama Kepala Keluarga: ";getline(cin,keluarga.namakk);
		cout<<"Anggota Keluarga: ";getline(cin,keluarga.anggotakeluarga);
		//getline digunakan untuk membaca inputan dalam 1 baris
		cout<<"Nomer Rumah: ";cin>>keluarga.nomerrumah;
		cout<<"Jumlah Anggota Kelarga: ";cin>>keluarga.jumlah;
		
		//menampilkan hasil
		cout<<keluarga.namakk<<endl;
		cout<<keluarga.anggotakeluarga<<endl;
		cout<<keluarga.nomerrumah<<endl;
		cout<<keluarga.jumlah<<endl<<endl;
	}
	getch();
}
