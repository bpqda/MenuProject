#pragma once

#include <iostream>
#include "Dish.h"
#include "Menu.h"
#include <vector>
using namespace std;

class Reader
{
public:
	void readDish(Menu menu) {

		cout << "ЧТЕНИЕ БЛЮДА" << endl;
		cout << "Введите номер блюда (>0) ";
		int index;
		cin >> index;

		Dish dish = menu.getDishes()[index-1];
		cout << index << ". " << dish.getName() << endl
			<< "Вес: " << dish.getWeight() << "Цена: " << dish.getPrice() << " Р" << endl;

	}
	void readMenu(Menu menu) {
		cout << "ЧТЕНИЕ МЕНЮ" << endl;
		cout << "Меню на " << menu.getName() << ": " << endl;
		for (int i = 0; i < menu.getDishes().size(); i++) {
			Dish dish = menu.getDishes()[i];

			cout << i + 1 << ". " << dish.getName() << endl
				<< "Вес: " << dish.getWeight() << " Цена: " << dish.getPrice() << " Р" << endl;
		}
	}
};

