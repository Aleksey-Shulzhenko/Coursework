//Бібліотеки
#include <iostream>
#include <clocale>
#include <ctime>
#include <stdio.h>
#include <Windows.h>

using namespace std;//Мова та постійне використання std
//Функція для завершення гри в функції function();
int result()
{
	return 3;
}

//Індентифікатор для функції
void function();

//Основна функція
int main()
{
	setlocale(0, "rus");

	//Меню
	cout << "\a----------------Гра Кiстки---------------\n" << endl;
	cout << "1.Грати\n" << endl;
	cout << "2.Iнструкцiя\n" << endl;
	cout << "3.Вихiд\n" << endl;
	cout << "------------------------------------------\n" << endl;

	//Вибирання пункту з меню та заповнення змінної
	cout << "Введiть цифру з меню: ";
	int menu_sumbol;
	cin >> menu_sumbol;
	cout << endl;

	//Основний алгоритм гри
	switch (menu_sumbol)
	{
		//Основний принцип гри
	case 1 :
		cout << "Гра розпочнеться через..." << endl << endl;
		//Відведення циклу до початку гри
		for (int i = 0; i < 3; i++)
		{
			Sleep(1000);
			cout << i + 1 << endl << endl;
			Sleep(1000);
		}
		//Стирається верхня строки тексту та розпочинається функція основного алгоритму гри з допомогою рекурсії
		system("cls");
		function();

		break;

		//Інструкція
	case 2 :
		cout << "\a-----------------------------------------------Iнструкцiя-----------------------------------------------\n" << endl;
		cout << R"(Гра Кiстки -- це гра, яка моделює два кубика в дiапазонi вiд 1 до 6 (в сумарностi виходить ДО 12).
Наприклад: Якщо сума цифр, щo випали менше 7 i гравець задумав число менше 7, вiн виграє зроблену ставку.
Якщо сума цифр, що випали, бiльше 7 i гравець задумав число бiльше 7, вiн також виграє зроблену ставку.
Якщо граючий вгадав суму цифр, вiн отримує вчетверо бiльше очок, нiж зроблена ставка.
Ставка програна, якщо немає жодна з описаних cитуацiй. 
У початковий момент у того, хто грає 100 очок. )" << endl << endl;
		cout << "--------------------------------------------------------------------------------------------------------\n";

		//Коротке меню подальших дій
		cout << R"(
Y/y - Продовжити гру
M/m - Вийти в меню
N/n - Вийти з гри
			)" << endl;
		//меню
		cout << "Бажаєте ви продовжити грати? [Y/M/N]: ";
		char vibor_inctruction;
		cin >> vibor_inctruction;

		cout << endl;
		//Продовжити цикл гри
		if (vibor_inctruction == 'y' || vibor_inctruction == 'Y')
		{
			cout << "Гра розпочнеться через..." << endl << endl;
			for (int i = 0; i < 3; i++)
			{
				Sleep(1000);
				cout << i + 1 << endl << endl;
				Sleep(1000);
			}
			system("cls");
			function();
		}
		//Вийти в меню
		if (vibor_inctruction == 'm' || vibor_inctruction == 'M')
		{
			system("cls");
			main();
		}
		//Завершити остаточно программу
		else if (vibor_inctruction == 'n' || vibor_inctruction == 'N')
		{
			cout << "\a----------------Вихiд---------------\n" << endl;
			cout << "Якщо задумаєш пограти, заходь!\n" << endl;
			cout << "------------------------------------\n" << endl;
			system("PAUSE");
			return 2;
		}
		
		break;

		//Вихід
	case 3 :
		cout << "\a----------------Вихiд---------------\n" << endl;
		cout << "Якщо задумаєш пограти, заходь!\n" << endl;
		cout << "------------------------------------\n" << endl;
		system("PAUSE");
		return 1;

		break;

		//Помилка при виборі меню
	default :
		cerr << "Такої цифри намає!!!\n" << endl;
		main();
		break;
	}
	system("PAUSE");
	return 0;
}

