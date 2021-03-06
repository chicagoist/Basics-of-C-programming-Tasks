/*5.1 Набор задач для программирования






В современном обществе существует путаница при использовании слов килобайт, мегабайт и т.д.
В некоторых случаях под килобайтом понимается 103=1000 байт, а в других 210=1024 байт. Согласно Википедии для USB-флешек используются десятичные приставки (степени 10). Напишите программу, которая вычисляет на сколько байт коммерсанты обманывают потребителя при покупке им USB-флешки на K

- гигабайт.

Входные данные:
Одно натуральное число: K
. 0<K<32

Выходные данные:
Одно число, равное разности между количеством байт в К
двоичных гигабайтах и K

десятичных гигабайтах.

Подсказки:
1 двоичных гигабайт = 230
байт
1 десятичный гигабайт = 109

байт
Используйте тип данных double для результата и промежуточных вычислений

Sample Input 1:

2

Sample Output 1:

147483648

Sample Input 2:

30

Sample Output 2:

2212254720


*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int K;
double decimalGB, bitsGB, raznitsa;

 int main()
{
  scanf("%d", &K);

  bitsGB = K*(pow(2,30));
  decimalGB = K*(pow(10,9));

  raznitsa = bitsGB - decimalGB;

  printf("%.0lf\n", raznitsa);

  return 0;


}

/*better code

#include <stdio.h>

int main() {
  int k;
  scanf("%i", &k);
  printf("%.0lf", k * (pow(2, 30)) - k * (pow(10, 9)));
}

*/
