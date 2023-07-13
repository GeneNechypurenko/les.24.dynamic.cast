#pragma once
#include <iostream>
#include <string>

using namespace std;

class Character
{
protected:
	string name;
	string role;

public:
	Character(const string name, const string role);

	void info() const;
	virtual void attack() const = 0;
};

