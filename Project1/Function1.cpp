#include <iostream>
#include <clocale>
#include <ctime>

using namespace std;

void function1();
int main();

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
		if (sum_kost_console < number_sum_kost)
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
		if (sum_kost_console > 7.2)
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
		cout << "-------------------------------------------\n" << endl;;
	}

	//Якщо сума яку загадав користувач більше 7 та кубики випали більше 7, тоді виводе текст що виграв
	if (number_sum_kost > 7.8)
	{
		if (sum_kost_console > number_sum_kost)
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

	//Виграші коли числа менше загаданого, але вони знаходяться в цьому діапазон, який загаладав користувач

	if (number_sum_kost >= 1.8 && number_sum_kost <= 7.2) 
	{
		if (sum_kost_console < number_sum_kost && sum_kost_console >= 1.8) 
		{
			cout << "Ви вийграли ставку!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 2;
			cout << "Ваша ставка збiльшилася в двоє, ваша ставка становить = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;;
		}
	}
	else if (number_sum_kost >= 7.8 && number_sum_kost <= 12.2)
	{
		if (sum_kost_console < number_sum_kost && sum_kost_console >= 7.8) 
		{
			cout << "Ви вийграли ставку!" << endl;
			cout << endl;
			int stavka;
			stavka = vibor_stavka * 2;
			cout << "Ваша ставка збiльшилася в двоє, ваша ставка становить = " << stavka << endl;
			cout << endl;
			cout << "-------------------------------------------\n" << endl;;
		}
	}
	cout << R"(
Y/y - Продовжити гру
M/m - Вийти в меню
N/n - Вийти з гри
			)" << endl;
	cout << "Бажаєте ви продовжити грати? [Y/M/N]: ";
	char vibor;
	cin >> vibor;

	cout << endl;

	if (vibor == 'y' || vibor == 'Y')
	{
		system("cls");
		function1();
	}


	if (vibor == 'm' || vibor == 'M')
	{
		system("cls");
		main();
	}

	else if (vibor == 'n' || vibor == 'N')
	{
		cout << "\a----------------Вихiд---------------\n" << endl;
		cout << "Якщо задумаєш пограти, заходь!\n" << endl;
		cout << "------------------------------------\n" << endl;
	}
}
