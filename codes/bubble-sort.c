
 #include <stdio.h> 


  void swap(int *a, int *b) {
    int tempvar = *a;
    *a = *b;
    *b = tempvar;
  }

void bubble_sort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {

        for (j = 0; j < n - 1; j++) {

            if (vetor[j] > vetor[j + 1]) {
                swap(&vetor[j],&vetor[j + 1]);
            }
        }
    }
}


