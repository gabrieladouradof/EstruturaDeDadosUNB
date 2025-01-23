#include <stdio.h>


int separa (char v[], int p, int r, long int *qt_trocas) {
    char c = v[r]; // pivô, mudei p char e mesma coisa no quicksort
    char t;
    int j = p;
    for (int k = p; k < r; ++k)
        if (v[k] <= c) {
            t = v[j];
            v[j] = v[k];
            v[k] = t;
            ++j;
            (*qt_trocas)++;
        }
    t = v[j];
    v[j] = v[r];
    v[r] = t;
    (*qt_trocas)++;
    return j;
}
void quicksort (char v[], int p, int r, long int *qt_trocas)
{
   if (p < r) {
      int j = separa (v, p, r, qt_trocas);
      quicksort (v, p, j - 1, qt_trocas);
      quicksort (v, j + 1, r, qt_trocas);
    } 
}

