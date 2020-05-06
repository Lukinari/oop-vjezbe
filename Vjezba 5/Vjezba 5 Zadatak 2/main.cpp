#include <iostream>
#include <vector>
#include "Board.hpp"
using namespace std;
int main()
{
    int columns = 20;
    int rows = 20;
    char ch = 'o';
    char pch = '+';
    char dul = '*';
    char dl = '%';
    Board v(columns, rows,ch);
    v.display();
    Point p1(2, 2), p2(8, 8), p3(2, 8), p4(16, 8);
    v.draw_char(p1, pch);
    v.draw_char(p2, pch);
    v.draw_char(p3, pch);
    v.draw_char(p4, pch);
    v.display();
    v.draw_up_line(p4, dul);
    v.display();
    v.draw_line(p1, p2, dl);
    v.draw_line(p3, p4, dl);
    v.display();
    Board copy(v);
    copy.display();
}
