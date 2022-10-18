#include <iostream>
#include <clocale>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");
	SetConsoleOutputCP(CP_UTF8);

	// Ќазва гри
	string GameName = "Backbone";
	// —к≥льки коштуЇ гра (CHF)
	unsigned short int CostOfTheGame = 25;
	// —к≥льки коштуЇ гра з доповненн€ми (CHF)
	float CostOfTheFullGame = 29.70;
	// ћ≥сце, €ке буде вид≥лене на гру (Gb)
	unsigned short int SpaceForTheGame = 1;
	// яка в≥деокарта потр≥бна
	string GPUNeeded = "Nvidia GTX 950 or equivalent";
	// який процессор потр≥бен
	string CPUNeeded = "Multi-core 2.5GHz or faster";
	// —к≥льки оперативна пам'€т≥ потр≥бно (√б)
	unsigned short int RAMNeeded = 8;
	// –екомендована операц≥йна система
	string OSNeeded = "Windows 7";
	// ’то розробив гру
	string GameDevsInfo = "EGGNUT";

	unsigned int totalMemoryInBytes = sizeof(GameName) +
									sizeof(CostOfTheGame) +
									sizeof(CostOfTheFullGame) +
									sizeof(SpaceForTheGame) +
									sizeof(GPUNeeded) +
									sizeof(RAMNeeded) +
									sizeof(OSNeeded) +
									sizeof(GameDevsInfo);

	cout << "Ќазва гри:\t\t\t\t\t" << GameName << endl;
	cout << "—к≥льки коштуЇ гра (CHF):\t\t\t" << CostOfTheGame << endl;
	cout << "—к≥льки коштуЇ гра з доповненн€ми (CHF):\t" << CostOfTheFullGame << endl;
	cout << "ћ≥сце, €ке буде вид≥лене на гру (Gb):\t\t" << SpaceForTheGame << endl;
	cout << "яка в≥деокарта потр≥бна:\t\t\t" << GPUNeeded << endl;
	cout << "який процессор потр≥бен:\t\t\t" << RAMNeeded << endl;
	cout << "—к≥льки оперативна пам'€т≥ потр≥бно (√б):\t" << OSNeeded << endl;
	cout << "’то розробив гру:\t\t\t\t" << GameDevsInfo << endl;
	cout << "ќб'Їм використанноњ пам'€тi (в байтах):\t\t" << totalMemoryInBytes << endl;
	return 0;
}