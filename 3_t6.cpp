/* 
graphics in Dev-C++ - nguyenvanquan7826 
*/

#include <winbgim.h> 
void vehcn(int x,int y){
	
		cleardevice();
		setfillstyle((x+y)%11+1,(x+y)%14+1);
		bar(x,y,x+100,y+100);
}
int main(int argc, char *argv[])
{
	// now, you can run project
	initwindow(900, 900);			// init window graphics
	int x=getmaxx()/2-50;
	int y = getmaxy()/2-50;
	bar(x,y,x+100,y+100);
	setfillstyle(1,15);
	while(getch()!=27) {delay(1);
		int cur = (int)getch();
		switch (cur){
			case 72: y-=10; vehcn(x,y); break;//di len
			case 75: x-=10; vehcn(x,y); break;//qua trai
			case 77: x+=10; vehcn(x,y); break;//qua phai
			case 80: y+=10; vehcn(x,y); break;//di xuong
		}
	
	}
	return 0;
}
