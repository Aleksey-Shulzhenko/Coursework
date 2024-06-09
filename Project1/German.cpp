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
int German();
void GameGer();
void StatsGer(int wins, int losses);
void ResultGer(int wins, int losses);
void countGer(int wins, int losses);

//Функція для завершення гри в функції function();
int resultGer()
{
	return 3;
}

//Основна функція
int German()
{
	setlocale(0, "Gr");

	//Меню
	cout << "\a----------------Wurfelspielи---------------\n" << endl;
	cout << "1.Spielen.\n" << endl;
	cout << "2.Anweisung.\n" << endl;
	cout << "3.Andern Sie die Sprache des Spiels.\n" << endl;
	cout << "4.Ausgabe.\n" << endl;
	cout << "------------------------------------------\n" << endl;

	//Вибирання пункту з меню та заповнення змінної
	cout << "Geben Sie eine Nummer aus dem Menu ein: ";
	int menu_sumbol;
	cin >> menu_sumbol;
	cout << endl;

	//Основний алгоритм гри
	switch (menu_sumbol)
	{
		//Основний принцип гри
	case 1:
		cout << "Das Spiel beginnt durch..." << endl << endl;
		//Відведення циклу до початку гри
		for (int i = 0; i < 3; i++)
		{
			Sleep(1000);
			cout << i + 1 << endl << endl;
			Sleep(1000);
		}
		//Стирається верхня строки тексту та розпочинається функція основного алгоритму гри з допомогою рекурсії
		system("cls");
		GameGer();

		break;

		//Інструкція
	case 2:
		cout << "\a-----------------------------------------------Anweisung-----------------------------------------------\n" << endl;
		cout << R"(Das Wurfelspiel ist ein Spiel, das zwei Wurfel im Bereich von 1 bis 6 (insgesamt bis zu 12) simuliert.
Beispiel: Wenn die Summe der gefallenen Zahlen kleiner als 7 ist und der Spieler an eine Zahl kleiner als 7 gedacht hat, gewinnt er die abgegebene Wette.
Wenn die Summe der herausgefallenen Zahlen mehr als 7 betragt und der Spieler eine Zahl grober als 7 getippt hat, gewinnt er auch die abgegebene Wette.
Wenn der Spieler die Summe der Zahlen erraten hat, erhalt er viermal mehr Punkte als der getatigte Einsatz.
Liegt keine der beschriebenen Situationen vor, ist die Wette verloren.
Im ersten Moment hat der Spieler 100 Punkte. )" << endl << endl;
		cout << "--------------------------------------------------------------------------------------------------------\n";

		//Коротке меню подальших дій
		cout << R"(
Y/y - Setzen Sie das Spiel fort.
M/m - Zuruck zum Menu.
N/n - Das Spiel verlassen.
			)" << endl;
		//меню
		cout << "Mochten Sie weiterspielen? [Y/M/N]: ";
		char vibor_inctruction;
		cin >> vibor_inctruction;

		cout << endl;
		//Продовжити цикл гри
		if (vibor_inctruction == 'y' || vibor_inctruction == 'Y')
		{
			cout << "Das Spiel beginnt durch..." << endl << endl;
			for (int i = 0; i < 3; i++)
			{
				Sleep(1000);
				cout << i + 1 << endl << endl;
				Sleep(1000);
			}
			system("cls");
			GameGer();
		}
		//Вийти в меню
		if (vibor_inctruction == 'm' || vibor_inctruction == 'M')
		{
			system("cls");
			German();
		}
		//Завершити остаточно программу
		else if (vibor_inctruction == 'n' || vibor_inctruction == 'N')
		{
			cout << "\a------------------------Ausgabe-----------------------\n" << endl;
			cout << "Wenn Sie sich entscheiden zu spielen, kommen Sie vorbei!\n" << endl;
			cout << "--------------------------------------------------------\n" << endl;
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
		cout << "\a------------------------Ausgabe-----------------------\n" << endl;
		cout << "Wenn Sie sich entscheiden zu spielen, kommen Sie vorbei!\n" << endl;
		cout << "--------------------------------------------------------\n" << endl;
		system("PAUSE");
		return 1;

		break;

		//Помилка при виборі меню
	default:
		cerr << "Eine solche Zahl ist rar!!!\n" << endl;
		German();
		break;
	}
	system("PAUSE");
	return 5;
}

