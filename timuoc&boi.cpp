#include <iostream>
using namespace std;
int main()
{
	int soUoc;
	cout << "Nhap so tim Uoc!!!";
	cout << "\nNhap so: ";
	cin >> soUoc;
	cout << "Uoc cua " << soUoc << " la :\n";
	for (int i = 1; i <= soUoc; i++)
	{
		if (soUoc % i == 0)
		{
			cout << i << " ";
		}
	}

	cout << endl << endl << endl;
	
	int soBoi, SoCuoi, KetQua = 1;
	cout << "Nhap 2 so tim Boi!!!";
	cout << "\nNhap so: ";
	cin >> soBoi;
	cout << "\nSo ket thuc: ";
	cin >> SoCuoi;
	int i = 1;

	while (KetQua < SoCuoi)
	{	
		KetQua= soBoi* i;
		i++;
		cout << KetQua << " ";
	}
	
	return 0;

}