#ifndef CRIVO_H_
#define CRIVO_H_

#include <stdbool.h>

/**
 * Inicializa o array
 * Inputs: Número de elementos (tamanho do array)
 * Output: Nenhum
*/
bool *CRIVO_init(int N);

/**
 * Verifica se o objeto está conectado
 * Inputs: Id do elemento do array a ser verificado
 * Output: Se o nó já está conectado ou não (ou seja, se é primo ou não)
*/
bool CRIVO_connected(int p, bool *arr);

/**
 * Faz a união de um número não primo a seu múltiplo primo
 * Inputs: Id do elemento primo e id do elemento não primo
 * Output: Nenhum
*/
void CRIVO_union(int p, int q, bool *arr);

/**
 * Retorna o próximo primo
 * Inputs: Id do elemento primo atual
 * Output: O id do próximo primo
*/
int CRIVO_nextPrime(int p, bool *arr, int N);

/**
 * Limpa da memória a alocação
 * Inputs: Tamanho do array
 * Output: Nenhum
*/
void CRIVO_free(bool *arr);

#endif