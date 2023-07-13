#include "Player.h"

Player::Player(string name, string role)
	:
	Character(name, role)
{}

void Player::attack() const
{
	info();
	cout << " landed successful attack on enemy" << endl;
}
