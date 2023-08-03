#include<iostream>
#include<math.h>
#include<fstream>
#include<boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;
using namespace std;

int asal_mi(cpp_int sayi){

	cpp_int asal;
	cpp_int kok=sqrt(sayi);

	ifstream oku("primes.txt",ios::in|ios::app);

	while(oku>>asal){

		cout<<asal<<endl;
		cout<<kok<<endl;
		
		if(asal>kok){
			cout<<sayi<<" sayisi asaldir."<<endl;
			return 0;
		}

		if(sayi%asal==0){
			cout<<sayi<<" sayisi asal degildir."<<endl;
			return 0;
		}
	}

	return 0;
}

int main(){
	
	cpp_int sayi;

	cout<<"Bir sayi giriniz: ";
    cin>>sayi;

	asal_mi(sayi);

	return 0;
}