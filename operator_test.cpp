#include <iostream>

using namespace std;

class Vec2D
        {
    public:
        double x;
        double y;
        void print();
        void print_all(Vec2D *v_a);
        explicit Vec2D(double xx = 0, double yy = 0) : x{xx}, y{yy} {};
        // binary operator+ as member function
        Vec2D operator+(const Vec2D& v2) const { return Vec2D{x + v2.x, y + v2.y}; }
        // unary operator- as member function
        Vec2D operator-() const { return Vec2D{-x, -y}; }
    };

void Vec2D::print_all(Vec2D *v_a){
    for(int i = 0; i < sizeof(v_a); ++i){
        v_a[i].print();
    }
};

void Vec2D::print(){
    cout << "x: " << x << ", y: " << y << endl;
};

// binary operator- as external function
Vec2D operator-(const Vec2D& v1, const Vec2D& v2)
{
return Vec2D{v1.x - v2.x, v1.y - v2.y};
};

int main(){
    Vec2D s, v{1,1}, w{2, 4};
    Vec2D va[]{s, v, w};
    cout << sizeof(va) << endl;
    //These operators can be invoked in two ways:
    s = v + w;
    //s = v.operator+(w); // both lines are equivalent
    //s = v - w;
    //s = operator-(v, w); // both lines are equivalent
    //s = -w;
    //s = v.operator-(); // both lines are equivalent
    for(int i = 0; i < 3; ++i){
        va[i].print();
    }

    return 0;
}