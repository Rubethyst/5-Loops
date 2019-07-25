#pragma once
class Player
{
privte:
	int health = 100;
public:
	int damage = 20;
	void attack(Player& otherplayer);
	void takeDamage(int damage);
};