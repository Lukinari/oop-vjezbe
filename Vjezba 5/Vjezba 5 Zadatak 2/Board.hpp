#include <iostream>
#include <vector>
#ifndef _Board
#define _Board
using namespace std;
struct Point
{
    double x;
    double y;
    Point(double x, double y) {
        this->x = x;
        this->y = y;
    }
};
class Board {
    vector< vector<char> > neo;
public:
    Board();
    Board(int& columns, int& rows, char& ch);
    ~Board() {};
    void display();
    void Boardcpy(Board & z);
    void draw_char(const Point& drawp,const char& dch);
    void draw_up_line(const Point& drawp, const char& luch);
    void draw_line(const Point& drawp1, const Point& drawp2, const char& lch);
};

#endif // _Board
