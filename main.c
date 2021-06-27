#include <stdio.h>
#include <stdlib.h>

#include "crivo.h"

int main(int argc, char *argv[])
{
  int N = atoi(argv[1]);
  int *arr;
  int p, q;

  arr = CRIVO_init(N);

  for (int i = 2; i < N;)
  {
    for (int j = i + 1; j < N; j++)
    {
      if (CRIVO_connected(j, arr))
      {
        continue;
      }

      if (arr[j] % i == 0)
      {
        CRIVO_union(i, j, arr);
      }
    }

    i = CRIVO_nextPrime(i, arr, N);
  }

  /* for (int i = 0; i < N; i++)
  {
    if (!CRIVO_connected(i, arr))
    {

      // printf("%d ", arr[i]);
    }
  } */

  // printf("\n");

  CRIVO_free(arr);
}