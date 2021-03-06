/**
*Усовершенствуйте программу, написанную на прошлом шаге. Теперь необходимо вывести все натуральные числа из промежутка [K,M],(K<M)

Входные данные:
Два целых числа K,M

. При этом M больше K

Выходные данные: Натуральные числа в порядке возрастания принадлежащие промежутку [K,M]

. Числа нужно разделять одним пробелом.

Подсказки:
Натуральные числа начинаются с 1

Целые числа могут быть и отрицательными. 

 Sample Input 1:

3 12

Sample Output 1:

3 4 5 6 7 8 9 10 11 12

Sample Input 2:

-3 3

Sample Output 2:

1 2 3
*/


#include <stdio.h>

int main(void) {

  int K = 0, M = 0;

  scanf("%d%d", &K, &M);

  if (K < 0 && M < 0) return 0;
  
  if ( M > 0 && M > K ){
  
  if(K <=0)
     K = 1;

     for (int a = K; a <= M; a++){

     printf("%d ", a);
     }

  }else printf("ERROR!");
  return 0;
}

/*better code

#include <stdio.h>
#include <math.h>

int main() {
    int k, m;
    scanf("%d %d", &k, &m);
    if (k < 1) k = 1;
    for (int i = k; i <= m; printf("%d\ ", i++));
}

*/
