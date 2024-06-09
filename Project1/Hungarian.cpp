//Бібліотеки
#include <iostream>
#include <clocale>
#include <ctime>
#include <stdio.h>
#include <Windows.h>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;//Мова та постійне використання std

//Індентифікатор для функції
int main();
int Hungarian();
void GameHu();
void StatsHu(int wins, int losses);
void ResultHu(int wins, int losses);
void countHu(int wins, int losses);

//Функція для завершення гри в функції function();
int resultHu()
{
	return 3;
}

//Основна функція
int Hungarian()
{
	setlocale(0, "Hu");

	//Меню
	cout << "\a----------------Kockajatek---------------\n" << endl;
	cout << "1.Jatek.\n" << endl;
	cout << "2.Utasitas.\n" << endl;
	cout << "3.Valtoztasd meg a jatek nyelvet.\n" << endl;
	cout << "4.Kijarat.\n" << endl;
	cout << "------------------------------------------\n" << endl;

	//Вибирання пункту з меню та заповнення змінної
	cout << "Irjon be egy szamot a menubol: ";
	int menu_sumbol;
	cin >> menu_sumbol;
	cout << endl;

	//Основний алгоритм гри
	switch (menu_sumbol)
	{
		//Основний принцип гри
	case 1:
		cout << "A jatek kezdodik..." << endl << endl;
		//Відведення циклу до початку гри
		for (int i = 0; i < 3; i++)
		{
			Sleep(1000);
			cout << i + 1 << endl << endl;
			Sleep(1000);
		}
		//Стирається верхня строки тексту та розпочинається функція основного алгоритму гри з допомогою рекурсії
		system("cls");
		GameHu();

		break;

		//Інструкція
	case 2:
		cout << "\a-----------------------------------------------Utasitas-----------------------------------------------\n" << endl;
		cout << R"(A kockajatek egy olyan jatek, amely ket kockat szimulal 1-tol 6-ig (osszesen K 12).
Peldaul: Ha a kihuzott szamok osszege kisebb, mint 7, es a jatekos ugy gondolja, hogy a szam kisebb, mint 7, akkor megnyeri a fogadast.
Ha a kihuzott szamok osszege nagyobb, mint 7, es a jatekos 7-nel nagyobb szamra gondol, akkor a megtett tetet is megnyeri.
Ha a jatekos kitalalja a szamok osszeget, negyszer tobb pontot kap, mint a megtett tet.
A fogadas elveszik, ha a leirt helyzetek egyike sem all fenn.
A kezdeti pillanatban 100 pontja van annak, aki jtszik. )" << endl << endl;
		cout << "--------------------------------------------------------------------------------------------------------\n";

		//Коротке меню подальших дій
		cout << R"(
Y/y - A jatek folytatasa.
M/m - Kilepes a menube.
N/n - Hagyd ki a jatekot.
			)" << endl;
		//меню
		cout << "Szeretne folytatni a jatekot? [Y/M/N]: ";
		char vibor_inctruction;
		cin >> vibor_inctruction;

		cout << endl;
		//Продовжити цикл гри
		if (vibor_inctruction == 'y' || vibor_inctruction == 'Y')
		{
			cout << "A jatek kezdodik..." << endl << endl;
			for (int i = 0; i < 3; i++)
			{
				Sleep(1000);
				cout << i + 1 << endl << endl;
				Sleep(1000);
			}
			system("cls");
			GameHu();
		}
		//Вийти в меню
		if (vibor_inctruction == 'm' || vibor_inctruction == 'M')
		{
			system("cls");
			Hungarian();
		}
		//Завершити остаточно программу
		else if (vibor_inctruction == 'n' || vibor_inctruction == 'N')
		{
			cout << "\a----------------Kijarat---------------\n" << endl;
			cout << "Ha jatszani gondolsz, gyere be!\n" << endl;
			cout << "------------------------------------\n" << endl;
			system("PAUSE");
			return 2;
		}

		break;

	case 3:
		system("CLS");
		main();
		break;

		//Вихід
	case 4:
		cout << "\a----------------Kijarat---------------\n" << endl;
		cout << "Ha jatszani gondolsz, gyere be!\n" << endl;
		cout << "------------------------------------\n" << endl;
		system("PAUSE");
		return 1;

		break;

		//Помилка при виборі меню
	default:
		cerr << "Ilyen szam nincs!!!\n" << endl;
		Hungarian();
		break;
	}
	system("PAUSE");
	return 5;
}

