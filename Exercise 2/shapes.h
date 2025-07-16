#define SHAPES_H

class BasicShape {


private:
    double area;

protected:
    void setArea(double a);

public:
    double getArea() const;
    virtual void calcArea() = 0;

};

class Circle : public BasicShape {
private:
    long centerX;
    long centerY;
    double radius;

public:
    Circle(long x, long y, double r);
    long getCenterX() const;
    long getCenterY() const;
    void calcArea() override;
};

class Rectangle : public BasicShape {
private:
    long width;
    long length;



public:
    Rectangle(long w, long l);
    long getWidth() const;
    long getLength() const;
    void calcArea() override;
};
