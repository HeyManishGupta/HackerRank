#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
    protected:
        int height, width;
    public:
        void display()
        {
            cout << width << " " << height;
        }
};

class RectangleArea : public Rectangle
{
    public:
        void read_input()
        {
            cin >> width >> height;
        }
        void display()
        {
            cout << endl << width*height;
        }
};
