#include "menu.h"

int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);         //��������� ��������� Windows-1251, ��� ��������
    SetConsoleOutputCP(1251);   //�������� �������� �� ����� �������� �������
    system("color F0");         // ���� ������� ������ �� ����
    menu();
    _getch();

    return 0;
}
