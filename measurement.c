#include "Measurement.h"

clock_t Result[measurements_number];

void Processing_Insert_Sort(int mod1)
/* функція для виклику функцій вимірювання часу роботи алгоритму
прямої вставки із лінійним пошуком місця вставки, яка в якості параметрів приймає режим заповнення трьохвимірного масивa А */
{
    Measure_Insert_Sort(mod1);
    MeasurementProcessing();
}

void Measure_Insert_Sort(int mod1)
/*функція виміру часу роботи алгоритму сортування №2 методу прямої
вставки (з лінійним пошуком місця вставки), яка в якості параметрів приймає режим заповнення трьохвимірного масивa А.*/
{
    int i;
    for (i = 0; i < measurements_number; i++) {
        input(mod1); // заповнення трьохвимірного масива А відповідним режимом

        Result[i] = insert_sort();
    }
}

void Processing_Select_Sort(int mod1)
/* функція для виклику функцій вимірювання часу роботи алгоритму
сортування методом прямого вибору, яка в якості параметрів приймає режим заповнення трьохвимірного масивa А */
{
    Measure_Select_Sort(mod1);
    MeasurementProcessing();
}

void Measure_Select_Sort(int mod1)
/*функція виміру часу роботи алгоритму сортування №8 методу прямого вибору,
яка в якості параметрів приймає режим заповнення трьохвимірного масивa А.*/
{
    int i;
    for (i = 0; i < measurements_number; i++) {
        input(mod1); // заповнення трьохвимірного масива А відповідним режимом

        Result[i] = select_sort();
    }
}

void Processing_Exchange_Sort(int mod1)
/* функція для виклику функцій вимірювання часу роботи алгоритму
сортування методом прямого обміну №3, яка в якості параметрів приймає режим заповнення трьохвимірного масивa А */
{
    Measure_Exchange_Sort(mod1);
    MeasurementProcessing();
}

void Measure_Exchange_Sort(int mod1)
/*функція виміру часу роботи алгоритму сортування №3 методу прямого обміну,
яка в якості параметрів приймає режим заповнення трьохвимірного масивa А.*/
{
    int i;
    for (i = 0; i < measurements_number; i++) {
        input(mod1); // заповнення масива трьохвимірного А відповідним режимом

        Result[i] = exchange_sort();
    }
}

void Processing_Quick_Sort(int mod1)
/* функція для виклику функцій вимірювання часу роботи алгоритму
Сортування Хоара, яка в якості параметрів приймає режим заповнення трьохвимірного масивa А*/
{
    Measure_Quick_Sort(mod1);
    MeasurementProcessing();
}

void Measure_Quick_Sort(int mod1)
/*функція виміру часу роботи алгоритму сортування Хоара, шляхом додавання вимірів часу сортування кожної з діагоналей,
яка в якості параметрів приймає режим заповнення трьохвимірного масивa А.*/
{
    int i;
    for (i = 0; i < measurements_number; i++) {
        input(mod1); // заповнення масива трьохвимірного А відповідним режимом
        Result[i] = quick_sort1()+quick_sort2();

    }
}

void Processing_Vector_Insert_Sort(int mod2)
/* функція для виклику функцій вимірювання часу роботи алгоритму
прямої вставки з лінійним пошуком місця вставки, яка в якості параметрів приймає режим заповнення одновимірного масивa vectA */
{
    Measure_Vector_Insert_Sort(mod2);
    MeasurementProcessing();
}

void Measure_Vector_Insert_Sort(int mod2)
/*функція виміру часу роботи алгоритму сортування №2 методу прямої
вставки (з лінійним пошуком місця вставки), яка в якості параметрів приймає режим заповнення одновимірного масивa vectA*/
{
    int i;
    for (i = 0; i < measurements_number; i++) {
         vector_input(mod2); // заповнення одновимірного масивa vectA відповідним режимом

        Result[i] = vector_insert_sort();
    }
}

void Processing_Vector_Select_Sort(int mod2)
/* функція для виклику функцій вимірювання часу роботи алгоритму
сортування методом прямого вибору, яка в якості параметрів приймає режим заповнення одновимірного масивa vectA  */
{
    Measure_Vector_Select_Sort(mod2);
    MeasurementProcessing();
}

void Measure_Vector_Select_Sort(int mod2)
/*функція виміру часу роботи алгоритму сортування №8 методу прямого вибору,
яка в якості параметрів приймає режим заповнення одновимірного масивa vectA*/
{
    int i;
    for (i = 0; i < measurements_number; i++) {
         vector_input(mod2); // заповнення одновимірного масивa vectA відповідним режимом

        Result[i] = vector_select_sort();
    }
}

