#include <iostream>
#include <string>

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

int main()
{
	Monster jack(Monster::Orc, "Jack", 90);
  jack.print();
 
  return 0;
}