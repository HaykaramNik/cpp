#include <iostream>
#include <string>
#include <vector>

struct Map
{
  std::string m_student;
  char m_grade;
};

class GradeMap
{
private:
  std::vector<Map> m_map;

public:
  GradeMap(){};

  char& operator[] (std::string student)
  {
    for (int i = 0; i < this->m_map.size(); ++i)
    {
      if (this->m_map[i].m_student == student)
      {
        return this->m_map[i].m_grade;
      }
    }

    this->m_map.push_back(Map{student, ' '});
    return this->m_map[m_map.size() - 1].m_grade;
  }
};

int main ()
{
  GradeMap classroom;
  classroom["jack"] = 15;

  std::cout << (int)classroom["jack"] << std::endl;
}