void Processing_Vector_Exchange_Sort(int mod2)
/* функція для виклику функцій вимірювання часу роботи алгоритму
сортування методом прямого обміну, яка в якості параметрів приймає режим заповнення одновимірного масивa vectA  */
{
    Measure_Vector_Exchange_Sort(mod2);
    MeasurementProcessing();
}

void Measure_Vector_Exchange_Sort(int mod2)
/*функція виміру часу роботи алгоритму сортування №3 методу прямого обміну,
яка в якості параметрів приймає режим заповнення одновимірного масивa vectA*/
{
    int i;
    for (i = 0; i < measurements_number; i++) {
         vector_input(mod2); // заповнення одновимірного масивa vectA відповідним режимом

        Result[i] = vector_exchange_sort();
    }
}

void Processing_Vector_Quick_Sort(int mod2)
/* функція для виклику функцій вимірювання часу роботи алгоритму
сортування Хоара, яка в якості параметрів приймає режим заповнення одновимірного масивa vectA*/
{
    Measure_Vector_Quick_Sort(mod2);
    MeasurementProcessing();
}

void Measure_Vector_Quick_Sort(int mod2)
/*функція виміру часу роботи алгоритму сортування Хоара,
яка в якості параметрів приймає режим заповнення одновимірного масивa vectA*/
{
    int i;
    for (i = 0; i < measurements_number; i++) {
         vector_input(mod2); // заповнення одновимірного масивa vectA відповідним режимом
        Result[i] = vector_quick_sort();

    }
}

///////////////////////////////////////////////////////

void MeasurementProcessing() /* функція для обрахування точного часу роботи конкретного алгоритму
 шляхом відкидання трьох мінімальних та трьох максимальних елементів з масива часу Result */
{
    long int Sum, Min1, Min2, Min3, Max1, Max2, Max3;
    int imin1, imin2, imin3, imax1, imax2, imax3;
    int i;

    // Два перших виміри (0-й та 1-й) відкидаються
    // Серед інших елементів знаходимо три мінімальних та три максимальних
    // елементи і віднімаємо їх значення від загальної суми
    // Знаходимо мінімальний та максимальний елементи і виключаємо їх з наступних
    // пошуків, встановивши їм значення -1
    Sum = Result[2];
    Min1 = Result[2];
    Max1 = Result[2];
    imin1 = 2;
    imax1 = 2;
    for (i = 3; i < measurements_number; i++) {
        Sum = Sum + Result[i];
        if (Result[i] > Max1) {
            Max1 = Result[i];
            imax1 = i;
        }
        else if (Result[i] < Min1) {
            Min1 = Result[i];
            imin1 = i;
        }
    }
    Result[imin1] = -1;
    Result[imax1] = -1;
    // Знаходимо другий мінімальний та другий максимальний елементи
    // і виключаємо їх з наступних пошуків, встановивши їм значення -1
    if (Result[2] == -1) {
        Min2 = Result[3];
        imin2 = 3;
    }
    else {
        Min2 = Result[2];
        imin2 = 2;
    }
    Max2 = Result[2];
    imax2 = 2;
    for (i = 3; i < measurements_number; i++) {
        if (Result[i] > Max2) {
            Max2 = Result[i];
            imax2 = i;
        }
        else if (Result[i] < Min2 && Result[i] != -1) {
            Min2 = Result[i];
            imin2 = i;
        }
    }
    Result[imin2] = -1;
    Result[imax2] = -1;
    // Знаходимо третій мінімальний та третій максимальний елементи
    if (Result[2] == -1)
        if (Result[3] == -1) {
            Min3 = Result[4];
            imin3 = 4;
        }
        else {
            Min3 = Result[3];
            imin3 = 3;
        }
    else {
        Min3 = Result[2];
        imin3 = 2;
    }
    Max3 = Result[2];
    imax3 = 2;
    for (i = 3; i < measurements_number; i++) {
        if (Result[i] > Max3) {
            Max3 = Result[i];
            imax3 = i;
        }
        else if (Result[i] < Min3 && Result[i] != -1) {
            Min3 = Result[i];
            imin3 = i;
        }
    }
    // Сума всіх вимірів мінус три максимальних та три мінімальних значення буде записана до 0-го елемента масива Result
    Result[0] = Sum - Min1 - Min2 - Min3 - Max1 - Max2 - Max3;
}
