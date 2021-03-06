/*
   5.3 Набор задач для программирования - 3.

   Сравнение чисел по модулю. Обычно мы сравниваем числа между собой напрямую. Но в математике и криптографии частенько используется сравнение по модулю целого числа k
   . Два числа сравнимы по модулю k, если равны их остатки от деления на k. Например, числа 3 и 9, сравнимы по модулю 6, а числа 25 и 13 сравнимы по модулю 3. Напишите программу, которая помогает сравнивать числа по модулю k

   .

   Входные данные:
   Три натуральных числа:
   Первое число k
   -- модуль, по которому необходимо сравнить числа. Второе и третье -- числа, которые необходимо сравнить по модулю k

   Выходные данные:
   Два числа: остатки от деления на k

   Sample Input:

   20 864 910

   Sample Output:

   4 10

 */
#include <stdio.h>
#include <math.h>

int main()

{

        int k, N1, N2, n1, n2;

        scanf("%d%d%d", &k, &N1, &N2);

        n1 = N1%k;
        n2 = N2%k;


        printf("%d %d\n", n1, n2);

        return 0;
}

/*better code
 #include <stdio.h>

   int main() {
    int k, a, b;
    scanf("%d %d %d", &k, &a, &b);
    printf("%d %d", a % k, b % k);
   }
 */
