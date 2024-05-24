#ifndef RECTANGLE_H
#define RECTANGLE_H

class rectangle{
    private:
    float length;
    float width;

    public:
    float getvalue();
    void setvalue(float x, float y);
    
    rectangle();
    ~rectangle();
};
#endif