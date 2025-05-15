#include "labs.h"
int main() 
{
    int x;//переменная для выбора номера лабораторной
    char c;//символьная переменная для выбора y|n
    while(1)//бесконечный цикл,выходим из него через break,если х=0
    {
        printf("Выберите лабораторную работу (1-6) или 0 для выхода: \n ");
        scanf("%d", &x);
        // Очистка буфера ввода от лишних(?) символов (если ввели букву вместо числа и тп)
        while(getchar() != '\n');
        if(x == 0) 
        break;//прерывает цикл while(1)
        switch(x)//проверяем значение переменной х,переключатель(?)
        {
            case 1:
                printf("Основное задание? (y/n): \n  ");
                c = getchar();//считывает из потока ввода один символ и возвращает его в программу
                while(getchar() != '\n'); // Очистка буфера(если вдруг ввели больше 1 символа)
                if(c == 'y' || c == 'Y') 
                lab1();
                else 
                lab1add();
                break; // Выход из switch
                
            case 2:
                printf("Основное задание? (y/n):  \n  ");
                c = getchar();
                while(getchar() != '\n');
                if(c == 'y' || c == 'Y')
                lab2();
                else 
                printf("Такой работы нет \n");
                break;
                
            case 3:
                printf("Основное задание? (y/n): \n  ");
                c = getchar();
                while(getchar() != '\n');
                if(c == 'y' || c == 'Y') 
                lab3();
                else 
                printf("Такой работы нет\n");
                break;
                
            case 4:
                printf("Основное задание? (y/n):  \n  ");
                c = getchar();
                while(getchar() != '\n');
                if(c == 'y' || c == 'Y') 
                lab4();
                else 
                printf("Такой работы нет \n");
                break;
                
            case 5:
                printf("Основное задание? (y/n):  \n  ");
                c = getchar();
                while(getchar() != '\n');
                if(c == 'y' || c == 'Y') 
                lab5();
                else
                lab5add();
                break;
                
            case 6:
                printf("Основное задание? (y/n):  \n  ");
                c = getchar();
                while(getchar() != '\n');
                if(c == 'y' || c == 'Y') 
                lab6();
                else
                printf("Такой работы нет \n");
                break;
                
            default:
                printf("Такой работы нет \n");
        }
    }
    
    return 0;
}
