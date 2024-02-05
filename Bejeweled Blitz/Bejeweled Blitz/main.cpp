#include<iostream>
#include"help.h"
#include<time.h>
#include<thread>
#include<Windows.h>
using namespace std;

//------------- For Printing Shapes--------------//

void myRhombus(int x1, int y1) {
	int y2 = y1 + 21, y3 = y2 + 21;
	int x2 = x1 + 16, x3 = x1 - 16;
	while (x3 <= x2) {
		myLine(x1, y1, x2, y2, 220, 0, 0);
		myLine(x1, y1, x3, y2, 220, 0, 0);
		myLine(x2, y2, x1, y3, 220, 0, 0);
		myLine(x3, y2, x1, y3, 220, 0, 0);

		x2 = x2 - 2, x3 = x3 + 2;
	}
	//----------- For Adding Shades-------------//
	x2 = x1 + 15, x3 = x1 - 15;
	myLine(x1, y1 + 9, x1 - 10, y1 + 23, 255, 204, 204);
	myLine(x1, y1 + 11, x1 - 10, y1 + 25, 255, 204, 204);

	myLine(x1, y1 + 7, x1 - 10, y1 + 21, 255, 255, 255);
}
void myDiamond(int x1, int y1) {
	float y2 = y1 - 30, y3 = y2 - 10;
	int x2 = x1 + 10, x4 = x1 + 20;
	int x3 = x1 - 10, x5 = x1 - 20;
	while (x5 <= x3) {
		myLine(x1, y1, x5, y2, 0, 128, 255);
		x5 = x5 + 2;
	}
	while (x4 >= x2) {
		myLine(x1, y1, x4, y2, 204, 229, 255);
		x4 = x4 - 2;
	}
	while (x3 <= x1) {
		myLine(x1, y1, x3, y2 + 1, 102, 178, 255);
		x3 = x3 + 2;
	}
	while (x2 >= x1) {
		myLine(x1, y1, x2, y2 + 1, 51, 153, 255);
		x2 = x2 - 2;
	}
	x2 = x1 + 10, x4 = x1 + 20;
	x3 = x1 - 10, x5 = x1 - 20;

	while (x5 < x3) {
		myLine(x3 - 3, y3, x5, y2, 0, 76, 153);
		x5 = x5 + 2;
	}
	while (x4 > x2) {
		myLine(x2 + 3, y3, x4, y2, 0, 102, 255);
		x4 = x4 - 2;
	}

	while (x5 < x1) {
		myLine(x1 - 5, y3 + 2, x5, y2 + 1, 153, 255, 255);
		x5 = x5 + 2;
	}
	while (x4 > x1) {
		myLine(x1 + 5, y3 + 2, x4, y2 + 1, 153, 255, 255);
		x4 = x4 - 2;
	}
	x2 = x1 - 5;
	while (x2 < x1 + 5) {
		myLine(x1, y2 + 1, x2, y3 + 2, 0, 102, 255);
		x2 = x2 + 2;
	}

	x3 = x1 - 5, x4 = x1 + 5;
	for (int i = 0;i < 4;i++) {
		myLine(x3, y3, x4, y3, 204, 229, 255);
		x3 = x3 - 2, x4 = x4 + 2, y3 = y3 + 0.4;
	}

	for (int i = 0;i < 4;i++) {
		myLine(x3, y3, x4, y3, 204, 229, 255);
		x3 = x3 + 2, x4 = x4 - 2, y3 = y3 + 0.4;
	}
}
void myStar(int x1, int y1) {
	int x2 = x1 + 10, x4 = x1 + 20, x3 = x1 - 10, x5 = x1 - 20;
	int y2 = y1 + 10, y3 = y1 + 30, y4 = y1 + 40;
	while (x5 <= x4) {
		myLine(x1, y1 - 2, x5, y3, 255, 255, 51);
		x5 = x5 + 2;
	}
	x5 = x1 - 20;
	while (x5 <= x4) {
		myLine(x1, y4 + 2, x5, y2, 255, 255, 51);
		x5 = x5 + 2;
	}
	y1 = y1 + 10, y2 = y1 + 3, y3 = y1 + 17, y4 = y1 + 20;
	x2 = x1 + 5, x4 = x1 + 10, x3 = x1 - 5, x5 = x1 - 10;

	while (x5 <= x4) {
		myLine(x1, y1 - 1, x5, y3, 255, 128, 0);
		x5 = x5 + 2;
	}
	x5 = x1 - 10;
	while (x5 <= x4) {
		myLine(x1, y4 + 1, x5, y2, 255, 128, 0);
		x5 = x5 + 2;
	}
	myLine(x1, y1 + 4, x1 - 5, y1 + 12, 255, 255, 255);
	myLine(x1, y1 + 6, x1 - 5, y1 + 14, 255, 255, 255);
}
void myCircle(int x, int y) {
	int R = 255, G = 90, B = 90;
	int x1 = x - 20, x2 = x + 20;
	int y1 = y - 20, y2 = y + 20;
	while (x1 < x2) {
		myEllipse(x1, y1, x2, y2, 255, G, B);
		x1 += 2, x2 -= 2;
		y1 += 2, y2 -= 2;
		G += 15, B += 15;
	}
}
void myBox(int x, int y) {
	int x1 = x + 20, x2 = x - 20;
	int y1 = y - 7, y2 = y - 26;
	int y3 = y1 - 30, y4 = y3 - 7;

	while (y2 > y4) {
		myLine(x, y2, x1 - 1, y3, 153, 255, 153);
		y2 = y2 - 2;

	}
	y2 = y - 26;
	while (y2 > y4) {
		myLine(x, y2, x2 + 1, y3, 153, 255, 153);
		y2 = y2 - 2;
	}
	y2 = y - 26;
	while (y >= y2 - 2) {
		myLine(x, y + 1, x1, y1, 0, 200, 0);

		myLine(x, y + 1, x2, y1, 0, 100, 0);
		y = y - 2;
		y1 = y1 - 2;
	}

}

//------------- For flame shapes(4)------------//

void Border4flame(int x, int y) {
	int x1 = x - 38, x2 = x + 38;
	int y1 = y - 38, y2 = y + 38;
	while (x1 < x2 - 6) {
		myLine(x1 + 6, y1 + 2, x1, y1 + 8, 255, 255, 0);
		x1 += 6;
	}
	x1 = x - 38;
	while (y1 < y2 - 6) {
		myLine(x2 - 2, y1 + 6, x2 - 8, y1, 255, 255, 0);
		y1 += 6;
	}
	y1 = y - 38;
	while (y1 < y2 - 6) {
		myLine(x1 + 2, y1, x1 + 8, y1 + 6, 255, 255, 0);
		y1 += 6;
	}
	y1 = y - 38;
	while (x1 < x2 - 6) {
		myLine(x1 + 6, y2 - 8, x1, y2 - 2, 255, 255, 0);
		x1 += 6;
	}
}
void flameRhombus(int x, int y) {
	myRhombus(x, y - 24);
	Border4flame(x, y);
}
void flameDiamond(int x, int y) {
	myDiamond(x, y + 20);
	Border4flame(x, y);
}
void flameStar(int x, int y) {
	myStar(x, y - 20);
	Border4flame(x, y);
}
void flameCircle(int x, int y) {
	myCircle(x, y);
	Border4flame(x, y);
}
void flameBox(int x, int y) {
	myBox(x, y + 18);
	Border4flame(x, y);
}
 
//-----------for destroyer gems---------/

void Border4dest(int x, int y) {
	int x1 = x - 38, x2 = x + 38;
	int y1 = y - 38, y2 = y + 38;
	while (x1 < x2 - 6) {
		myLine(x1 + 6, y1 + 2, x1, y1 + 8, 0, 255, 255);
		x1 += 6;
	}
	x1 = x - 38;
	while (y1 < y2 - 6) {
		myLine(x2 - 2, y1 + 6, x2 - 8, y1, 0, 255, 255);
		y1 += 6;
	}
	y1 = y - 38;
	while (y1 < y2 - 6) {
		myLine(x1 + 2, y1, x1 + 8, y1 + 6, 0, 255, 255);
		y1 += 6;
	}
	y1 = y - 38;
	while (x1 < x2 - 6) {
		myLine(x1 + 6, y2 - 8, x1, y2 - 2, 0, 255, 255);
		x1 += 6;
	}
}
void destRhombus(int x, int y) {
	myRhombus(x, y - 24);
	Border4dest(x, y);
}
void destDiamond(int x, int y) {
	myDiamond(x, y + 20);
	Border4dest(x, y);
}
void destStar(int x, int y) {
	myStar(x, y - 20);
	Border4dest(x, y);
}
void destCircle(int x, int y) {
	myCircle(x, y);
	Border4dest(x, y);
}
void destBox(int x, int y) {
	myBox(x, y + 18);
	Border4dest(x, y);
}

