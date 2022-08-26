#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <thread>
#include <chrono>
#include <fstream>
using namespace std;
class Disk
{
public:
	char folder[20];
	char file[20];
	Disk Vvod();
	void Show(Disk tmp);
	Disk* Add(Disk* mas, int& n)
	{
		mas = (Disk*)realloc(mas, (n + 1) * sizeof(Disk));
		mas[n] = Vvod();
		n++;
		return mas;
	}

	void Print(Disk* mas, int n)
	{
		for (int i = 0; i < n; i++)
		{
			Show(mas[i]);
			cout << "\n";
		}
	}
	Disk* Del(Disk* mas, int& n)
	{
		char str[30];
		cout << "Enter folder name : ";
		gets_s(str);
		int f = 0;
		for (int i = 0; i < n; i++)
		{
			if (_stricmp(mas[i].folder, str) == 0)
			{
				for (int j = i; j < n - 1; j++)
					mas[j] = mas[j + 1];
				mas = (Disk*)realloc(mas, (n - 1) * sizeof(Disk));
				n--;
				i--;
				f = 1;
			}
		}
		if (f == 0)
		{
			cout << "Error.\n";
		}
		else
		{
			cout << "Folder - delete.\n";
		}
		return mas;
	}
	void Find(Disk* mas, int n)
	{
		char str[15];
		cout << "Enter name folder : ";
		gets_s(str);
		int f = 0;
		for (int i = 0; i < n; i++)
		{
			if (_stricmp(mas[i].folder, str) == 0)
			{
				Show(mas[i]);
				f = 1;
			}
		}
		if (f == 0)
			cout << "Error.\n";
	}
	Disk* Del1(Disk* mas, int& n)
	{
		char str[30];
		cout << "Enter name f: ";
		gets_s(str);
		int f = 0;
		for (int i = 0; i < n; i++)
		{
			if (_stricmp(mas[i].file, str) == 0)
			{
				for (int j = i; j < n - 1; j++)
					mas[j] = mas[j + 1];
				mas = (Disk*)realloc(mas, (n - 1) * sizeof(Disk));
				n--;
				i--;
				f = 1;
			}
		}
		if (f == 0)
		{
			cout << "Error.\n";
		}
		else
		{
			cout << "Playlist - delete.\n";
		}
		return mas;
	}
	void Find1(Disk* mas, int n)
	{
		char str[15];
		cout << "Enter executor : ";
		gets_s(str);
		int f = 0;
		for (int i = 0; i < n; i++)
		{
			if (_stricmp(mas[i].file, str) == 0)
			{
				Show(mas[i]);
				f = 1;
			}
		}
		if (f == 0)
			cout << "Error.\n";
	}
};
Disk Disk::Vvod()
{
	Disk tmp;
	cout << "Enter folder name : ";
	gets_s(tmp.folder);
	cout << "Enter file name : ";
	gets_s(tmp.file);
	return tmp;

}
inline void Disk::Show(Disk tmp)
{
	cout << tmp.folder << ".folder\n" << tmp.file << ".txt ";
}
class Disk1
{
public:
	char folder1[20];
	char file1[20];
	Disk1 Vvod1();
	void Show1(Disk1 tmp1);
	Disk1* Add1(Disk1* mas, int& n)
	{
		mas = (Disk1*)realloc(mas, (n + 1) * sizeof(Disk1));
		mas[n] = Vvod1();
		n++;
		return mas;
	}

