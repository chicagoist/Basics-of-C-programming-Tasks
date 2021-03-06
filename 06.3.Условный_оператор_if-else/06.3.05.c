/*
   6.3 Условный оператор if-else


   Кнопочный электронный кодовый замок имеет десять кнопок. Каждая из кнопок имеет свой порядковый номер от 0 до 9. Правильный код 1024 зашит внутрь замка. Человек, который хочет открыть дверь, должен ввести на циферблате последовательно 1, 0, 2 и 4. Напишите программу, моделирующую работу такого замка.

   Входные данные:
   Четыре целых числа b1,b2,b3,b4

   -- номера кнопок, которые нажал человек.

   Выходные данные:
   Строка open, если введён правильный код. Строка close, если введён неправильный код.
   https://ucarecdn.com/703a4c01-67a6-41a4-9885-e4a4b7e3b62b/-/crop/406x413/52,13/-/preview/


   Sample Input 1:

   1 0 2 4

   Sample Output 1:

   open

   Sample Input 2:

   1 0 2 3

   Sample Output 2:

   close

 */

#include <stdio.h>
#include <math.h>

int main(void) {

        int X,x1,x2,x3,x4;

        scanf("%d%d%d%d",&x1,&x2,&x3,&x4);

        X = (x1*1000)+(x2*100)+(x3*10)+x4;

        if ( X == 1024) {

                printf("open");

        }else printf("close");


        return 0;
}

/*better code

 #include <stdio.h>

   int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf(a*1000+b*100+c*10+d == 1024 ? "open" : "close");
   }

 */