//----------special effects---------//
void specialExplosion(int x, int y) {
	int x1 = x - 50, x2 = x + 50, y1 = y - 50, y2 = y + 50;
	
	if (x > 670 && x < 1070 && y>270 && y < 670) {
		myEllipse(x1, y1, x2, y2, 255, 255, 255);

		myLine(x - 10, y1, x + 15, y1 - 40, 255, 255, 255);
		myLine(x + 15, y1 - 40, x + 30, y1 + 8, 255, 255, 255);

		myLine(x + 30, y1 + 8, x2 + 10, y1 - 33, 255, 255, 255);
		myLine(x2 + 10, y1 - 33, x2 - 8, y1 + 25, 255, 255, 255);

		myLine(x2 - 8, y1 + 25, x2 + 35, y1 + 20, 255, 255, 255);
		myLine(x2, y1 + 55, x2 + 35, y1 + 20, 255, 255, 255);

		myLine(x2, y1 + 55, x2 + 45, y1 + 70, 255, 255, 255);
		myLine(x2 + 45, y1 + 70, x2 - 7, y1 + 80, 255, 255, 255);

		myLine(x2 + 7, y2 + 30, x2 - 7, y1 + 80, 255, 255, 255);
		myLine(x2 + 7, y2 + 30, x2 - 27, y2 - 5, 255, 255, 255);

		myLine(x, y2 + 30, x2 - 27, y2 - 5, 255, 255, 255);
		myLine(x, y2 + 30, x - 10, y2 - 3, 255, 255, 255);

		myLine(x - 10, y2 - 3, x1 - 5, y2 + 40, 255, 255, 255);
		myLine(x1 + 8, y2 - 25, x1 - 5, y2 + 40, 255, 255, 255);

		myLine(x1 + 8, y2 - 25, x1 - 15, y2 - 20, 255, 255, 255);
		myLine(x1 - 2, y + 5, x1 - 15, y2 - 20, 255, 255, 255);

		myLine(x1 - 42, y - 5, x1 - 2, y + 5, 255, 255, 255);
		myLine(x1 - 42, y - 5, x1 + 10, y - 30, 255, 255, 255);

		myLine(x1 + 10, y - 30, x1, y - 75, 255, 255, 255);
		myLine(x - 10, y1, x1, y - 75, 255, 255, 255);
	}
}
void destroyerEffect(int x, int y) {

	int xmax=1200, ymax=800, xmin=560, ymin=160;
	int x1=x-10, y1=y-10, x2=x+10, y2=y+10;
	while (x1 > xmin || x2 < xmax || y1>ymin || y2<ymax) {
		if (x1 > xmin) {
			myLine(x, y - 1, x1, y - 1, 94, 186, 201);
			myLine(x, y + 1, x1, y + 1, 94, 186, 201);
		}
		if (x2 < xmax) {
			myLine(x, y - 1, x2, y - 1, 94, 186, 201);
			myLine(x, y + 1, x2, y + 1, 94, 186, 201);
		}
		if (y1 > ymin) {
			myLine(x-1, y, x-1, y1, 94, 186, 201);
			myLine(x+1, y, x+1, y1, 94, 186, 201);
		}
		if (y2 < ymax) {
			myLine(x-1, y, x-1, y2, 94, 186, 201);
			myLine(x+1, y, x+1, y2, 94, 186, 201);
		}
		x1 -= 10, x2 += 10, y1 -= 10, y2 += 10;
		Sleep(2);
	}
}

//------- For printing Digits(time & Score)------//

void printDigits(int num, int x, int y) {
	if (num == 0) {
		myLine(x, y, x - 5, y + 30, 255, 255, 255);
		myLine(x + 15, y, x + 10, y + 30, 255, 255, 255);
		myLine(x, y, x + 15, y, 255, 255, 255);
		myLine(x - 5, y + 30, x + 10, y + 30, 255, 255, 255);
	}
	if (num == 1) {
		myLine(x + 10, y, x+5, y + 30, 255, 255, 255);
		myLine(x + 10, y, x + 2, y + 12, 255, 255, 255);
		myLine(x - 1, y + 30, x + 11, y + 30, 255, 255, 255);
	}
	if (num == 2) {
		myLine(x, y + 4, x + 5, y, 255, 255, 255);
		myLine(x + 5, y, x + 10, y, 255, 255, 255);
		myLine(x + 10, y, x + 15, y + 4, 255, 255, 255);
		myLine(x + 15, y + 4, x - 4, y + 27, 255, 2555, 255);
		myLine(x - 4, y + 27, x - 5, y + 30, 255, 255, 255);
		myLine(x - 5, y + 30, x + 10, y + 30, 255, 255, 255);
	}
	if (num == 3) {
		myLine(x, y, x + 15, y, 255, 255, 255);
		myLine(x - 2, y + 15, x + 13, y + 15, 255, 255, 255);
		myLine(x - 4, y + 30, x + 11, y + 30, 255, 255, 255);
		myLine(x + 15, y, x + 11, y + 30, 255, 255, 255);
	}
	if (num == 4) {
		myLine(x, y, x - 2, y + 15, 255, 255, 255);
		myLine(x - 2, y + 15, x + 13, y + 15, 255, 255, 255);
		myLine(x + 15, y, x + 11, y + 30, 255, 255, 255);
	}
	if (num == 5) {
		myLine(x, y, x + 15, y, 255, 255, 255);
		myLine(x, y, x - 2, y + 13, 255, 255, 255);
		myLine(x - 2, y + 13, x + 13, y + 13, 255, 255, 255);
		myLine(x + 13, y + 13, x + 10, y + 30, 255, 255, 255);
		myLine(x + 10, y + 30, x - 5, y + 30, 255, 255, 255);
	}
	if (num == 6) {
		myLine(x, y, x + 15, y, 255, 255, 255);
		myLine(x, y, x - 5, y + 30, 255, 255, 255);
		myLine(x - 5, y + 30, x + 10, y + 30, 255, 255, 255);
		myLine(x + 10, y + 30, x + 13, y + 14, 255, 255, 255);
		myLine(x + 13, y + 14, x - 2, y + 14, 255, 255, 255);
	}
	if (num == 7) {
		myLine(x, y, x + 15, y, 255, 255, 255);
		myLine(x + 15, y, x + 10, y + 30, 255, 255, 255);
	}
	if (num == 8) {
		myLine(x, y, x + 15, y, 255, 255, 255);
		myLine(x - 2, y + 14, x + 13, y + 14, 255, 255, 255);
		myLine(x - 5, y + 30, x + 10, y + 30, 255, 255, 255);
		myLine(x, y, x - 5, y + 30, 255, 255, 255);
		myLine(x + 15, y, x + 10, y + 30, 255, 255, 255);
	}
	if (num == 9) {
		myLine(x, y, x + 15, y, 255, 255, 255);
		myLine(x - 3, y + 16, x + 13, y + 16, 255, 255, 255);
		myLine(x - 5, y + 30, x + 10, y + 30, 255, 255, 255);
		myLine(x, y, x - 3, y + 16, 255, 255, 255);
		myLine(x + 15, y, x + 10, y + 30, 255, 255, 255);
	}
}

void fill(int a[][8] , int row , int col)
{
	int x1, y1;
	if (a[row][col] == 1) {
		x1 = (row + 7) * 80 + 40;
		y1 = (col + 2) * 80 + 16;
		myRhombus(x1, y1);
	}
	if (a[row][col] == 2) {
		x1 = (row + 7) * 80 + 40;
		y1 = (col + 2) * 80 + 20;
		myStar(x1, y1);
	}
	if (a[row][col] == 3) {
		x1 = (row + 7) * 80 + 40;
		y1 = (col + 2) * 80 + 60;
		myDiamond(x1, y1);
	}
	if (a[row][col] == 4) {
		x1 = (row + 7) * 80 + 40;
		y1 = (col + 2) * 80 + 60;
		myBox(x1, y1);
	}
	if (a[row][col] == 5) {
		x1 = (row + 7) * 80 + 40;
		y1 = (col + 2) * 80 + 40;
		myCircle(x1, y1);
	}

	//-----------for flame gems-----//
	if (a [row][col]== 6) {
		x1 = (row + 7) * 80 + 40;
		y1 = (col + 2) * 80 + 40;
		flameRhombus(x1, y1);
	}
	if (a[row][col] == 7) {
		x1 = (row + 7) * 80 + 40;
		y1 = (col + 2) * 80 + 40;
		flameStar(x1, y1);
	}
	if (a [row][col]== 8) {
		x1 = (row + 7) * 80 + 40;
		y1 = (col + 2) * 80 + 40;
		flameDiamond(x1, y1);
	}
	if (a [row][col]== 9) {
		x1 = (row + 7) * 80 + 40;
		y1 = (col + 2) * 80 + 40;
		flameBox(x1, y1);
	}
	if (a [row][col]== 10) {
		x1 = (row + 7) * 80 + 40;
		y1 = (col + 2) * 80 + 40;
		flameCircle(x1, y1);
	}

	//-------for destroyer gems------//
	if (a [row][col]== 11) {
		x1 = (row + 7) * 80 + 40;
		y1 = (col + 2) * 80 + 40;
		destRhombus(x1, y1);
	}
	if (a[row][col] == 12) {
		x1 = (row + 7) * 80 + 40;
		y1 = (col + 2) * 80 + 40;
		destStar(x1, y1);
	}
	if (a [row][col]== 13) {
		x1 = (row + 7) * 80 + 40;
		y1 = (col + 2) * 80 + 40;
		destDiamond(x1, y1);
	}
	if (a [row][col]== 14) {
		x1 = (row + 7) * 80 + 40;
		y1 = (col + 2) * 80 + 40;
		destBox(x1, y1);
	}
	if (a [row][col]== 15) {
		x1 = (row + 7) * 80 + 40;
		y1 = (col + 2) * 80 + 40;
		destCircle(x1, y1);
	}
}

