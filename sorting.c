#include "sorting.h"
#include <time.h>

int i, j, k;
clock_t insert_sort()//������� ���������� ��������� �2 ������� ����� ������� ��� ������������� ������
{
    clock_t time_start, time_stop;
    int k, B;
    time_start = clock();//��� ������ ������ ���������
    for(k=0; k<p; k++)//���������� ������� �������
    {
        for (i=0; i<n; i++)
        {
            B=A[k][i][i];
            j=i;
            while((j>=1)&&(B<A[k][j-1][j-1]))
            {
                A[k][j][j]=A[k][j-1][j-1];
                j=j-1;
            }
            A[k][j][j]=B;
        }
    }

    for(k=0; k<p; k++)//���������� ������ �������
    {
        for (i=0; i<n; i++)
        {
            B=A[k][i][n-1-i];
            j=i;
            while((j>=1)&&(B<A[k][j-1][n-j]))
            {
                A[k][j][n-1-j]=A[k][j-1][n-j];
                j=j-1;
            }
            A[k][j][n-1-j]=B;
        }
    }

    time_stop = clock();//��� ��������� ������ ���������

    return time_stop - time_start;
}
clock_t select_sort()//������� ���������� ��������� �8 ������� ������� ������ ��� ������������� ������
{
    clock_t time_start, time_stop;
    int L, R, imin, imax, B;
    time_start = clock();//��� ������ ������ ���������
    for(k=0; k<p; k++)//���������� ������� �������
    {
        L=0, R=n-1;
        while (L<R)
        {
            imin=L;
            imax=L;
            for(i=L+1; i<=R; i++)
            {
                if (A[k][i][i]<A[k][imin][imin])
                    imin=i;
                else
                {
                    if(A[k][i][i]>A[k][imax][imax])
                        imax=i;
                }
            }
            if(imin!=L)
            {
                B=A[k][imin][imin];
                A[k][imin][imin]=A[k][L][L];
                A[k][L][L]=B;
            }
            if (imax!=R)
            {
                if(imax==L)
                {
                    B=A[k][imin][imin];
                    A[k][imin][imin]=A[k][R][R];
                    A[k][R][R]=B;
                }
                else
                {
                    B=A[k][imax][imax];
                    A[k][imax][imax]=A[k][R][R];
                    A[k][R][R]=B;
                }
            }
            L=L+1;
            R=R-1;
        }
    }

    for(k=0; k<p; k++) // ���������� ������ �������
    {
        L=0, R=n-1;
        while (L<R)
        {
            imin=L;
            imax=L;
            for(i=L+1; i<=R; i++)
            {
                if (A[k][i][n-1-i]<A[k][imin][n-1-imin])
                    imin=i;
                else
                {
                    if(A[k][i][n-1-i]>A[k][imax][n-1-imax])
                        imax=i;
                }
            }
            if(imin!=L)
            {
                B=A[k][imin][n-1-imin];
                A[k][imin][n-1-imin]=A[k][L][n-1-L];
                A[k][L][n-1-L]=B;
            }
            if (imax!=R)
            {
                if(imax==L)
                {
                    B=A[k][imin][n-1-imin];
                    A[k][imin][n-1-imin]=A[k][R][n-1-R];
                    A[k][R][n-1-R]=B;
                }
                else
                {
                    B=A[k][imax][n-1-imax];
                    A[k][imax][n-1-imax]=A[k][R][n-1-R];
                    A[k][R][n-1-R]=B;
                }
            }
            L=L+1;
            R=R-1;
        }
    }

    time_stop = clock();// ��� ��������� ������ ���������

    return time_stop - time_start;
}
clock_t exchange_sort()//������� ���������� ��������� �3 ������� ������� ����� ��� ������������� ������
{
    clock_t time_start, time_stop;
    time_start = clock();//��� ������ ������ ���������
    int R, B, x;

    for(k=0; k<p; k++)//���������� ������� �������
    {
        R=n-1;
        while(R>0)
        {
            x=0;

            for(i=0; i<=R-1; i++)
                if(A[k][i][i]>A[k][i+1][i+1])
                {
                    B=A[k][i][i];
                    A[k][i][i]=A[k][i+1][i+1];
                    A[k][i+1][i+1]=B;
                    x=i;
                }
            R=x;
        }
    }

    for(k=0; k<p; k++) // ���������� ������ �������
    {
        R=n-1;
        while(R>0)
        {
            x=0;

            for(i=0; i<=R-1; i++)
                if(A[k][i][n-i-1]>A[k][i+1][n-i-2])
                {
                    B=A[k][i][n-i-1];
                    A[k][i][n-i-1]=A[k][i+1][n-i-2];
                    A[k][i+1][n-i-2]=B;
                    x=i;
                }
            R=x;
        }
    }
    time_stop = clock();// ��� ��������� ������ ���������

    return time_stop - time_start;
}

void quick_sort_1(int L, int R) // ������� ��� �������� ����������
                               //  ������� ������� ������������� ������
{

    int B, x;
    i=L;
    j=R;
    x=A[k][(L+R)/2][(L+R)/2];
    while(i<=j)
    {
        while(A[k][i][i]<x)
            i++;
        while(A[k][j][j]>x)
            j--;
        if(i<=j)
        {
            B=A[k][i][i];
            A[k][i][i]=A[k][j][j];
            A[k][j][j]=B;
            i++;
            j--;
        }
    }
    if(L<j)
        quick_sort_1(L,j);
    if(i<R)
        quick_sort_1(i,R);
}


