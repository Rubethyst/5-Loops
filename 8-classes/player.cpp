#include "stdafx.h"
#include "player.h"

void Player::attack(Player& otherplayer)
{
	otherplayer.takeDamage(damage);
}

void Player::takeDamage(int damage)
{
	health -= damage;
}
