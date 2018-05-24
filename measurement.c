#include "Measurement.h"

clock_t Result[measurements_number];

void Processing_Insert_Sort(int mod1)
/* ������� ��� ������� ������� ���������� ���� ������ ���������
����� ������� �� ������ ������� ���� �������, ��� � ����� ��������� ������ ����� ���������� ������������� �����a � */
{
    Measure_Insert_Sort(mod1);
    MeasurementProcessing();
}

void Measure_Insert_Sort(int mod1)
/*������� ����� ���� ������ ��������� ���������� �2 ������ �����
������� (� ������ ������� ���� �������), ��� � ����� ��������� ������ ����� ���������� ������������� �����a �.*/
{
    int i;
    for (i = 0; i < measurements_number; i++) {
        input(mod1); // ���������� ������������� ������ � ��������� �������

        Result[i] = insert_sort();
    }
}

void Processing_Select_Sort(int mod1)
/* ������� ��� ������� ������� ���������� ���� ������ ���������
���������� ������� ������� ������, ��� � ����� ��������� ������ ����� ���������� ������������� �����a � */
{
    Measure_Select_Sort(mod1);
    MeasurementProcessing();
}

void Measure_Select_Sort(int mod1)
/*������� ����� ���� ������ ��������� ���������� �8 ������ ������� ������,
��� � ����� ��������� ������ ����� ���������� ������������� �����a �.*/
{
    int i;
    for (i = 0; i < measurements_number; i++) {
        input(mod1); // ���������� ������������� ������ � ��������� �������

        Result[i] = select_sort();
    }
}

void Processing_Exchange_Sort(int mod1)
/* ������� ��� ������� ������� ���������� ���� ������ ���������
���������� ������� ������� ����� �3, ��� � ����� ��������� ������ ����� ���������� ������������� �����a � */
{
    Measure_Exchange_Sort(mod1);
    MeasurementProcessing();
}

void Measure_Exchange_Sort(int mod1)
/*������� ����� ���� ������ ��������� ���������� �3 ������ ������� �����,
��� � ����� ��������� ������ ����� ���������� ������������� �����a �.*/
{
    int i;
    for (i = 0; i < measurements_number; i++) {
        input(mod1); // ���������� ������ ������������� � ��������� �������

        Result[i] = exchange_sort();
    }
}

void Processing_Quick_Sort(int mod1)
/* ������� ��� ������� ������� ���������� ���� ������ ���������
���������� �����, ��� � ����� ��������� ������ ����� ���������� ������������� �����a �*/
{
    Measure_Quick_Sort(mod1);
    MeasurementProcessing();
}

void Measure_Quick_Sort(int mod1)
/*������� ����� ���� ������ ��������� ���������� �����, ������ ��������� ����� ���� ���������� ����� � ���������,
��� � ����� ��������� ������ ����� ���������� ������������� �����a �.*/
{
    int i;
    for (i = 0; i < measurements_number; i++) {
        input(mod1); // ���������� ������ ������������� � ��������� �������
        Result[i] = quick_sort1()+quick_sort2();

    }
}

void Processing_Vector_Insert_Sort(int mod2)
/* ������� ��� ������� ������� ���������� ���� ������ ���������
����� ������� � ������ ������� ���� �������, ��� � ����� ��������� ������ ����� ���������� ������������ �����a vectA */
{
    Measure_Vector_Insert_Sort(mod2);
    MeasurementProcessing();
}

void Measure_Vector_Insert_Sort(int mod2)
/*������� ����� ���� ������ ��������� ���������� �2 ������ �����
������� (� ������ ������� ���� �������), ��� � ����� ��������� ������ ����� ���������� ������������ �����a vectA*/
{
    int i;
    for (i = 0; i < measurements_number; i++) {
         vector_input(mod2); // ���������� ������������ �����a vectA ��������� �������

        Result[i] = vector_insert_sort();
    }
}

void Processing_Vector_Select_Sort(int mod2)
/* ������� ��� ������� ������� ���������� ���� ������ ���������
���������� ������� ������� ������, ��� � ����� ��������� ������ ����� ���������� ������������ �����a vectA  */
{
    Measure_Vector_Select_Sort(mod2);
    MeasurementProcessing();
}

void Measure_Vector_Select_Sort(int mod2)
/*������� ����� ���� ������ ��������� ���������� �8 ������ ������� ������,
��� � ����� ��������� ������ ����� ���������� ������������ �����a vectA*/
{
    int i;
    for (i = 0; i < measurements_number; i++) {
         vector_input(mod2); // ���������� ������������ �����a vectA ��������� �������

        Result[i] = vector_select_sort();
    }
}

void Processing_Vector_Exchange_Sort(int mod2)
/* ������� ��� ������� ������� ���������� ���� ������ ���������
���������� ������� ������� �����, ��� � ����� ��������� ������ ����� ���������� ������������ �����a vectA  */
{
    Measure_Vector_Exchange_Sort(mod2);
    MeasurementProcessing();
}

void Measure_Vector_Exchange_Sort(int mod2)
/*������� ����� ���� ������ ��������� ���������� �3 ������ ������� �����,
��� � ����� ��������� ������ ����� ���������� ������������ �����a vectA*/
{
    int i;
    for (i = 0; i < measurements_number; i++) {
         vector_input(mod2); // ���������� ������������ �����a vectA ��������� �������

        Result[i] = vector_exchange_sort();
    }
}

void Processing_Vector_Quick_Sort(int mod2)
/* ������� ��� ������� ������� ���������� ���� ������ ���������
���������� �����, ��� � ����� ��������� ������ ����� ���������� ������������ �����a vectA*/
{
    Measure_Vector_Quick_Sort(mod2);
    MeasurementProcessing();
}

void Measure_Vector_Quick_Sort(int mod2)
/*������� ����� ���� ������ ��������� ���������� �����,
��� � ����� ��������� ������ ����� ���������� ������������ �����a vectA*/
{
    int i;
    for (i = 0; i < measurements_number; i++) {
         vector_input(mod2); // ���������� ������������ �����a vectA ��������� �������
        Result[i] = vector_quick_sort();

    }
}

///////////////////////////////////////////////////////

void MeasurementProcessing() /* ������� ��� ����������� ������� ���� ������ ����������� ���������
 ������ ��������� ����� ��������� �� ����� ������������ �������� � ������ ���� Result */
{
    long int Sum, Min1, Min2, Min3, Max1, Max2, Max3;
    int imin1, imin2, imin3, imax1, imax2, imax3;
    int i;

    // ��� ������ ����� (0-� �� 1-�) �����������
    // ����� ����� �������� ��������� ��� ��������� �� ��� ������������
    // �������� � ������� �� �������� �� �������� ����
    // ��������� ��������� �� ������������ �������� � ��������� �� � ���������
    // ������, ����������� �� �������� -1
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
    // ��������� ������ ��������� �� ������ ������������ ��������
    // � ��������� �� � ��������� ������, ����������� �� �������� -1
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
    // ��������� ����� ��������� �� ����� ������������ ��������
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
    // ���� ��� ����� ���� ��� ������������ �� ��� ��������� �������� ���� �������� �� 0-�� �������� ������ Result
    Result[0] = Sum - Min1 - Min2 - Min3 - Max1 - Max2 - Max3;
}
