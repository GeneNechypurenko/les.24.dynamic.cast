#pragma once
#include "Character.h"

class Enemy :public Character
{
public:
	Enemy(string name, string role);
	void attack() const;
};