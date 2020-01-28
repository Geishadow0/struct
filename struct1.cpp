#include <iostream>
using namespace std;

struct data_t
{
	string nt[100];
	int ut[100];
}; data_t data1;

int main()
{
	int bd;
	cout << "banyak data yang ingin diimput\t:"; cin >> bd; cout << '\n';

	for (int i = 0; i < bd; i++)
	{
		cout << "Data ke " << i + 1; cout << '\n';
		cout << "Nama\t: "; cin >> data1.nt[i];
		cout << "Umur\t: "; cin >> data1.ut[i];
	}


	cout << "Teman-temanku\t:\n";
	for (int i = 0; i < bd; i++)
	{
		cout << data1.nt[i] << " ( " << data1.ut[i] << " ) \n";
	}
	int choice{};
	int loop;

	while (loop = 1)
	{


		cout << "Tampilkan record ";  cout << " ( 0 untuk keluar )\n"; cin >> choice;
		if (choice > bd)
		{
			cout << "Invalid Input";
			exit(0);
		}
		else
		{
		}
		if (choice != 0)
		{
			cout << data1.nt[choice - 1] << " ( " << data1.ut[choice - 1] << " ) \n";
		}
		else if (choice == 0)
		{
			exit(0);
		}
		else
		{
			cout << "Invalid Input";
			exit(0);
		}
	}

}