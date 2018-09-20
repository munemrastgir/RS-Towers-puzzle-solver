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
	
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	
	cout << "Enter 5 numbers for top" << endl;
	cin >> a >> b >> c >> d >> e;
	test.setTop(a, b, c, d, e);

	cout << "Enter 5 numbers for bottom" << endl;
	cin >> a >> b >> c >> d >> e;
	test.setBot(a, b, c, d, e);

	cout << "Enter 5 numbers for left" << endl;
	cin >> a >> b >> c >> d >> e;
	test.setRight(a, b, c, d, e);

	cout << "Enter 5 numbers for right" << endl;
	cin >> a >> b >> c >> d >> e;
	test.setLeft(a, b, c, d, e);



	steady_clock::time_point t1;
	steady_clock::time_point t2;

	t1 = steady_clock::now();
	test.solve();
	t2 = steady_clock::now();
	duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
	cout << "Time for puzzle is: " << time_span.count() << endl;

}