//-------------- To initially check the same shapes  --------------------//
bool initialcheckifthreecol(int a[][8], int& row, int& col)
{
	bool flag = 0;
	for (row=0; row < 8 && flag == 0; row++)
	{
		for (col = 0; col < 6 && flag == 0; col++)
		{
			if (a[row][col] == a[row][col + 1] && a[row][col + 1] == a[row][col + 2])
				flag = 1;
		}
	}
	row--;
	col--;
	return flag;
}
bool initialcheckifthreerow(int a[][8], int& row, int& col)
{
	bool flag = 0;
	for (col=0; col < 8 && flag == 0; col++)
	{
		for (row = 0; row < 6 && flag == 0; row++)
		{
			if (a[row][col] == a[row + 1][col] && a[row + 1][col] == a[row + 2][col])
				flag = 1;
		}
	}
	row--;
	col--;
	return flag;
}

//----------- To initially replace the same shapes with new -------------//

void initialreplacecol(int a[][8], int& row, int& col)
{
	for(int i=0 ; i<3 ; i++)
		a[row][col+i] = rand() % 5 + 1;
	
}
void initialreplacerow(int a[][8], int& row, int& col)
{
	for(int i=0 ; i<3 ; i++)
		a[row][col+i] = rand() % 5 + 1;
	
}

//--------To check if there are 3 same shapes in rows or colums----------//

bool checkifthreecol(int a[][8], int row, int &col)
{
	bool flag = 0;
	if(col<=5)
	{
		if (a[row][col] == a[row][col + 1] && a[row][col + 1] == a[row][col + 2])
			flag = 1;
	}
	if (a[row][col] == a[row][col -1] && a[row][col - 1] == a[row][col +1])
	{
		flag = 1;
		col--;
	}
	if(col>=2)
	{
		if (a[row][col] == a[row][col -1] && a[row][col - 1] == a[row][col - 2])
		{
			flag = 1;
			col=col-2;
		}
	}
	return flag;
}
bool checkifthreerow(int a[][8], int & row, int col)
{
	bool flag = 0;
	if(row>=0 && row<=5 && flag==0)
	{
		if (a[row][col] == a[row + 1][col] && a[row + 1][col] == a[row + 2][col])
			flag = 1;
	}
	if(row>=2 && row<=7 && flag==0)
	{
		if (a[row][col] == a[row - 1][col] && a[row - 1][col] == a[row - 2][col])
		{
			flag = 1;
			row=row-2;
		}
	}
	if (a[row][col] == a[row - 1][col] && a[row - 1][col] == a[row +1][col])
	{
		flag = 1;
		row--;
	}
	
	return flag;
}

//-------------- To replace the same shapes with new --------------------//

void replacecol(int a[][8], int row, int col)
{
	//---------replace the same col with its upper elements--------//
	int c=col+2;
	while(c>2)
	{
		int x1=560+80*row, x2=x1+80 , y1=160+80*(c) , y2=y1+80;
			a[row][c] = a[row][c-3];
			myRect(x1, y1, x2, y2, 255, 255, 255);
			myRect(x1 + 2, y1 + 2, x2 - 2, y2 - 2, 255, 255, 255);
			Sleep(50);
			fill(a,(row),c);
			y1=y1+80;
			y2=y2+80;
			c--;
	}

	//---------replace the 1st three element of column with new elements and shape--------//
	for(int col=0 ; col<3 ; col++)
	{
		int x1=560+80*row, x2=x1+80 , y1=160+80*col , y2=y1+80;
		a[row][col] = rand() % 5 + 1;
		myRect(x1, y1, x2, y2, 255, 255, 255);
		myRect(x1 + 2, y1 + 2, x2 - 2, y2 - 2, 255, 255, 255);
		Sleep(50);
		fill(a,(row),col);
		y1=y1+80;
		y2=y2+80;
	}
}
void replacerow(int a[][8], int row, int col)
{
	//---to replace the same row with its upper elememts and shape-------//
	while(col>0)
	{
		int x1=560+80*row, x2=x1+80 , y1=160+80*col , y2=y1+80;
		for(int i=0 ; i<3 ; i++)
		{
			a[row+i][col] = a[row+i][col-1];
			myRect(x1, y1, x2, y2, 255, 255, 255);
			myRect(x1 + 2, y1 + 2, x2 - 2, y2 - 2, 255, 255, 255);
			x1=x1+80;
			x2=x2+80;
		}
		Sleep(50);
		for(int i=0 ; i<3 ; i++)
			fill(a,(row+i),col);
		col--;
	}

	//---to replace the 1st row with new elememts and shape-------//
	int x1=560+80*row, x2=x1+80 , y1=160+80*0 , y2=y1+80;
	for(int i=0 ; i<3 ; i++)
	{
		a[row+i][0] = rand() % 5 + 1;	
		myRect(x1, y1, x2, y2, 255, 255, 255);
		myRect(x1 + 2, y1 + 2, x2 - 2, y2 - 2, 255, 255, 255);
		x1=x1+80;
		x2=x2+80;
	}
	Sleep(50);
	for(int i=0 ; i<3 ; i++)
		fill(a,(row+i),0);
}


//--------------------- To check if four are same -----------------------//

int checkandreplaceentry(int n)
{
	int a=0;
	if(n==6)
		a=1;
	else if(n==7)
		a=2;
	else if(n==8)
		a=3;
	else if(n==9)
		a=4;
	else if(n==10)
		a=5;
	else if(n==1)
		a=6;
	else if(n==2)
		a=7;
	else if(n==3)
		a=8;
	else if(n==4)
		a=9;
	else if(n==5)
		a=10;
	return a;
}
bool checkiffourrow(int a[][8], int& row, int col)
{
	bool flag = 0;
	if(row>=0 && row<=4 && flag==0)
	{
		if (a[row][col] == a[row + 1][col] && a[row + 1][col] == a[row + 2][col] && a[row + 2][col]==a[row + 3][col])
			flag = 1;
	}
	if(row>=3 && row<=7 && flag==0)
	{
		if (a[row][col] == a[row - 1][col] && a[row - 1][col] == a[row - 2][col] && a[row - 2][col]==a[row - 3][col])
		{
			flag = 1;
			row=row-3;
		}
	}
	if(row>=1 && row<=5 && flag==0)
	{
		if (a[row][col] == a[row - 1][col] && a[row - 1][col] == a[row + 1][col] && a[row + 1][col]==a[row + 2][col])
		{
			flag = 1;
			row--;
		}
	}
	if(row>=2 && row<=6 && flag==0)
	{
		if (a[row][col] == a[row - 1][col] && a[row - 1][col] == a[row - 2][col] && a[row -2][col]==a[row + 1][col])
		{
			flag = 1;
			row=row-2;
		}
	}
	if(flag==1)
	{
		int num=a[row][col];
		a[row+3][col]=checkandreplaceentry(num);
		int x=560+80*(row+3), y=160+80*col;
				myRect(x, y, x+80, y+80, 255, 255, 255);
				myRect(x + 2, y + 2, x+80 - 2, y+80 - 2, 255, 255, 255);
				fill(a,row+3,col);
	}
	return flag;
}
bool checkiffourcol(int a[][8], int row, int& col)
{
	bool flag = 0;
	if(col>=0 && col<=4 && flag==0)
	{
		if (a[row][col] == a[row][col+1] && a[row][col+1] == a[row][col+2] && a[row][col+2]==a[row ][col+3])
			flag = 1;
	}
	if(col>=3 && col<=7 && flag==0)
	{
		if (a[row][col] == a[row][col-1] && a[row][col-1] == a[row][col-2] && a[row ][col-2]==a[row ][col-3])
		{
			flag = 1;
			col=col-3;
		}
	}
	if(col>=1 && col<=5 && flag==0)
	{
		if (a[row][col] == a[row][col-1] && a[row][col-1] == a[row ][col+1] && a[row][col+1]==a[row][col+2])
		{
			flag = 1;
			col--;
		}
	}
	if(col>=2 && col<=6 && flag==0)
	{
		if (a[row][col] == a[row ][col-1] && a[row ][col-1] == a[row ][col-2] && a[row][col-2]==a[row][col+1])
		{
			flag = 1;
			col=col-2;
		}
	}
	if(flag==1)
	{
		int num=a[row][col];
		a[row ][col+3]=checkandreplaceentry(num);
		int x=560+80*row, y=160+80*(col+3);
				myRect(x, y, x+80, y+80, 255, 255, 255);
				myRect(x + 2, y + 2, x+80 - 2, y+80 - 2, 255, 255, 255);
				fill(a,row,col+3);
	}
	return flag;
}


