#include <iostream>
#include<string>
#include<cmath>

using namespace std;

int main() {
	int x;
	int toplam = 1;
	cout << "faktoriyeli alinacak sayiyi giriniz:";
	cin >> x;

    for (int i = 1; i <= x; i++)
	{
		toplam = toplam * i;
	}

	cout << x << "!" << "=" << toplam << endl;
	
}
