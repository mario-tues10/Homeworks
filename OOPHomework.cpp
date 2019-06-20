#include <iostream>
#include <cmath>
using namespace std;

class Point {
	double x;
	double y;
public:
	Point(double x1, double y1) {
		x = x1;
		y = y1;
	}
	double FindS(Point p) {
		double x2 = x - p.x;
		double y2 = y - p.y;
		return sqrt(x2 * x2 + y2 * y2);
	}
	void move(Point *p2, double x_, double y_) {
		p2->x += x_;
		p2->y += y_;
	}
	void safe(Point *p) {
		x = p->x;
		y = p->y;
	}
	void print() {
		cout << this->x << " ";
		cout << this->y << endl;
	}
	void load() {
		 cout << x << " ";
		 cout << y << endl;
	}

};


int main() {
	Point p1(3.2, 8.8);
	Point p2(4.2, 9.8);
	cout << p1.FindS(p2) << endl;
	Point p3 = p1;
	p1.print();

	p1.move(&p3, 2, 2);
	p3.print();

	p1.safe(&p3);
	p1.move(&p3, 2, 2);
	p1.load();
	
	return 0;
}