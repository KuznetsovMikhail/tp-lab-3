#include "Circle.h"

Circle::Circle()
{
}

Circle::Circle(double radius)
{
    this->setRadius(radius);
}

void Circle::setRadius(double radius)
{
    this->radius = radius;
    this->ference = 2. * M_PI * radius;
    this->area = M_PI * radius * radius;
}

void Circle::setFerence(double ference)
{
    this->radius = ference / 2. / M_PI;
    this->ference = ference;
    this->area = M_PI * radius * radius;
}

void Circle::setArea(double area)
{
    this->radius = sqrt(area) / 2. / M_PI;
    this->ference = 2. * M_PI * radius;
    this->area = area;
}

const double Circle::getRadius() const
{
    return this->radius;
}
const double Circle::getFerence() const
{
    return this->ference;
}

const double Circle::getArea() const
{
    return this->area;
}

