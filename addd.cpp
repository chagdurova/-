#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class Shape {
public: 
	int l;
	Shape (int _l){
		l=_l;
	};
};
class Circle : public Shape {
	public : 
		Circle(int r) : Shape (r) {};
			 float get_s() {return 3.14*(l*l);};
			 float get_p() {return 2*(3.14*l);};
};

class square : public Shape {
	int h;
public : 
		square(int l,int w) : Shape (l) {h=w;};
			 int get_s() {return h*l;};
			 int get_p() {return 2*(h+l);};
};


class treugolnik : public Shape{
	int k;
	int y;
public:
	treugolnik(int l, int b, int c): Shape(l) {y=b;k=c;};
	float get_p(){return (l+k+y);};
	float get_s() {
		float o= get_p()/2 ; 
	
		float r=(float)((o-l)*(o-k)*(o-y));
		
	return sqrt(r);
	};
};

void main()

{square a(2,12);
setlocale(LC_ALL,"Russian");
cout << "площадь прямоугольника равна=" << a.get_s() << endl;
cout << "периметр прямоугольнка равна=" << a.get_p() << endl;
Circle r(6);
cout << "площадь круга=" << r.get_s() << endl;
cout << "периметр круга=" << r.get_p() << endl;
treugolnik t(3,3,5);
cout << "площадь треугольника=" << t.get_s() << endl;

system("pause");
}