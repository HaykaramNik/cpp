#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

class Monster
{
public:
  enum MonsterType
  {
    Dragon,
    Goblin,
    Ogre,
    Orc,
    Skeleton,
    Troll,
    Vampire,
    MAX_MONSTER_TYPES
  };

  Monster(){};

  Monster(Monster::MonsterType type, std::string name, int healthLevel)
  {
    m_type = type;
    m_name = name;
    m_healthLevel = healthLevel;
  };

  std::string getTypeString(Monster::MonsterType type)
  {
    switch (type)
    {
    case Dragon:
      return "Dragon";
    case Goblin:
      return "Goblin";
    case Ogre:
      return "Ogre";
    case Orc:
      return "Orc";
    case Skeleton:
      return "Skeleton";
    case Troll:
      return "Troll";
    case Vampire:
      return "Vampire";  
    default:
      return "undefined monster type";
    }
  };

  void print()
  {
    std::cout << m_name << " is the " << getTypeString(m_type) << " that has " << m_healthLevel << " health points." << std::endl;
  }

private:
  Monster::MonsterType m_type;
  std::string m_name;
  int m_healthLevel;
};

class MonsterGenerator
{
public:
  static Monster generateMonster()
  {
    Monster::MonsterType randMonsterType = (Monster::MonsterType)getRandomNumber(0, Monster::MAX_MONSTER_TYPES - 1);
    int randMonsterHealthValue = getRandomNumber(1, 100);
    static const std::string s_names[6] = {
      "John",
      "Jack",
      "Janibek",
      "Xcho",
      "Vcho",
      "Poncho"
    };
    std::string randMonsterName = s_names[getRandomNumber(0, 5)];
    return Monster(randMonsterType, randMonsterName, randMonsterHealthValue);
  }

  static int getRandomNumber(int min, int max)
	{
		static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
		return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	}
};

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	rand();
 
	Monster m = MonsterGenerator::generateMonster();
	m.print();
 
    return 0;
};