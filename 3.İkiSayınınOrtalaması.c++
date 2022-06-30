
 #include <iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
	int sayi1, sayi2, ortalama;

	cout << "birinci sayiyi giriniz:";
	cin >> sayi1;

	cout << "ikinci sayiyi giriniz:";
	cin >> sayi2;

	ortalama = (sayi1 + sayi2) / 2;

	cout << "sayilarin ortalamasi:" << ortalama;
	return 0;
}
