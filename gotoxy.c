/*   With the help of this command we can move the courser at any co-ordinate on display 
      just give the (x, y) as co-ordinate.    */

#include<windows.h>
void gotoxy(int x,int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
