/*
   6.3 Условный оператор if-else


   Даны две точки А(х1,у1)
   и В(х2,у2)

   . Составить программу, определяющую, которая из точек находится ближе к началу координат.

   Входные данные:
   Четыре целых числа. Первые два числа -- координаты точки A
   , вторые два числа -- координаты точки B

   .

   Выходные данные:
   Вывести одно число, номер точки, которая находится ближе к началу координат.

   Подсказки:
   для определения расстояния от точки (x,y)

   до начала координат, можно использовать формулу
   R=x2+y2−−−−−−√

   Sample Input:

   1 2
   1 -3

   Sample Output:

   1

 */

#include <stdio.h>
#include <math.h>

int main(void) {

        int A, B, x1,y1,x2,y2;

        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

        A = sqrt(pow(x1,2)+pow(y1,2));
        B = sqrt(pow(x2,2)+pow(y2,2));

        if ( A < B) {

                printf("%d", 1);

        }else printf("%d", 2);

        return 0;
}

/*better code

 #include <stdio.h>

   int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf(a*a+b*b>c*c+d*d ? "2" : "1");
   }

 */
