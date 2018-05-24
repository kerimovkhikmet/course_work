#include "menu.h"
#include "sorting.h"
#include "input_output.h"

void menu() // функція меню програми
{
    int key, key1, key2;
    printf("\n");
    printf("\t Курсова робота\n\t студента групи КВ-61\n\t Керімова Хікмета\n\n");
    printf(" Виберіть розмірність масиву \n");
    printf(" 1 - Одновимірний\n 2 - Трьохвимірний\n Ви обрали: ");
    scanf("%d", &key);
     switch (key) {
    case 1:
    printf(" Ви хочете побачити всі результати сортування? \n");
    printf(" 1 - Так\n 2 - Ні\n Ви обрали: ");
     scanf("%d", &key1);
     switch (key1) {
    case 1:
        // Виведення таблиці часу роботи конкретних алгоритмів для вектора vectА
        printf("\n");
        printf(" ______________________________________________________________________________________________________________\n");
        printf("|\t\t     vectA[%d]\t\t   |  Впорядкований  | Невпорядкований | Обернено-впорядкований|\n",      n);
        printf("|--------------------------------------------------------------------------------------------------------------|\n");

        Processing_Vector_Insert_Sort(1);
        printf("| Пряма вставка з лінійним пошуком місця вставки:  |\t %8.2f    |", (float)Result[0] / 20);
        Processing_Vector_Insert_Sort(2);
        printf("%9.2f\t       |", (float)Result[0] / 20);
        Processing_Vector_Insert_Sort(3);
        printf("%9.2f\t       |", (float)Result[0] / 20);
        printf("\n|--------------------------------------------------------------------------------------------------------------|\n");

        Processing_Vector_Select_Sort(1);
        printf("| Сортування методом прямого вибору:               |\t %8.2f    |", (float)Result[0] / 20);
        Processing_Vector_Select_Sort(2);
        printf("%9.2f\t       |", (float)Result[0] / 20);
        Processing_Vector_Select_Sort(3);
        printf("%9.2f\t       |", (float)Result[0] / 20);
        printf("\n|--------------------------------------------------------------------------------------------------------------|\n");

        Processing_Vector_Exchange_Sort(1);
        printf("| Сортування методом прямого обміну:               |\t %8.2f    |", (float)Result[0] / 20);
        Processing_Vector_Exchange_Sort(2);
        printf("%9.2f\t       |", (float)Result[0] / 20);
        Processing_Vector_Exchange_Sort(3);
        printf("%9.2f\t       |", (float)Result[0] / 20);
        printf("\n|--------------------------------------------------------------------------------------------------------------|\n");

        Processing_Vector_Quick_Sort(1);
        printf("| Сортування Хоара:\t\t\t           |\t %8.2f    |", (float)Result[0] / 20);
        Processing_Vector_Quick_Sort(2);
        printf("%8.2f\t       |", (float)Result[0] / 20);
        Processing_Vector_Quick_Sort(3);
        printf("%8.2f\t       |", (float)Result[0] / 20);
        printf("\n|__________________________________________________|_________________|_________________|_______________________|\n");

        break;

    case 2:
        printf(" Оберіть впорядкованість масиву: \n");
        printf("\n 1 - Впорядкований\n");
        printf(" 2 - Випадково впорядкований (Random)\n");
        printf(" 3 - Обернено-впорядкований\n\n");
        printf("Ви обрали: ");
        scanf(" %d", &mod2);
        system("cls");

        vector_input(mod2);
        printf(" Виберіть алгортим сортування : \n");
        printf(" 1 - Сортування методом прямої вставки \n");
        printf(" 2 - Сортування методом прямого вибору \n");
        printf(" 3 - Сортування методом прямого обміну \n");
        printf(" 4 - Сортування Хоара \n");
        printf(" 5 - В головне меню \n\n");
        printf(" Ваш вибір: ");
        scanf("%d", &num_of_alg);
        system("cls");
        switch (num_of_alg) {
        case 1:
            printf(" \t|||||||| Перед проведенням сортування ||||||||\n\n");
            vector_output();
            vector_insert_sort();
            printf("\n\n \t|||||||| Після проведення сортування ||||||||\n\n");
            vector_output();
            Processing_Vector_Insert_Sort(mod2);
            printf("\n\nРезультат вимірів часу :%5.2f", (float)Result[0] / 20);
            break;
        case 2:
            printf(" \t|||||||| Перед проведенням сортування ||||||||\n\n");
            printf("\n");
            vector_output();
            vector_select_sort();
            printf("\n\n \t|||||||| Після проведення сортування ||||||||\n\n");
            vector_output();
            Processing_Vector_Select_Sort(mod2);
            printf("\n\nРезультат вимірів часу :%5.2f", (float)Result[0] / 20);
            break;
        case 3:
            printf(" \t|||||||| Перед проведенням сортування ||||||||\n\n");
            vector_output();
            vector_exchange_sort();
            printf("\n\n \t|||||||| Після проведення сортування ||||||||\n\n");
            vector_output();
            Processing_Vector_Exchange_Sort(mod2);
            printf("\n\nРезультат вимірів часу :%5.2f", (float)Result[0] / 20);
            break;
        case 4:
            printf(" \t|||||||| Перед проведенням сортування ||||||||\n\n");
            vector_output();
            vector_quick_sort();
            printf("\n\n \t|||||||| Після проведення сортування ||||||||\n\n");
            vector_output();
            Processing_Vector_Quick_Sort(mod2);
            printf("\n\nРезультат вимірів часу :%5.2f", (float)Result[0] / 20);
            break;
        case 5:
            menu();
            break;
        default:
            break;
        }
        default:
        break;}

    case 2:
    printf(" Ви хочете побачити всі результати сортування? \n");
    printf(" 1 - Так\n 2 - Ні\n Ви обрали: ");
    scanf("%d", &key2);
    system("cls");

    switch (key2) {
    case 1:
        // Виведення результуючої таблиці часу роботи конкретних алгоритмів для трьохвимірного масиву А
        printf("\n");
        printf(" ______________________________________________________________________________________________________________\n");
        printf("|\t\t  A[%d][%d][%d]\t\t    | Впорядкований | Невпорядкований | Обернено-впорядкований |\n", p, n, n);
        printf("|--------------------------------------------------------------------------------------------------------------|\n");

        Processing_Insert_Sort(1);
        printf("| Пряма вставка з лінійним пошуком місця вставки:   |\t %8.2f   |", (float)Result[0] / 20);
        Processing_Insert_Sort(2);
        printf("%10.2f\t      |", (float)Result[0] / 20);
        Processing_Insert_Sort(3);
        printf("%10.2f\t       |", (float)Result[0] / 20);
        printf("\n|--------------------------------------------------------------------------------------------------------------|\n");

        Processing_Select_Sort(1);
        printf("| Сортування методом прямого вибору:                |\t %8.2f   |", (float)Result[0] / 20);
        Processing_Select_Sort(2);
        printf("%10.2f\t      |", (float)Result[0] / 20);
        Processing_Select_Sort(3);
        printf("%10.2f\t       |", (float)Result[0] / 20);
        printf("\n|--------------------------------------------------------------------------------------------------------------|\n");

        Processing_Exchange_Sort(1);
        printf("| Сортування методом прямого обміну:                |\t %8.2f   |", (float)Result[0] / 20);
        Processing_Exchange_Sort(2);
        printf("%10.2f\t      |", (float)Result[0] / 20);
        Processing_Exchange_Sort(3);
        printf("%10.2f\t       |", (float)Result[0] / 20);
        printf("\n|--------------------------------------------------------------------------------------------------------------|\n");

        Processing_Quick_Sort(1);
        printf("| Сортування Хоара:\t\t\t            |\t %8.2f   |", (float)Result[0] / 20);
        Processing_Quick_Sort(2);
        printf("%10.2f\t      |", (float)Result[0] / 20);
        Processing_Quick_Sort(3);
        printf("%10.2f\t       |", (float)Result[0] / 20);
        printf("\n|___________________________________________________|_______________|_________________|________________________|\n");

        break;

    case 2:
        printf(" Оберіть впорядкованість масиву: \n");
        printf("\n 1 - Впорядкований\n");
        printf(" 2 - Випадково впорядкований (Random)\n");
        printf(" 3 - Обернено-впорядкований\n\n");
        printf("Ви обрали: ");
        scanf(" %d", &mod1);
        system("cls");

        input(mod1);
        printf(" Виберіть алгортим сортування : \n");
        printf(" 1 - Сортування методом прямої вставки \n");
        printf(" 2 - Сортування методом прямого вибору \n");
        printf(" 3 - Сортування методом прямого обміну \n");
        printf(" 4 - Сортування Хоара \n");
        printf(" 5 - В головне меню \n\n");
        printf(" Ваш вибір: ");
        scanf("%d", &num_of_alg);
        system("cls");
        switch (num_of_alg) {
        case 1:
            printf(" \t|||||||| Перед проведенням сортування ||||||||\n\n");
            output();
            insert_sort();
            printf("\n\n \t|||||||| Після проведення сортування ||||||||\n\n");
            output();
            Processing_Insert_Sort(mod1);
            printf("\n\nРезультат вимірів часу :%5.2f", (float)Result[0] / 20);
            break;
        case 2:
            printf(" \t|||||||| Перед проведенням сортування ||||||||\n\n");
            printf("\n");
            output();
            select_sort();
            printf("\n\n \t|||||||| Після проведення сортування ||||||||\n\n");
            output();
            Processing_Select_Sort(mod1);
            printf("\n\nРезультат вимірів часу :%5.2f", (float)Result[0] / 20);
            break;
        case 3:
            printf(" \t|||||||| Перед проведенням сортування ||||||||\n\n");
            output();
            exchange_sort();
            printf("\n\n \t|||||||| Після проведення сортування ||||||||\n\n");
            output();
            Processing_Exchange_Sort(mod1);
            printf("\n\nРезультат вимірів часу :%5.2f", (float)Result[0] / 20);
            break;
        case 4:
            printf(" \t|||||||| Перед проведенням сортування ||||||||\n\n");
            output();
            quick_sort1();
            quick_sort2();
            printf("\n\n \t|||||||| Після проведення сортування ||||||||\n\n");
            output();
            Processing_Quick_Sort(mod1);
            printf("\n\nРезультат вимірів часу :%5.2f", (float)Result[0] / 20);
            break;
        case 5:
            menu();
            break;}
        default:
            break;}

        default:
        break;}


}