//Функція основного алгоритма гри
void GameHu()
{
	setlocale(0, "rus");

	cout << "\a--------------------Jatek--------------------\n" << endl;
	//Заповнюємо змінну числом яким ми хочему загадати
	cout << "Adja meg a beallitani kivant kockak szamat [2-tol 12-ig]: ";
	int number_sum_kost;
	cin >> number_sum_kost;

	cout << endl;

	//Заповнюємо сумму ставки, яку ви хочете ввести
	cout << "Adja meg a fogadni kivant tet osszegét [1-tol 100-ig]: ";
	int vibor_stavka;
	cin >> vibor_stavka;

	cout << endl;

	//Функція яка генерує випадкові числа 
	srand(static_cast<unsigned>(time(nullptr)));

	//Кістка один
	int kost1;
	kost1 = rand() % 6 + 1;

	//Кістка друга
	int kost2;
	kost2 = rand() % 6 + 1;

	//Перша кістка
	if (kost1 == 1)
	{
		cout << endl;

		cout << "Elso csont: " << endl;

		cout << endl;

		cout << R"(
---------------------
|-------------------|
||                 ||
||                 ||
||                 ||
||        *        ||
||                 ||
||                 ||
||                 ||
|-------------------|
---------------------
)";
		cout << endl;
	}

	if (kost1 == 2)
	{
		cout << endl;

		cout << "Elso csont: " << endl;

		cout << endl;

		cout << R"(
---------------------
|-------------------|
||                 ||
||  *              ||
||                 ||
||                 ||
||                 ||
||             *   ||
||                 ||
|-------------------|
---------------------
)";
		cout << endl;
	}

	if (kost1 == 3)
	{
		cout << endl;

		cout << "Elso csont: " << endl;

		cout << endl;

		cout << R"(
---------------------
|-------------------|
||                 ||
||   *             ||
||                 ||
||        *        ||
||                 ||
||             *   ||
||                 ||
|-------------------|
---------------------
)";
		cout << endl;
	}

	if (kost1 == 4)
	{
		cout << endl;

		cout << "Elso csont: " << endl;

		cout << endl;

		cout << R"(
---------------------
|-------------------|
||                 ||
||   *         *   ||
||                 ||
||                 ||
||                 ||
||   *         *   ||
||                 ||
|-------------------|
---------------------
)";
		cout << endl;
	}

	if (kost1 == 5)
	{
		cout << endl;

		cout << "Elso csont: " << endl;

		cout << endl;

		cout << R"(
---------------------
|-------------------|
||                 ||
||   *         *   ||
||                 ||
||        *        ||
||                 ||
||   *         *   ||
||                 ||
|-------------------|
---------------------
)";
		cout << endl;
	}

	if (kost1 == 6)
	{
		cout << endl;

		cout << "Elso csont: " << endl;

		cout << endl;

		cout << R"(
---------------------
|-------------------|
||                 ||
||   *         *   ||
||                 ||
||   *         *   ||
||                 ||
||   *         *   ||
||                 ||
|-------------------|
---------------------
)";
		cout << endl;
	}



	//Друга кістка
	if (kost2 == 1)
	{
		cout << endl;

		cout << "Masodik csont: " << endl;

		cout << endl;

		cout << R"(
---------------------
|-------------------|
||                 ||
||                 ||
||                 ||
||        *        ||
||                 ||
||                 ||
||                 ||
|-------------------|
---------------------
)";
		cout << endl;
	}

	if (kost2 == 2)
	{
		cout << endl;

		cout << "Masodik csont: " << endl;

		cout << endl;

		cout << R"(
---------------------
|-------------------|
||                 ||
||  *              ||
||                 ||
||                 ||
||                 ||
||             *   ||
||                 ||
|-------------------|
---------------------
)";
		cout << endl;
	}

	if (kost2 == 3)
	{
		cout << endl;

		cout << "Masodik csont: " << endl;

		cout << endl;

		cout << R"(
---------------------
|-------------------|
||                 ||
||   *             ||
||                 ||
||        *        ||
||                 ||
||             *   ||
||                 ||
|-------------------|
---------------------
)";
		cout << endl;
	}

	if (kost2 == 4)
	{
		cout << endl;

		cout << "Masodik csont: " << endl;

		cout << endl;

		cout << R"(
---------------------
|-------------------|
||                 ||
||   *         *   ||
||                 ||
||                 ||
||                 ||
||   *         *   ||
||                 ||
|-------------------|
---------------------
)";
		cout << endl;
	}

	if (kost2 == 5)
	{
		cout << endl;

		cout << "Masodik csont: " << endl;

		cout << endl;

		cout << R"(
---------------------
|-------------------|
||                 ||
||   *         *   ||
||                 ||
||        *        ||
||                 ||
||   *         *   ||
||                 ||
|-------------------|
---------------------
)";
		cout << endl;
	}

	if (kost2 == 6)
	{
		cout << endl;

		cout << "Masodik csont: " << endl;

		cout << endl;

		cout << R"(
---------------------
|-------------------|
||                 ||
||   *         *   ||
||                 ||
||   *         *   ||
||                 ||
||   *         *   ||
||                 ||
|-------------------|
---------------------
)";
		cout << endl;
	}

	//Виводить результати 
	cout << "Megvan a kocka " << kost1 << " es " << kost2 << "." << endl;

	cout << endl;

	//Додає дві кістки в сумму та виводить їх суму
	int sum_kost_console;
	sum_kost_console = kost1 + kost2;
	cout << "Osszesen ez volt: " << sum_kost_console << endl;

	cout << endl;

	int wins = 0;
	int losses = 0;


	//основний алгоритм дій

		//Якщо сума яку загадав користува2 менше 7 та кубики випали менше 7, тоді виводе текст що виграв
	if (number_sum_kost < 7.2)
	{
		if (sum_kost_console < number_sum_kost)
		{
			cout << "Megnyerte a fogadast!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 2;
			cout << "A tet a tet duplaja most = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
			wins++;
		}
	}


	if (number_sum_kost < 7.2)
	{
		if (sum_kost_console < 7.2)
		{
			if (sum_kost_console > number_sum_kost)
			{
				cout << "Megnyerte a fogadast!" << endl;
				cout << endl;
				int stavka;
				stavka = vibor_stavka * 2;
				cout << "A tet ketszerese most = " << stavka << endl;
				cout << endl;
				cout << "-------------------------------------------\n" << endl;
				wins++;
			}
		}
	}

	if (number_sum_kost < 7.2)
	{
		if (sum_kost_console > 7.8)
		{
			cout << "Elvesztetted a fogadasodat!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 0;
			cout << "Ajanlatat toroltek, ajanlata most = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
			losses++;
		}
	}

	//Якщо сума яку загадав користувач та вона рівно та сама що й випали кубики, тоді гравець отримує в четверо більше очок

	if (number_sum_kost == sum_kost_console)
	{
		cout << "V nyerte a fogadast, es negyszer tobbet fogadott!" << endl;
		cout << endl;
		int stavka;
		stavka = vibor_stavka * 4;
		cout << "A tet negyszer nagyobb, a tet most = " << stavka << endl;
		cout << endl;
		cout << "-------------------------------------------\n" << endl;
		wins++;
	}

	if (number_sum_kost > 7.8)
	{
		if (sum_kost_console > 7.8)
		{
			if (sum_kost_console < number_sum_kost)
			{
				cout << "Megnyerte a fogadast!" << endl;
				cout << endl;
				int stavka;
				stavka = vibor_stavka * 2;
				cout << "A tet ketszerese most = " << stavka << endl;
				cout << endl;
				cout << "-------------------------------------------\n" << endl;
				wins++;
			}
		}
	}

	//Якщо сума яку загадав користувач більше 7 та кубики випали більше 7, тоді виводе текст що виграв
	if (number_sum_kost > 7.8)
	{
		if (sum_kost_console > number_sum_kost)
		{
			cout << "Megnyerte a fogadast!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 2;
			cout << "A tet a tet duplaja most = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
			wins++;
		}
	}

	if (number_sum_kost > 7.8)
	{
		if (sum_kost_console < 7.2)
		{
			cout << "Elvesztetted a fogadasodat!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 0;
			cout << "Ajanlatat toroltek, ajanlata most = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
			losses++;
		}
	}

	// Виведення результату
	ResultHu(wins, losses);
	countHu(wins, losses);
	StatsHu(wins, losses);

	//Коротке меню подальших дій
	cout << R"(
