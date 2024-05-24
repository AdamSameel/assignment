#ifndef RECTANGLE_H
#define RECTANGLE_H

class rectangle{
    private:
    float length;
    float width;

    public:
    rectangle(float a, float b);
    int area();
    rectangle();
    ~rectangle();
};
#endif