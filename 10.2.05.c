/*
10.2 Указатели
 


В программе объявлены две переменные целого типа. На каждую из них ссылается указатель. На первую ссылается указатель p_1, а на вторую указатель p_2. Кроме того, объявлена переменная типа double и указатель на неё p_dbl.

Используя указатели, подсчитать частное целых переменных (первую делим на вторую) и сохранить это значение в переменную, на которую ссылается p_dbl.

Чтобы получить значение переменной, на которую ссылается указатель, необходимо произвести разыменование указателя.

P.S. Полный исходный код задачи доступен на форуме для решивших задачу.

Sample Input:

30 42

Sample Output:

0.714

*/

#include <stdio.h>
int main(void) {
  int a=0, b=0;
  double f = 0;
  scanf("%d %d", &a, &b);
  double * p_dbl = &f;
  int * p_1 = &a;
  int * p_2 = &b;

*p_dbl = (double)(*p_1)/(*p_2);


  printf("%.3f",f);
return 0;
}

/*
 *
 * better code
 *
#include <stdio.h>
int main(void) {
  int a=0, b=0;
  double f = 0; 
  scanf("%d %d", &a, &b);
  double * p_dbl = &f;
  int * p_1 = &a;
  int * p_2 = &b;

*p_dbl = (double)(*p_1)/(*p_2);    


  printf("%.3f",f);
return 0;
}

*/