Y/y - A jatek folytatasa.
M/m - Kilepes a menube.
N/n - Hagyd ki a jatekot.
			)" << endl;

	cout << endl;
	//меню
	cout << "Szeretned, ha tovabbra is elvezned az eleted? [Y/M/N]: ";
	char vibor;
	cin >> vibor;

	cout << endl;
	//Продовжити цикл гри
	if (vibor == 'y' || vibor == 'Y')
	{
		cout << "A jatek kezdodik..." << endl << endl;
		for (int i = 0; i < 3; i++)
		{
			Sleep(1000);
			cout << i + 1 << endl << endl;
			Sleep(1000);
		}
		system("cls");
		GameHu();
	}
	//Вийти в меню
	if (vibor == 'm' || vibor == 'M')
	{
		system("cls");
		Hungarian();
	}
	//Завершити остаточно программу
	else if (vibor == 'n' || vibor == 'N')
	{
		cout << "\a----------------Kijarat---------------\n" << endl;
		cout << "Ha jatszani gondolsz, gyere be!\n" << endl;
		cout << "------------------------------------\n" << endl;
		resultHu();
		system("PAUSE");
	}
}

void StatsHu(int wins, int losses)
{

	ofstream file("stats.txt", ios::app);

	// Записуємо значення змінних в текстовий файл
	file << wins << " " << losses << endl;

	// Закриваємо файл
	file.close();

}

