#include "labs.h"
#include <stdio.h>
int factorial(int n);
void lab1() 
    {
        printf("Работа №1.Линейные алгоритмы");
        float L,v,t;
        printf ("Введите значение переменной L: ");
        scanf("%f",&L);
        printf ("Введите значение переменной v: ");
        scanf("%f",&v);
        t=(2*L)/v;
        printf("Ответ: = %f\n",t);
    }

void lab1add() 
    {
        printf("Дополнительное задание к работе №1 \n");
        printf("Реализовать функцию рассчета времени, которая принимает значение L как целое число, а V как вещественное \n");
        int func_time(int L, float V) 
        {
            return (int) (L / V);
        }
            int L;
            float V;
            printf("Введите длину (L) в метрах: ");
            scanf("%d", &L);
            printf("Введите скорость (V) в метрах в секунду: ");
            scanf("%f", &V);
            int time = func_time(L, V);
            printf("Время: %d секунд\n", time);
    }
        int factorial(int n)
        {
        if (n == 0) 
        return 1;
        else 
        return factorial(n - 1) * n;
        }
void lab2() 
    {
        printf("Работа №2.Циклические алгоритмы \n");
            int N, i = 0, n = 1, znam;
            float result=1, chisl=1, x;
            printf("Введите числитель: \n");
            scanf("%f", &x);
            printf("Введите количество элементов:\n");
            scanf("%d", &N);
            while(i<N)
            {
                chisl = chisl*x;
                znam = factorial(n); 
                result=result+(chisl/znam);
                n=n+1; 
                i=i+1;
            }
            printf("Сумма первых %d элементов ряда: %f\n", N, result);
    }

void lab3() 
    {
            printf("Работа №3.Обработка потока символов\n");
            #define YES 1 
            #define NO 0 
            { 
            int c; 
            int flag = NO; 
            int sum = 0;
            char lastChar; 
            while ((c = getchar()) != EOF) { 
            if (c == ' ' || c == '.' || c == '\n' || c == ',') { 
            if (flag == YES) { 
            if ((lastChar != 'a' && lastChar != 'e' && lastChar != 'i' && lastChar != 'o' && lastChar != 'u' && lastChar != 'A' && lastChar != 'E' && lastChar != 'I' && lastChar != 'O' && lastChar != 'U')) { // Проверяем, является ли последний символ согласной
            sum = sum + 1;
            }
            flag = NO;
            }
            } else { 
            lastChar = c;
            flag = YES; 
            }
            }
            if (flag == YES && (lastChar != 'a' && lastChar != 'e' && lastChar != 'i' && lastChar != 'o' && lastChar != 'u' && lastChar != 'A' && lastChar != 'E' && lastChar != 'I' && lastChar != 'O' && lastChar != 'U')) { // Проверяем, если последнее слово не закончилось разделителем и последний символ - согласная.
            sum = sum + 1;
            }
            printf("Количество слов, заканчивающихся на согласную букву: %d\n", sum);
        }
    }
void lab4() 
    {
        printf("Работа №4.Обработка символьных строк\n");
        char x[200];
        printf("Введите строку: ");
        scanf(" %199[^\n]", x);
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        int dlinastroki = 0;
        while (x[dlinastroki] != '\0') dlinastroki++;
    
        if (dlinastroki == 0) {
            printf("Строка пустая\n");
            return 0;
        }
        int schet_slov = 0;
        int last_word_start = -1, last_word_end = -1;
        int second_last_word_start = -1, second_last_word_end = -1;
        for (int i = dlinastroki - 1; i >= 0; i--) {
            if (x[i] != ' ') {
                if (i == dlinastroki - 1 || x[i + 1] == ' ') {
                    if (schet_slov == 0) {
                        last_word_end = i;
                        schet_slov++;
                    } else if (schet_slov == 1) {
                        second_last_word_end = i;
                        schet_slov++;
                    }
                }
                if (i == 0 || x[i - 1] == ' ') {
                    if (schet_slov == 1 && last_word_start == -1) {
                        last_word_start = i;
                    } else if (schet_slov == 2 && second_last_word_start == -1) {
                        second_last_word_start = i;
                        break;
                    }
                }
            }
        }
    
        if (schet_slov < 2) {
            printf("Недостаточно слов в строке\n");
            return;
        }
        int delete_length = second_last_word_end - second_last_word_start + 1;
        if (second_last_word_end + 1 < dlinastroki && x[second_last_word_end + 1] == ' ') {
            delete_length++;
        }
        for (int i = second_last_word_start; i <= dlinastroki - delete_length; i++) {
            x[i] = x[i + delete_length];
        }
        dlinastroki= dlinastroki -delete_length;
        x[dlinastroki] = '\0';
        printf("Строка после удаления предпоследнего слова: %s\n", x);
        return;
    }

void lab4add()
    {
        printf("Дополнительное задание к работе №4\n");
        printf("");
        // Реализация
    }

void lab5() 
    {
        printf("Работа №5.Одномерные массивы \n");
        int x[10];
        int i;
        int max;
        int max_index=0;
        printf("Введите 10 целых чисел: \n");
        for (i=0 ; i<10; i=i+1)
         {
            scanf("%d " ,&x[i]);
         }
            max=x[0];
            for (i=1; i<10; i=i+1)
            {
                if (x[i]>max)
                {
                    max=x[i];
                    max_index=i;
                }
            }
        for (i=0; i<max_index; i=i+1)
        {
            x[i]=0;
        }
        for (i=max_index+1; i<10; i=i+1)
        {
            x[i]=max;
        }
            printf("Измененный массив: \n");
            for (i=0; i<10; i=i+1)
                printf("%d ", x[i] );
            printf("\n");
    }

void lab5add() 
    {
        printf("Дополнительное задание к работе №5\n");
        printf("");
        // Реализация
    }

void lab6() 
    {
        printf("Работа №6.Двумерные массивы \n");
            #define N 5
            int x[N][N];
            int sum_nad=0;
            int sum_pod=0;
            int i,j;
            printf("Введите элементы массива %dx%d: \n", N, N);
            for (i=0; i<N; i=i+1)
            {
                for(j=0; j<N; j=j+1)
            {    
                    scanf("%d ", &x[i][j]);
            }
            }        
            for(i=0; i<N; i=i+1)
            {
                for(j=0; j<N; j=j+1)
            {
                if (i<j)
                {
                    sum_nad=sum_nad+x[i][j];
                }
                else if (i>j)
                {
                    sum_pod=sum_pod+x[i][j];
                }    
            }
            }
            if (sum_nad<sum_pod)
            {
            for (i=0; i<N; i=i+1)
            {
                for (j=0; j<N; j=j+1) 
                {
                    if (i<j)
                    {
                        x[i][j]=0;
                    }
                }
            }
            }
            else
            {
                for (i=0; i<N; i=i+1)
                {
                    for (j=0; j<N; j=j+1) 
                    {
                        if (i>j)
                        {
                            x[i][j]=0;
                        }
                    }
                }
            }
            printf("Измененный массив: \n");
            for (i=0; i<N; i=i+1)
            {
                for (j=0; j<N; j=j+1)
            { 
                      printf("%d ", x[i][j] );
            }      
            printf("\n");
            }
            return;     
    }

void lab6add()
    {
        printf("Дополнительное задание к работе №6\n");
        printf("");
        // Реализация
    }
