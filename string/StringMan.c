#include <stdio.h>

void main()
{
  char MyStr[10] = {'@','@','@','@','@','@','@','@','@','@'};
  char MySubStr[3];
  int i;
  int MaxIndex = 0;

  scanf("%s",MyStr);
  scanf("%s",MySubStr);

  for(i = 0; i <sizeof(MyStr);i++)
  {
    if(MyStr[MaxIndex] < MyStr[i])
    {
        MaxIndex = i;
    }
  }
  for(i = 6; i >= MaxIndex + 1 ;i--)
  {
      MyStr[i+3] = MyStr[i];
  }

  for(i = 1; i <= 3; i++)
  {
    MyStr[i+MaxIndex] = MySubStr[i-1];
  }
  for(i = 0; i < 10; i++)
    printf("%c",MyStr[i]);
}
