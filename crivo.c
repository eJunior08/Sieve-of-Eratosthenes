#include "crivo.h"
#include <stdlib.h>
#include <stdbool.h>

bool *CRIVO_init(int N)
{
  bool *arr = (bool *)malloc(N * sizeof(bool));

  for (int i = 0; i < N; i++)
  {
    arr[i] = false;
  }

  return arr;
}

bool CRIVO_connected(int p, bool *arr)
{
  return arr[p] != false;
}

void CRIVO_union(int p, int q, bool *arr)
{
  arr[q] = true;
}

int CRIVO_nextPrime(int p, bool *arr, int N)
{
  for (int i = p + 1; i < N; i++)
  {
    if (!CRIVO_connected(i, arr))
    {
      return i;
    }
  }
}

void CRIVO_free(bool *arr)
{
  free(arr);
}