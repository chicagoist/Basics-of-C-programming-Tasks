/*

10.1 Функции и переменные
3 из 12 шагов пройдено
2 из 11 баллов  получено
Вы прошли больше 80% курса, оставьте отзыв
  

Минимум
Опишите функцию с именем min, которая вычисляет минимальное из двух чисел, переданных в неё.

Входные данные:
Два целых числа.

Выходные данные:
Одно целое число -- минимум из чисел, переданных в функцию.

Подсказки:
Необходимо написать только тело функции, без подключения файла stdio.h и функции main.

Sample Input:

8 3

Sample Output:

3

*/

int min (int a, int b){
    int min;

    min = a;
    if(a > b)
        min = b;
    return min;

}

/*
 * better code
 *
int min (int a, int b){
    if (a < b) return a; else return b;
}
*/
