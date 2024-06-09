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
int Polish();
void GamePl();
void StatsPl(int wins, int losses);
void ResultPl(int wins, int losses);
void countPl(int wins, int losses);

//Функція для завершення гри в функції function();
int resultPl()
{
	return 3;
}

//Основна функція
int Polish()
{
	setlocale(0, "Pl");

	//Меню
	cout << "\a----------------Gra w kosci---------------\n" << endl;
	cout << "1. Grac.\n" << endl;
	cout << "2. Instrukcje.\n" << endl;
	cout << "3. Zmien jezyk gry.\n" << endl;
	cout << "4. Wyjscie.\n" << endl;
	cout << "------------------------------------------\n" << endl;

	//Вибирання пункту з меню та заповнення змінної
	cout << "Wprowadz numer z menu: ";
	int menu_sumbol;
	cin >> menu_sumbol;
	cout << endl;

	//Основний алгоритм гри
	switch (menu_sumbol)
	{
		//Основний принцип гри
	case 1:
		cout << "Gra rozpoczyna sie w..." << endl << endl;
		//Відведення циклу до початку гри
		for (int i = 0; i < 3; i++)
		{
			Sleep(1000);
			cout << i + 1 << endl << endl;
			Sleep(1000);
		}
		//Стирається верхня строки тексту та розпочинається функція основного алгоритму гри з допомогою рекурсії
		system("cls");
		GamePl();

		break;

		//Інструкція
	case 2:
		cout << "\a-----------------------------------------------Instrukcje-----------------------------------------------\n" << endl;
		cout << R"(Gra w kosci to gra symulujaca dwie kostki o numerach od 1 do 6 (w sumie K 12).
Na przyklad: Jesli suma wylosowanych liczb jest mniejsza niz 7, a gracz uwaza, ze liczba jest mniejsza niz 7, wygrywa zaklad.
Jesli suma wylosowanych liczb jest wieksza niz 7, a graczowi wymysli liczbe wieksza niz 7, rowniez wygrywa postawiony zaklad.
Jesli gracz odgadnie sume liczb, otrzyma czterokrotnie wiecej punktow niz postawiony zaklad.
Zaklad jest przegrany, jezeli nie zaistnieje zadna z opisanych sytuacji.
W poczatkowej chwili ten, kto gra, ma 100 punktow. )" << endl << endl;
		cout << "--------------------------------------------------------------------------------------------------------\n";

		//Коротке меню подальших дій
		cout << R"(
Y/y - Kontynuuj gre.
M/m - Wyjscie do menu.
N/n - Opusc gre.
			)" << endl;
		//меню
		cout << "Czy chcesz kontynuowac gre?  [Y/M/N]: ";
		char vibor_inctruction;
		cin >> vibor_inctruction;

		cout << endl;
		//Продовжити цикл гри
		if (vibor_inctruction == 'y' || vibor_inctruction == 'Y')
		{
			cout << "Gra rozpoczyna sie w..." << endl << endl;
			for (int i = 0; i < 3; i++)
			{
				Sleep(1000);
				cout << i + 1 << endl << endl;
				Sleep(1000);
			}
			system("cls");
			GamePl();
		}
		//Вийти в меню
		if (vibor_inctruction == 'm' || vibor_inctruction == 'M')
		{
			system("cls");
			Polish();
		}
		//Завершити остаточно программу
		else if (vibor_inctruction == 'n' || vibor_inctruction == 'N')
		{
			cout << "\a----------------Wyjscie---------------\n" << endl;
			cout << "Jesli myslisz o zagraniu, wpadaj!\n" << endl;
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
		cout << "\a----------------Wyjscie---------------\n" << endl;
		cout << "Jesli myslisz o zagraniu, wpadaj!\n" << endl;
		cout << "------------------------------------\n" << endl;
		system("PAUSE");
		return 1;

		break;

		//Помилка при виборі меню
	default:
		cerr << "Nie ma takiego numeru!!!\n" << endl;
		Polish();
		break;
	}
	system("PAUSE");
	return 5;
}