clock_t quick_sort1() // ������� ���� clock_t ����� ���� ����������
                     // ������� �������
{
    clock_t time_start, time_stop;
    time_start = clock(); // ��� ������ ������ ���������
    for(k=0; k<p; k++)//���������� ������� �������
    {
        quick_sort_1(0, n-1);
    }

    time_stop = clock(); // ��� ��������� ������ ���������

    return time_stop - time_start;
}

void quick_sort_2(int L, int R)// ������� ��� �������� ����������
                               // ������ ������� ������������� ������
{
    int  B, x;

    i=L;
    j=R;
    x=A[k][(L+R)/2][n-1-(L+R)/2];
    while(i<=j)
    {
        while(A[k][i][n-1-i]<x)
            i++;
        while(A[k][j][n-1-j]>x)
            j--;
        if(i<=j)
        {
            B=A[k][i][n-1-i];
            A[k][i][n-1-i]=A[k][j][n-1-j];
            A[k][j][n-1-j]=B;
            i++;
            j--;
        }
    }
    if(L<j)
        quick_sort_2(L,j);
    if(i<R)
        quick_sort_2(i,R);

}

clock_t quick_sort2() // ������� ���� clock_t ����� ���� ����������
                      // ������ �������
{
    clock_t time_start, time_stop;
    time_start = clock(); // ��� ������ ������ ���������
    for(k=0; k<p; k++) // ���������� ������ �������
    {
        quick_sort_2(0, n-1);
    }
    time_stop = clock(); // ��� ��������� ������ ���������

    return time_stop - time_start;
}


clock_t vector_insert_sort()//������� ���������� ��������� �2 ������� ����� ������� ��� ������������ ������
{
    clock_t time_start, time_stop;//��� ������ ������ ���������
    int B;
    time_start = clock();
    for (i=0; i<n; i++)
    {
        B=vectA[i];
        j=i;
        while((j>=1)&&(B<vectA[j-1]))
        {
            vectA[j]=vectA[j-1];
            j=j-1;
        }
        vectA[j]=B;
    }



    time_stop = clock();// ��� ��������� ������ ���������

    return time_stop - time_start;
}

clock_t vector_select_sort()//������� ���������� ��������� �8 ������� ������� ������ ��� ������������ ������
{
    clock_t time_start, time_stop;
    int L, R, imin, imax, B;
    time_start = clock();//��� ������ ������ ���������
    L=0, R=n-1;
    while (L<R)
    {
        imin=L;
        imax=L;
        for(i=L+1; i<=R; i++)
        {
            if (vectA[i]<vectA[imin])
                imin=i;
            else
            {
                if(vectA[i]>vectA[imax])
                    imax=i;
            }
        }
        if(imin!=L)
        {
            B=vectA[imin];
            vectA[imin]=vectA[L];
            vectA[L]=B;
        }
        if (imax!=R)
        {
            if(imax==L)
            {
                B=vectA[imin];
                vectA[imin]=vectA[R];
                vectA[R]=B;
            }
            else
            {
                B=vectA[imax];
                vectA[imax]=vectA[R];
                vectA[R]=B;
            }
        }
        L=L+1;
        R=R-1;
    }

    time_stop = clock();// ��� ��������� ������ ���������

    return time_stop - time_start;
}
clock_t vector_exchange_sort()//������� ���������� ��������� �3 ������� ������� ����� ��� ������������ ������
{
    clock_t time_start, time_stop;
    time_start = clock();//��� ������ ������ ���������
    int R, B, x;

    R=n-1;
    while(R>0)
    {

        x=0;

        for(i=0; i<=R-1; i++)
            if(vectA[i]>vectA[i+1])
            {
                B=vectA[i];
                vectA[i]=vectA[i+1];
                vectA[i+1]=B;
                x=i;
            }
        R=x;
    }

    time_stop = clock();// ��� ��������� ������ ���������

    return time_stop - time_start;
}

void vector_quick_sort_1(int L, int R) // ���������� ��������� �������� ����������
                                       // ������������ ������
{
    int B, x;
    i=L;
    j=R;
    x = vectA[(L+R)/2];
    while(i<=j)
    {
        while(vectA[i]<x)
            i++;
        while(vectA[j]>x)
            j--;
        if(i<=j)
        {
            B=vectA[i];
            vectA[i]=vectA[j];
            vectA[j]=B;
            i++;
            j--;
        }
    }
    if(L<j)
        vector_quick_sort_1(L,j);
    if(i<R)
        vector_quick_sort_1(i,R);
}


clock_t vector_quick_sort() // ������� ���� clock_t ����� ���� ����������
                            // ������������ ������
{
    clock_t time_start, time_stop;
    time_start = clock(); // ��� ������ ������ ���������

    vector_quick_sort_1(0, n-1);


    time_stop = clock(); // ��� ��������� ������ ���������

    return time_stop - time_start;
}


