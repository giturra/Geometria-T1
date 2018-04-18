#include <iostream>
#include "Elements/Point.h"
#include "Elements/Vector.h"
#include "Elements/Segment.h"
#include "Elements/Polygon.h"

using namespace std;

int main() {
    //Point Test
    cout << "Point Test" << endl;
    cout << "" << endl;

    Point<int> *intPoint = new Point<int>;
    Point<double> *doublePoint = new Point<double>;
    Point<float> *floatPoint = new Point<float>;

    Point<int> *intPoint2 = new Point<int>(13, 14, 16);
    Point<double> *doublePoint2 = new Point<double>(6.7772, 9.6888, 7.4444);
    Point<float> *floatPoint2 = new Point<float>(6.7772, 9.6888, 7.4444);

    cout << intPoint2->getX() << " -- " << intPoint2->getX() << endl;

    intPoint->setX(20);
    intPoint->setY(30);
    intPoint->setZ(40);

    cout << intPoint->getX() << " -- " << intPoint->getX() << endl;

    intPoint->localize();
    intPoint2->localize();
    doublePoint->localize();
    doublePoint2->localize();
    floatPoint->localize();
    floatPoint2->localize();

    Point<int> *otherIntPoint = *intPoint+*intPoint2;
    Point<int> *otherIntPoint2 = *intPoint**intPoint2;
    Point<int> *otherIntPoint3 = *intPoint-*intPoint2;
    Point<int> *otherIntPoint4 = (*intPoint)/(*intPoint2);

    otherIntPoint->localize();
    otherIntPoint2->localize();
    otherIntPoint3->localize();
    otherIntPoint4->localize();

    cout << "" << endl;

    //Test Vectors

    cout << "Test Vector" << endl;
    cout << "" << endl;

    Vector<int>* vector1 = new Vector<int>;
    Vector<double>* vector2 = new Vector<double>;
    Vector<float>* vector3 = new Vector<float>();

    Vector<int>* vector4 = new Vector<int>(13, 14, 16);
    Vector<double>* vector5 = new Vector<double>(6.7772, 9.6888, 7.4444);
    Vector<float>* vector6 = new Vector<float>(6.7772, 9.6888, 7.4444);

    vector3->getPoint()->localize();
    vector4->getPoint()->localize();
    vector1->setPoint(new Point<int>(4,3,5));
    vector2->setPoint(new Point<double>(4.65656,3.7373737,5.999999));

    vector1->localize();
    vector2->localize();
    vector3->localize();
    vector4->localize();
    vector5->localize();
    vector6->localize();

    vector1->normalizedVector();
    vector6->normalizedVector();

    vector1->localize();
    vector6->localize();

    Vector<int> *vector7 = *vector1**vector4;
    vector7->localize();

    Vector<double> *vector8 = *vector2**vector5;
    vector8->localize();

    Vector<int> *vector9 = *vector1^*vector4;
    vector7->localize();

    Vector<double> *vector10 = *vector2^*vector5;
    vector8->localize();


    /*std::cout << "Ints --> Cross Products: " <<  << " -- Producto Punto: " << dotProduct1 << std::endl;
    std::cout << "Doubles --> Producto Cruz: " << crossProduct2 << " -- Producto Punto: " << dotProduct2 << std::endl;*/

    std::cout << "" << std::endl;

    //Test Segment

    cout << "Test Segment" << endl;
    cout << "" << endl;

    Segment<int> *segment1 = new Segment<int>;
    Segment<double> *segment2 = new Segment<double>;

    Segment<int> *segment3 = new Segment<int>(new Point<int>(2, 2, 2), new Point<int>(3,3,3));
    Segment<double> *segment4 = new Segment<double>(new Point<double>(2.333, 2.333, 2.333), new Point<double>(3.333, 3.333, 3.333));

    Segment<int>* segment5 = new Segment<int>(new Point<int>(2, 9, 2), new Point<int>(10, 25, 30));
    Segment<double>* segment6 = new Segment<double>(new Point<double>(0.012, 10.45, 0.004), new Point<double>(45.3, 12.8, 33.3));

    segment1->localize();
    segment1->setPoint1(new Point<int>(40, 45, 50));
    segment1->localize();

    segment2->localize();
    segment2->setPoint2(new Point<double>(33.55, 45.33, 60.33));
    segment2->localize();

    segment3->localize();
    segment4->localize();
    segment5->localize();
    segment6->localize();

    if (segment1->isLeft(new Point<int>(3,2,2))) {
        cout << "The (3,2,2) is in my left" << endl;
    }

    if (segment2->isRight(new Point<double>(3.0, 2.0, 1.0))) {
        cout << "The (3,2,2) is in my right" << endl;
    }

    if (segment3->isOnMe(new Point<int>(2, 2, 2))) {
        cout << "The point (2,2,2) is on me" << endl;
    }

    //Test Polygon

    cout << "Test Segment" << endl;
    cout << "" << endl;





    return 0;

}