//Функція основного алгоритма гри
void function()
{
	setlocale(0, "rus");

	cout << "\a--------------------Гра--------------------\n" << endl;
	//Заповнюємо змінну числом яким ми хочему загадати
	cout << "Введiть число суми костей яке ви хочете загадати [вiд 2 до 12]: ";
	int number_sum_kost;
	cin >> number_sum_kost;

	cout << endl;

	//Заповнюємо сумму ставки, яку ви хочете ввести
	cout << "Введiть сумму ставки яку ви хочете поставити [вiд 1 до 100]: ";
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

		cout << "Перша кiстка: " << endl;

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

		cout << "Перша кiстка: " << endl;

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

		cout << "Перша кiстка: " << endl;

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

		cout << "Перша кiстка: " << endl;

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

		cout << "Перша кiстка: " << endl;

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

		cout << "Перша кiстка: " << endl;

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

		cout << "Друга кiстка: " << endl;

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

		cout << "Друга кiстка: " << endl;

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

		cout << "Друга кiстка: " << endl;

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

		cout << "Друга кiстка: " << endl;

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

		cout << "Друга кiстка: " << endl;

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

		cout << "Друга кiстка: " << endl;

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
	cout << "Вам випали костi " << kost1 << " та " << kost2 << "." << endl;

	cout << endl;

	//Додає дві кістки в сумму та виводить їх суму
	int sum_kost_console;
	sum_kost_console = kost1 + kost2;
	cout << "В сумi виходить: " << sum_kost_console << endl;

	cout << endl;

	//основний алгоритм дій

		//Якщо сума яку загадав користува2 менше 7 та кубики випали менше 7, тоді виводе текст що виграв
	if (number_sum_kost < 7.2)
	{
		if (sum_kost_console < 7.2)
		{
			cout << "Ви вийграли ставку!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 2;
			cout << "Ваша ставка збiльшилася в двоє, ваша ставка становить = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
		}
	}

	if (number_sum_kost < 7.2)
	{
		if (sum_kost_console > 7.8)
		{
			cout << "Ви програли ставку!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 0;
			cout << "Ваша ставка анульовано, ваша ставка становить = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
		}
	}

	//Якщо сума яку загадав користувач та вона рівно та сама що й випали кубики, тоді гравець отримує в четверо більше очок
	if (number_sum_kost == sum_kost_console)
	{
		cout << "Ви виграли ставу та виграєте ствку в четверо бiльше!" << endl;
		cout << endl;
		int stavka;
		stavka = vibor_stavka * 4;
		cout << "Ваша ставка збiльшилася в четверо, ваша ставка становить = " << stavka << endl;
		cout << endl;
		cout << "-------------------------------------------\n" << endl;
	}

	//Якщо сума яку загадав користувач більше 7 та кубики випали більше 7, тоді виводе текст що виграв
	if (number_sum_kost > 7.8)
	{
		if (sum_kost_console > 7.8)
		{
			cout << "Ви вийграли ставку!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 2;
			cout << "Ваша ставка збiльшилася в двоє, ваша ставка становить = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
		}
	}

	if (number_sum_kost > 7.8)
	{
		if (sum_kost_console < 7.2)
		{
			cout << "Ви програли ставку!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 0;
			cout << "Ваша ставка анульовано, ваша ставка становить = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;
		}
	}

		//Коротке меню подальших дій
		cout << R"(
Y/y - Продовжити гру
M/m - Вийти в меню
N/n - Вийти з гри
			)" << endl;

		cout << endl;
		//меню
		cout << "Бажаєте ви продовжити грати? [Y/M/N]: ";
		char vibor;
		cin >> vibor;

		cout << endl;
		//Продовжити цикл гри
		if (vibor == 'y' || vibor == 'Y')
		{
			cout << "Гра розпочнеться через..." << endl << endl;
			for (int i = 0; i < 3; i++)
			{
				Sleep(1000);
				cout << i + 1 << endl << endl;
				Sleep(1000);
			}
			system("cls");
			function();
		}
		//Вийти в меню
		if (vibor == 'm' || vibor == 'M')
		{
			system("cls");
			main();
		}
		//Завершити остаточно программу
		else if (vibor == 'n' || vibor == 'N')
		{
			cout << "\a----------------Вихiд---------------\n" << endl;
			cout << "Якщо задумаєш пограти, заходь!\n" << endl;
			cout << "------------------------------------\n" << endl;
			result();
			system("PAUSE");
		}
	}
