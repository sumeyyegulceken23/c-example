#include <iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
	int toplam = 0;
	int sayi;
	for (int i = 1; i <=10; i++)
	{
		cout << i << ".sayiyi giriniz:";
		cin >> sayi;
		toplam = toplam + sayi;
		
	}
	cout << "girilen 10 sayinin toplami:" << toplam;
}
