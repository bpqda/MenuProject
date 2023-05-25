#pragma once
#include <iostream>
#include "Dish.h"
#include "Menu.h"

using namespace std;
class Deleter
{
public:
	Menu deleteDish(Menu menu) {
		vector <Dish> dishes = menu.getDishes();

		cout << "УДАЛИТЬ БЛЮДО" << endl;

		cout << "Введите номер блюда (>0): ";
		int index;
		cin >> index;

		auto iter = dishes.cbegin();
		dishes.erase(iter + index-1);
		menu.setDishes(dishes);
		return menu;

	}
	Menu deleteMenu(Menu menu) {
		vector <Dish> dishes = menu.getDishes();
		cout << "УДАЛИТЬ МЕНЮ" << endl;
		dishes.clear();
		menu.setDishes(dishes);
		return menu;
	}
};

