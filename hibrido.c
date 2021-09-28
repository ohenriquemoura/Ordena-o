#include "insercao.h"
#include "quicksort.h"
#include "hibrido.h"

void hibrido(int *array, int n){
    if(n<32000)
      insercao(array, n);
    else
      quicksort( array,  n);
}
