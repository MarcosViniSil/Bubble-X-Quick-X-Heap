## Comparação entre bubble-sort, heap-sort e quick-sort

## Utilizando os códigos da pasta `code` e adicionando os resultados em uma tabela se obtem:

| Tamanho do vetor  | Bubble       | Heap      |  quick     |
| ------------------| ------------ |---------- |----------  |
| 10                | 0,000012 s   |0,000011 s | 0,000009 s |
| 100               | 0,000192 s   |0,000049 s | 0,000030 s |
| 1000              | 0,021929 s   |0,00618 s  | 0,000353 s |
| 10000             | 2,280825 s   |0,010221 s | 0,004250 s |
| 100000            | 289,669904 s |0,351864 s | 0,1192325 s|

## Com os dados em mãos é possível observar o comportamento de cada algoritmo e definir uma função para cada um utilizando o algoritmo de lagrange, utilizando este algoritmo temos o seguinte:

### Bobble sort:
<p align="center">
  <img src="https://github.com/MarcosViniSil/Bubble-X-Quick-X-Heap/blob/main/images/bubble.png" alt="swagger documentation1">
</p>

### Heap sort:
<p align="center">
  <img src="https://github.com/MarcosViniSil/Bubble-X-Quick-X-Heap/blob/main/images/heap.png" alt="swagger documentation1">
</p>

### Quick sort:
<p align="center">
  <img src="https://github.com/MarcosViniSil/Bubble-X-Quick-X-Heap/blob/main/images/quick.png" alt="swagger documentation1">
</p>

## Quando olhamos para a complexidade de cada algoritmo:
| Complexidade      | Bubble       | Heap      |  quick     |
| ------------------| ------------ |---------- |----------  |
| Melhor caso       | n            |n log n    | n log n    |
| Médio caso        | n^2          |n log n    | n log n    |
| Pior caso         | n^2          |n log n    | n^2        |

## É possível observar que o resultado obtido tende ao caso médio de cada algoritmo, em casos específicos onde um algoritmo pode ser melho que outro por conta da condição inicial do array foi desconsiderada deste teste.
