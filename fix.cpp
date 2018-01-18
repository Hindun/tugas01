#include <iostream>
#include <string>
using namespace std;

class jam{
	public:
		void bersuara(string bunyi);
		int harga;
		string merk;
};

int main(){
	jam jamDinding,jamTangan,jamWeker;
	
	jamDinding.merk = "Bandul Sakana";
	jamDinding.harga = 235000;
	
	jamTangan.merk = "Couple Casio";
	jamTangan.harga= 760000;
	
	jamWeker.merk = "LED Digital Design Kayu alinsky";
	jamWeker.harga = 288000;
	
	cout <<"Jam Dinding "<<(jamDinding.merk) <<" Harganya                 : Rp. "<<(jamDinding.harga)<<endl;
	jamDinding.bersuara("sssssss");
	
	cout <<endl<<"Jam Tangan "<<(jamTangan.merk) <<" Harganya                   : Rp. "<<(jamTangan.harga)<<endl;
	jamTangan.bersuara("tik tik tik");
	
	cout <<endl<<"Jam Weker "<< (jamWeker.merk) <<" Harganya : Rp. "<<(jamWeker.harga)<<endl;
	jamWeker.bersuara("kriinggg");
}

void jam::bersuara(string bunyi){
	cout << "Bunyinya "<<bunyi<< " !!"<<endl;
}
