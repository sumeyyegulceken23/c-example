#include <iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
	int sayi;
	cout << "sayi giriniz:";
	cin >> sayi;

	if ((sayi%3==0)&&(sayi%5==0))
	{
		cout << "sayi 3 ve 5 e tam bolunur";
	}
	else
	{
		cout<<"sayi 3 ve 5 e tam bolunmez.";
	}
}
