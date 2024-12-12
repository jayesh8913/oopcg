# include<iostream>
# include<graphics.h>
using namespace std;

void circle(float x1 , float y1 , float r)
{
	float x , y , p;
	x =0;
	y =r;
	p =3 -(2*r);
	
	while(x<=r) {
		putpixel(x1+x , y1+y , BLUE);
		putpixel(x1-x , y1+y , BLUE);
		putpixel(x1+x , y1-y , BLUE);
		putpixel(x1-x , y1-y , BLUE);
		putpixel(x1+y , y1+x , BLUE);
		putpixel(x1+y , y1-x , BLUE);
		putpixel(x1-y , y1+x , BLUE);
		putpixel(x1-y , y1-x , BLUE);
		
		x = x + 1;
		if(p<0){
			p = p +4*(x) + 6;
		}
		
		else{
			p = p+4*(x-y) + 10;
			y = y-1;
		}
	}
}

int main()
{
	int gd=DETECT , gm ;
	float x1 , y1 , r;
	initgraph(&gd , &gm , (char*)"");
	cout<<"Enter x1 , y1 = \n";
	cin>>x1>>y1;
	cout<<"Enter r = \n";
	cin>>r;
	circle(x1,y1,r);
	getch();
	closegraph();
	
	return 0;
}					

/*
		Enter x1, y1:
		200 200
		Enter r:
		100
*/