#include "crivo.h"
#include <stdlib.h>
#include <stdbool.h>

int *CRIVO_init(int N)
{
  int *arr = (int *)malloc(N * sizeof(int));

  for (int i = 0; i < N; i++)
  {
    arr[i] = i;
  }

  return arr;
}

bool CRIVO_connected(int p, int *arr)
{
  return arr[p] != p;
}

void CRIVO_union(int p, int q, int *arr)
{
  arr[q] = arr[p];
}

int CRIVO_nextPrime(int p, int *arr, int N)
{
  for (int i = p + 1; i < N; i++)
  {
    if (!CRIVO_connected(i, arr))
    {
      return i;
    }
  }
}

void CRIVO_free(int *arr)
{
  free(arr);
}