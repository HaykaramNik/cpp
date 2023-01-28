class Solution
{
public:
  int myAtoi(string s)
  {
    bool isSigned = false;
    bool sign = false;
    string number = "";

    for (int i = 0; i < s.size(); ++i)
    {
      if (isNumber(s, i))
      {
        if (number == "" && s[i] == '0') continue;
        number += s[i];
        continue;
      }
      if (number != "" && !isNumber(s, i))
        break;
      if (s[i] == ' ')
        continue;
      if (s[i] == '-')
      {
        if (isSigned) return 0;
        isSigned = true;
        sign = true;
        continue;
      };
      if (s[i] == '+') 
      {
        if (isSigned) return 0;
        isSigned = true;
        continue;
      }
      if (number == "") return 0;

    };

    long mul = 1;
    long result = 0;
    for (int i = number.size() - 1; i >= 0; --i)
    {
      result += mul * ((int)number[i] - 48);
      mul *= 10;
    }

    if (sign) result = -result;
    if (result > INT_MAX || result < INT_MIN)
    {
      return (result > INT_MAX)?INT_MAX:INT_MIN;
    };

    return result;
  }

  bool isNumber(string s, int index)
  {
    int ch = s[index];
    return (ch >= 48 && ch <= 57)?true:false;
  };
};