//------------ Working flame gem ------------------//

int checkflamerow(int a[][8],int &row,int col)
{
	int flag=0;
	int n;
		for (row = 0; row < 6 && flag == 0; row++)
		{
			if(a[row][col] == a[row + 1][col] )
			{
				n=checkandreplaceentry(a[row][col]);
				if(a[row + 2][col]==n )
					flag=3;
			}
			else if(a[row][col] == a[row + 2][col])
			{
				n=checkandreplaceentry(a[row][col]);
				if(a[row + 1][col]==n)
					flag=2;
			}
			else if(a[row+1][col] == a[row + 2][col])
			{
				n=checkandreplaceentry(a[row+1][col]);
				if(a[row][col]==n)
					flag=1;
			}
		}
		row--;
		return flag;
}
int checkflamecol(int a[][8], int row, int& col)
{
	int flag = 0;
	int n;
		for (col = 0; col < 6 && flag == 0; col++)
		{
			if(a[row][col] == a[row][col+1] )
			{
				n=checkandreplaceentry(a[row][col]);
				if(a[row ][col+2]==n)
					flag=3;
			}
			else if(a[row][col] == a[row ][col+2])
			{
				n=checkandreplaceentry(a[row][col]);
				if(a[row ][col+1]==n)
					flag=2;
			}
			else if(a[row][col+1] == a[row ][col+2])
			{
				n=checkandreplaceentry(a[row][col+1]);
				if(a[row][col]==n)
					flag=1;
			}
		}
	col--;
	return flag;
}
void replaceflamerow(int a[][8], int row , int col)
{
	int end1=3,end2=3,minus=3;
	int st1=0,st=0;
	if(row==6)
		end1=2;
	if(col==7)
	{
		end2=2;
		minus=2;
	}
	if(row==-1)
	{ 
		end1=2;
		row++;
	}
	if(col!=0)
		col=col-1;
		//----------making black radius and showing effect-----//
		int x1=560+80*row, x2=x1+80 , y1=160+80*col , y2=y1+80;
		for(int j=0 ; j<end2 ; j++)
		{
			for(int i=0 ; i<end1 ; i++)
			{
					a[row+i][col+j]=a[row+i][col+j-minus];
					myRect(x1, y1, x2, y2, 255, 255, 255);
					myRect(x1 + 2, y1 + 2, x2 - 2, y2 - 2, 255, 255, 255);
					x1=x1+80;
					x2=x2+80;			
			}
			y1=y1+80;
			y2=y2+80;
			x1=560+80*row, x2=x1+80;
		}

		x1=560+80*(row+1), x2=x1+80 , y1=160+80*(col+1) , y2=y1+80;
		specialExplosion(x1+40,y1+40);
		Sleep(500);
		//-------------making black radius to cover effect------//
		x1=560+80*row, x2=x1+80 , y1=160+80*col , y2=y1+80;
		for(int j=0 ; j<end2 ; j++)
		{
			for(int i=0 ; i<end1 ; i++)
			{
					myRect(x1, y1, x2, y2, 255, 255, 255);
					myRect(x1 + 2, y1 + 2, x2 - 2, y2 - 2, 255, 255, 255);
					x1=x1+80;
					x2=x2+80;			
			}
			y1=y1+80;
			y2=y2+80;
			x1=560+80*row, x2=x1+80;
		}
		//---------filling the radius---------//
		for(int j=end2-1 ; j>=0 ; j--)
		{
			for(int i=0 ; i<end1 ; i++)
				fill(a,(row+i),(col+j));
			Sleep(50);
		}
		col--;
		//-----------replacing with upper elements--------//
		while(col>=end2)
		{
			int x1=560+80*row, x2=x1+80 , y1=160+80*col , y2=y1+80;
			for(int i=0 ; i<end1 ; i++)
			{
					a[row+i][col]=a[row+i][col-minus];
					myRect(x1, y1, x2, y2, 255, 255, 255);
					myRect(x1 + 2, y1 + 2, x2 - 2, y2 - 2, 255, 255, 255);
					x1=x1+80;
					x2=x2+80;			
			}
			for(int i=0 ; i<end1 ; i++)
				fill(a,(row+i),(col));
			Sleep(50);
			col--;
		}
		//------------replaing the upper radius----//
		while(col>=0)
		{
			int x1=560+80*row, x2=x1+80 , y1=160+80*col , y2=y1+80;
			for(int i=0 ; i<end1 ; i++)
			{
				a[row+i][col] = rand() % 5 + 1;	
				myRect(x1, y1, x2, y2, 255, 255, 255);
				myRect(x1 + 2, y1 + 2, x2 - 2, y2 - 2, 255, 255, 255);
				x1=x1+80;
				x2=x2+80;
			}
			Sleep(50);
			for(int i=0 ; i<end1 ; i++)
				fill(a,(row+i),col);
			col--;
		}
}
void replaceflamecol(int a[][8], int row , int col)
{
	int end1=3,end2=3,minus=3;
	if(row==7)
		end1=2;
	if(col==6)
	{
		end2=2;
		minus=2;
	}
	if(col==-1)
	{ 
		end1=2;
		row++;
	}
	if(row!=0)
		row=row-1;
	//----------making black radius and showing effect-----//
		int x1=560+80*row, x2=x1+80 , y1=160+80*col , y2=y1+80;
		for(int j=0 ; j<end2 ; j++)
		{
			for(int i=0 ; i<end1 ; i++)
			{
					a[row+i][col+j]=a[row+i][col+j-minus];
					myRect(x1, y1, x2, y2, 255, 255, 255);
					myRect(x1 + 2, y1 + 2, x2 - 2, y2 - 2, 255, 255, 255);
					x1=x1+80;
					x2=x2+80;			
			}
			y1=y1+80;
			y2=y2+80;
			x1=560+80*row, x2=x1+80;
		}
		x1=560+80*(row+1), x2=x1+80 , y1=160+80*(col+1) , y2=y1+80;
		specialExplosion(x1+40,y1+40);
		Sleep(500);
		//-----------black radius to cover effect----------//
		x1=560+80*row, x2=x1+80 , y1=160+80*col , y2=y1+80;
		for(int j=0 ; j<end2 ; j++)
		{
			for(int i=0 ; i<end1 ; i++)
			{
					myRect(x1, y1, x2, y2, 255, 255, 255);
					myRect(x1 + 2, y1 + 2, x2 - 2, y2 - 2, 255, 255, 255);
					x1=x1+80;
					x2=x2+80;			
			}
			y1=y1+80;
			y2=y2+80;
			x1=560+80*row, x2=x1+80;
		}
		//-------------filling the radius------------//
		for(int j=end2-1 ; j>=0 ; j--)
		{
			for(int i=0 ; i<end1 ; i++)
				fill(a,(row+i),(col+j));
			Sleep(50);
		}
		col--;
		//-----------replacing till all upper come down---------//
		while(col>=end2)
		{
			int x1=560+80*row, x2=x1+80 , y1=160+80*col , y2=y1+80;
			for(int i=0 ; i<end1 ; i++)
			{
					a[row+i][col]=a[row+i][col-minus];
					myRect(x1, y1, x2, y2, 255, 255, 255);
					myRect(x1 + 2, y1 + 2, x2 - 2, y2 - 2, 255, 255, 255);
					x1=x1+80;
					x2=x2+80;			
			}
			for(int i=0 ; i<end1 ; i++)
				fill(a,(row+i),(col));
			Sleep(50);
			col--;
		}
		//----------replacing the upper part-------//
		while(col>=0)
		{
			int x1=560+80*row, x2=x1+80 , y1=160+80*col , y2=y1+80;
			for(int i=0 ; i<end1 ; i++)
			{
				a[row+i][col] = rand() % 5 + 1;	
				myRect(x1, y1, x2, y2, 255, 255, 255);
				myRect(x1 + 2, y1 + 2, x2 - 2, y2 - 2, 255, 255, 255);
				x1=x1+80;
				x2=x2+80;
			}
			Sleep(50);
			for(int i=0 ; i<end1 ; i++)
				fill(a,(row+i),col);
			col--;
		}
}


