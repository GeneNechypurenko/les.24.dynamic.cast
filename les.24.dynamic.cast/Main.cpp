#include <iostream>
#include <string>

#include "Character.h"
#include "Enemy.h"
#include "Player.h"

using namespace std;

void Attack(Character* character)
{
    if (Player* player = dynamic_cast<Player*>(character))    
        player->attack();
    
    else if (Enemy* enemy = dynamic_cast<Enemy*>(character))
        enemy->attack();    
}

int main()
{
    Player player("Dynamo", "knight");
    Enemy enemy("Castor", "rogue");

    Character* character1 = &player;
    Character* character2 = &enemy;

    Attack(character1);
    Attack(character2);

	return 0;
}