/* 
graphics in Dev-C++ - nguyenvanquan7826 
*/

#include <winbgim.h> 
void dichuyen(int x,int y){
	
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
			case 72: y-=10; dichuyen(x,y); break;
			case 75: x-=10; dichuyen(x,y); break;
			case 77: x+=10; dichuyen(x,y); break;
			case 80: y+=10; dichuyen(x,y); break;
		}
	
	}
	return 0;
}