//Функція основного алгоритма гри
void GamePl()
{
	setlocale(0, "pl");

	cout << "\a--------------------Gra--------------------\n" << endl;
	//Заповнюємо змінну числом яким ми хочему загадати
	cout << "Wpisz liczbe kostek, ktora chcesz ustawic [od 2 do 12]: ";
	int number_sum_kost;
	cin >> number_sum_kost;

	cout << endl;

	//Заповнюємо сумму ставки, яку ви хочете ввести
	cout << "Wpisz kwote zakladu, ktora chcesz postawic [od 1 do 100]: ";
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

		cout << "Z pierwszej reki: " << endl;

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

		cout << "Z pierwszej reki: " << endl;

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

		cout << "Z pierwszej reki: " << endl;

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

		cout << "Z pierwszej reki: " << endl;

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

		cout << "Z pierwszej reki: " << endl;

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

		cout << "Z pierwszej reki: " << endl;

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

		cout << "Druga reka: " << endl;

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

		cout << "Druga reka: " << endl;

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

		cout << "Druga reka: " << endl;

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

		cout << "Druga reka: " << endl;

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

		cout << "Druga reka: " << endl;

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

		cout << "Druga reka: " << endl;

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
	cout << "Masz kostki " << kost1 << " то " << kost2 << "." << endl;

	cout << endl;

	//Додає дві кістки в сумму та виводить їх суму
	int sum_kost_console;
	sum_kost_console = kost1 + kost2;
	cout << "W sumie wyszlo: " << sum_kost_console << endl;

	cout << endl;

	int wins = 0;
	int losses = 0;


	//основний алгоритм дій

		//Якщо сума яку загадав користува2 менше 7 та кубики випали менше 7, тоді виводе текст що виграв
	if (number_sum_kost < 7.2)
	{
		if (sum_kost_console < number_sum_kost)
		{
			cout << "Wygrales zaklad!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 2;
			cout << "Twoj zaklad jest podwojny, Twoj zaklad jest teraz = " << stavka << endl;
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
				cout << "Wygrales zaklad!" << endl;
				cout << endl;
				int stavka;
				stavka = vibor_stavka * 2;
				cout << "Twoj zaklad jest podwojny, Twoj zaklad jest teraz = " << stavka << endl;
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
			cout << "Przegrales zaklad!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 0;
			cout << "Twoja oferta zostala anulowana, Twoja oferta zostala zlozona teraz = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
			losses++;
		}
	}

	//Якщо сума яку загадав користувач та вона рівно та сама що й випали кубики, тоді гравець отримує в четверо більше очок

	if (number_sum_kost == sum_kost_console)
	{
		cout << "V wygral zaklad i obstawil cztery razy wiecej!" << endl;
		cout << endl;
		int stavka;
		stavka = vibor_stavka * 4;
		cout << "Twoj zaklad jest czterokrotnie wiekszy, Twoj zaklad teraz = " << stavka << endl;
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
				cout << "Wygrales zaklad!" << endl;
				cout << endl;
				int stavka;
				stavka = vibor_stavka * 2;
				cout << "Twoj zaklad jest teraz dwukrotnie wiekszy niz Twoj zaklad = " << stavka << endl;
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
			cout << "Wygrales zaklad!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 2;
			cout << "Twoj zaklad jest teraz dwukrotnie wiekszy niz Twoj zaklad = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
			wins++;
		}
	}

	if (number_sum_kost > 7.8)
	{
		if (sum_kost_console < 7.2)
		{
			cout << "Przegrales zaklad!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 0;
			cout << "Twoja oferta została anulowana, Twoja oferta wynosi teraz = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
			losses++;
		}
	}

	// Виведення результату
	ResultPl(wins, losses);
	countPl(wins, losses);
	StatsPl(wins, losses);

	//Коротке меню подальших дій
	cout << R"(
Y/y - Kontynuuj gre.
M/m - Wyjscie do menu.
N/n - Opusc gre.
			)" << endl;

	cout << endl;
	//меню
	cout << "Czy chcialbys moc nadal cieszyc sie zyciem? [Y/M/N]: ";
	char vibor;
	cin >> vibor;

	cout << endl;
	//Продовжити цикл гри
	if (vibor == 'y' || vibor == 'Y')
	{
		cout << "Gra rozpoczyna sie w..." << endl << endl;
		for (int i = 0; i < 3; i++)
		{
			Sleep(1000);
			cout << i + 1 << endl << endl;
			Sleep(1000);
		}
		system("cls");
		GamePl();
	}
	//Вийти в меню
	if (vibor == 'm' || vibor == 'M')
	{
		system("cls");
		Polish();
	}
	//Завершити остаточно программу
	else if (vibor == 'n' || vibor == 'N')
	{
		cout << "\a----------------Wyjscie---------------\n" << endl;
		cout << "Jesli myslisz o zagraniu, wpadaj!\n" << endl;
		cout << "------------------------------------\n" << endl;
		resultPl();
		system("PAUSE");
	}
}

void StatsPl(int wins, int losses)
{

	ofstream file("stats.txt", ios::app);

	// Записуємо значення змінних в текстовий файл
	file << wins << " " << losses << endl;

	// Закриваємо файл
	file.close();

}

void ResultPl(int wins, int losses)
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
	cout << "--------Statystyki historii konta--------\n" << endl;
	cout << content << std::endl;
	cout << "-------------------------------------------------" << endl;
}

void countOnesInColumnsPl(string& filename, int& countCol1, int& countCol2)
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

void countPl(int wins, int losses)
{
	string filename = "stats.txt";
	int countCol1, countCol2;
	countOnesInColumnsPl(filename, countCol1, countCol2);
	cout << "----------Statystyka---------\n" << endl;
	cout << "Porazki: " << countCol1 << endl;
	cout << "Zwyciestwo: " << countCol2 << endl;
	cout << "-----------------------------\n" << endl;
}
