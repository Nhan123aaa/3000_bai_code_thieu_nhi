/* 
graphics in Dev-C++ - nguyenvanquan7826 
*/

#include <winbgim.h> 
#include <math.h>
# define M_PI           3.14159265358979323846  /* pi */
void circleXe(int x1,int y1,int r,int goc){
	circle(x1,y1,r);
	int h=r;
	int h1=r/2;
	int goc1= goc,goc2=goc1+180,goc3=goc1+90,goc4=180+goc3;
	int goc5 = goc+45 , goc6 = goc5+90,goc7=goc6+90,goc8=goc7+90;
	line(h*cos(goc1*M_PI/180)+x1,h*sin(goc1*M_PI/180)+y1,h*cos(goc2*M_PI/180)+x1,h*sin(goc2*M_PI/180)+y1);
	line(h*cos(goc3*M_PI/180)+x1,h*sin(goc3*M_PI/180)+y1,h*cos(goc4*M_PI/180)+x1,h*sin(goc4*M_PI/180)+y1);
	
	setcolor(15);
	setfillstyle(1,3);
	pieslice(x1,y1,0,360,r/3);
	pieslice(h1*cos(goc5*M_PI/180)+x1,h1*sin(goc5*M_PI/180)+y1,0,360,20);
	pieslice(h1*cos(goc6*M_PI/180)+x1,h1*sin(goc6*M_PI/180)+y1,0,360,20);
	pieslice(h1*cos(goc7*M_PI/180)+x1,h1*sin(goc7*M_PI/180)+y1,0,360,20);
	pieslice(h1*cos(goc8*M_PI/180)+x1,h1*sin(goc8*M_PI/180)+y1,0,360,20);
}

int main(int argc, char *argv[])
{
	// now, you can run project
	initwindow(1200, 800);			// init window graphics
	int x=getmaxx();
	int y=getmaxy();
	int y1=y-200;
	int x1=200;
	int r=200;
	bool kt=1;	
	while(!kbhit()) {
	delay(50);
		cleardevice();
		if(kt){
		x1+=10;
			if(x1+r>=x){
				kt=0;
			}
		}
		else{
			x1-=10;
			if(x1-r<=0){
				kt=1;
			}
		}
		circleXe(x1,y1,r,x1%360);
	}
	return 0;
}
