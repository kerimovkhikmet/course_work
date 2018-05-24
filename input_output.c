#include "input_output.h"

int i, j, k;

void input(mod1)//������� ��� ���������� ������������� ������
{
    int t;
    switch (mod1)
    {
    case 1:
        for (k=0; k<p; k++)
            for (i=0; i<n; i++)
                for (j=0; j<n; j++)
                    A[k][i][j] = k + j + i + 7; //��������� ����������
        break;
    case 2:
        for (k=0; k<p; k++)
            for (i=0; i<n; i++)
                for (j=0; j<n; j++)
                    A[k][i][j] = (rand() % 1000)-500; //�������� ���������� � ������� �� -500 �� 500
        break;
    case 3:
        t=1;
        for (k=0; k<p; k++)
            for (i=0; i<n; i++)
                for (j=0; j<n; j++)
                    {A[k][i][j] = p*n*n-t;
                    t++;
                    }//�������� ����������
        break;
    default:
        break;
    }
}

void output()//������� ��� ��������� ������������� ������
{
    for(k=0; k<p; k++)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
                printf("%4d  ",A[k][i][j]);
            printf("\n");
        }
        printf("\n");
    }
}

void vector_input(mod2)//������� ��� ���������� ������������ ������
{
    switch (mod2)
    {
    case 1:
        for (i=0; i<n; i++)
            vectA[i] = i + 7; //��������� ����������
        break;
    case 2:
        for (i=0; i<n; i++)
            vectA[i] = (rand() % 1000)-500; //�������� ���������� � ������� �� -500 �� 500
        break;
    case 3:
        for (i=0; i<n; i++)
            vectA[i] = n - i - 7; //�������� ����������
        break;
    default:
        break;
    }
}

void vector_output()//������� ��� ��������� ������������ ������
{
    for(i=0; i<n; i++)
        printf("%2d  ",vectA[i]);

}
