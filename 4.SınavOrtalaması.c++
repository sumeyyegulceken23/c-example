#include <iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
	int not1, not2,ortalama;

	cout << "birinci yazili notu:";
	cin >> not1;

	cout << "ikinci yazili notu:";
	cin >> not2;

	ortalama = ((not1 + not2) / 2);

	if (ortalama>=50)
	{
		cout << "gectiniz";
	}
	else
	{
		cout << "kaldiniz";
	}

	return 0;
