#include<iostream.h>

#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<fstream.h>
int p,h,c[50],a,b,x1[50],n=5,x=320,y=200,y1[50],j=1,q,m,sc=-5,hs=0;
char *hr,*sr,st='p';

void hsc()  //TO CALCULATE & STORE HIGH SCORE
{
ifstream fin("High.txt"); //DATA HANDLING USED
fin.seekg(0);
fin>>hs;
fin.close();
settextstyle(1,0,1);
setcolor(BLUE);
itoa(hs,hr,10);
outtextxy(600,300,hr);
if(sc>hs)
{
hs=sc;
ofstream fout("High.txt"); //FILE NAMED HIGH.txt STORES THE HIGH SCORE
fout<<hs;
fout.close();
setcolor(0);
outtextxy(600,300,hr);
ltoa(hs,hr,10);
setcolor(BLUE);
outtextxy(600,300,hr);
}
}
void cd()  //TO CLEAR THE SNAKE BODY
{
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
if(c[n-1])
fillellipse(x1[n-1],y1[n-1],10,5);
else
fillellipse(x1[n-1],y1[n-1],5,10);
}

void er()
{
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(p,h,5,5);
}

void ins()   // TO PROVIDE INSTRUCTIONS AND SCORES
{
line(500,0,500,400);
line(0,400,640,400);
line(500,100,640,100);
  setcolor(BLUE);
  settextstyle(7,0,1);
  outtextxy(10,410,"Project by -  RISHABH AGGARWAL       Submitted to ");

  outtextxy(135,440,"XII - A                         Amit Gupta ");
  settextstyle(7,0,4);
  outtextxy(510,5,"Snake");
  outtextxy(520,50,"Game");
  settextstyle(11,0,2);
  outtextxy(524,110," CONTROLS ");
  outtextxy(522,135,"p = PAUSE");
  outtextxy(522,155,"g = RESUME");
  outtextxy(522,175,"e = EXIT");
  outtextxy(513,195,"ARROWS");
  outtextxy(512,205,"    -MOVEMENT");
  outtextxy(524,250,"SCORE -  ");
  outtextxy(524,280,"High Score -");
}
void score() //TO CALCULATE SCORE OF THE PLAYER
{
ltoa(sc,sr,10);
settextstyle(1,0,1);
setcolor(0);
outtextxy(600,240,sr);
sc+=5;
ltoa(sc,sr,10);
setcolor(BLUE);
outtextxy(600,240,sr);

}


void crd()  //TO GET THE CO-ORDINATES OF THE FOOD
{
p=(rand()%485)+10;
h=(rand()%385)+10;
score();
hsc();
}

void gnr()   // TO GENERATE THE FOOD
{
setcolor(BLUE);
setfillstyle(SOLID_FILL,rand()%15+1);
fillellipse(p,h,5,5);
}


int move()  // TO MOVE THE SNAKE BODY
{
setcolor(BLUE);
int m=1,z;
x1[0]=x;
y1[0]=y;
while(1)
{
cd();
gnr();
ins();

if(m==0)
{
c[0]=1;
x1[0]=x1[0]-20;
y=y1[0];
if(x1[0]<0)
x1[0]=490;
}

else
if(m==1)
{
c[0]=1;
x1[0]=x1[0]+20;
if(x1[0]>500)
x1[0]=10;
}

else
if(m==2)
{
y1[0]=y1[0]+20;
//x=x1[0];
c[0]=0;
if(y1[0]>400)
y1[0]=10;
}

else
{
y1[0]=y1[0]-20;
c[0]=0;
if(y1[0]<0)y1[0]=390;
}
for(int i=n-1;i>0;i--)
{
x1[i]=x1[i-1];
c[i]=c[i-1];
y1[i]=y1[i-1];
setfillstyle(CLOSE_DOT_FILL,rand()%15+1);
if(c[i])
{
ellipse(x1[i],y1[i],0,360,10,5);
fillellipse(x1[i],y1[i],10,5);
}
else
{
ellipse(x1[i],y1[i],0,360,5,10);
fillellipse(x1[i],y1[i],5,10);
}
}
if(c[0])
ellipse(x1[0],y1[0],0,360,10,5);
else
ellipse(x1[0],y1[0],0,360,5,10);
delay(100);
int check(); // PROTOTYPE OF CHECK FUNTION

check();   // FUNCTION CALL TO CHECK THE SNAKE'S HEAD DON'T CUT HIS BODY

if((p<=x1[0]+10&&p>=x1[0]-10) && (h<=y1[0]+10&&h>=y1[0]-10))
{
er();
crd();   // FUNTION CALL TO GET THE NEW COORDINATES OF THE FOOD
if(n<50)
++n;
}
if(kbhit())
{
z=getch(); // TO CHECK KEYBOARD INPUTS
switch(z)
{
case(72):m=3;j=1;  //HERE 72,77,80,75 ARE DIRECTIONAL KEYS
 break;
case(77):m=1;j=1;  // USED TO NAVIGATE THE SNAKE
 break;
case(80):m=2;j=1;
 break;
case(75):m=0;j=1;
 break;
case('p'):if(!kbhit()) //TO PAUSE THE GAME
 getch();
 break;
case('e'):exit(0); //TO EXIT THE GAME
default:break;
}
}
}
}

int check() // FUNTION TO CHECK THE SNAKE DO NOT CUT IT'S BODY
{
for(int i=3;i<n;++i)
if(x1[0]==x1[i] && y1[0]==y1[i])
{
while(!kbhit())
{
setcolor(RED);
settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
outtextxy(250,200,"GAME OVER");
delay(100);
setcolor(WHITE);
outtextxy(250,200,"GAME OVER");
delay(100);
}getch();
exit(0);
}
}


void main()  // MAIN FUNTION
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\tc\\bgi");
setbkcolor(WHITE);
setcolor(BLUE);
crd();
gnr();
move();
getch();
closegraph();
}