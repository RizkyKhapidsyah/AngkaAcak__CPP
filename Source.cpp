#include <iostream>
#include <cstdlib> //mengandung fungsi random
#include <conio.h>

using namespace std;

void CetakGaris();
int i;
char Keputusan;

int main()
{
	CetakGaris(); cout << "Cetak Angka Secara Acak Sampai 10x\n"; CetakGaris();
	for (i = 0; i < 10; i++)
	{
		cout << 1 + (rand() % 6) << endl;
	} cout << endl;

	CetakGaris(); cout << "Lempar Dadu\n"; CetakGaris();
	while (true)
	{
		cout << "Lempar Dadu? (y/n)"; cin >> Keputusan;

		if (Keputusan == 'y')
		{
			cout << 1 + (rand() % 6) << endl;
		}
		else if (Keputusan == 'n') 
		{
			break;
		}
		else 
		{
			cout << "Silahkan Ketik 'y' untuk Ya, 'n' untuk Tidak" << endl;
		}
	}

	_getch();
	return 0;
}

void CetakGaris()
{
	for (i = 0; i <= 35; i++)
	{
		cout << "-";
	}
	cout << endl;
}