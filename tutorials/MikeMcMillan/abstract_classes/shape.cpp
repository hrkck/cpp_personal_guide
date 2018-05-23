#include "iostream"

using namespace std;

class Shape {
        virtual void setX(int xcor) = 0;
        virtual void setY(int ycor) = 0;
        virtual int getX() const = 0;
        virtual int getY() const = 0;
        virtual void draw() const = 0;
};

class Circle : public Shape {
private:
        int xcor, ycor, radius;
public:
        Circle(int x, int y, int r){
                xcor = x;
                ycor = y;
                radius = r;
        }
        virtual void setX(int x){
                xcor = x;
        }
        virtual void setY(int y){
                ycor = y;
        }
        void setRadiues(int r){
                radius = r;
        }
        virtual int getX() const {
                return xcor;
        }
        virtual int getY() const {
                return ycor;
        }
        virtual int getRadius() const {
                return radius;
        }
        virtual void draw() const {
                cout << "Drawing circle at: " <<
                getX() << ", " << getY() << "with a radius of: " << getRadius() << endl;
        }
};


int main(){
        Circle c1(2, 3, 6);
        c1.draw();
        return 0;
}
