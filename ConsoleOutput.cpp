#include <vector>//���������� ����������� �������
#include "Herbivores.h"//����������� HeaderFile � ������� Herbivores
#include "ConsoleOutput.h"//����������� HeaderFile � ������� ������ �� �������
#include <iostream>//���������� ����� � ������


void ConsoleOutput(std::vector<Herbivores> herbivores)
{
	std::cout << "���������� ��������:" << herbivores.size() << std::endl;
	std::cout << "������ ��������:" << std::endl;
	for (auto i = herbivores.begin(); i < herbivores.end(); ++i)//������� ������� ������� ��� ������ ��������� https://metanit.com/cpp/tutorial/7.3.php
	{
		std::cout << "��������:" << std::endl;
		i->ShowFullIformation();
	}
}
