#include "Character.h"

Character::Character(const string name, const string role)
	:
	name(name),
	role(role)
{}

void Character::info() const
{
	cout << name << " " << role;
}
