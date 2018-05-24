#include "menu.h"
#include "sorting.h"
#include "input_output.h"

void menu() // ������� ���� ��������
{
    int key, key1, key2;
    printf("\n");
    printf("\t ������� ������\n\t �������� ����� ��-61\n\t ������� ճ�����\n\n");
    printf(" ������� ��������� ������ \n");
    printf(" 1 - �����������\n 2 - ������������\n �� ������: ");
    scanf("%d", &key);
     switch (key) {
    case 1:
    printf(" �� ������ �������� �� ���������� ����������? \n");
    printf(" 1 - ���\n 2 - ͳ\n �� ������: ");
     scanf("%d", &key1);
     switch (key1) {
    case 1:
        // ��������� ������� ���� ������ ���������� ��������� ��� ������� vect�
        printf("\n");
        printf(" ______________________________________________________________________________________________________________\n");
        printf("|\t\t     vectA[%d]\t\t   |  �������������  | ��������������� | ��������-�������������|\n",      n);
        printf("|--------------------------------------------------------------------------------------------------------------|\n");

        Processing_Vector_Insert_Sort(1);
        printf("| ����� ������� � ������ ������� ���� �������:  |\t %8.2f    |", (float)Result[0] / 20);
        Processing_Vector_Insert_Sort(2);
        printf("%9.2f\t       |", (float)Result[0] / 20);
        Processing_Vector_Insert_Sort(3);
        printf("%9.2f\t       |", (float)Result[0] / 20);
        printf("\n|--------------------------------------------------------------------------------------------------------------|\n");

        Processing_Vector_Select_Sort(1);
        printf("| ���������� ������� ������� ������:               |\t %8.2f    |", (float)Result[0] / 20);
        Processing_Vector_Select_Sort(2);
        printf("%9.2f\t       |", (float)Result[0] / 20);
        Processing_Vector_Select_Sort(3);
        printf("%9.2f\t       |", (float)Result[0] / 20);
        printf("\n|--------------------------------------------------------------------------------------------------------------|\n");

        Processing_Vector_Exchange_Sort(1);
        printf("| ���������� ������� ������� �����:               |\t %8.2f    |", (float)Result[0] / 20);
        Processing_Vector_Exchange_Sort(2);
        printf("%9.2f\t       |", (float)Result[0] / 20);
        Processing_Vector_Exchange_Sort(3);
        printf("%9.2f\t       |", (float)Result[0] / 20);
        printf("\n|--------------------------------------------------------------------------------------------------------------|\n");

        Processing_Vector_Quick_Sort(1);
        printf("| ���������� �����:\t\t\t           |\t %8.2f    |", (float)Result[0] / 20);
        Processing_Vector_Quick_Sort(2);
        printf("%8.2f\t       |", (float)Result[0] / 20);
        Processing_Vector_Quick_Sort(3);
        printf("%8.2f\t       |", (float)Result[0] / 20);
        printf("\n|__________________________________________________|_________________|_________________|_______________________|\n");

        break;

    case 2:
        printf(" ������ �������������� ������: \n");
        printf("\n 1 - �������������\n");
        printf(" 2 - ��������� ������������� (Random)\n");
        printf(" 3 - ��������-�������������\n\n");
        printf("�� ������: ");
        scanf(" %d", &mod2);
        system("cls");

        vector_input(mod2);
        printf(" ������� �������� ���������� : \n");
        printf(" 1 - ���������� ������� ����� ������� \n");
        printf(" 2 - ���������� ������� ������� ������ \n");
        printf(" 3 - ���������� ������� ������� ����� \n");
        printf(" 4 - ���������� ����� \n");
        printf(" 5 - � ������� ���� \n\n");
        printf(" ��� ����: ");
        scanf("%d", &num_of_alg);
        system("cls");
        switch (num_of_alg) {
        case 1:
            printf(" \t|||||||| ����� ����������� ���������� ||||||||\n\n");
            vector_output();
            vector_insert_sort();
            printf("\n\n \t|||||||| ϳ��� ���������� ���������� ||||||||\n\n");
            vector_output();
            Processing_Vector_Insert_Sort(mod2);
            printf("\n\n��������� ����� ���� :%5.2f", (float)Result[0] / 20);
            break;
        case 2:
            printf(" \t|||||||| ����� ����������� ���������� ||||||||\n\n");
            printf("\n");
            vector_output();
            vector_select_sort();
            printf("\n\n \t|||||||| ϳ��� ���������� ���������� ||||||||\n\n");
            vector_output();
            Processing_Vector_Select_Sort(mod2);
            printf("\n\n��������� ����� ���� :%5.2f", (float)Result[0] / 20);
            break;
        case 3:
            printf(" \t|||||||| ����� ����������� ���������� ||||||||\n\n");
            vector_output();
            vector_exchange_sort();
            printf("\n\n \t|||||||| ϳ��� ���������� ���������� ||||||||\n\n");
            vector_output();
            Processing_Vector_Exchange_Sort(mod2);
            printf("\n\n��������� ����� ���� :%5.2f", (float)Result[0] / 20);
            break;
        case 4:
            printf(" \t|||||||| ����� ����������� ���������� ||||||||\n\n");
            vector_output();
            vector_quick_sort();
            printf("\n\n \t|||||||| ϳ��� ���������� ���������� ||||||||\n\n");
            vector_output();
            Processing_Vector_Quick_Sort(mod2);
            printf("\n\n��������� ����� ���� :%5.2f", (float)Result[0] / 20);
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
    printf(" �� ������ �������� �� ���������� ����������? \n");
    printf(" 1 - ���\n 2 - ͳ\n �� ������: ");
    scanf("%d", &key2);
    system("cls");

    switch (key2) {
    case 1:
        // ��������� ����������� ������� ���� ������ ���������� ��������� ��� ������������� ������ �
        printf("\n");
        printf(" ______________________________________________________________________________________________________________\n");
        printf("|\t\t  A[%d][%d][%d]\t\t    | ������������� | ��������������� | ��������-������������� |\n", p, n, n);
        printf("|--------------------------------------------------------------------------------------------------------------|\n");

        Processing_Insert_Sort(1);
        printf("| ����� ������� � ������ ������� ���� �������:   |\t %8.2f   |", (float)Result[0] / 20);
        Processing_Insert_Sort(2);
        printf("%10.2f\t      |", (float)Result[0] / 20);
        Processing_Insert_Sort(3);
        printf("%10.2f\t       |", (float)Result[0] / 20);
        printf("\n|--------------------------------------------------------------------------------------------------------------|\n");

        Processing_Select_Sort(1);
        printf("| ���������� ������� ������� ������:                |\t %8.2f   |", (float)Result[0] / 20);
        Processing_Select_Sort(2);
        printf("%10.2f\t      |", (float)Result[0] / 20);
        Processing_Select_Sort(3);
        printf("%10.2f\t       |", (float)Result[0] / 20);
        printf("\n|--------------------------------------------------------------------------------------------------------------|\n");

        Processing_Exchange_Sort(1);
        printf("| ���������� ������� ������� �����:                |\t %8.2f   |", (float)Result[0] / 20);
        Processing_Exchange_Sort(2);
        printf("%10.2f\t      |", (float)Result[0] / 20);
        Processing_Exchange_Sort(3);
        printf("%10.2f\t       |", (float)Result[0] / 20);
        printf("\n|--------------------------------------------------------------------------------------------------------------|\n");

        Processing_Quick_Sort(1);
        printf("| ���������� �����:\t\t\t            |\t %8.2f   |", (float)Result[0] / 20);
        Processing_Quick_Sort(2);
        printf("%10.2f\t      |", (float)Result[0] / 20);
        Processing_Quick_Sort(3);
        printf("%10.2f\t       |", (float)Result[0] / 20);
        printf("\n|___________________________________________________|_______________|_________________|________________________|\n");

        break;

    case 2:
        printf(" ������ �������������� ������: \n");
        printf("\n 1 - �������������\n");
        printf(" 2 - ��������� ������������� (Random)\n");
        printf(" 3 - ��������-�������������\n\n");
        printf("�� ������: ");
        scanf(" %d", &mod1);
        system("cls");

        input(mod1);
        printf(" ������� �������� ���������� : \n");
        printf(" 1 - ���������� ������� ����� ������� \n");
        printf(" 2 - ���������� ������� ������� ������ \n");
        printf(" 3 - ���������� ������� ������� ����� \n");
        printf(" 4 - ���������� ����� \n");
        printf(" 5 - � ������� ���� \n\n");
        printf(" ��� ����: ");
        scanf("%d", &num_of_alg);
        system("cls");
        switch (num_of_alg) {
        case 1:
            printf(" \t|||||||| ����� ����������� ���������� ||||||||\n\n");
            output();
            insert_sort();
            printf("\n\n \t|||||||| ϳ��� ���������� ���������� ||||||||\n\n");
            output();
            Processing_Insert_Sort(mod1);
            printf("\n\n��������� ����� ���� :%5.2f", (float)Result[0] / 20);
            break;
        case 2:
            printf(" \t|||||||| ����� ����������� ���������� ||||||||\n\n");
            printf("\n");
            output();
            select_sort();
            printf("\n\n \t|||||||| ϳ��� ���������� ���������� ||||||||\n\n");
            output();
            Processing_Select_Sort(mod1);
            printf("\n\n��������� ����� ���� :%5.2f", (float)Result[0] / 20);
            break;
        case 3:
            printf(" \t|||||||| ����� ����������� ���������� ||||||||\n\n");
            output();
            exchange_sort();
            printf("\n\n \t|||||||| ϳ��� ���������� ���������� ||||||||\n\n");
            output();
            Processing_Exchange_Sort(mod1);
            printf("\n\n��������� ����� ���� :%5.2f", (float)Result[0] / 20);
            break;
        case 4:
            printf(" \t|||||||| ����� ����������� ���������� ||||||||\n\n");
            output();
            quick_sort1();
            quick_sort2();
            printf("\n\n \t|||||||| ϳ��� ���������� ���������� ||||||||\n\n");
            output();
            Processing_Quick_Sort(mod1);
            printf("\n\n��������� ����� ���� :%5.2f", (float)Result[0] / 20);
            break;
        case 5:
            menu();
            break;}
        default:
            break;}

        default:
        break;}


}
