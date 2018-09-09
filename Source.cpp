#include <iostream>
#include <string>
#include <chrono>
using namespace std;




class Towers {
public:
	Towers();
	void solve();
	void setTop(int a, int b, int c, int d, int e);
	void setRight(int a, int b, int c, int d, int e);
	void setLeft(int a, int b, int c, int d, int e);
	void setBot(int a, int b, int c, int d, int e);

	bool check5(int pos);
	bool check1(int start, int stop);
	bool lCheck();

	void reset();
private:
	int t[5];
	int l[5];
	int r[5];
	int bo[5];

	int col[5];
	int arr[5][5];
	int data[5][50];
	int dSize[5];
	bool seen[5];
};

Towers::Towers() {
	data[0][0] = 43215;
	data[0][1] = 34215;
	data[0][2] = 42315;
	data[0][3] = 24315;
	data[0][4] = 32415;
	data[0][5] = 23415;
	data[0][6] = 43125;
	data[0][7] = 34125;
	data[0][8] = 41325;
	data[0][9] = 14325;
	data[0][10] = 31425;
	data[0][11] = 13425;
	data[0][12] = 42135;
	data[0][13] = 24135;
	data[0][14] = 41235;
	data[0][15] = 14235;
	data[0][16] = 21435;
	data[0][17] = 12435;
	data[0][18] = 42135;
	data[0][19] = 24135;
	data[0][20] = 41235;
	data[0][21] = 14235;
	data[0][22] = 21435;
	data[0][23] = 12345;

	data[1][0] = 12354;
	data[1][1] = 21354;
	data[1][2] = 13254;
	data[1][3] = 31254;
	data[1][4] = 23154;
	data[1][5] = 32154;
	data[1][6] = 45123;
	data[1][7] = 14523;
	data[1][8] = 41523;
	data[1][9] = 24513;
	data[1][10] = 42513;
	data[1][11] = 12453;
	data[1][12] = 21453;
	data[1][13] = 14253;
	data[1][14] = 41253;
	data[1][15] = 24153;
	data[1][16] = 42153;
	data[1][17] = 34512;
	data[1][18] = 43512;
	data[1][19] = 31452;
	data[1][20] = 13452;
	data[1][21] = 14352;
	data[1][22] = 41352;
	data[1][23] = 34152;
	data[1][24] = 43152;
	data[1][25] = 32451;
	data[1][26] = 23451;
	data[1][27] = 24351;
	data[1][28] = 42351;
	data[1][29] = 34251;
	data[1][30] = 43251;
	data[1][31] = 12534;
	data[1][32] = 21534;
	data[1][33] = 15234;
	data[1][34] = 51234;
	data[1][35] = 25134;
	data[1][36] = 52134;
	data[1][37] = 13524;
	data[1][38] = 31524;
	data[1][39] = 15324;
	data[1][40] = 51324;
	data[1][41] = 35124;
	data[1][42] = 53124;
	data[1][43] = 35214;
	data[1][44] = 53214;
	data[1][45] = 45213;
	data[1][46] = 23514;
	data[1][47] = 32514;
	data[1][48] = 52314;
	data[1][49] = 25314;

	data[2][0] = 13542;
	data[2][1] = 31542;
	data[2][2] = 51342;
	data[2][3] = 53142;
	data[2][4] = 14532;
	data[2][5] = 41532;
	data[2][6] = 45132;
	data[2][7] = 35412;
	data[2][8] = 45312;
	data[2][9] = 34521;
	data[2][10] = 43521;
	data[2][11] = 35142;
	data[2][12] = 23541;
	data[2][13] = 32541;
	data[2][14] = 25341;
	data[2][15] = 52341;
	data[2][16] = 35241;
	data[2][17] = 53241;
	data[2][18] = 42531;
	data[2][19] = 24531;
	data[2][20] = 45231;
	data[2][21] = 12543;
	data[2][22] = 21543;
	data[2][23] = 15243;
	data[2][24] = 51243;
	data[2][25] = 25143;
	data[2][26] = 52143;
	data[2][27] = 15423;
	data[2][28] = 54123;
	data[2][29] = 25413;
	data[2][30] = 54213;
	data[2][31] = 15342;
	data[2][32] = 53412;
	data[2][33] = 51423;
	data[2][34] = 52413;

	data[3][0] = 51432;
	data[3][1] = 15432;
	data[3][2] = 54132;
	data[3][3] = 54312;
	data[3][4] = 53421;
	data[3][5] = 35421;
	data[3][6] = 45321;
	data[3][7] = 54231;
	data[3][8] = 25431;
	data[3][9] = 52431;

	data[4][0] = 54321;


	col[0] = 0;
	col[1] = 0;
	col[2] = 0;
	col[3] = 0;
	col[4] = 0;

	dSize[0] = 24;
	dSize[1] = 50;
	dSize[2] = 35;
	dSize[3] = 10;
	dSize[4] = 1;

	seen[0] = false;
	seen[1] = false;
	seen[2] = false;
	seen[3] = false;
	seen[4] = false;

	for (int y = 0; y < 5; y++)
	{
		for (int z = 0; z < 5; z++)
			arr[y][z] = -1;
	}
	
}

