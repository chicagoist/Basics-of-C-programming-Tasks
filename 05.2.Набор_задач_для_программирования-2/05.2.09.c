/*
5.2 Набор задач для программирования - 2.



Идёт k секунда суток. Найти количество секунд прошедших с
начала последнего часа.

Входные данные:
Целое число k

-- количество секунд прошедших с начала суток.

Выходные данные:
Целое число, равное количеству секунд прошедших с начала последнего часа.

Sample Input:

32792

Sample Output:

392

*/

#include <stdio.h>
#include <math.h>



int main() {

    int X, x1, x2=3600;

    scanf("%d",&X);
    x1 = X%x2;

    printf("%d\n", x1);

  return 0;
}

/*better code

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", a%3600);
}

*/
