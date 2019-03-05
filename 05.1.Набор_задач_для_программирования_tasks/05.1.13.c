/*5.1 Набор задач для программирования





Используя простые арифметические действия можно вычислить значение ex

.
Для этого используется следующая формула:
ex=1+x1!+x22!+x33!+x44!+…
Как и в случае с суммой для e можно использовать различное количество слагаемых. Напишите программу, вычисляющую значение ex двумя способами.

Входные данные:
Одно вещественное число x

.

Выходные данные:
Два вещественных числа. Каждое число писать на отдельной строке. Формат вывода: 6 знаков после запятой. Первое число -- значение ex
, вычисленное с использованием функции exp заголовочного файла math.h
Второе число -- значение ex, вычисленное с использованием суммы выше. Используйте 6

членов данной суммы.

Sample Input:

1

Sample Output:

2.718282
2.716667


*/

#include <stdio.h>  
#include <math.h>  
int main() { 
 double  x, xA, xB;  
 scanf("%lf", &x);

printf("%.6lf\n%.6lf", xA = exp(x), xB = 1 + ((x / (1 * 1)) + (pow(x,2) / (1 * 2)) + (pow(x,3) / (1 * 2 * 3)) + (pow(x,4) / (1 * 2 * 3 * 4)) + (pow(x,5) / (1 * 2 * 3 * 4 * 5))) );  
 return 0;  
} 

/*better code

#include <stdio.h>

int main() {
    double x;
    scanf("%lf", &x);
    printf("%.6lf\n%.6lf", exp(x), 1+x/1+x*x/2+x*x*x/6+x*x*x*x/24+x*x*x*x*x/120);
}

*/
