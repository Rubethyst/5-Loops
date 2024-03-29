// 5-Loops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include<time.h>

int main()
{
	srand(time(NULL));
	int health1 = 100;
	int health2 = 100;
	bool isAlive1 = true;
	bool isAlive2 = true;
	bool playerTurnP1 = true;
	bool playerTurnP2 = true;
	char input;
	char input2;
	int weapon;
	int damage1 = 5;
	int damage2 = 5;
	int array [5];
	void fight(int health1, int health2);
		{
			health2 -= damage1;
			std::cout << "Player Two took " << damage1 << " damage, and has " << health2 << " health remaining." << std::endl;
		}
	void fight2(int health2, int health1);
		{
			health1 -= damage2;
			std::cout << "Player One took " << damage2 << " damage, and has " << health1 << " health remaining." << std::endl;
		}
	void crit(int health1, int health2);
		{
			health2 -= (damage1 + (damage1 / 2));
			std::cout << "Critical hit! Player two took " << (damage1 + (damage1 / 2)) << " damage, and has " << health2 << " health remaining." << std::endl;
		}
	void strike(int health1, int health2);
		{
			health2 -= (damage1 + damage1 + (damage1 / 2));
			damage1 = 5;
			std::cout << "Striking hit! Player Two took " << (damage1 + damage1 + (damage1 / 2)) << " Damage, and has " << health2 << " Health left! \nhowever, player 1's weapon broke in the process." << std::endl;
		}
	void fail(int health1);
		{
			health1 -= damage1;
			std::cout << "Critical fail! Player one hit themself for " << damage1 << " damage, \nand has " << health1 << " health remaining." << std::endl;
		}
	void crit2(int health2, int health1);
		{
			health1 -= (damage2 + (damage2 / 2));
			std::cout << "Critical hit! Player two took " << (damage2 + (damage2 / 2)) << " damage, and has " << health1 << " health remaining." << std::endl;
		}
	void strike2(int health2, int health1);
		{
			health1 -= (damage2 + damage2 + (damage2 / 2));
			damage2 = 5;
			std::cout << "Striking hit! Player One took " << (damage2 + damage2 + (damage2 / 2)) << " Damage, and has " << health1 << " Health left! \nhowever, player 2's weapon broke in the process." << std::endl;
		}
	void fail2(int health2);
		{
			health2 -= damage2;
			std::cout << "Critical fail! Player two hit themself for " << damage2 << " damage, \nand has " << health2 << " health remaining." << std::endl;
		}

	std::cout << "Your battle takes place in the Treasury. \n \nAll the riches surrounding you go to the winner. \n \nPlayer 1, press ""o"" to attack, and ""p"" to look for a new weapon. \n \nPlayer 2, press ""a"" to attack, and ""d"" to look for a new weapon. \n \nPlayer 1 goes first \n \n";

	while (health1 > 0 && health2 > 0)
	{
		
		if (playerTurnP1 == true)
		{
			std::cin >> input2;
			if (input2 == 'o')
			{
				weapon = rand() % 6 + 0;
				switch (weapon)
				{
				case (0):
					fail;
					break;
				case (1):
					std::cout << "Player One missed, and only damaged their own confidence." << std::endl;
					break;
				case (2):
					fight;
					break;
				case (3):
					fight;
					break;
				case (4):
					fight;
					break;
				case (5):
					crit;
					break;
				case (6):
					strike;
					break;
				}
			}

			if (input2 == 'p')
			{

				int choice = rand() % 4;
				weapon = array[choice];
				{
					switch (weapon)
					{
					case (0):
						damage1 = 5;
						std::cout << "Player 1's weapon broke while looking, and they found nothing.";
						break;

					case (1):
						damage1 = 10;
						std::cout << "Player 1 found a Rusty Dagger. I'd pity you, but I don't feel like it. \n";
						break;
					case (2):
						damage1 = 15;
						std::cout << "Player 1 found a wooden spear. A glorified stick. \n";
						break;
					case (3):
						damage1 = 20;
						std::cout << "Player 1 found a Steel Longsword. Now we're getting somewhere. \n";
						break;
					case (4):
						damage1 = 30;
						std::cout << "Player one found the GodBlade. I believe the game is almost over. \n";
						break;
					}

					std::cout << "Player One has" << health1 << std::endl;
					std::cout << "Player Two has" << health2 << std::endl;
				}

			}


			if (playerTurnP2 == true)
			{
				std::cin >> input;
				if (input == 'a')
				{
					weapon = rand() % 6 + 0;
					switch (weapon)
					{
					case (0):
						
					{
						fail2;
						break;
					}

					case (1):
					{
						std::cout << "Player Two missed, but totally on purpose." << std::endl;
						break;
					}
					case (2):
					{
						fight2;
						break;
					}
					case (3):
					{
						fight2;
						break;
					}
					case (4):
					{
						fight2;
						break;
					}
					case (5):
					{
						crit;
						break;
					}
					case (6):
					{
						crit2;
						break;
					}
					
					}
				}

				if (input == 'd')
				{
					int choice = rand() % 4;
					weapon = array[choice];
					{
			
						switch (weapon)
						{
						case (0):
							damage2 = 5;
							std::cout << "Player 2 found a grand healing potion. Which would be great, \nif this game had healing. \n \n";
							break;

						case (1):
							damage2 = 10;
							std::cout << "Player 2 found a padded boxing glove. It's as soft as the word ""padded"" sounds \n \n";
							break;
						case (2):
							damage2 = 15;
							std::cout << "Player 2 found a sheild. You can't defend yourself, but it's good for bashing. \n \n";
							break;
						case (3):
							damage2 = 20;
							std::cout << "Player 2 found a gun. This kind of breaks the immersion. \n \n";
							break;
						case (4):
							damage2 = 30;
							std::cout << "Player 2 found The michrophone. Tear player 1 apart with your sick beats. \n \n";
							break;
						}
						 
						
					}

					
				}
			}
		}
		if (health1 <= 0)
		{
			std::cout << "\nPlayer 1 has fallen into an eternal slumber. \nPlayer 2, the Treasury is yours! \n";
		}

		if (health2 <= 0)
		{
			std::cout << "\nPlayer 2 has breathed their last. \nPlayer 1, enjoy the vast riches that await you. \n";
		}

		system("pause");
		
	}
	return 0;
}