int romanCharToInt(char c)
{
  switch (c)
  {
  case 'I': return 1;
  case 'V': return 5;
  case 'X': return 10;
  case 'L': return 50;
  case 'C': return 100;
  case 'D': return 500;
  case 'M': return 1000;
  }
  return 0;
}

int romanToInt(char *s)
{
  int i = 0, sum = 0;
  while (s[i] != '\0')
  {
    int value1 = romanCharToInt(s[i]);
    int value2 = romanCharToInt(s[i + 1]);

    if (value2 > value1)
    {
      sum += value2 - value1;
      i += 2;
    }
    else
    {
      sum += value1;
      i++;
    }
  }
  return sum;
}
