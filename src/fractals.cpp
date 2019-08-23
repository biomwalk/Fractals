// This is the CPP file you will edit and turn in. (TODO: Remove this comment!)

#include "fractals.h"
#include "gwindow.h"
using namespace std;
int counter = 0;

//void drawSierpinskiTriangle(GWindow& window, double x, double y, double size, int order) {
//    int altitude = size*sqrt(3)/2;
//    if (order > 0) {
//        window.drawLine(x, y, x+size, y);  //Horizontal Line
//        counter++;
//        pause(500);
//        window.drawLine(x, y, x+size/2, y+altitude);   //Left Line
//        counter++;
//        pause(500);
//        window.drawLine(x+size/2, y+altitude, x+size, y);   //Right Line
//        counter++;
//        pause(500);
//        drawSierpinskiTriangle(window, x + size/4, y + altitude/2, size/2, order-1);  //Center Triangle
//        drawSierpinskiTriangle(window, x + size/2, y, size/2, order-1);  //Right Triangle
//        drawSierpinskiTriangle(window, x , y, size/2, order-1);  //Left Triangle
//    }
//    cout << counter << endl;
//}

void drawSierpinskiTriangle(GWindow& window, double x, double y, double size, int order) {
    int altitude = size*sqrt(3)/2;
    if (order > 0) {
        window.drawLine(x, y, x+size/(pow(2,order)), y);
        window.drawLine(x, y, x+size/(pow(2,order + 1)), y+altitude);
        window.drawLine(x+size/2, y+altitude, x+(pow(2,order)), y);
        //drawSierpinskiTriangle(window, x+size, y, )
    }
}


int floodFill(GWindow& window, int x, int y, int color) {

    return 0;   // this is only here so it will compile
}
