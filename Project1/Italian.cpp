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
int Ukraine();
void GameIt();
void StatsIt(int wins, int losses);
void ResultIt(int wins, int losses);
void countIt(int wins, int losses);

//Функція для завершення гри в функції function();
int resultIt()
{
	return 3;
}

//Основна функція
int Italian()
{
	setlocale(0, "Italian");

	//Меню
	cout << "\a----------------Gioco dei dadi---------------\n" << endl;
	cout << "1.Giocare.\n" << endl;
	cout << "2.Istruzioni.\n" << endl;
	cout << "3.Cambia la lingua del gioco.\n" << endl;
	cout << "4.Produzione.\n" << endl;
	cout << "------------------------------------------\n" << endl;

	//Вибирання пункту з меню та заповнення змінної
	cout << "Inserisci un numero dal menu: ";
	int menu_sumbol;
	cin >> menu_sumbol;
	cout << endl;

	//Основний алгоритм гри
	switch (menu_sumbol)
	{
		//Основний принцип гри
	case 1:
		cout << "La partita iniziera tra..." << endl << endl;
		//Відведення циклу до початку гри
		for (int i = 0; i < 3; i++)
		{
			Sleep(1000);
			cout << i + 1 << endl << endl;
			Sleep(1000);
		}
		//Стирається верхня строки тексту та розпочинається функція основного алгоритму гри з допомогою рекурсії
		system("cls");
		GameIt();

		break;

		//Інструкція
	case 2:
		cout << "\a-----------------------------------------------Istruzioni-----------------------------------------------\n" << endl;
		cout << R"(Il gioco dei dadi e un gioco che simula due dadi nell'intervallo da 1 a 6 (fino a 12 in totale).
Ad esempio: se la somma dei numeri caduti e inferiore a 7 e il giocatore ha pensato a un numero inferiore a 7, vince la scommessa piazzata.
Se la somma dei numeri usciti e superiore a 7 e il giocatore ha indovinato un numero maggiore di 7, vince anche la scommessa piazzata.
Se il giocatore indovina la somma dei numeri, riceve quattro volte piu punti della scommessa effettuata.
La scommessa e persa se non si verifica nessuna delle situazioni descritte.
Nel momento iniziale, il giocatore ha 100 punti. )" << endl << endl;
		cout << "--------------------------------------------------------------------------------------------------------\n";

		//Коротке меню подальших дій
		cout << R"(
Y/y - Continua il gioco.
M/m - Esci dal menu.
N/n - Esci dal gioco.
			)" << endl;
		//меню
		cout << "Vuoi continuare a giocare? [Y/M/N]: ";
		char vibor_inctruction;
		cin >> vibor_inctruction;

		cout << endl;
		//Продовжити цикл гри
		if (vibor_inctruction == 'y' || vibor_inctruction == 'Y')
		{
			cout << "La partita iniziera tra..." << endl << endl;
			for (int i = 0; i < 3; i++)
			{
				Sleep(1000);
				cout << i + 1 << endl << endl;
				Sleep(1000);
			}
			system("cls");
			GameIt();
		}
		//Вийти в меню
		if (vibor_inctruction == 'm' || vibor_inctruction == 'M')
		{
			system("cls");
			Italian();
		}
		//Завершити остаточно программу
		else if (vibor_inctruction == 'n' || vibor_inctruction == 'N')
		{
			cout << "\a----------------Produzione---------------\n" << endl;
			cout << "Se decidi di giocare, entra!\n" << endl;
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
		cout << "\a----------------Produzione---------------\n" << endl;
		cout << "Se decidi di giocare, entra!\n" << endl;
		cout << "------------------------------------\n" << endl;
		system("PAUSE");
		return 1;

		break;

		//Помилка при виборі меню
	default:
		cerr << "Un numero del genere e raro!!!\n" << endl;
		Italian();
		break;
	}
	system("PAUSE");
	return 5;
}

