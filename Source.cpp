#include <iostream>
#include <chrono>
#include "Towers.h"
using namespace std;



int main() {
	using namespace chrono;
	Towers test;
	/*
	test.setTop(3, 2, 1, 5, 2);
	test.setBot(2, 2, 4, 1, 3);
	test.setRight(3, 2, 2, 1, 3);
	test.setLeft(2, 3, 1, 3, 2);*/
	
	test.setTop(2, 4, 1, 2, 3);
	test.setBot(3, 2, 3, 2, 1);
	test.setRight(2, 1, 3, 2, 3);
	test.setLeft(3, 4, 2, 2, 1);



	steady_clock::time_point t1;
	steady_clock::time_point t2;

	t1 = steady_clock::now();
	test.solve();
	t2 = steady_clock::now();
	duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
	cout << "Time for puzzle is: " << time_span.count() << endl;

}
