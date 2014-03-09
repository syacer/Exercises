#include <stdio.h>

void main()
{
  char MyStr[10];
  char MySubStr[3];
  int i;
  int j;
  int MaxIndex;

  scanf("%s",MyStr);
  scanf("%s",MySubStr);

  for(i = 0; i <sizeof(MyStr);i++)
  {
    if(MyStr[MaxIndex] < MyStr[i])
    {
        MaxIndex = i;
    }
  }
  for(i = 0; i < 9 - MaxIndex ;i++)
  {
    if(9-i+3 <= 9)
      MyStr[9-i+3] = MyStr[i];
  }
  for(i = 1; i <+ 3; i++)
  {
    MyStr[i+MaxIndex] = MySubStr[i-1];
  }
  printf("s",MyStr);
}