void Towers::setTop(int a, int b, int c, int d, int e) {
	t[0] = a;
	t[1] = b;
	t[2] = c;
	t[3] = d;
	t[4] = e;
}

void Towers::setRight(int a, int b, int c, int d, int e) {
	r[0] = a;
	r[1] = b;
	r[2] = c;
	r[3] = d;
	r[4] = e;
}

void Towers::setLeft(int a, int b, int c, int d, int e) {
	l[0] = a;
	l[1] = b;
	l[2] = c;
	l[3] = d;
	l[4] = e;
}

void Towers::setBot(int a, int b, int c, int d, int e) {
	bo[0] = a;
	bo[1] = b;
	bo[2] = c;
	bo[3] = d;
	bo[4] = e;
}

void Towers::solve() {
	cout << "Starting solver" << endl;

	for (int i = 0; i < 5; i++)
	{
		arr[0][i] = data[t[i]-1][col[i]] % 10; 
		arr[1][i] = data[t[i]-1][col[i]] /10 % 10;
		arr[2][i] = data[t[i]-1][col[i]] /100 % 10;
		arr[3][i] = data[t[i]-1][col[i]] /1000 % 10;
		arr[4][i] = data[t[i]-1][col[i]] /10000 % 10;
		
		//check 5 left values and 1 bot value
		if (!check5(i)) {
			col[i]++;
			if (col[i] >= dSize[t[i]-1])
			{
				if (i == 0)
				{
					cout << "Can't find solution" << endl;
					exit(0);
				}
				else { 
					col[i] = 0;
					i--;
					col[i]++;
				}
			}

			i--;
		}
		//if good on to the next one

	}


	cout << "Puzzle solved" << endl;
	for (int y = 0; y < 5; y++)
	{
		for (int z = 0; z < 5; z++)
			cout << arr[y][z] << " ";
		
		cout << endl;
	}
}
bool Towers::check5(int pos) {
	//if less than or equal to left #, true
	int tCount = 0;
	int max = 0;

	for (int i = 4; i >= 0; i--)
	{
		if (arr[i][pos] > max)
		{
			max = arr[i][pos];
			tCount++;
		}
	}
	if (tCount != bo[pos]) {
		//cout << "Bot1 failed" << endl;
		return false;
	}
	else {
		max = 0;
		tCount = 0;
	}

	for (int i = 0; i <= pos; i++)
	{
		if (arr[0][i] > max)
		{
			max = arr[0][i];
			tCount++;
		}
	}
	if (tCount > r[0]) {
		//cout << "right1 failed" << endl;
		return false;
	}
	if (!check1(0, pos)) return false;
	else {
		max = 0;
		tCount = 0;
	}

	for (int i = 0; i <= pos; i++)
	{
		if (arr[1][i] > max)
		{
			max = arr[1][i];
			tCount++;
		}	
	}
	if (tCount > r[1]) {
		//cout << "right2 failed" << endl;
		return false;
	}
	if (!check1(1, pos)) return false;
	else {
		max = 0;
		tCount = 0;
	}

	for (int i = 0; i <= pos; i++)
	{
		if (arr[2][i] > max)
		{
			max = arr[2][i];
			tCount++;
		}
	}
	if (tCount > r[2]) {
		//cout << "right3 failed" << endl;
		return false;
	}
	if (!check1(2, pos)) return false;
	else {
		max = 0;
		tCount = 0;
	}

	for (int i = 0; i <= pos; i++)
	{
		if (arr[3][i] > max)
		{
			max = arr[3][i];
			tCount++;
		}
	}
	if (tCount > r[3]) {
		//cout << "right4 failed" << endl;
		return false;
	}
	if (!check1(3, pos)) return false;
	else {
		max = 0;
		tCount = 0;
	}

	for (int i = 0; i <= pos; i++)
	{
		if (arr[4][i] > max)
		{
			max = arr[4][i];
			tCount++;
		}
	}
	if (tCount > r[4]) {
		//cout << "right5 failed" << endl;
		return false;
	}
	if (!check1(4, pos)) return false;
	else {
		max = 0;
		tCount = 0;
	}

	if (pos == 4)
	{
		return lCheck();
	}

	return true;

}