//Функція основного алгоритма гри
void GameGer()
{
	setlocale(0, "rus");

	cout << "\a----------------------------------------Spiel----------------------------------------\n" << endl;
	//Заповнюємо змінну числом яким ми хочему загадати
	cout << "Geben Sie die Anzahl der Wurfelsummen ein, die Sie erraten mochten [von 2 bis 12]: ";
	int number_sum_kost;
	cin >> number_sum_kost;

	cout << endl;

	//Заповнюємо сумму ставки, яку ви хочете ввести
	cout << "Geben Sie den Betrag der Wette ein, die Sie platzieren mochten [von 1 bis 100]: ";
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

		cout << "Der erste Knochen: " << endl;

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

		cout << "Der erste Knochen: " << endl;

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

		cout << "Der erste Knochen: " << endl;

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

		cout << "Der erste Knochen: " << endl;

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

		cout << "Der erste Knochen: " << endl;

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

		cout << "Der erste Knochen: " << endl;

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

		cout << "Der zweite Knochen: " << endl;

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

		cout << "Der zweite Knochen: " << endl;

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

		cout << "Der zweite Knochen: " << endl;

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

		cout << "Der zweite Knochen: " << endl;

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

		cout << "Der zweite Knochen: " << endl;

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

		cout << "Der zweite Knochen: " << endl;

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
	cout << "Deine Knochen sind herausgefallen " << kost1 << " und " << kost2 << "." << endl;

	cout << endl;

	//Додає дві кістки в сумму та виводить їх суму
	int sum_kost_console;
	sum_kost_console = kost1 + kost2;
	cout << "Es stellt sich in der Summe heraus: " << sum_kost_console << endl;

	cout << endl;

	int wins = 0;
	int losses = 0;


	//основний алгоритм дій

		//Якщо сума яку загадав користува2 менше 7 та кубики випали менше 7, тоді виводе текст що виграв
	if (number_sum_kost < 7.2)
	{
		if (sum_kost_console < number_sum_kost)
		{
			cout << "Du hast die Wette gewonnen!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 2;
			cout << "Ihr Einsatz hat sich verdoppelt, Ihr Einsatz betragt =" << stavka << endl;
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
				cout << "Du hast die Wette gewonnen!" << endl;
				cout << endl;
				int stavka;
				stavka = vibor_stavka * 2;
				cout << "Ihr Einsatz hat sich verdoppelt, Ihr Einsatz betragt =" << stavka << endl;
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
			cout << "Du hast die Wette verloren!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 0;
			cout << "Ihr Gebot wurde storniert, Ihr Gebot ist = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
			losses++;
		}
	}

	//Якщо сума яку загадав користувач та вона рівно та сама що й випали кубики, тоді гравець отримує в четверо більше очок

	if (number_sum_kost == sum_kost_console)
	{
		cout << "Sie haben die Wette gewonnen und werden die Wette noch viermal gewinnen!" << endl;
		cout << endl;
		int stavka;
		stavka = vibor_stavka * 4;
		cout << "Ihr Einsatz erhöht sich um vier, Ihr Einsatz beträgt = " << stavka << endl;
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
				cout << "Du hast die Wette gewonnen!" << endl;
				cout << endl;
				int stavka;
				stavka = vibor_stavka * 2;
				cout << "Ihr Einsatz hat sich verdoppelt, Ihr Einsatz betragt =" << stavka << endl;
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
			cout << "Du hast die Wette gewonnen!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 2;
			cout << "Ihr Einsatz hat sich verdoppelt, Ihr Einsatz betragt =" << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
			wins++;
		}
	}

	if (number_sum_kost > 7.8)
	{
		if (sum_kost_console < 7.2)
		{
			cout << "Du hast die Wette verloren!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 0;
			cout << "Ihr Gebot wurde storniert, Ihr Gebot ist = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
			losses++;
		}
	}

	// Виведення результату
	ResultGer(wins, losses);
	countGer(wins, losses);
	StatsGer(wins, losses);

	//Коротке меню подальших дій
	cout << R"(
Y/y - Setzen Sie das Spiel fort.
M/m - Zuruck zum Menu.
N/n - Das Spiel verlassen.
			)" << endl;

	cout << endl;
	//меню
	cout << "Mochten Sie weiterspielen? [Y/M/N]: ";
	char vibor;
	cin >> vibor;

	cout << endl;
	//Продовжити цикл гри
	if (vibor == 'y' || vibor == 'Y')
	{
		cout << "Das Spiel beginnt durch..." << endl << endl;
		for (int i = 0; i < 3; i++)
		{
			Sleep(1000);
			cout << i + 1 << endl << endl;
			Sleep(1000);
		}
		system("cls");
		GameGer();
	}
	//Вийти в меню
	if (vibor == 'm' || vibor == 'M')
	{
		system("cls");
		German();
	}
	//Завершити остаточно программу
	else if (vibor == 'n' || vibor == 'N')
	{
		cout << "\a------------------------Ausgabe-----------------------\n" << endl;
		cout << "Wenn Sie sich entscheiden zu spielen, kommen Sie vorbei!\n" << endl;
		cout << "--------------------------------------------------------\n" << endl;
		resultGer();
		system("PAUSE");
	}

}

void StatsGer(int wins, int losses)
{

	ofstream file("stats.txt", ios::app);

	// Записуємо значення змінних в текстовий файл
	file << wins << " " << losses << endl;

	// Закриваємо файл
	file.close();

}

void ResultGer(int wins, int losses)
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
	cout << "--------Verlauf des Statistikkontos--------\n" << endl;
	cout << content << std::endl;
	cout << "-------------------------------------------------" << endl;
}

void countOnesInColumnsGer(string& filename, int& countCol1, int& countCol2)
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

void countGer(int wins, int losses)
{
	string filename = "stats.txt";
	int countCol1, countCol2;
	countOnesInColumnsGer(filename, countCol1, countCol2);
	cout << "----------Statistiken---------\n" << endl;
	cout << "Verlust: " << countCol1 << endl;
	cout << "Gewonnen: " << countCol2 << endl;
	cout << "-----------------------------\n" << endl;
}
