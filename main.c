#include "labs.h"
#include <stdio.h>
int main() 
{
    int x;
    char c;
    while(1)
    {
        printf("Выберите лабораторную работу (1-6) или 0 для выхода: \n ");
        scanf("%d", &x);
        // Очистка буфера ввода
        while(getchar() != '\n');
        if(x == 0) 
        break;
        switch(x)
        {
            case 1:
                printf("Основное задание? (y/n): \n  ");
                c = getchar();
                while(getchar() != '\n'); // Очистка буфера
                if(c == 'y' || c == 'Y') 
                lab1();
                else 
                lab1add();
                break;
                
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
                lab4add();
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
                lab6add();
                break;
                
            default:
                printf("Такой работы нет \n");
        }
    }
    
    return 0;
}
