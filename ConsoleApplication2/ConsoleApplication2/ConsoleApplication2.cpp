#include <iostream>
#include <clocale>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");
	SetConsoleOutputCP(CP_UTF8);

	// Ім'я комп'ютера
	string PCsName = "DESKTOP-RLMN2Q3";
	// Скільки років комп'ютеру
	unsigned short int PCsAge = 1;
	// Вид операційної системи
	string PCsSystemType = "Windows 10 Home";
	// Чи працює комп'ютер?
	bool IsComputerWorking = true;
	// Відеоадаптер
	string GPU = "NVIDIA GeForce GTX 1080 Ti";
	// Процессор
	string CPU = "Intel(R) Core(TM) i8-8700 CPU";
	// Оперативна пам'ять (Гб)
	unsigned short int RAM = 8;
	// HDD
	string HDD = "KINGSTON SA400M8240G 1 Tb";

	unsigned int totalMemoryInBytes = sizeof(PCsName) +
									sizeof(PCsAge) +
									sizeof(PCsSystemType) +
									sizeof(IsComputerWorking) +
									sizeof(GPU) +
									sizeof(CPU) +
									sizeof(RAM) +
									sizeof(HDD);

	cout << "Ім'я комп'ютера:\t\t\t" << PCsName << endl;
	cout << "Скільки років комп'ютеру:\t\t" << PCsAge << endl;
	cout << "Вид операційної системи:\t\t" << PCsSystemType << endl;
	cout << "Чи працює комп'ютер?:\t\t\t" << ((IsComputerWorking) ? "Так" : "Ні") << endl;
	cout << "Відеоадаптер:\t\t\t\t" << GPU << endl;
	cout << "Процессор:\t\t\t\t" << CPU << endl;
	cout << "Оперативна пам'ять (Гб):\t\t" << RAM << endl;
	cout << "SDD:\t\t\t\t\t" << HDD << endl;
	cout << "Об'єм використанної пам'ятi (в байтах):\t" << totalMemoryInBytes << endl;
	return 0;
}