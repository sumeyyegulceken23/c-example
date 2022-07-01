 #include <iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
	int x;

	cout << "bir sayi giriniz:";
	cin >> x;

	if (x%2==0)
	{
		cout << "sayi ciftir.";
	}
	else
	{
		cout << "sayi tektir.";
	}
	return 0;
}
