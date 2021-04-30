#include <stdio.h>
#include <stdlib.h>
#define FP 25
#define GP 50
int main()
// let fire hitting probablity be 0.25 and growth probabality be 0.5
{
  int s = 20;
  int i, j, k, n;
  time_t t;
  char A[s][s];
  srand((unsigned)time(&t));
  for (int o = 1; o <= 20; o++)
  {
    if (o == 1)
    {
      for (i = 0; i < s; i++)
      {
        for (j = 0; j < s; j++)
        {
          if (rand() % 100 <= 50)
            A[i][j] = '*';
          else
            A[i][j] = ' ';
        }
      }
    }
    if (o == 1)
    {
      for (int k = 0; k < s; k++)
      {
        for (int n = 0; n < s; n++)
        {
          printf("%c", A[k][n]);
        }
        printf("\n");
      }
    }
    for (int k = 0; k < s; k++)
    {
      for (int n = 0; n < s; n++)
      {
        if (rand() % 100 <= FP)
        {
          A[k][n] = ' ';
        }
      }
    }
    for (int k = 0; k < s; k++)
    {
      for (int n = 0; n < s; n++)
      {
        printf("%c", A[k][n]);
      }
      printf("\n");
    }
    printf("\n");
    for (int k = 0; k < s; k++)
    {
      for (int n = 0; n < s; n++)
      {
        if (rand() % 100 <= GP && A[n][k] != '*')
        {
          A[n][k] = '*';
        }
      }
    }
    for (int k = 0; k < s; k++)
    {
      for (int n = 0; n < s; n++)
      {
        printf("%c", A[k][n]);
      }
      printf("\n");
    }
  }
}
