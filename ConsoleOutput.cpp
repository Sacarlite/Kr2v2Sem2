#include <vector>//Библеотека подключения вектора
#include "Herbivores.h"//Подключение HeaderFile с классом Herbivores
#include "ConsoleOutput.h"//Подключение HeaderFile с выводом данных на консоль
#include <iostream>//Библеотека ввода и вывода


void ConsoleOutput(std::vector<Herbivores> herbivores)
{
	std::cout << "Количество животных:" << herbivores.size() << std::endl;
	std::cout << "Список животных:" << std::endl;
	for (auto i = herbivores.begin(); i < herbivores.end(); ++i)//Перебор вектора квартир при помощи итератора https://metanit.com/cpp/tutorial/7.3.php
	{
		std::cout << "Животное:" << std::endl;
		i->ShowFullIformation();
	}
}