//--------------working of destroyer gem----------//
int checkandplace(int n)
{
	int a=0;
	if(n==1)
		a=11;
	else if(n==2)
		a=12;
	else if(n==3)
		a=13;
	else if(n==4)
		a=14;
	else if(n==5)
		a=15;
	return a;
}
bool checkif5(int a[][8] , int row, int col)
{ 
	bool flag=0;
	int r=row,c=col;
	int ro=row,co=col;
	int num=a[ro][co];
	if(checkifthreecol(a,row,col)==1 && checkifthreerow(a,r,c)==1)
		flag=1;


	if(flag==1)
	{
		replacecol(a,row,col);
		replacerow(a,r,c);
		a[ro][co]=checkandplace(num);
		int x=560+80*(ro), y=160+80*co;
				myRect(x, y, x+80, y+80, 255, 255, 255);
				myRect(x + 2, y + 2, x+80 - 2, y+80 - 2, 255, 255, 255);
				fill(a,ro,co);
	}
	return flag;
}
int checkifdestrow(int a[][8] , int &row  ,int col)
{
	
	int flag=0;
	int n;
		for (row = 0; row < 6 && flag == 0; row++)
		{
			if(a[row][col] == a[row + 1][col] )
			{
				n=checkandplace(a[row][col]);
				if(a[row + 2][col]==n )
					flag=3;
			}
			else if(a[row][col] == a[row + 2][col])
			{
				n=checkandplace(a[row][col]);
				if(a[row + 1][col]==n)
					flag=2;
			}
			else if(a[row+1][col] == a[row + 2][col])
			{
				n=checkandplace(a[row+1][col]);
				if(a[row][col]==n)
					flag=1;
			}
		}
		row--;
		return flag;
}
int checkifdestcol(int a[][8] , int row  ,int &col)
{
	
	int flag=0;
	int n;
		for (col = 0; col < 6 && flag == 0; col++)
		{
			if(a[row][col] == a[row][col+1] )
			{
				n=checkandplace(a[row][col]);
				if(a[row ][col+2]==n )
					flag=3;
			}
			else if(a[row][col] == a[row ][col+2])
			{
				n=checkandplace(a[row][col]);
				if(a[row ][col+1]==n)
					flag=2;
			}
			else if(a[row][col+1] == a[row ][col+2])
			{
				n=checkandplace(a[row][col+1]);
				if(a[row][col]==n)
					flag=1;
			}
		}
		col--;
		return flag;
}
void replacedest(int a[][8] , int row , int col)
{
	//-------------for printing vertical and horizotal lines of black rectangle-----//
	int x1=560, x2=x1+80 , y1=160+80*col , y2=y1+80;
	for(int i=0 ; i<8 ; i++)
	{
		myRect(x1, y1, x2, y2, 255, 255, 255);
		myRect(x1 + 2, y1 + 2, x2 - 2, y2 - 2, 255, 255, 255);
		x1=x1+80;
		x2=x2+80;			
	}
	x1=560+80*row, x2=x1+80 , y1=160 , y2=y1+80;
	for(int j=0 ; j<8 ; j++)
	{
		myRect(x1, y1, x2, y2, 255, 255, 255);
		myRect(x1 + 2, y1 + 2, x2 - 2, y2 - 2, 255, 255, 255);
		y1=y1+80;
		y2=y2+80;			
	}
	x1=560+80*row, x2=x1+80 , y1=160+80*col, y2=y1+80;
	destroyerEffect(x1+40,y1+40);
	Sleep(100);

	//----------for replacing rows till the 1st row--------//
	while(col>0)
	{

		int x1=560, x2=x1+80 , y1=160+80*col , y2=y1+80;
		for(int i=0 ; i<8 ; i++)
		{
			if(i!=row)
			{
				a[i][col]=a[i][col-1];
				myRect(x1, y1, x2, y2, 255, 255, 255);
				myRect(x1 + 2, y1 + 2, x2 - 2, y2 - 2, 255, 255, 255);
			}
			x1=x1+80;
			x2=x2+80;
		}
		Sleep(100);
		for(int j=0; j<8 ; j++)
		{
			if(j!=row)
				fill(a,j,col);
		}
		col--;
	}
	//-----------for replacing 1st row------//
	x1=560, x2=x1+80 , y1=160+80*0 , y2=y1+80;
	for(int i=0 ; i<8 ; i++)
	{
		a[i][0] = rand() % 5 + 1;	
		myRect(x1, y1, x2, y2, 255, 255, 255);
		myRect(x1 + 2, y1 + 2, x2 - 2, y2 - 2, 255, 255, 255);
		x1=x1+80;
		x2=x2+80;
	}
	Sleep(50);
	for(int i=0 ; i<8 ; i++)
		fill(a,i,0);
	
	//----------------for repalcing column--------------//
	x1=560+80*row, x2=x1+80 , y1=160 , y2=y1+80;
	for(int j=0 ; j<8 ; j++)
		{
			a[row][j] = rand() % 5 + 1;
			myRect(x1, y1, x2, y2, 255, 255, 255);
			myRect(x1 + 2, y1 + 2, x2 - 2, y2 - 2, 255, 255, 255);
			y1=y1+80;
			y2=y2+80;			
		}
	for(int j=7 ; j>=0 ; j--)
		{
			fill(a,row,j);
			Sleep(50);
		}		
}


//-------to making a black rectangle and fill with from where swap-------//

void printandfill(int a[][8],int row , int col)
{
	int x=560+80*row, y=160+80*col;
	myRect(x, y, x+80, y+80, 255, 255, 255);
	myRect(x + 2, y + 2, x+80 - 2, y+80 - 2, 255, 255, 255);
	fill(a,row,col);
}

//------ For Storing random no.s in Array -------//

void store(int a[][8])
{
	srand((unsigned)time(0));
	for (int row = 0; row < 8; row++)
	{
		for (int col = 0; col < 8; col++)
			a[row][col] = rand() % 5 + 1;
	}
	//------to initially check and replace the same 3 in columns----------//
	int row = 0, col = 0;
	int checkcol = 1;
	while (checkcol != 0)
	{
		checkcol = initialcheckifthreecol(a, row, col);
		if (checkcol == 1)
			initialreplacecol(a, row, col);
	}

	//--------to initially check and replace the same 3 in rows-----------//

	int checkr = 1;
	row = 0, col = 0;
	while (checkr != 0)
	{
		checkr = initialcheckifthreerow(a, row, col);
		if (checkr == 1)
			initialreplacerow(a, row, col);
	}

}

//----------- For Prining texts(Time & Score & after time end) ----------//

void scoreText(int x, int y) {
	myLine(x + 4, y, x + 15, y, 255, 255, 255);
	myLine(x + 4, y + 17, x + 11, y + 17, 255, 255, 255);         // S
	myLine(x, y + 35, x + 11, y + 35, 255, 255, 255);
	myLine(x, y + 4, x, y + 13, 255, 255, 255);
	myLine(x + 15, y + 21, x + 15, y + 31, 255, 255, 255);

	myLine(x, y + 4, x + 4, y, 255, 255, 255);   // ------- For curves
	myLine(x, y + 13, x + 4, y + 17, 255, 255, 255);
	myLine(x + 11, y + 17, x + 15, y + 21, 255, 255, 255);
	myLine(x + 15, y + 31, x + 11, y + 35, 255, 255, 255);



	x = x + 25, y = y + 10;

	myLine(x + 4, y, x + 11, y, 255, 255, 255);
	myLine(x + 4, y + 25, x + 11, y + 25, 255, 255, 255);         // C
	myLine(x, y + 4, x, y + 21, 255, 255, 255);

	myLine(x, y + 4, x + 4, y, 255, 255, 255);  // -------- for adding curves
	myLine(x, y + 21, x + 4, y + 25, 255, 255, 255);
	myLine(x + 11, y, x + 15, y + 4, 255, 255, 255);
	myLine(x + 11, y + 25, x + 15, y + 21, 255, 255, 255);


	x = x + 25;

	myLine(x + 4, y, x + 11, y, 255, 255, 255);
	myLine(x + 4, y + 25, x + 11, y + 25, 255, 255, 255);         // O
	myLine(x + 15, y + 4, x + 15, y + 21, 255, 255, 255);
	myLine(x, y + 4, x, y + 21, 255, 255, 255);
	myLine(x + 15, y + 4, x + 15, y + 21, 255, 255, 255);

	myLine(x, y + 4, x + 4, y, 255, 255, 255);
	myLine(x, y + 21, x + 4, y + 25, 255, 255, 255);
	myLine(x + 11, y, x + 15, y + 4, 255, 255, 255);
	myLine(x + 11, y + 25, x + 15, y + 21, 255, 255, 255);

	x = x + 25;

	myLine(x, y, x + 11, y, 255, 255, 255);
	myLine(x, y, x, y + 25, 255, 255, 255);                       // R
	myLine(x + 11, y, x + 15, y + 4, 255, 255, 255);
	myLine(x + 15, y + 4, x + 15, y + 9, 255, 255, 255);
	myLine(x + 15, y + 9, x + 11, y + 13, 255, 255, 255);
	myLine(x + 3, y + 13, x + 11, y + 13, 255, 255, 255);
	myLine(x + 7, y + 13, x + 15, y + 25, 255, 255, 255);

	x = x + 25;

	myLine(x, y, x, y + 25, 255, 255, 255);
	myLine(x, y, x + 10, y, 255, 255, 255);                       // E
	myLine(x, y + 12, x + 10, y + 12, 255, 255, 255);
	myLine(x, y + 25, x + 10, y + 25, 255, 255, 255);

	x = x + 25, y = y + 5;

	myLine(x, y, x, y + 2, 255, 255, 255);                        // :
	myLine(x, y + 12, x, y + 14, 255, 255, 255);
}

