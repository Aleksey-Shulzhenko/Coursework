//Бібліотеки
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <Windows.h>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;//Мова та постійне використання std

//Індентифікатор для функції
int main();
int English();
void GameEng();
void StatsEng(int wins, int losses);
void ResultEng(int wins, int losses);
void countEng(int wins, int losses);

//Функція для завершення гри в функції function();
int resultEng()
{
	return 3;
}

//Основна функція
int English()
{
	//Меню
	cout << "\a----------------Dice game---------------\n" << endl;
	cout << "1.Play.\n" << endl;
	cout << "2.Instruction.\n" << endl;
	cout << "3.Change the language of the game.\n" << endl;
	cout << "4.Output.\n" << endl;
	cout << "------------------------------------------\n" << endl;

	//Вибирання пункту з меню та заповнення змінної
	cout << "Enter a number from the menu: ";
	int menu_sumbol;
	cin >> menu_sumbol;
	cout << endl;

	//Основний алгоритм гри
	switch (menu_sumbol)
	{
		//Основний принцип гри
	case 1:
		cout << "The game will start in..." << endl << endl;
		//Відведення циклу до початку гри
		for (int i = 0; i < 3; i++)
		{
			Sleep(1000);
			cout << i + 1 << endl << endl;
			Sleep(1000);
		}
		//Стирається верхня строки тексту та розпочинається функція основного алгоритму гри з допомогою рекурсії
		system("cls");
		GameEng();

		break;

		//Інструкція
	case 2:
		cout << "\a-----------------------------------------------Instruction-----------------------------------------------\n" << endl;
		cout << R"(The Dice game is a game that simulates two dice in the range from 1 to 6 (up to 12 in total).
For example: If the sum of the numbers that have fallen is less than 7 and the player has thought of a number less than 7, he wins the placed bet.
If the sum of the numbers that have fallen out is more than 7 and the player guessed a number greater than 7, he also wins the placed bet.
If the player guessed the sum of the numbers, he receives four times more points than the bet made.
The bet is lost if there is none of the described situations.
At the initial moment, the player has 100 points. )" << endl << endl;
		cout << "--------------------------------------------------------------------------------------------------------\n";

		//Коротке меню подальших дій
		cout << R"(
Y/y - Continue the game.
M/m - Exit to the menu.
N/n - Quit the game.
			)" << endl;
		//меню
		cout << "Do you want to continue playing? [Y/M/N]: ";
		char vibor_inctruction;
		cin >> vibor_inctruction;

		cout << endl;
		//Продовжити цикл гри
		if (vibor_inctruction == 'y' || vibor_inctruction == 'Y')
		{
			cout << "The game will start in..." << endl << endl;
			for (int i = 0; i < 3; i++)
			{
				Sleep(1000);
				cout << i + 1 << endl << endl;
				Sleep(1000);
			}
			system("cls");
			GameEng();
		}
		//Вийти в меню
		if (vibor_inctruction == 'm' || vibor_inctruction == 'M')
		{
			system("cls");
			English();
		}
		//Завершити остаточно программу
		else if (vibor_inctruction == 'n' || vibor_inctruction == 'N')
		{
			cout << "\a----------------Output---------------\n" << endl;
			cout << "If you decide to play, come in!\n" << endl;
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
		cout << "\a----------------Output---------------\n" << endl;
		cout << "If you decide to play, come in!\n" << endl;
		cout << "------------------------------------\n" << endl;
		system("PAUSE");
		return 1;

		break;

		//Помилка при виборі меню
	default:
		cerr << "Such a number is scarce!!!\n" << endl;
		English();
		break;
	}
	system("PAUSE");
	return 5;
}