	void Print1(Disk1* mas, int n)
	{
		for (int i = 0; i < n; i++)
		{
			Show1(mas[i]);
			cout << "\n";
		}
	}
	Disk1* Del2(Disk1* mas, int& n)
	{
		char str[30];
		cout << "Enter folder name : ";
		gets_s(str);
		int f = 0;
		for (int i = 0; i < n; i++)
		{
			if (_stricmp(mas[i].folder1, str) == 0)
			{
				for (int j = i; j < n - 1; j++)
					mas[j] = mas[j + 1];
				mas = (Disk1*)realloc(mas, (n - 1) * sizeof(Disk1));
				n--;
				i--;
				f = 1;
			}
		}
		if (f == 0)
		{
			cout << "Error.\n";
		}
		else
		{
			cout << "Folder - delete.\n";
		}
		return mas;
	}
	void Find2(Disk1* mas, int n)
	{
		char str[15];
		cout << "Enter name folder : ";
		gets_s(str);
		int f = 0;
		for (int i = 0; i < n; i++)
		{
			if (_stricmp(mas[i].folder1, str) == 0)
			{
				Show1(mas[i]);
				f = 1;
			}
		}
		if (f == 0)
			cout << "Error.\n";
	}
	Disk1* Del3(Disk1* mas, int& n)
	{
		char str[30];
		cout << "Enter name f: ";
		gets_s(str);
		int f = 0;
		for (int i = 0; i < n; i++)
		{
			if (_stricmp(mas[i].file1, str) == 0)
			{
				for (int j = i; j < n - 1; j++)
					mas[j] = mas[j + 1];
				mas = (Disk1*)realloc(mas, (n - 1) * sizeof(Disk1));
				n--;
				i--;
				f = 1;
			}
		}
		if (f == 0)
		{
			cout << "Error.\n";
		}
		else
		{
			cout << "Playlist - delete.\n";
		}
		return mas;
	}
	void Find3(Disk1* mas, int n)
	{
		char str[15];
		cout << "Enter executor : ";
		gets_s(str);
		int f = 0;
		for (int i = 0; i < n; i++)
		{
			if (_stricmp(mas[i].file1, str) == 0)
			{
				Show1(mas[i]);
				f = 1;
			}
		}
		if (f == 0)
			cout << "Error.\n";
	}
};
Disk1 Disk1::Vvod1()
{
	Disk1 tmp1;
	cout << "Enter folder name : ";
	gets_s(tmp1.folder1);
	cout << "Enter file name : ";
	gets_s(tmp1.file1);
	return tmp1;
}
inline void Disk1::Show1(Disk1 tmp1)
{
	cout << tmp1.folder1 << ".folder\n" << tmp1.file1 << ".txt ";
}
int main()
{
	Disk* baza = nullptr;
	Disk x;
	Disk1* baza1 = nullptr;
	Disk1 y;
	int n = 0;
	int n1 = 0;
	char ch;
	do
	{

		system("cls");
		cout << "Menu:\n";
		cout << "Disk - C.\n";
		cout << "Disk - D.\n";
		cout << "Esc - Vihod.\n";
		cout << "Your choice : ";
		ch = _getch();
		switch (ch)
		{
		case '1':
			system("cls");
			cout << "1.-Folder Data;\n";
			cout << "2.-Add folder and file\n";
			cout << "3.-Delete folder;\n";
			cout << "4.-Find folder;\n";
			cout << "5.-Delete file\n";
			cout << "6.-Find file;\n";
			cout << "Your choice : ";
			ch = _getch();
			switch (ch)
			{
			case '2':
				system("cls");
				baza = x.Add(baza, n);
				this_thread::sleep_for(chrono::milliseconds(2000));
				cout << "\nSuccessful addition !";
				this_thread::sleep_for(chrono::milliseconds(2000));
				break;
			case '1':
				system("cls");
				cout << "Wait - data processing:)\n";
				this_thread::sleep_for(chrono::milliseconds(3000));
				if (n != 0)
				{
					x.Print(baza, n);
				}
				else
				{
					cout << "Data baze is empty.\n";
				}
				system("pause");
				break;
			case '3':
				system("cls");
				if (n != 0)
				{
					x.Del(baza, n);
				}
				else
				{
					cout << "Data baze is empty.\n";
				}
				system("pause");
				break;
			case '4':
				system("cls");
				if (n != 0)
				{
					x.Find(baza, n);
				}
				else
				{
					cout << "Data baze is empty.\n";
				}
				system("pause");
				break;
			case '5':
				system("cls");
				if (n != 0)
				{
					x.Del1(baza, n);
				}
				else
				{
					cout << "Data baze is empty.\n";
				}
				system("pause");
				break;
			case '6':
				system("cls");
				if (n != 0)
				{
					x.Find1(baza, n);
				}
				else
				{
					cout << "Data baze is empty.\n";
				}
				system("pause");
				break;
			}
		case '2':
			system("cls");
			cout << "1.-Folder Data;\n";
			cout << "2.-Add folder and file\n";
			cout << "3.-Delete folder;\n";
			cout << "4.-Find folder;\n";
			cout << "5.-Delete file\n";
			cout << "6.-Find file;\n";
			cout << "Your choice : ";
			ch = _getch();
			switch (ch)
			{
			case '2':
				system("cls");
				baza1 = y.Add1(baza1, n1);
				this_thread::sleep_for(chrono::milliseconds(2000));
				cout << "\nSuccessful addition !";
				this_thread::sleep_for(chrono::milliseconds(2000));
				break;
			case '1':
				system("cls");
				cout << "Wait - data processing:)\n";
				this_thread::sleep_for(chrono::milliseconds(3000));
				if (n1 != 0)
				{
					y.Print1(baza1, n1);
				}
				else
				{
					cout << "Data baze is empty.\n";
				}
				system("pause");
				break;
			case '3':
				system("cls");
				if (n1 != 0)
				{
					y.Del2(baza1, n1);
				}
				else
				{
					cout << "Data baze is empty.\n";
				}
				system("pause");
				break;
			case '4':
				system("cls");
				if (n1 != 0)
				{
					y.Find2(baza1, n1);
				}
				else
				{
					cout << "Data baze is empty.\n";
				}
				system("pause");
				break;
			case '5':
				system("cls");
				if (n1 != 0)
				{
					y.Del3(baza1, n1);
				}
				else
				{
					cout << "Data baze is empty.\n";
				}
				system("pause");
				break;
			case '6':
				system("cls");
				if (n1 != 0)
				{
					y.Find3(baza1, n1);
				}
				else
				{
					cout << "Data baze is empty.\n";
				}
				system("pause");
				break;
			}
		}
	} while (ch != 27);
}