void timeText(int x, int y) {

	myLine(x, y, x, y + 35, 255, 255, 255);                  // T
	myLine(x - 15, y, x + 68, y, 255, 255, 255);
	x = x + 15;
	y = y + 10;
	myLine(x, y, x, y + 25, 255, 255, 255);                  // I

	x = x + 12;
	myLine(x, y, x, y + 25, 255, 255, 255);                  // M
	myLine(x, y, x + 8, y + 15, 255, 255, 255);
	myLine(x + 16, y, x + 16, y + 25, 255, 255, 255);
	myLine(x + 8, y + 15, x + 16, y, 255, 255, 255);

	x = x + 27;
	myLine(x, y, x, y + 25, 255, 255, 255);                  // E
	myLine(x, y, x + 10, y, 255, 255, 255);
	myLine(x, y + 12, x + 10, y + 12, 255, 255, 255);
	myLine(x, y + 25, x + 10, y + 25, 255, 255, 255);

	x = x + 35, y = y - 10;
	myLine(x, y, x, y + 35, 255, 255, 255);                  // L
	myLine(x, y + 35, x + 71, y + 35, 255, 255, 255);

	x = x + 12, y = y + 2;
	myLine(x, y, x, y + 25, 255, 255, 255);                  // E
	myLine(x, y, x + 10, y, 255, 255, 255);
	myLine(x, y + 12, x + 10, y + 12, 255, 255, 255);
	myLine(x, y + 25, x + 10, y + 25, 255, 255, 255);

	x = x + 22;
	myLine(x, y, x, y + 25, 255, 255, 255);                  // F
	myLine(x, y, x + 12, y, 255, 255, 255);
	myLine(x, y + 12, x + 12, y + 12, 255, 255, 255);

	x = x + 27;
	myLine(x, y, x, y + 25, 255, 255, 255);                  // T
	myLine(x - 10, y, x + 10, y, 255, 255, 255);

	x = x + 25, y = y + 10;
	myLine(x, y, x, y + 2, 255, 255, 255);                   // :
	myLine(x, y + 12, x, y + 14, 255, 255, 255);
}

void lastText(int x, int y) {
	myLine(x - 2, y, x + 5, y + 50, 255, 255, 255);
	myLine(x + 15, y + 15, x + 5, y + 50, 255, 255, 255);              // W
	myLine(x + 15, y + 15, x + 25, y + 50, 255, 255, 255);
	myLine(x + 32, y, x + 25, y + 50, 255, 255, 255);

	x = x + 47; y = y + 5;
	myLine(x + 7, y, x + 18, y, 255, 255, 255);
	myLine(x + 7, y + 45, x + 18, y + 45, 255, 255, 255);             // O
	myLine(x + 25, y + 7, x + 25, y + 38, 255, 255, 255);
	myLine(x, y + 7, x, y + 38, 255, 255, 255);
	myLine(x + 25, y + 7, x + 25, y + 38, 255, 255, 255);

	myLine(x, y + 7, x + 7, y, 255, 255, 255);
	myLine(x, y + 38, x + 7, y + 45, 255, 255, 255);
	myLine(x + 18, y, x + 25, y + 7, 255, 255, 255);
	myLine(x + 18, y + 45, x + 25, y + 38, 255, 255, 255);

	x = x + 40;
	myLine(x, y, x, y + 45, 255, 255, 255);
	myLine(x + 25, y, x + 25, y + 45, 255, 255, 255);                  // N
	myLine(x, y, x + 25, y + 45, 255, 255, 255);

	x = x + 40;
	myLine(x, y, x, y + 45, 255, 255, 255);
	myLine(x, y, x + 20, y + 3, 255, 255, 255);                        // D
	myLine(x, y + 45, x + 20, y + 42, 255, 255, 255);
	myLine(x + 20, y + 3, x + 25, y + 8, 255, 255, 255);
	myLine(x + 20, y + 42, x + 25, y + 37, 255, 255, 255);
	myLine(x + 25, y + 5, x + 25, y + 40, 255, 255, 255);

	x = x + 40;
	myLine(x, y + 2, x, y + 43, 255, 255, 255);
	myLine(x, y + 2, x + 25, y + 2, 255, 255, 255);                      // E
	myLine(x, y + 23, x + 25, y + 23, 255, 255, 255);
	myLine(x, y + 43, x + 25, y + 43, 255, 255, 255);

	x = x + 40;
	myLine(x, y, x + 18, y, 255, 255, 255);
	myLine(x, y, x, y + 45, 255, 255, 255);                        // R
	myLine(x + 18, y, x + 25, y + 7, 255, 255, 255);
	myLine(x + 25, y + 7, x + 25, y + 18, 255, 255, 255);
	myLine(x + 25, y + 18, x + 18, y + 25, 255, 255, 255);
	myLine(x + 5, y + 25, x + 18, y + 25, 255, 255, 255);
	myLine(x + 10, y + 25, x + 25, y + 45, 255, 255, 255);

	x = x + 40;
	myLine(x, y, x, y + 45, 255, 255, 255);
	myLine(x, y, x + 20, y, 255, 255, 255);                      // F
	myLine(x, y + 22, x + 20, y + 22, 255, 255, 255);

	x = x + 35;
	myLine(x, y, x, y + 38, 255, 255, 255);
	myLine(x + 25, y, x + 25, y + 38, 255, 255, 255);             // U
	myLine(x, y + 38, x + 7, y + 45, 255, 255, 255);
	myLine(x + 18, y + 45, x + 25, y + 38, 255, 255, 255);
	myLine(x + 18, y + 45, x + 7, y + 45, 255, 255, 255);

	x = x + 40;
	myLine(x, y, x, y + 45, 255, 255, 255);                      // L
	myLine(x, y + 45, x + 25, y + 45, 255, 255, 255);

	x = x + 40; y = y - 10;
	myLine(x - 1, y, x, y + 45, 255, 255, 255);
	myLine(x + 1, y, x, y + 45, 255, 255, 255);                      // !
	myLine(x - 1, y + 50, x - 1, y + 57, 255, 255, 255);
	myLine(x + 1, y + 50, x + 1, y + 57, 255, 255, 255);
}

void lastText2(int x, int y) {
	myLine(x, y, x + 13, y + 25, 255, 255, 255);                   // Y
	myLine(x + 26, y, x + 13, y + 25, 255, 255, 255);
	myLine(x + 13, y + 25, x + 13, y + 50, 255, 255, 255);

	x = x + 40;y = y + 5;
	myLine(x + 7, y, x + 18, y, 255, 255, 255);
	myLine(x + 7, y + 45, x + 18, y + 45, 255, 255, 255);          // O
	myLine(x + 25, y + 7, x + 25, y + 38, 255, 255, 255);
	myLine(x, y + 7, x, y + 38, 255, 255, 255);
	myLine(x + 25, y + 7, x + 25, y + 38, 255, 255, 255);

	myLine(x, y + 7, x + 7, y, 255, 255, 255);
	myLine(x, y + 38, x + 7, y + 45, 255, 255, 255);
	myLine(x + 18, y, x + 25, y + 7, 255, 255, 255);
	myLine(x + 18, y + 45, x + 25, y + 38, 255, 255, 255);

	x = x + 40;
	myLine(x, y, x, y + 38, 255, 255, 255);
	myLine(x + 25, y, x + 25, y + 38, 255, 255, 255);              // U
	myLine(x, y + 38, x + 7, y + 45, 255, 255, 255);
	myLine(x + 18, y + 45, x + 25, y + 38, 255, 255, 255);
	myLine(x + 18, y + 45, x + 7, y + 45, 255, 255, 255);
}

void printD(int x, int y) {
	myLine(x, y, x, y + 25, 255, 255, 255);
	myLine(x, y, x + 10, y + 2, 255, 255, 255);                        // D
	myLine(x, y + 25, x + 10, y + 23, 255, 255, 255);
	myLine(x + 10, y + 2, x + 15, y + 4, 255, 255, 255);
	myLine(x + 10, y + 23, x + 15, y + 21, 255, 255, 255);
	myLine(x + 15, y + 4, x + 15, y + 21, 255, 255, 255);
}


//------------ For Drawing Border ---------------//

void drawBorder() {
	myRect(80, 80, 1250, 880, 240, 230, 140);
	myRect(82, 82, 1248, 878, 240, 230, 140);
	myRect(88, 88, 1242, 872, 240, 230, 140);

	myFilledRect(90, 90, 1240, 870, 240, 230, 140, 133, 94, 66);      //  for filled rectangle

	myLine(740, 92, 740, 160, 0, 0, 0);
	myLine(742, 92, 742, 160, 0, 0, 0);
	myLine(738, 92, 738, 160, 0, 0, 0);                               //  for making lines of table connection with border
	myLine(1020, 92, 1020, 160, 0, 0, 0);
	myLine(1022, 92, 1022, 160, 0, 0, 0);
	myLine(1018, 92, 1018, 160, 0, 0, 0);

	myFilledRect(720, 135, 760, 160, 200, 200, 200, 200, 200, 200);   //  for silver blocks after lines
	myFilledRect(1000, 135, 1040, 160, 200, 200, 200, 200, 200, 200);

	myRect(552, 152, 1208, 808, 50, 25, 0);                           //  for dark brown border of table
	myRect(554, 154, 1206, 806, 50, 25, 0);

	int x1 = 230, x2 = 86, y1 = 86, y2 = 230;
	while (x1 <= 270) {                                               //  for top right corner strip
		myLine(x1, y1, x2, y2, 50, 25, 0);
		x1 += 2;
		y2 += 2;
	}
	myLine(247, 84, 84, 247, 255, 255, 255);
	myLine(253, 84, 84, 253, 255, 255, 255);

	scoreText(145, 530);
	myLine(135, 625, 400, 625, 0, 0, 0);
	timeText(150, 680);

}