void ResultHu(int wins, int losses)
{

	ifstream file("stats.txt");

	string content;

	// Читаємо дані файлу 
	char ch;
	while (file.get(ch))
	{
		content += ch; // Доповнюємо символ
	}

	// Закриваємо файл
	file.close();

	// Виведення значення зміної в консоль
	cout << "--------Statisztika szamlatortenet--------\n" << endl;
	cout << content << std::endl;
	cout << "-------------------------------------------------" << endl;
}

void countOnesInColumnsHu(string& filename, int& countCol1, int& countCol2)
{
	ifstream file(filename);

	string line;

	countCol1 = 0;
	countCol2 = 0;

	while (std::getline(file, line))
	{
		istringstream iss(line);
		int value1, value2;
		// Читаем значения из каждой строки
		if (iss >> value1 >> value2)
		{
			// Если значение равно 1, увеличиваем соответствующий счетчик
			if (value1 == 1)
			{
				countCol1++;
			}

			if (value2 == 1)
			{
				countCol2++;
			}
		}
	}

	file.close();
}

void countHu(int wins, int losses)
{
	string filename = "stats.txt";
	int countCol1, countCol2;
	countOnesInColumnsHu(filename, countCol1, countCol2);
	cout << "----------Statisztika---------\n" << endl;
	cout << "Veresegek: " << countCol1 << endl;
	cout << "Pebed: " << countCol2 << endl;
	cout << "-----------------------------\n" << endl;
}
