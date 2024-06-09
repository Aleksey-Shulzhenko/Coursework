#include <iostream>

using namespace std;

int Hungarian();
int Ukraine();
int Polish();
int German();
int Slovak();
int Spanish();
int English();
int Czech();
int French();
int Italian();

int main()
{
	cout << "\a----------------Game language----------------" << endl << endl;
	cout << "1.  Ukrainian." << endl << endl;
	cout << "2.  Hungarian." << endl << endl;
	cout << "3.  Polish." << endl << endl;
	cout << "4.  German." << endl << endl;
	cout << "5.  Slovak." << endl << endl;
	cout << "6.  Spanish." << endl << endl;
	cout << "7.  English." << endl << endl;
	cout << "8.  Czech." << endl << endl;
	cout << "9.  French." << endl << endl;
	cout << "10. Italian." << endl << endl;
	cout << "11. Exit game." << endl << endl;
	cout << "-----------------------------------------" << endl << endl;
	cout << "Enter the language number from the menu: ";
	int CheckList;
	cin >> CheckList;
	cout << endl;
	switch (CheckList)
	{
	default:
	{
		system("CLS");
		main();
	}
	break;

	case 1:
	{
		system("CLS");
		Ukraine();
	}
	break;

	case 2:
	{
		system("CLS");
		Hungarian();
	}
	break;

	case 3:
	{
		system("CLS");
		Polish();
	}
	break;

	case 4:
	{
		system("CLS");
		German();
	}
	break;

	case 5:
	{
		system("CLS");
		Slovak();
	}
	break;

	case 6:
	{
		system("CLS");
		Spanish();
	}
	break;

	case 7:
	{
		system("CLS");
		English();
	}
	break;

	case 8:
	{
		system("CLS");
		Czech();
	}
	break;

	case 9:
	{
		system("CLS");
		French();

	}
	break;

	case 10:
	{
		system("CLS");
		Italian();
	}
	break;

	case 11:
	{
		cout << "\a--------------------Exit------------------\n" << endl;
		cout << "If you're thinking of playing, come on in!\n" << endl;
		cout << "\a------------------------------------------\n" << endl;
	}
	break;

	}
	return 0;
}