//-------------- For making table ---------------//

void drawTable(int a[][8])
{
	drawBorder();
	myRect(558, 158, 1202, 802, 255, 255, 255);
	
	int y1 = 160, y2 = y1+80;
	for (int row = 0; row < 8; row++)
	{
		int x1 = 560, x2 = x1+80;
		for (int col = 0; col < 8; col++)
		{
			myRect(x1, y1, x2, y2, 255, 255, 255);
			myRect(x1 + 2, y1 + 2, x2 - 2, y2 - 2, 255, 255, 255);
			
			x1 = x1 + 80;
			x2 = x2 + 80;
		}
		y1 = y1 + 80;
		y2 = y2 + 80;
	}
}

//------------- For filling table ---------------//

void fillTable(int a[][8]) {

	//-------------- For Storing Shapes in array --------------//		
	//----------- 1 For Rhombus, 2 for Star, 3 for Diamond, 4 for Box, 5 for Circle-----------//
	int x1, y1;
	for (int row = 0; row < 8; row++)
	{
		for (int col = 0; col < 8; col++)
		{
			if (a[row][col] == 1) {
				x1 = (row + 7) * 80 + 40;
				y1 = (col + 2) * 80 + 16;
				myRhombus(x1, y1);
			}
			if (a[row][col] == 2) {
				x1 = (row + 7) * 80 + 40;
				y1 = (col + 2) * 80 + 20;
				myStar(x1, y1);
			}
			if (a[row][col] == 3) {
				x1 = (row + 7) * 80 + 40;
				y1 = (col + 2) * 80 + 60;
				myDiamond(x1, y1);
			}
			if (a[row][col] == 4) {
				x1 = (row + 7) * 80 + 40;
				y1 = (col + 2) * 80 + 60;
				myBox(x1, y1);
			}
			if (a[row][col] == 5) {
				x1 = (row + 7) * 80 + 40;
				y1 = (col + 2) * 80 + 40;
				myCircle(x1, y1);
			}
		}
	}
}

//--------------------- For Making Rectangle(pointer) ------------------------//

void mypointer(int& x1, int& y1, int R, int G, int B) {
	int x2 = x1 + 79;
	int y2 = y1 + 79;

	myLine(x1, y1, x2, y1, R, G, B);
	myLine(x1, y1, x1, y2, R, G, B);
	myLine(x1, y2, x2, y2, R, G, B);
	myLine(x2, y1, x2, y2, R, G, B);

	//	//----------- For Making Reactangle Thicker, Adding more lines ---------!!
	myLine(x1 + 2, y1 + 2, x2 - 2, y1 + 2, R, G, B);
	myLine(x1 + 2, y1 + 2, x1 + 2, y2 - 2, R, G, B);
	myLine(x1 + 2, y2 - 2, x2 - 2, y2 - 2, R, G, B);
	myLine(x2 - 2, y1 + 2, x2 - 2, y2 - 2, R, G, B);

	myLine(x1 - 2, y1 - 2, x2 + 2, y1 - 2, R, G, B);
	myLine(x1 - 2, y1 - 2, x1 - 2, y2 + 2, R, G, B);
	myLine(x1 - 2, y2 + 2, x2 + 2, y2 + 2, R, G, B);
	myLine(x2 + 2, y1 - 2, x2 + 2, y2 + 2, R, G, B);
	
}

// ----------For drawing pointer and give the location when press enter-------//

void movepointer(int a[][8], int& x1, int& y1, int& row, int& col)
{
	

	int key = 0;
	while (key != 10)         //loop will terminate when user press enter//
	{
		key = 0;
		mypointer(x1, y1, 255, 0, 0);
		isCursorKeyPressed(key);
		if (key == 1 && x1>560)
		{
			mypointer(x1, y1, 255, 255, 255);
			x1 = x1 - 80;
			row--;
		}
		if (key == 2 && y1>160)
		{
			mypointer(x1, y1, 255, 255, 255);
			y1 = y1 - 80;
			col--;
		}
		if (key == 3 && x1<1120)
		{
			mypointer(x1, y1, 255, 255, 255);
			x1 = x1 + 80;
			row++;
		}
		if (key == 4 && y1<720)
		{
			mypointer(x1, y1, 255, 255, 255);
			y1 = y1 + 80;
			col++;
		}
	}
}

//-------------- To give the co ordinate of destination ----------------------//

void whereswap(int& row, int& col)
{
	int key = 0;
	while (key == 0)
	{
		isCursorKeyPressed(key);
		if (key == 1)
			row--;
		if (key == 2)
			col--;
		if (key == 3)
			row++;
		if (key == 4)
			col++;
	}
}

//------------- For Score  -----------//
void printScore(int score,int x, int y) {
	int first=0, second=0, third=0, fourth=0, fifth=0;

	if (score < 1000 && score > 1) {
		first = score / 100;
		second = (score / 10)%10;
		third = score % 10;
		printDigits(first, x, y);
		printDigits(second, x+25, y);
		printDigits(third, x+50, y);
	}
	if (score >= 1000 && score < 10000) {
		first = score / 1000;
		second = (score / 100)%10;
		third = (score / 10)%10;
		fourth = score % 10;
		printDigits(first, x,y);
		printDigits(second, x+25, y);
		printDigits(third, x+50, y);
		printDigits(fourth, x+75, y);
	}
	if (score >= 10000 && score < 100000) {
		first = score / 10000;
		second = (score / 1000)%10;
		third = (score / 100)%10;
		fourth = (score / 10)%10;
		fifth = score % 10;
		printDigits(first, x, y);
		printDigits(second, x+25, y);
		printDigits(third, x+50, y);
		printDigits(fourth, x+75, y);
		printDigits(fifth, x+100, y);
	}
}

void scorecalculator(int& score) {
	int old=-1;
	
	while ( score>= 0) {
		if (score != old) {
			myFilledRect(285, 530, 415, 570, 133, 94, 66, 133, 94, 66);
			printScore(score,300,535);
			old = score;
		}
	}

}

//------------- For Timer  -----------//

void timer(int& sec)
{
	int t = sec;
	int dist = 138;										              // for making line upto distance( time covered )					
	while (sec >= 0)
	{
		int d = sec / 10;
		int m = sec % 10;
		int h = 764;                                                  // for starting point (x1)


		myFilledRect(134,760,502,801,40,26,13,133,94,66);             // For Making Border
		myFilledRect(136,762,500,799,40,26,13,133,94,66);             //   of Time Line


		myFilledRect(138,h,dist,h+33,222,200,150,222,200,150);        // for making timeline

		myFilledRect(340, 675, 400, 715, 133, 94, 66, 133, 94, 66);

		printDigits(d, 350, 680);
		printDigits(m, 380, 680);

		/*cout << sec << "\b\b";*/
		Sleep(1000);
		sec--;
		dist += 6;											// i.e. measured to get border filled in 60 seconds.
	}
}

//-------- For printing wonderful after time end -----//

void afterTimeEnd(int score) {
	myFilledRect(90, 90, 1240, 870, 240, 230, 140, 133, 94, 66);      //  for filled rectangle
	lastText(400, 200);
	myLine(390, 270, 770, 270, 0, 0, 0);
	lastText2(360, 300);
	scoreText(510, 310);
	printD(635, 320);
	printScore(score, 700, 315);
	myLine(360, 370, 800, 370, 0, 0, 0);
}

//----------------------------------------------""" Main Function """-----------------------------------------------//