void Towers::reset() {
	seen[0] = false;
	seen[1] = false;
	seen[2] = false;
	seen[3] = false;
	seen[4] = false;
}

bool Towers::check1(int start, int stop) {
	reset();
	int i = 0;
	for (int i = 0; i <= stop; i++)
	{
		if (seen[arr[start][i] - 1])
			return false;
		else seen[arr[start][i] - 1] = true;
	}
	/*
	while (arr[start][i] != -1)
	{
		if (seen[arr[start][i] - 1])
			return false;
		else seen[arr[start][i] - 1] = true;

		i++;
	}*/

	return true;
}

bool Towers::lCheck(){
	int tCount = 0;
	int max = 0;

	for (int i = 4; i >= 0; i--)
	{
		if (arr[0][i] > max)
		{
			max = arr[0][i];
			tCount++;
		}
	}
	if (tCount != l[0]) return false;
	else {
		max = 0;
		tCount = 0;
	}

	for (int i = 4; i >= 0; i--)
	{
		if (arr[1][i] > max)
		{
			max = arr[1][i];
			tCount++;
		}
	}
	if (tCount != l[1]) return false;
	else {
		max = 0;
		tCount = 0;
	}

	for (int i = 4; i >= 0; i--)
	{
		if (arr[2][i] > max)
		{
			max = arr[2][i];
			tCount++;
		}
	}
	if (tCount != l[2]) return false;
	else {
		max = 0;
		tCount = 0;
	}


	for (int i = 4; i >= 0; i--)
	{
		if (arr[3][i] > max)
		{
			max = arr[3][i];
			tCount++;
		}
	}
	if (tCount != l[3]) return false;
	else {
		max = 0;
		tCount = 0;
	}

	for (int i = 4; i >= 0; i--)
	{
		if (arr[4][i] > max)
		{
			max = arr[4][i];
			tCount++;
		}
	}
	if (tCount != l[4]) return false;
	

	return true;

}

int main() {
	using namespace chrono;
	Towers test;
	
	test.setTop(1, 2, 2, 3, 3);
	test.setBot(3, 2, 1, 2, 2);
	test.setRight(1, 2, 3, 2, 3);
	test.setLeft(4, 2, 1, 2, 2);
	/*test.setTop(5, 5, 5, 5, 5);
	test.setBot(5, 5, 5, 5, 5);
	test.setRight(5, 5, 5, 5, 5);
	test.setLeft(5, 5, 5, 5, 5);*/

	steady_clock::time_point t1;
	steady_clock::time_point t2;

	t1 = steady_clock::now();
	test.solve();
	t2 = steady_clock::now();
	duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
	cout << "Time for puzzle is: " << time_span.count() << endl;

}