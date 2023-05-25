#pragma once
#include <iostream>
#include "Creator.h"
#include "Dish.h"
#include "Menu.h"
#include <vector>
using namespace std;

class Updater : private Creator 
{
public:
	Menu updateDish(Menu menu) {
		cout << "ОБНОВЛЕНИЕ БЛЮДА" << endl;

		vector <Dish> dishes = menu.getDishes();

		cout << "Введите номер блюда (>0): " << endl;
		int index;
		cin >> index;

		Dish dish = createDish();

		dishes[index-1] = dish;
		
		menu.setDishes(dishes);
		return menu;

	}
};

