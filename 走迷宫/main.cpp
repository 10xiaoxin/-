#include"stdio.h"
#include"conio.h"
#include"windows.h"
#include"cstdio"


int main()
{
	printf("欢迎来到走迷宫小游戏，你可以通过w s a d控制上下左右四个方向，祝你玩得愉快\n");
	char a[50][50]={"######",
		            "#o #  ",
		            "# ## #",
		            "#  # #",
		            "##   #",
		            "######",};
	int x,y;
	char ch;
	x=1; y=1;
	for(int i=0;i<=5;i++)
		puts(a[i]);
	while(1)
	{
		ch=getch();
		if(ch=='s')
		{
			if(a[x+1][y]!='#')
			{
				a[x][y]=' ';
				x++;
				a[x][y]='o';
			}
		}
		 else if(ch=='w')
		{
			if(a[x-1][y]!='#')
			{
				a[x][y]=' ';
				x--;
				a[x][y]='o';
			}
		}
		 else if(ch=='a')
		{
			if(a[x][y-1]!='#')
			{
				a[x][y]=' ';
				y--;
				a[x][y]='o';
			}
		}
		 else if(ch=='d')
		 {
			if(a[x][y+1]!='#')
			{
				a[x][y]=' ';
				y++;
				a[x][y]='o';
			}
		 }
	system("cls");
	for(int i=0;i<=5;i++)
		puts(a[i]);
	if(x==1&&y==5)
		break;
}
	printf(" You win.Thankyou for playing\n");

return 0;
}