//Функція основного алгоритма гри
void GameEng()
{
	setlocale(0, "rus");

	cout << "\a--------------------Game--------------------\n" << endl;
	//Заповнюємо змінну числом яким ми хочему загадати
	cout << "Enter the number of dice sum you want to guess [from 2 to 12]: ";
	int number_sum_kost;
	cin >> number_sum_kost;

	cout << endl;

	//Заповнюємо сумму ставки, яку ви хочете ввести
	cout << "Enter the amount of the bet you want to place [from 1 to 100]: ";
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

		cout << "First bone: " << endl;

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

		cout << "First bone: " << endl;

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

		cout << "First bone: " << endl;

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

		cout << "First bone: " << endl;

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

		cout << "First bone: " << endl;

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

		cout << "First bone: " << endl;

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

		cout << "Second bone: " << endl;

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

		cout << "Second bone: " << endl;

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

		cout << "Second bone: " << endl;

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

		cout << "Second bone: " << endl;

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

		cout << "Second bone: " << endl;

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

		cout << "Second bone: " << endl;

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
	cout << "Your bones fell out " << kost1 << " and " << kost2 << "." << endl;

	cout << endl;

	//Додає дві кістки в сумму та виводить їх суму
	int sum_kost_console;
	sum_kost_console = kost1 + kost2;
	cout << "It turns out in the sum: " << sum_kost_console << endl;

	cout << endl;

	int wins = 0;
	int losses = 0;


	//основний алгоритм дій

		//Якщо сума яку загадав користува2 менше 7 та кубики випали менше 7, тоді виводе текст що виграв
	if (number_sum_kost < 7.2)
	{
		if (sum_kost_console < number_sum_kost)
		{
			cout << "You won the bet!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 2;
			cout << "Your bet has doubled, your bet is = " << stavka << endl;
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
				cout << "You won the bet!" << endl;
				cout << endl;
				int stavka;
				stavka = vibor_stavka * 2;
				cout << "Your bet has doubled, your bet is = " << stavka << endl;
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
			cout << "You lost the bet!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 0;
			cout << "Your bid has been cancelled, your bid is = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
			losses++;
		}
	}

	//Якщо сума яку загадав користувач та вона рівно та сама що й випали кубики, тоді гравець отримує в четверо більше очок

	if (number_sum_kost == sum_kost_console)
	{
		cout << "You won the bet and will win the bet four times more!" << endl;
		cout << endl;
		int stavka;
		stavka = vibor_stavka * 4;
		cout << "Your bet increased by four, your bet is = " << stavka << endl;
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
				cout << "You won the bet!" << endl;
				cout << endl;
				int stavka;
				stavka = vibor_stavka * 2;
				cout << "Your bet has doubled, your bet is = " << stavka << endl;
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
			cout << "You won the bet!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 2;
			cout << "Your bet has doubled, your bet is = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
			wins++;
		}
	}

	if (number_sum_kost > 7.8)
	{
		if (sum_kost_console < 7.2)
		{
			cout << "You lost the bet!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 0;
			cout << "Your bid has been cancelled, your bid is = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
			losses++;
		}
	}

	// Виведення результату
	ResultEng(wins, losses);
	countEng(wins, losses);
	StatsEng(wins, losses);

	//Коротке меню подальших дій
	cout << R"(
Y/y - Continue the game.
M/m - Exit to the menu.
N/n - Quit the game.
			)" << endl;

	cout << endl;
	//меню
	cout << "Do you want to continue playing? [Y/M/N]: ";
	char vibor;
	cin >> vibor;

	cout << endl;
	//Продовжити цикл гри
	if (vibor == 'y' || vibor == 'Y')
	{
		cout << "The game will start in..." << endl << endl;
		for (int i = 0; i < 3; i++)
		{
			Sleep(1000);
			cout << i + 1 << endl << endl;
			Sleep(1000);
		}
		system("cls");
		GameEng();
	}
	//Вийти в меню
	if (vibor == 'm' || vibor == 'M')
	{
		system("cls");
		English();
	}
	//Завершити остаточно программу
	else if (vibor == 'n' || vibor == 'N')
	{
		cout << "\a----------------Output---------------\n" << endl;
		cout << "If you decide to play, come in!\n" << endl;
		cout << "------------------------------------\n" << endl;
		resultEng();
		system("PAUSE");
	}

}

void StatsEng(int wins, int losses)
{

	ofstream file("stats.txt", ios::app);

	// Записуємо значення змінних в текстовий файл
	file << wins << " " << losses << endl;

	// Закриваємо файл
	file.close();

}

void ResultEng(int wins, int losses)
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
	cout << "--------History of statistics account--------\n" << endl;
	cout << content << std::endl;
	cout << "-------------------------------------------------" << endl;
}

void countOnesInColumnsEng(string& filename, int& countCol1, int& countCol2)
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

void countEng(int wins, int losses)
{
	string filename = "stats.txt";
	int countCol1, countCol2;
	countOnesInColumnsEng(filename, countCol1, countCol2);
	cout << "----------Statistics---------\n" << endl;
	cout << "Defeat: " << countCol1 << endl;
	cout << "Won: " << countCol2 << endl;
	cout << "-----------------------------\n" << endl;
}
