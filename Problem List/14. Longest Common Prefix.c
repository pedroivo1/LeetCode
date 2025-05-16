char *longestCommonPrefix(char **strs, int strsSize)
{
  char *prefix = malloc(201);
  int i = 0;
  char letter;
  while (strs[0][i] != '\0')
  {
    letter = strs[0][i];
    for (int j = 1; j < strsSize; j++)
    {
      if (strs[j][i] == '\0' || strs[j][i] != letter)
      {
        prefix[i] = '\0';
        return prefix;
      }
    }
    prefix[i] = letter;
    i++;
  }
  prefix[i] = '\0';
  return prefix;
}
