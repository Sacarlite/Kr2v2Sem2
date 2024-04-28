#include <iostream>//Библеотека ввода и вывода
#include <windows.h>//Библеотека ответственная за русскую локализацию консоли
#include <conio.h>//Библеотека ответственная за функцию getch
#include <vector>//Библеотека подключения вектора
#include "Herbivores.h"//Подключение HeaderFile с классом Apartment
#include "MainMenu.h"//Подключение HeaderFile с Enum-меню
#include "Checks.h"//Подключение HeaderFile с проверками пользовательского ввода
#include "ConsoleOutput.h"//Подключение HeaderFile с выводом списка апартаментов на консоль
#include "FileInput.h"//Подключение HeaderFile с файловым вводом
#include "FileOutput.h"//Подключение HeaderFile с файловым выводом
#include "Input.h"//Подключение HeaderFile с вводом с консоли
#include "PersonalInterface.h"//Подключение HeaderFile пользовательского интерфейса
#define QUIT 27//Макрос присваивания Esc значение 27

int main()
{
	setlocale(LC_CTYPE, "RU"); //Локализация
	SetConsoleCP(1251); //функции для настройки локализации в строковых переменных при вводе
	SetConsoleOutputCP(1251); //функции для настройки локализации в строковых переменных при выводе
	int userChoice = 0; //Переменная пользовательского ввода
	std::vector<Herbivores> herbivores; //Вектор вводных апартаментов
	ShowGreetings(); //Вывод приветствия
	ShowTask(); //Вывод задания
	do
	{
		ShowInputOption(); //Вывод типа вввода
		userChoice = GetChoise(); //Ввод пользовательского решения
		switch (userChoice) //switch выбора консольного ввода или файлового
		{
		case (ConsoleInput):
			herbivores = ConsoleIput(); //Ввод данных об апартаментов с консоли 
			break;
		case (FileInput):
			herbivores = FileDataInput(); //Ввод данных об апартаментов из файла
			ConsoleOutput(herbivores); //Вывод считанных данных на консоль
			break;
		}
		ConsoleOutput(herbivores); //Вывод итогового массива на консоль
		ShowOutputType(); //Вывод сообщения об сохранении выбранных данных в файл
		userChoice = GetChoise(); // Ввод пользовательского решения
		if (userChoice == Yes)
		{
			FileOutput(herbivores); //Сохранение итогового массива в фаил
		}
		herbivores.clear(); //Чистка вектора квартир
		std::cout << "Нажмите Esc чтобы завершить работу программы." << std::endl;
		std::cout << "Нажмите Enter чтобы продолжить." << std::endl;
		userChoice = _getch(); //Ввод кода символа введённого с клавиатуры
	} while (userChoice != QUIT); //Проверка что код символа равен коду макроса Quit
}
