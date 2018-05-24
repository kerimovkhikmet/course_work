#include "menu.h"

int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);         //підкючення кодування Windows-1251, яке дозволяє
    SetConsoleOutputCP(1251);   //коректно виводити на екран українські символи
    system("color F0");         // зміна кольору консолі на білий
    menu();
    _getch();

    return 0;
}
