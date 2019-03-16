#include "craps.h"
#include <vector>

void Craps::play_game()
{
	Die d1;
	Die d2;
	Shooter s;
	Roll& game = s.shoot(d1, d2);
	std::vector<Roll> rolls;		
	rolls.push_back(game);			
	bool isWon = false;

	
	if (game.result() == "Natural: ")		
	{
		return result;
	}
	else if (game.result() == "Craps: ")
	{
		rolls.push_back(game);
		shooters.push_back(s.shoot);
		
	else
	{
		
		game.result() == "Points: ";
		game;
		while (isWon == false)
		{
			if (game.result() == "Points: ")
			{
				rolls.push_back(game);
				shooters.push_back(s.shoot);
				isWon = true;
			}
			else if (game.value_1 + game.value_2 == 7)
			{
				rolls.push_back(game);
				shooters.push_back(s.shoot);
				isWon = true;
			}
		}
	}
}

std::ostream & operator<<(std::ostream & out, Craps & a)
{
	for (auto v : a.rolls)
	{
		out << v.result() << "\n";
	}
	return out;
}

std::istream & operator>>(std::istream & in, Craps & b)
{
	
	Shooter user;
	b.shooters.push_back(user);
}