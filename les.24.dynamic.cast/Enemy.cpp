#include "Enemy.h"

Enemy::Enemy(string name, string role)
	:
	Character(name, role)
{}

void Enemy::attack() const
{
	info();
	cout << " landed successful attack on player" << endl;
}