int main()
{
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE),CONSOLE_FULLSCREEN_MODE,0);   //-----------to start game at full screen------//
	int a[8][8] = { 0 };
	store(a);
	int row = 0, col = 0;
	int x1 = 560, y1 = 160;                    //---- Pointer(Cursor) controlling variable -----//
	srand(time(0));
	int time = 60;
	int save_time = time;
	int score = 0;
	int save_score = 0;
	thread t1(timer, ref(time));               //---- For timer to run parralel with main ------//
	t1.detach();
	thread t2(scorecalculator, ref(score));    
	t2.detach();
	
	drawTable(a);
		fillTable(a);
		while (time > 0)
		{
			if (time >= 0) {
				movepointer(a, x1, y1, row, col);
				int i1 = row, j1 = col;															 //------- For location when enter pressed 1st time-------------//

				mypointer(x1, y1, 0, 255, 100);													 //------- Change the color of pointer after selection----------//

				whereswap(row, col);
				int i2 = row, j2 = col;															 //------- For location when enter pressed 2nd time-------------//

				swap(a[i1][j1], a[i2][j2]);													     //-------------------- For SWAPPING ---------------------------//
				row = i1, col = j1;												     //  To give row and column of value when enter was 1st pressed so pointer starts from there

				//------------- checking and replacing-------------//

				int r, c, checkcol, checkr;
				int flag = 0;                                                 //----- Using a flag variable so if once four or three are found it dont check further----//
			
				//-----cheking and replacing of destroyer gem------//
				if(flag==0)
				{
					r=0,c=j1;
					checkr=checkifdestrow(a,r,c);
					if(checkr!=0)
					{
						printandfill(a, i2, j2);
						if(checkr==1)
							replacedest(a,r,c);
						if(checkr==2)
						{
							r=r+1;
							replacedest(a,r,c);
						}
						if(checkr==3)
						{
							r=r+2;
							replacedest(a,r,c);
						}
						score=score+900;
						flag=1;
					}
				}
				if(flag==0)
				{
					r=0,c=j2;
					checkr=checkifdestrow(a,r,c);
					if(checkr!=0)
					{
						printandfill(a, i1, j1);
						if(checkr==1)
							replacedest(a,r,c);
						if(checkr==2)
						{
							r=r+1;
							replacedest(a,r,c);
						}
						if(checkr==3)
						{
							r=r+2;
							replacedest(a,r,c);
						}
						score=score+900;
						flag=1;
					}
				}
				if(flag==0)
				{
					r=i1,c=0;
					checkcol=checkifdestcol(a,r,c);
					if(checkcol!=0)
					{
						printandfill(a, i2, j2);
						if(checkcol==1)
							{
								replacedest(a,r,c);
							}
							if(checkcol==2)
							{
								c=c+1;
								replacedest(a,r,c);
							}
							if(checkcol==3){
								c=c+2;
								replacedest(a,r,c);}
							score=score+900;
							flag=1;
					}
				}
				if(flag==0)
				{
					r=i2,c=0;
					checkcol=checkifdestcol(a,r,c);
					if(checkcol!=0)
					{
						printandfill(a, i1, j1);
						if(checkcol==1)
							{
								replacedest(a,r,c);
							}
							if(checkcol==2)
							{
								c=c+1;
								replacedest(a,r,c);
							}
							if(checkcol==3){
								c=c+2;
								replacedest(a,r,c);}
							score=score+900;
							flag=1;
					}
				}





				//------------checking and replacing of flame gem--------------//
				if (flag == 0)
				{
					r=0,c=j1;
					checkr=checkflamerow(a,r,c);
					if(checkr!=0)
					{
						printandfill(a, i2, j2);
						if(checkr==1)
						{
							r=r-1;
							replaceflamerow(a,r,c);
						}
						if(checkr==2)
							replaceflamerow(a,r,c);
						if(checkr==3)
						{
							r=r+1;
							replaceflamerow(a,r,c);
						}
						if (j1 == j2)															 //----------- if swap horizontally -------------//
							printandfill(a, i1, j1);
						flag=1;
						score=score+600;
					}
				}
				if (flag == 0)
				{
					r=0,c=j2  ;
					checkr=checkflamerow(a,r,c);
					if(checkr!=0)
					{
						printandfill(a, i1, j1);
						if(checkr==1)
						{
							r=r-1;
							replaceflamerow(a,r,c);
						}
						if(checkr==2)
							replaceflamerow(a,r,c);
						if(checkr==3)
						{
							r=r+1;
							replaceflamerow(a,r,c);
						}
						flag=1;
						score=score+600;
					}
				}
				if (flag == 0)
				{
					r=i1;c=0;
					checkcol=checkflamecol(a,r,c);
					if(checkcol!=0)
					{
						printandfill(a, i2, j2);
						if(checkcol==1)
						{
							c=c-1;
							replaceflamecol(a,r,c);
						}
						if(checkcol==2)
							replaceflamecol(a,r,c);
						if(checkcol==3){
							c=c+1;
							replaceflamecol(a,r,c);}
						if (i1 == i2)													 //-----if swap vertically then making and filling rectangle on where was swapped---//
							printandfill(a, i1, j1);
						flag=1;
						score=score+600;
					}
				}
				if (flag == 0)
				{
					r=i2;c=0;
					checkcol=checkflamecol(a,r,c);
					if(checkcol!=0)
					{
						printandfill(a, i1, j1);
						if(checkcol==1)
						{
							c=c-1;
							replaceflamecol(a,r,c);
						}
						if(checkcol==2)
							replaceflamecol(a,r,c);
						if(checkcol==3){
							c=c+1;
							replaceflamecol(a,r,c);}
						flag=1;
						score=score+600;
					}
				}



				//--------------checking if 5 ----------------//
				if (flag == 0)
				{
					r=i1,c=j1;
					if(checkif5(a,r,c)==true)
					{
						printandfill(a, i2, j2);
						if (j1 == j2)															 //----------- if swap horizontally -------------//
							printandfill(a, i1, j1);
						score=score+350;
						flag=1;
					}
				}
				if (flag == 0)
				{
					r=i2,c=j2;
					if(checkif5(a,r,c)==true)
					{
						printandfill(a, i1, j1);
						if (i1 == i2)															 //----------- if swap horizontally -------------//
							printandfill(a, i2, j2);
						score=score+350;
						flag=1;
					}
				}


				//------------checking and replacing if 4 gems----------------//
				if (flag == 0)
				{
					r = i1, c = j1;
					checkr = checkiffourrow(a, r, c);
					if (checkr == 1)
					{
						printandfill(a, i2, j2);
						if (j1 == j2)															 //----------- if swap horizontally -------------//
							printandfill(a, i1, j1);
						replacerow(a, r, c);
						flag = 1;
						score = score + 250;
					}
				}
				if (flag == 0)                                                //--------- If 4 same in row from where shape was swapped ---------//
				{
					r = i2, c = j2;
					checkr = checkiffourrow(a, r, c);
					if (checkr == 1)
					{
						printandfill(a, i1, j1);
						replacerow(a, r, c);
						flag = 1;
						score = score + 250;
					}
				}

				//------------checking and replacing if 4 in column are same----------//
				if (flag == 0)
				{
					r = i1, c = j1;
					checkcol = checkiffourcol(a, r, c);
					if (checkcol == 1)
					{
						printandfill(a, i2, j2);
						if (i1 == i2)													 //-----if swap vertically then making and filling rectangle on where was swapped---//
							printandfill(a, i1, j1);
						replacecol(a, r, c);
						flag = 1;
						score = score + 250;
					}
				}
				if (flag == 0)                                   //---------If 4 same in column from where shape was swapped---------//
				{
					r = i2, c = j2;
					checkcol = checkiffourcol(a, r, c);
					if (checkcol == 1)
					{
						printandfill(a, i1, j1);
						replacecol(a, r, c);
						flag = 1;
						score = score + 250;
					}
				}


				//---------------- Now checking for three same shapes in rows and columns if four are not found -------------------//
				if (flag == 0)
				{
					r = i1, c = j1;															 //------- Check and replace the columns where selected-----------------------//
					checkcol = checkifthreecol(a, r, c);
					if (checkcol == 1)
					{
						printandfill(a, i2, j2);
						if (i1 == i2)														 //----if swap vertically then making and filling rectangle on where was swapped----//
							printandfill(a, i1, j1);
						replacecol(a, r, c);
						flag = 1;
						score = score + 150;
					}
				}
				if (flag == 0)
				{
					r = i2, c = j2;                                                           //------- Check and replace the columns where swapped-----------------------//
					checkcol = checkifthreecol(a, r, c);
					if (checkcol == 1)
					{
						printandfill(a, i1, j1);
						replacecol(a, r, c);
						flag = 1;
						score = score + 150;
					}
				}


				if (flag == 0)
				{
					r = i1, c = j1;															 //------- Check and replace the rows where selected the entry -----------------//
					checkr = checkifthreerow(a, r, c);
					if (checkr == 1)
					{
						printandfill(a, i2, j2);
						if (j1 == j2)														 //----------if swap horizontally-----------//
							printandfill(a, i1, j1);
						replacerow(a, r, c);
						flag = 1;
						score = score + 150;
					}
				}
				if (flag == 0)
				{
					r = i2, c = j2;															 //------- Check and replace the rows where release the entry-------------------//
					checkr = checkifthreerow(a, r, c);
					if (checkr == 1)
					{
						printandfill(a, i1, j1);
						replacerow(a, r, c);
						flag = 1;
						score = score + 150;
					}
				}


				if (flag == 0)																 //------- If 3 shapes are not matching then reswap ------------//
					swap(a[i1][j1], a[i2][j2]);

			}
		}
		save_score = score;                                                                  //----- to save score---------//
		score = -1;                                                      //----------- To end score function --------------//


		Sleep(500);
		afterTimeEnd(save_score);
		Sleep(10000);                     // will stay pause for 10 sec.
		system("pause");
		return 0;
}