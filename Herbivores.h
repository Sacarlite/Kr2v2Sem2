#pragma once
#include <string>
#include "Mammals.h"
/*
Класс травоядное наследуемый от класса млекопитающее с приватными полями: ядовитость,средняя продолжительность жизни
обитания
*/
class Herbivores : public Mammals//Класс травоядное
{
private:
	bool _poisonous{};//Поле ядовитое
	int _averageLifeExpectancy{};//Поле средней продолжительности жизни
	std::string PoisonousToString();
public:
	Herbivores(std::string methodOfNutrition, double weight, std::string livingEnvironment,
		std::string name, bool poisonous, int averageLifeExpectancy);//Конструктор
	std::string GetFullInformation() override;//Функция получения полной информации
	void ShowFullIformation() override;//Функция вывода полной информации
	void SetMethodOfNutrition(std::string methodOfNutrition);
	std::string GetMethodOfNutrition();
	void SetWeight(double weight);
	double GetWeight();
	void SetLivingEnvironment(std::string livingEnvironment);
	std::string GetLivingEnvironment();
	void SetName(std::string name);
	std::string GetName();
	void SetPoisonous(bool poisonous);
	bool GetPoisonous();
	void SetAverageLifeExpectancy(int averageLifeExpectancy);
	int GetAverageLifeExpectancy();
};
