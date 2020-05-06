#include <iostream>
#include <vector>
#include "Board.hpp"
using namespace std;
Board::Board()
{
    int rows = 10;
    int columns = 10;
    char zv = 'o';
    vector<char> rowvec;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1)
            {
                rowvec.push_back(zv);
            }
            else
                rowvec.push_back(' ');
        }
        neo.push_back(rowvec);
        rowvec.erase(rowvec.begin(), rowvec.end());
    }

}
Board::Board(int & columns, int & rows, char & ch)
{
    vector<char> rowvec;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1)
            {
                rowvec.push_back(ch);
            }
            else
                rowvec.push_back(' ');
        }
        neo.push_back(rowvec);
        rowvec.erase(rowvec.begin(), rowvec.end());
    }
}
void Board::display()
{
    for (unsigned int i = 0; i < neo.size(); i++)
    {
        for (unsigned int j = 0; j < neo[i].size(); j++)
        {
            cout << neo[i][j] << " ";
        }
        cout << endl;
    }
}
void Board::Boardcpy(Board& z)
{
    for (int i = 0; i < (int)z.neo.size(); i++)
    {
        neo.push_back(z.neo[i]);
    }
}
void Board::draw_char(const Point& drawp,const char& dch)
{
    if (drawp.x > 0 && drawp.y > 0)
    {
        neo[drawp.x][drawp.y] = dch;
    }
    else
        cout << "The coordinates cannot be < 1" << endl;
}
void Board::draw_up_line(const Point& drawp, const char& luch)
{
    if (drawp.x > 0 && drawp.y > 0)
    {
        int x = drawp.x;
        int y = drawp.y;
        for (int i = 0; i < neo.size(); i++)
        {
            for (int j = 0; j < neo[i].size(); j++)
            {
                if (j == y && i < x && i > 0)
                {
                    neo[i][j] = luch;
                }
            }
        }
    }
    else
        cout << "The coordinates cannot be < 1" << endl;
}
void Board::draw_line(const Point& drawp1, const Point& drawp2, const char& lch)
{
    if (drawp1.x > 0 && drawp1.y && drawp2.x && drawp2.y)
    {
        int startx, starty, targety, targetx;
        if ((drawp1.x + drawp1.y) < (drawp2.x + drawp2.y))
        {
            startx = drawp1.x;
            starty = drawp1.y;
            targetx = drawp2.x;
            targety = drawp2.y;
        }
        else
        {
            startx = drawp2.x;
            starty = drawp2.y;
            targetx = drawp1.x;
            targety = drawp1.y;
        }
        for (unsigned int i = 0; i < neo.size(); i++)
        {
            for (unsigned int j = 0; j < neo[i].size(); j++)
            {
                if (j == starty && i == startx)
                {
                    if (starty - 1 < targety - 1)
                        starty++;
                    else if (starty - 1 > targety - 1)
                        starty--;
                    if (startx - 1 < targetx - 1)
                        startx++;
                    else if (startx - 1 > targetx - 1)
                        startx--;
                    neo[i][j] = lch;
                }
            }
        }
    }
    else
        cout << "The coordinates cannot be < 1" << endl;
}
