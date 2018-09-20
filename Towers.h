#pragma once
class Towers
{
public:
	Towers();
	void solve();
	void setTop(int a, int b, int c, int d, int e);
	void setRight(int a, int b, int c, int d, int e);
	void setLeft(int a, int b, int c, int d, int e);
	void setBot(int a, int b, int c, int d, int e);

	bool check5(int pos);
	bool check1(int start, int stop);
	bool lCheck(int pos);
	bool rCheck(int pos);

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

