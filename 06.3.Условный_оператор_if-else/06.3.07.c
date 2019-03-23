/*
   6.3 Условный оператор if-else


   Услуги телефонной сети оплачиваются по следующему правилу: за разговоры до 500 минут (включительно) в месяц — 350 руб., а разговоры сверх установленной нормы оплачиваются из расчета 2 руб. за минуту. Написать программу, вычисляющую плату за пользование телефоном для введенного времени разговоров за месяц.

   Входные данные:
   Одно целое число -- количество минут разговора за прошедший месяц.

   Выходные данные:
   Одно целое число -- размер платы в рублях за прошедший месяц.

   Sample Input:

   400

   Sample Output:

   350

 */

#include <stdio.h>
#include <math.h>

int main(void) {

        int minuts,price=350,sum;

        scanf("%d", &minuts);

        if (minuts <= 500) {

                printf("%d", price); return 0;

        }else if (minuts > 500)

                sum = price + 2*(minuts - 500);
        printf("%d", sum);

        return 0;
}

/*better code
 #include <stdio.h>

   int main() {
    int a;
    scanf("%d", &a);
    printf("%d", (a > 500)*(a - 500)*2+350);
   }
 */
