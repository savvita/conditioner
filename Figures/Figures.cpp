#include <iostream>
#include"Circle.h"

void print(Circle* pc);

int main()
{
	//Figure f(1, 2);
	//std::cout << f.getX() << "\t" << f.getY() << "\n";
	//Square s(3, 4, 10);
	//std::cout << s.getX() << "\t" << s.getY() << "\t" << s.getSize() << "\n";
	//Circle c(0, 0, 12, "Black");
	//std::cout << c.getX() << "\t" << c.getY() << "\t" << c.getRadius() <<"\t" << c.getColor() << "\n";
	//RedCircle rc(-1, -1, 1);
	//std::cout << rc.getX() << "\t" << rc.getY() << "\t" << rc.getRadius() <<"\t" << rc.getColor() << "\n";
	//GreenCircle gc(0, 1, 2);
	//std::cout << gc.getX() << "\t" << gc.getY() << "\t" << gc.getRadius() <<"\t" << gc.getColor() << "\n";

	//Circle* pc = new RedCircle(5, 6, 7);
	//std::cout << pc->getInfo() << "\n";
	//std::cout << "==============================\n";
	////print(pc);
	//delete pc;

	//pc = new GreenCircle(1, 2, 3);
	//std::cout << pc->getInfo() << "\n";
	//std::cout << "==============================\n";
	////print(pc);
	//delete pc;

	//Figure f;
	//std::cout << f.getInfo() << "\n";
	//std::cout << "==============================\n";
	//Square s;
	//std::cout << s.getInfo() << "\n";
	//std::cout << "==============================\n";
	//Circle c;
	//std::cout << c.getInfo() << "\n";
	//std::cout << "==============================\n";
	//RedCircle rc;
	//std::cout << rc.getInfo() << "\n";
	//std::cout << "==============================\n";
	//GreenCircle gc;
	//std::cout << gc.getInfo() << "\n";
	//std::cout << "==============================\n";

	Figure* pf;
	pf = new Figure(1, 2);
	std::cout << pf->getInfo() << "\n";
	delete pf;

	pf = new Square(1, 2, 10);
	std::cout << "==============================\n";
	std::cout << pf->getInfo() << "\n";
	delete pf;

	pf = new Circle(1, 1, 20, "Blue");
	std::cout << "==============================\n";
	std::cout << pf->getInfo() << "\n";
	delete pf;

	pf = new RedCircle(3, 3, 4);
	std::cout << "==============================\n";
	std::cout << pf->getInfo() << "\n";
	delete pf;

	pf = new GreenCircle(3, 3, 4);
	std::cout << "==============================\n";
	std::cout << pf->getInfo() << "\n";
	delete pf;

}

void print(Circle* pc)
{
	std::cout << pc->getX() << "\t" << pc->getY() << "\t" << pc->getRadius() <<"\t" << pc->getColor() << "\n";
}