#include "iostream"
#include "vector"

using namespace std;

class Quadrilateral {
protected:
        double side1, side2, side3, side4;
public:
        Quadrilateral(double s1, double s2, double s3, double s4){
                side1 = s1;
                side2 = s2;
                side3 = s3;
                side4 = s4;
        }
        virtual void display(){
                cout << "Quadrilateral with sides: " << side1 << " " << side2 << " " << side3 << " " << side4 << endl;
        }
};

class Trapezoid : public Quadrilateral {
public:
        Trapezoid(double s1, double s2, double s3, double s4) : Quadrilateral(s1, s2, s3, s4) {
        }
        virtual void display(){
                cout << "Trapezoid with sides: " << side1 << " " << side2 << " " << side3 << " " << side4 << endl;
        }
};

class Square : public Quadrilateral {
protected:
        double side;
public:
        Square(double s) : Quadrilateral(side, side, side, side) {
                side = s;
        }
        virtual void display(){
                cout << "Square with side: " << side << endl;
        }
};

int main(){
        Trapezoid t1(2, 4, 6, 2);
        Square s1(7);
        std::vector<Quadrilateral*> quads;
        quads.push_back(&t1);
        quads.push_back(&s1);
        // OH MY C++!
        for (size_t i = 0; i < quads.size(); i++) {
                quads[i]->display();
        }

        return 0;
}