//Функція основного алгоритма гри
void GameIt()
{
	setlocale(0, "Italian");

	cout << "\a--------------------Gioco--------------------\n" << endl;
	//Заповнюємо змінну числом яким ми хочему загадати
	cout << "Inserisci il numero di dadi che vuoi indovinare [da 2 a 12]: ";
	int number_sum_kost;
	cin >> number_sum_kost;

	cout << endl;

	//Заповнюємо сумму ставки, яку ви хочете ввести
	cout << "Inserisci l`importo della scommessa che desideri piazzare [da 1 a 100]: ";
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

		cout << "Il primo osso: " << endl;

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

		cout << "Il primo osso: " << endl;

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

		cout << "Il primo osso: " << endl;

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

		cout << "Il primo osso: " << endl;
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

		cout << "Il primo osso: " << endl;

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

		cout << "Il primo osso: " << endl;

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

		cout << "Secondo osso: " << endl;

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

		cout << "Secondo osso: " << endl;

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

		cout << "Secondo osso: " << endl;

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

		cout << "Secondo osso: " << endl;

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

		cout << "Secondo osso: " << endl;

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

		cout << "Secondo osso: " << endl;

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
	cout << "Ti sono cadute le ossa " << kost1 << " e " << kost2 << "." << endl;

	cout << endl;

	//Додає дві кістки в сумму та виводить їх суму
	int sum_kost_console;
	sum_kost_console = kost1 + kost2;
	cout << "La somma e: " << sum_kost_console << endl;

	cout << endl;

	int wins = 0;
	int losses = 0;


	//основний алгоритм дій

		//Якщо сума яку загадав користува2 менше 7 та кубики випали менше 7, тоді виводе текст що виграв
	if (number_sum_kost < 7.2)
	{
		if (sum_kost_console < number_sum_kost)
		{
			cout << "Hai vinto la scommessa!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 2;
			cout << "La tua scommessa e raddoppiata, la tua scommessa e = " << stavka << endl;
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
				cout << "Hai vinto la scommessa!" << endl;
				cout << endl;
				int stavka;
				stavka = vibor_stavka * 2;
				cout << "La tua scommessa e raddoppiata, la tua scommessa e = " << stavka << endl;
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
			cout << "Hai perso la scommessa!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 0;
			cout << "La tua offerta e stata annullata, la tua offerta e = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
			losses++;
		}
	}

	//Якщо сума яку загадав користувач та вона рівно та сама що й випали кубики, тоді гравець отримує в четверо більше очок

	if (number_sum_kost == sum_kost_console)
	{
		cout << "Hai vinto una scommessa e ne vincerai altre quattro!" << endl;
		cout << endl;
		int stavka;
		stavka = vibor_stavka * 4;
		cout << "La tua scommessa e aumentata di quattro, la tua scommessa e = " << stavka << endl;
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
				cout << "Hai vinto la scommessa!" << endl;
				cout << endl;
				int stavka;
				stavka = vibor_stavka * 2;
				cout << "La tua scommessa e raddoppiata, la tua scommessa e = " << stavka << endl;
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
			cout << "Hai vinto la scommessa!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 2;
			cout << "La tua scommessa e raddoppiata, la tua scommessa e = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
			wins++;
		}
	}

	if (number_sum_kost > 7.8)
	{
		if (sum_kost_console < 7.2)
		{
			cout << "Hai perso la scommessa!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 0;
			cout << "La tua offerta e stata annullata, la tua offerta e =" << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
			losses++;
		}
	}

	// Виведення результату
	ResultIt(wins, losses);
	countIt(wins, losses);
	StatsIt(wins, losses);

	//Коротке меню подальших дій
	cout << R"(
Y/y - Continua il gioco.
M/m - Esci dal menu.
N/n - Esci dal gioco.
			)" << endl;

	cout << endl;
	//меню
	cout << "Vuoi continuare a giocare? [Y/M/N]: ";
	char vibor;
	cin >> vibor;

	cout << endl;
	//Продовжити цикл гри
	if (vibor == 'y' || vibor == 'Y')
	{
		cout << "La partita iniziera tra..." << endl << endl;
		for (int i = 0; i < 3; i++)
		{
			Sleep(1000);
			cout << i + 1 << endl << endl;
			Sleep(1000);
		}
		system("cls");
		GameIt();
	}
	//Вийти в меню
	if (vibor == 'm' || vibor == 'M')
	{
		system("cls");
		Italian();
	}
	//Завершити остаточно программу
	else if (vibor == 'n' || vibor == 'N')
	{
		cout << "\a----------------Produzione---------------\n" << endl;
		cout << "Se decidi di giocare, entra!\n" << endl;
		cout << "------------------------------------\n" << endl;
		resultIt();
		system("PAUSE");
	}

}

void StatsIt(int wins, int losses)
{

	ofstream file("stats.txt", ios::app);

	// Записуємо значення змінних в текстовий файл
	file << wins << " " << losses << endl;

	// Закриваємо файл
	file.close();

}

void ResultIt(int wins, int losses)
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
	cout << "--------Conto storico della statistica--------\n" << endl;
	cout << content << std::endl;
	cout << "-------------------------------------------------" << endl;
}

void countOnesInColumnsIt(string& filename, int& countCol1, int& countCol2)
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

void countIt(int wins, int losses)
{
	string filename = "stats.txt";
	int countCol1, countCol2;
	countOnesInColumnsIt(filename, countCol1, countCol2);
	cout << "----------Statistiche---------\n" << endl;
	cout << "Sconfitta: " << countCol1 << endl;
	cout << "Vinto: " << countCol2 << endl;
	cout << "-----------------------------\n" << endl;
}
