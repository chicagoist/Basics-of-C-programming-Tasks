/*5.1 Набор задач для программирования


Масса одной молекулы воды приблизительно равна 3×10−23 грамм.  Масса одной капли воды приблизительно 0.05 гр. В одном гранёном стакане ≈249.5 гр.  Напишите программу, которая вычисляет количество капель и молекул воды в N

гранёных стаканах воды.

Входные данные:
Натуральное число N

-- количество стаканов воды.

Выходные данные:
Два числа.  Первое число -- количество капель в N
стаканах воды (целое число). Второе число -- количество молекул воды в N

стаканах воды, указанное с точностью до трёх десятичных цифр.

Подсказки:
Для вывода вещественного числа используйте спецификатор формата %e.
Для объявления очень малых/больших переменных используйте научный формат записи чисел.

double x = 3e-23;

Sample Input 1:

1

Sample Output 1:

4990 8.317e+24

Sample Input 2:

3

Sample Output 2:

14970 2.495e+25

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(void){
  int N;
  double mol, kapel, stakan;

  scanf("%d", &N);

  kapel = N*(249.5/0.05);
  mol = (double)N*(249.5/(3*(pow(10,-23))));

    printf("%.0lf %0.3e ", kapel, mol);
    return 0;
}

/*better code

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%.0lf %.3e", n*249.5/0.05, n*249.5/3e-23);
}

*/
