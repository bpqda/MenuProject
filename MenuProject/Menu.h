#pragma once
#include <iostream>
#include "Dish.h"
#include <vector>
using namespace std;

class Menu
{
private:
	string name;
	vector <Dish> dishes;

public:
	Menu();

	string getName() {
		return name;
	}
	vector <Dish> getDishes() {
		return dishes;
	}
	void setName(string mName) {
		name = mName;
	}

	void setDishes(vector <Dish> mDishes) {
		dishes = mDishes;
		
	}
};

