#include "input_output.h"

int i, j, k;

void input(mod1)//функція для заповнення трьохвимірного масиву
{
    int t;
    switch (mod1)
    {
    case 1:
        for (k=0; k<p; k++)
            for (i=0; i<n; i++)
                for (j=0; j<n; j++)
                    A[k][i][j] = k + j + i + 7; //послідовне заповнення
        break;
    case 2:
        for (k=0; k<p; k++)
            for (i=0; i<n; i++)
                for (j=0; j<n; j++)
                    A[k][i][j] = (rand() % 1000)-500; //рандомне заповнення в діапазоні від -500 до 500
        break;
    case 3:
        t=1;
        for (k=0; k<p; k++)
            for (i=0; i<n; i++)
                for (j=0; j<n; j++)
                    {A[k][i][j] = p*n*n-t;
                    t++;
                    }//обернене заповнення
        break;
    default:
        break;
    }
}

void output()//функція для виведення трьохвимірного масиву
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

void vector_input(mod2)//функція для заповнення одновимірного масиву
{
    switch (mod2)
    {
    case 1:
        for (i=0; i<n; i++)
            vectA[i] = i + 7; //послідовне заповнення
        break;
    case 2:
        for (i=0; i<n; i++)
            vectA[i] = (rand() % 1000)-500; //рандомне заповнення в діапазоні від -500 до 500
        break;
    case 3:
        for (i=0; i<n; i++)
            vectA[i] = n - i - 7; //обернене заповнення
        break;
    default:
        break;
    }
}

void vector_output()//функція для виведення одновимірного масиву
{
    for(i=0; i<n; i++)
        printf("%2d  ",vectA[i]);

}
