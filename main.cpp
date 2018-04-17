#include <iostream>
#include "Elements/Point.h"
#include "Elements/Vector.h"

using namespace std;

int main() {

    Point<int> *point = new Point<int>(1,2,3);
    point->localize();

    Vector<int> *vector = new Vector<int>(1,2,3);
    vector->localize();

}