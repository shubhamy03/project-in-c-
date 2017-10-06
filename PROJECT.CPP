#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>
#include <stdlib.h>


int gdriver = DETECT, gmode, errorcode;
int style, midx, midy;
char name[20],pass[6],userid[20];
char acotname[20];
int acotno,cost;

void welcome1();
void login();
void loading1();
void welcome2();
void loading2();
void bookstructure();
void loading3();

void menu();
   void booksname1();
   void loading4();
   void mazname1();
   void balance();
   void logout();
   void loading5();
   // int ch1balance();
   void loading6();
   //int ch1logout()
   void loading7();
   //int logoutthank();
   //int projectmade();
void main()
{


 {      //school building
initgraph(&gdriver, &gmode, "");
cleardevice();
for(int i=700;i>=0;i--)
{cleardevice();
if(i==0)
{gotoxy(35,20);cout<<"BHAVAN'S ";
gotoxy(33,21);cout<<"K. D. K. V. M."; }

setcolor(6);
rectangle(20+i,100,110+i,400); //delay(500);
rectangle(110+i,60,120+i,410); //delay(500);
rectangle(120+i,75,170+i,405); //delay(500);
rectangle(170+i,60,180+i,410); //delay(500);
rectangle(180+i,100,420+i,400);//delay(500);
rectangle(420+i,60,430+i,410); //delay(500);      structure
rectangle(430+i,75,480+i,405); //delay(500);
rectangle(480+i,60,490+i,410);// delay(500);
rectangle(490+i,100,580+i,400);//delay(500);

rectangle(20+i,100,110+i,200);//delay(500);
rectangle(20+i,100,110+i,190);//delay(500);
rectangle(20+i,200,110+i,300);//delay(500);        middle line 1 building
rectangle(20+i,200,110+i,290);//delay(500);
rectangle(20+i,300,110+i,390);//delay(500);

rectangle(490+i,100,580+i,200);//delay(500);
rectangle(490+i,100,580+i,190);//delay(500);
rectangle(490+i,200,580+i,300);//delay(500);       middle line 3 building
rectangle(490+i,200,580+i,290);//delay(500);
rectangle(490+i,300,580+i,390);//delay(500);

rectangle(180+i,100,420+i,200);//delay(500);
rectangle(180+i,100,420+i,190);//delay(500);
rectangle(180+i,200,420+i,300);//delay(500);          middle line 2 building
rectangle(180+i,200,420+i,290);//delay(500);
rectangle(265+i,335,350+i,375);//delay(500);

rectangle(265+i,375,350+i,380);//delay(500);          strairs
rectangle(265+i,380,350+i,385);//delay(500);
rectangle(265+i,385,350+i,390);//delay(500);
rectangle(265+i,390,350+i,395);//delay(500);
rectangle(265+i,395,350+i,400);//delay(500);


setcolor(15);
rectangle(240+i,300,375+i,335);//delay(500);       name  plate



setcolor(15);
rectangle(30+i,120,100+i,160);//delay(500);
rectangle(30+i,120,65+i,160);//delay(500);             windows 1 building
rectangle(30+i,220,100+i,260);//delay(500);
rectangle(30+i,220,65+i,260);//delay(500);
rectangle(30+i,320,100+i,360);//delay(500);
rectangle(30+i,320,65+i,360);//delay(500);



rectangle(185+i,120,290+i,160);//delay(500);
rectangle(310+i,120,415+i,160);//delay(500);

rectangle(185+i,120,207+i,160);//delay(500);
rectangle(207+i,120,232+i,160);//delay(500);
rectangle(232+i,120,262+i,160);//delay(500);              windows 2 building
rectangle(262+i,120,290+i,160);//delay(500);

rectangle(310+i,120,335+i,160);//delay(500);
rectangle(335+i,120,360+i,160);//delay(500);
rectangle(360+i,120,385+i,160);//delay(500);

rectangle(185+i,220,290+i,260);//delay(500);
rectangle(310+i,220,415+i,260);//delay(500);

rectangle(185+i,220,207+i,260);//delay(500);
rectangle(207+i,220,232+i,260);//delay(500);
rectangle(232+i,220,262+i,260);//delay(500);
rectangle(262+i,220,290+i,260);//delay(500);

rectangle(310+i,220,335+i,260);//delay(500);
rectangle(335+i,220,360+i,260);//delay(500);
rectangle(360+i,220,385+i,260);//delay(500);


rectangle(185+i,320,207+i,360);//delay(500);
rectangle(207+i,320,232+i,360);//delay(500);

rectangle(385+i,320,415+i,360);//delay(500);



setcolor(15);
rectangle(500+i,120,570+i,160);//delay(500);
rectangle(500+i,120,535+i,160);//delay(500);
rectangle(500+i,220,570+i,260);//delay(500);            windows 3 building
rectangle(500+i,220,535+i,260);//delay(500);
rectangle(500+i,320,570+i,360);//delay(500);
rectangle(500+i,320,535+i,360);//delay(500);




rectangle(125+i,90,165+i,170); //delay(500);           middle building part 1
rectangle(125+i,90,138+i,170); //delay(500);
rectangle(125+i,90,154+i,170); //delay(500);
rectangle(125+i,115,165+i,140); //delay(500);

rectangle(125+i,190,165+i,275);
rectangle(125+i,190,138+i,275);
rectangle(125+i,190,154+i,275);
rectangle(125+i,215,165+i,245);

rectangle(125+i,290,165+i,370);
rectangle(125+i,290,138+i,370);
rectangle(125+i,290,154+i,370);
rectangle(125+i,315,165+i,340);




rectangle(435+i,90,475+i,170); //delay(500);           middle building part 2
rectangle(435+i,90,448+i,170); //delay(500);
rectangle(435+i,90,464+i,170); //delay(500);
rectangle(435+i,115,475+i,140); //delay(500);

rectangle(435+i,195,475+i,275);
rectangle(435+i,195,448+i,275); //delay(500);
rectangle(435+i,195,464+i,275); //delay(500);
rectangle(435+i,220,475+i,245); //delay(500);
rectangle(435+i,290,475+i,370);
rectangle(435+i,290,448+i,370); //delay(500);
rectangle(435+i,290,464+i,370); //delay(500);
rectangle(435+i,315,475+i,340); //delay(500);
delay(7);
if(i==0)
delay(2000);
} }
delay(3000);
//made by

int pass21[10],pass211[10]={'9','4','1','5','8','7','4','9','1','4'};
initgraph(&gdriver, &gmode, "");
for(int j=0;j<3;j++)
{  int u=0;
   cleardevice();
   gotoxy(20,10);cout<<"Enter the password Max 3 times - "<<j+1<<" times";
   gotoxy(22,13);cout<<"Password 9 digit - ";
   setcolor(5);rectangle(320,180,510,210);
   gotoxy(42,13);
   for(int i=0;i<10;i++)
     {pass21[i]=getch();cout<<"*";}
  for(int h=0;h<=9;h++)
  {if(pass21[h]==pass211[h])u++; }
    if(u==10)
    {gotoxy(22,15);cout<<"Password is correct ";
    delay(1500);
    welcome1();
    login();
    }
  else
   {gotoxy(22,15);cout<<"Password is incorrect "; }
}

getch();
exit(0);
//loading1();
//welcome2();
//loading2();
//bookstructure();
//loading3();
//menu();
//exit(0);
//loading4();
//loading5();
//loading6();
//loading7();
//return 0;
}

void welcome1()
{int i=10,j=10,k=0,l,m;
initgraph(&gdriver, &gmode, "");
setbkcolor(2);
 for(i=80,j=60;i<=550;i++)
 { setcolor(1);cleardevice();
 setcolor(1);rectangle(80,60,i,j);
setcolor(5);rectangle(82,62,i-2,j-2);
setcolor(4);rectangle(84,64,i-4,j-4);
setcolor(5);rectangle(86,66,i-6,j-6);
setcolor(6);rectangle(88,68,i-8,j-8);
setcolor(7);
if(j<=400)j++;
delay(10);
 }
setbkcolor(1);
for(i=0;i<=10;i++)
{setcolor(i);
circle(105,85,i);
circle(105,380,i);
circle(530,85,i);
circle(530,380,i);
delay(100);}
settextstyle(TRIPLEX_FONT  , HORIZ_DIR, 5);
setcolor(5);
delay(1000);
outtextxy(150,100," WELCOME  TO ");
settextstyle(TRIPLEX_FONT  , HORIZ_DIR, 5);
setcolor(6);
delay(1000);
outtextxy(120,200,"COMPUTER PROJECT");
settextstyle(DEFAULT_FONT  , HORIZ_DIR, 2);
setcolor(7);
delay(1000);
outtextxy(120,350,"Made By - ");
setcolor(8);
delay(1000);
settextstyle(SANS_SERIF_FONT  , HORIZ_DIR, 2);
outtextxy(275,290,"SHUBHAM YADAV ");
delay(1200);
}


void login()
{ initgraph(&gdriver, &gmode, "");
cleardevice();
int ch2,i,z=0,x=0,y=0;
char userid2[20],pass2[6];
int k=0;
login:
cleardevice();

gotoxy(35,12);
cout<<"LOGIN ID";
gotoxy(32,15);
cout<<"1-NEW USER";
gotoxy(32,16);cout<<"2-OLD USER";
gotoxy(32,17);cout<<"3-SIGN IN";
gotoxy(32,18);cout<<"4-EXIT ";
gotoxy(45,25);cout<<"Enter your choice  ";
gotoxy(45,26);cin>>ch2;
x++;
 if(ch2==1)
 {    cleardevice();
      gotoxy(32,12);cout<<"Enter your name ";
     gotoxy(49,12);gets(name);
     gotoxy(32,13);cout<<"Enter your user id ";
     gotoxy(10,52);gets(userid);
     gotoxy(32,14);cout<<"Enter your password ";
       for(k=0;k<6;k++)
	 {pass[k]=getch();
	 cout<<"*";}
	 getch();
  goto login;
 }
else if(ch2==2)
{  login2:
   cleardevice();
   y++;
   gotoxy(32,13);cout<<"Enter your user id ";
   gotoxy(10,52);gets(userid2);
   gotoxy(32,14);cout<<"Enter your password ";
   int j,f=0,q=0,l=0,rt=0;
   for(j=0;j<6;j++){pass2[j]=getch();cout<<"*";}
   getch();
    for(int p=0;pass[p]!='\0';p++)
    {if(pass[p]==pass2[p])f++;}
    if(k==f){cleardevice();gotoxy(35,12);cout<<"Password right";l=l+1 ;}
     else {cleardevice();gotoxy(35,12);cout<<"Password wrong"; }
     for(i=0;userid2[i]!='\0';i++)
     {if(userid[i]==userid2[i])q++; }
     if(strlen(userid)==i)
     {outtextxy(getmaxx()/2-20,200,"User id is Right ");rt=rt+1;}
     else {outtextxy(getmaxx()/2-20,200,"User id is Wrong ");}
     if((rt==1)&&(l==1))
     {cleardevice();
     for(i=3;i>0;i--)
       {gotoxy(35,12);cout<<"BOOK SHOP IS LOADING in "<<i<<" sec";
       delay(1200);}
       loading1();
       welcome2();
       //loading7();
       bookstructure();
       loading4();
       menu();


     }
     else {
	   if(y>=3)
	    { for(i=3;i>0;i--)
	      {cleardevice();
	       gotoxy(30,13);cout<<"You have done 3 times wrong  ";
	       gotoxy(32,14);cout<<"Programe will exit in "<<i<<" sec  ";
	       delay(1400); }
	       exit(0); }
	      else{ delay(2000);
	      goto login2; }
	   }
  getch();
}
else if(ch2==3)
{  login3:
   cleardevice();
   z++;

    gotoxy(32,13);cout<<"Enter your user id ";
   gotoxy(10,52);gets(userid2);
   gotoxy(32,14);cout<<"Enter your password ";
   int j,f=0,q=0,l=0,rt=0;
   for(j=0;j<6;j++){pass2[j]=getch();cout<<"*";}
   getch();
    for(int p=0;pass[p]!='\0';p++)
    {if(pass[p]==pass2[p])f++;}
    if(k==f){cleardevice();gotoxy(35,12);cout<<"Password right";l=l+1 ;}
     else {cleardevice();gotoxy(35,12);cout<<"Password wrong"; }
     for(i=0;userid2[i]!='\0';i++)
     {if(userid[i]==userid2[i])q++; }
     if(strlen(userid)==i)
     {outtextxy(getmaxx()/2-20,200,"User id is Right ");rt=rt+1;}
     else {outtextxy(getmaxx()/2-20,200,"User id is Wrong ");}
     if((rt==1)&&(l==1))
     {for(i=3;i>0;i--)
       {cleardevice();gotoxy(35,12);cout<<"BOOK SHOP IS LOADING in "<<i<<" sec";
       delay(1200); }
       loading1();
       welcome2();
       loading7();
       bookstructure();
       loading4();
       menu();


     }
     else {
	   if(z>=3)
	    { for(i=3;i>0;i--)
	      {cleardevice();
	       gotoxy(30,13);cout<<"You have done 3 times wrong  ";
	       gotoxy(32,14);cout<<"Programe will exit in "<<i<<" sec  ";
	       delay(1400); }
	       exit(0); }
	      else{ delay(2000);
	      goto login3; }
	   }
	      getch();
}
else if(ch2==4)
exit(0);
else if(ch2>=5)
   {cleardevice();
    gotoxy(32,14);cout<<"Enter the correct number ";

	  if(x<=3)
	     { cleardevice();
	     gotoxy(32,14);cout<<"Enter the correct number ";
	     delay(2000);
	     goto login;}
	else
	 {for(i=3;i>0;i--)
	   {cleardevice();
	    gotoxy(30,13);cout<<"You have done 3 times wrong  ";
	    gotoxy(32,14);cout<<"Programe will exit in "<<i<<" sec  ";
	    delay(1400); }
	    exit(0);}
   }
cleardevice();
gotoxy(35,12);for(i=3;i>0;i--)
{cleardevice();
gotoxy(35,12);cout<<"PROGRAMME WILL EXIT IN "<<i<<" SEC....";delay(1400);}
}

void welcome2()
{ initgraph(&gdriver, &gmode, "");
cleardevice();
int k=0,g=20 ;
int i,j;setbkcolor(5);
for(i=0;i<=50;i++)
{if(k>20)k=g;else k++;
delay(100);setcolor(i);circle(100,100,k);
setcolor(i+1);circle(500,100,k);
setlinestyle(i, i+1, i+2);
line(300, 50,35,200);
line(300, 50, 600, 200);
rectangle(10, 10, getmaxx()-10, getmaxy()-10);
}
setcolor(4);
delay(100);   settextstyle(1, HORIZ_DIR, 5);
outtextxy(68,200,"WELCOME TO BOOK SHOP ");
settextstyle(1, HORIZ_DIR, 1);
setcolor(3);outtextxy(280,250,"A. B. C. ");
setcolor(3);outtextxy(240,280,"MAIN    ROOD ");
setcolor(3);outtextxy(260,300,"RENUKOOT");
delay(100);settextstyle(3, HORIZ_DIR, 2);
setcolor(2);outtextxy(68,400,"Made by - SHUBHAM YADAV ");
delay(1200);
}
void bookstructure()
{ initgraph(&gdriver, &gmode, "");
int i,h=0;
cleardevice();
setbkcolor(6);
settextstyle(1, HORIZ_DIR, 6);
delay(1000);setcolor(3);outtextxy(180,30,"BOOK SHOP ");
delay(500);setcolor(1);line(180, 90,310,90);setcolor(1);line(330, 90,460,90);
delay(500);setcolor(4);line(180, 96,310,96);setcolor(4);line(330, 96,460,96);

delay(300);setcolor(3);line(100, 400,500,400);
delay(300);settextstyle(1, HORIZ_DIR, 1);outtextxy(150,420,"SHUBHAM YADAV ");
delay(300);outtextxy(250,450,"CLASS XI ");

delay(1000);
setcolor(5);line(150,150,170,160);   delay(300);
line(150,150,150,340);line(150,340,170,360);   delay(300);
line(150,150,370,150);line(370,150,400,160);   delay(300);
line(157,152,370,152);line(159,155,380,155); delay(100);
rectangle(170,160,400,360);      delay(300);
setcolor(2);outtextxy(200,180,"C B S E ");  delay(300);
setcolor(8);outtextxy(220,250,"I C S E ");delay(300);
setcolor(4);outtextxy(300,300,"U P BOARD ");
settextstyle(1, HORIZ_DIR, 5) ;
delay(1200);
}

void loading1()
{ initgraph(&gdriver, &gmode, "");
int i,h=0;
cleardevice();
settextstyle(TRIPLEX_FONT , HORIZ_DIR, 5);
setcolor(5);
outtextxy(180,100,"L O A D I N G");
setcolor(4);rectangle(90,200,550,250);
setcolor(2);
for(int j=0;j<=400;j=j+25)
{for(i=0;i<=15;i++)
{setcolor(1);
delay(25);
circle(115+j,225,i);}
gotoxy(35,12);cout<<h;
if(h>=95)h=100;
else h=h+8; }
delay(800);
}
void loading2()
{ initgraph(&gdriver, &gmode, "");
int i , h=0;
cleardevice();
settextstyle(SANS_SERIF_FONT , HORIZ_DIR, 5);
setcolor(7);
outtextxy(180,100,"L O A D I N G");
setcolor(2);rectangle(90,200,550,250);
setcolor(2);
for(int j=0;j<=400;j=j+25)
{for(i=0;i<=15;i++)
{int k=0;setcolor(1);
delay(25);
rectangle(100+j,205,120+k,245); k=k+20;
}gotoxy(35,12);cout<<h;
if(h>=95)h=100;
else h=h+8;
}
settextstyle(SANS_SERIF_FONT , HORIZ_DIR, 5);
delay(800);
}

void loading3()
{ initgraph(&gdriver, &gmode, "");
int i ;
float h=0;
cleardevice();
settextstyle(GOTHIC_FONT , HORIZ_DIR, 5);
setcolor(8);
outtextxy(150,100,"L O A D I N G");
setcolor(5);rectangle(90,200,550,250);
setcolor(4);
for(int j=0;j<=200;j=j+5)
{for(i=0;i<=15;i++)
{int k=0;setcolor(6);
delay(5);
rectangle(100+j,205,120+k,245); k=k+5;
rectangle(530-j,205,500-k,245); k=k+40;
}gotoxy(35,12);cout<<h;
if(h>=95)h=100;
else h=h+3;
}
delay(800);
}

void loading4()
{ initgraph(&gdriver, &gmode, "");
int i ;
float h=0;
cleardevice();
settextstyle(1 , 1, 5);
setcolor(9);
outtextxy(150,100,"L O A D I N G");
setcolor(3);rectangle(400,80,450,450);
setcolor(4);
for(int j=0;j<=170;j=j+5)
{for(i=0;i<=15;i++)
{int k=0;setcolor(6);
delay(5);
rectangle(410,80+j,440,100+k); k=k+5;
rectangle(410,420-j,440,440-k); k=k+40;
}gotoxy(35,12);cout<<h;
if(h>=95)h=100;
else h=h+3;
}
delay(800);
}

void loading5()
{ //initgraph(&gdriver, &gmode, "");
int i ;
float h=0;
cleardevice();
settextstyle(1 , 1, 5);
setcolor(9);
outtextxy(150,100,"L O A D I N G");
setcolor(3);rectangle(400,80,450,420);
setcolor(4);
int k=0;
for(i=0;i<=20;i++)
{int q=0;
delay(10);
if(k%10==0){q=k;k=0;setcolor(0);circle(425,110,20);k=q;}
else {setcolor(4);circle(425,110,20);}k=k+5;  delay(50);
if(k%10==0){q=k;k=0;setcolor(k);circle(425,150,20);k=q;}
else {setcolor(4);circle(425,150,20);}k=k+5;  delay(50);
if(k%10==0){q=k;k=0;setcolor(k);circle(425,190,20);k=q;}
else {setcolor(4);circle(425,190,20);}k=k+5;  delay(50);
if(k%10==0){q=k;k=0;setcolor(k);circle(425,230,20);k=q;}
else {setcolor(4);circle(425,230,20);}k=k+5;  delay(50);
if(k%10==0){q=k;k=0;setcolor(k);circle(425,270,20);k=q;}
else {setcolor(4);circle(425,270,20);}k=k+5;  delay(50);
if(k%10==0){q=k;k=0;setcolor(k);circle(425,350,20);k=q;}
else {setcolor(4);circle(425,310,20);}k=k+5;  delay(50);
if(k%10==0){q=k;k=0;setcolor(k);circle(425,350,20);k=q;}
else {setcolor(4);circle(425,350,20);}k=k+5;  delay(50);
}//getch();
delay(800);
}


void loading6()
{ //initgraph(&gdriver, &gmode, "");
int i ;
float h=0;
cleardevice();
settextstyle(1 , 1, 5);
setcolor(9);
outtextxy(150,100,"L O A D I N G");
setcolor(3);rectangle(400,80,450,420);
setcolor(4);
int k=0;
int t=0,e=0,q=0;
setcolor(2);for(i=0;i<=20;i++)circle(425,110,i); delay(1000);
setcolor(2);for(i=0;i<=18;i++)circle(425,150,i); delay(1000);
setcolor(2);for(i=0;i<=16;i++)circle(425,190,i); delay(1000);
setcolor(2);for(i=0;i<=14;i++)circle(425,230,i); delay(1000);
setcolor(2);for(i=0;i<=12;i++)circle(425,270,i); delay(1000);
setcolor(2);for(i=0;i<=10;i++)circle(425,310,i); delay(1000);
setcolor(2);for(i=0;i<=8;i++)circle(425,350,i);  delay(1000);
setcolor(2);for(i=0;i<=6;i++)circle(425,390,i);  delay(1000);
gotoxy(35,12);cout<<"100 %";
delay(800);
}

void loading7()
{ initgraph(&gdriver, &gmode, "");
int i ;
float h=0;
cleardevice();
settextstyle(DEFAULT_FONT , HORIZ_DIR, 5);
setcolor(4);
//outtextxy(170,100,"L O A D I N G");
setcolor(5);rectangle(90,200,550,250);
setcolor(4);float o=0;int p=100;
for(int j=0;j<=440;j=j+1)
{for(i=0;i<=15;i++)
{int k=0;setcolor(6);
gotoxy(35,12);cout<<o;if(o>=98){gotoxy(35,12);cout<<"100 %";}
else o=o+0.0148;
delay(1);rectangle(100+j,205,100+k,245); k=k+1;}}
delay(800);
}


void menu()
{
int ch1;

//initgraph(&gdriver, &gmode, "");
cleardevice();
gotoxy(35,12);
midx = getmaxx() / 2;
midy = getmaxy() / 2;
settextjustify(CENTER_TEXT, CENTER_TEXT);
setbkcolor(15);
settextstyle(GOTHIC_FONT , HORIZ_DIR, 7);
setcolor(2) ;
outtextxy(300, 100, "M E N U");
settextstyle(GOTHIC_FONT , HORIZ_DIR, 5);
{setcolor(4);
outtextxy(250,200,"1-BOOKS");
outtextxy(280,250,"2-MAZINES");
outtextxy(280,300,"3-BALANCE");
outtextxy(265,350,"4-LOGOUT");
}
setcolor(0);
settextstyle(TRIPLEX_FONT , HORIZ_DIR, 1);
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nEnter the number of your chioce  ";
cin>>ch1;
switch(ch1)
{ case 1://{ch1book();
	  setbkcolor(0);
	  loading5();
	  booksname1();;
	  break;
  case 2://{ch1mazines();
	 setbkcolor(0);
	 loading6();
	 mazname1();
	 break;
  case 3://{ch1balance();
	 setbkcolor(0);
	 loading7();
	 balance();
	  break;
  case 4://ch1logout();
	   setbkcolor(0);
	   loading7();
	   logout();
	   break;
  default :{cout<<"enter the correct one\n";
	  delay(2000); cout<<"Exit in 4 second";
	   delay(5000);
	   exit(0);
	   }
}
getch();
}

void booksname1()
{//initgraph(&gdriver, &gmode, "");
cleardevice();
char acotname[20];
int acotno,cost;

setbkcolor(5);
char booksname[10][500]={"Sumita Arora","Irodov","IIT Physics",
"IIT Chemistry","H C Verma","D C Pandey",
"IIT Mathematics","S L Arora ","Together with computer",
"Pradeep Publication "};
int price[10][5]={250,110,650,750,265,500,985,600,150,980};
char remark[10][50]={"Physics books 2 parts","Contain physics numerials ",
"Advance physics","Advance chemistry","No. 1 book in physics",
"Advance physics","Advance mathsmatics","Computer book","Computer book",
"Physics book"};
settextstyle(1 , HORIZ_DIR, 5);
setcolor(10);outtextxy(230,20,"BOOKS");
setcolor(2);line(220,70,360,70);
setcolor(1);line(215,75,365,75);
setcolor(1);delay(100);
rectangle(5,90,60,290); delay(200);
rectangle(60,90,280,290);delay(200);
rectangle(280,90,400,290);delay(200);
rectangle(400,90,620,290);delay(200);
line(5,115,620,115);
settextstyle(1 , HORIZ_DIR, 1);setcolor(2);delay(100);
outtextxy(10,90,"S.NO.  BOOKS NAME             PRICE      REMARK");
for(int i=0 ;i<=9;i++)
{delay(50);gotoxy(3,9+i);cout<<""<<i+1<<"-\n";
delay(1);gotoxy(10,9+i);cout<<booksname[i];cout<<"\n";
delay(1);gotoxy(39,9+i);cout<<price[0][i]<<".00"<<"\n";
delay(1);gotoxy(52,9+i);cout<<remark[i]; delay(400);}
setcolor(15);settextstyle(4,HORIZ_DIR,1);
gotoxy(26,22);cout<<"Press Enter key to order the book  \n";
getch();
cleardevice();setbkcolor(0);
gotoxy(26,11);cout<<"ACCOUNT DETAILS ";
gotoxy(26,13);cout<<"Name - ";setcolor(5);rectangle(320,180,510,210);
gotoxy(26,15);cout<<"Account no.- ";setcolor(5);rectangle(320,220,510,250);
delay(1000);setcolor(3);rectangle(320,180,510,210);
gotoxy(42,13);gets(acotname);
delay(800);setcolor(3);rectangle(320,220,510,250);
gotoxy(42,15);cin>>acotno;
cleardevice();
for(int h= 3;h>0;h--)
{cleardevice();gotoxy(32,12);
cout<<"Account is loading in "<<h<<" sec";delay(1000); }
cleardevice();
settextstyle(3 , HORIZ_DIR, 1);
gotoxy(30,1);cout<<"ACCOUNT DETAILS";
gotoxy(5,5);cout<<"NAME - ";puts(acotname);
gotoxy(5,6);cout<<"ACCOUNT NUMBER - ";cout<<acotno;
gotoxy(5,7);cout<<"BALANCE - ";cout<<"10,000.00";
for(int i3=0 ;i3<=9;i3++)
{delay(50);gotoxy(3,9+i3);cout<<""<<i3+1<<"-\n";
delay(1);gotoxy(10,9+i3);cout<<booksname[i3];cout<<"\n";
delay(1);gotoxy(39,9+i3);cout<<price[0][i3]<<".00"<<"\n";}
int r=0;
for(int y=0;y<9;y++){rectangle(390,125+r,470,142+r);r=r+16;}
gotoxy(5,21);cout<<"Press S - For selection and N - Not Selection ";
r=0;char sel1[10];
for(int y1=0;y1<10;y1++)
 {delay(500);setcolor(2);rectangle(390,125+r,470,142+r);r=r+16;
 gotoxy(55,9+y1);cin>>sel1[y1];
 if((sel1[y1]=='s')||(sel1[y1]=='S'))
  {gotoxy(62,9+y1);cout<<"Selected";  }
  else {gotoxy(62,9+y1);cout<<"Not selected";}
 }
int items=0;
for(y1=0;y1<10;y1++)
if((sel1[y1]=='s')||(sel1[y1]=='S'))items++;
gotoxy(5,25);cout<<"Total items(books)  "<<items<<" they are - \n";
i=0;
for(y1=0;y1<10;y1++)
{if((sel1[y1]=='s')||(sel1[y1]=='S'))
{delay(20);gotoxy(5,26+y1);cout<<""<<i+1<<"-\n";
delay(20);gotoxy(10,26+y1);cout<<booksname[y1];cout<<"\n";
delay(20);gotoxy(18,26+y1);cout<<price[0][y1]<<".00"<<"\n";i++;}
} int y2;
cost=0;
for(y2=0;y2<10;y2++)
{if((sel1[y2]=='s')||(sel1[y2]=='S'))
  {  if(y2==0)cost=cost+250;
   else if(y2==1)cost=cost+110;else if(y2==2)cost=cost+650;
   else if(y2==3)cost=cost+750;else if(y2==4)cost=cost+265;
   else if(y2==5)cost=cost+500;else if(y2==6)cost=cost+985;
   else if(y2==7)cost=cost+600;else if(y2==8)cost=cost+150;
   else if(y2==9)cost=cost+980;
  }}
cout<<"Total cost of all the items - "<<cost<<"\n\n\n";
cout<<"            Current balance  10,000.00 - "<<cost<<" = "<<10000-cost;
getch();
menu();
}
char mazacotname[20];
int mazacotno,mazcost=0;

void mazname1()
{//initgraph(&gdriver, &gmode, "");
cleardevice();
setbkcolor(5);
char mazname[10][500]={"Weekly Today","The Times","Physics Today",
"Chemistry Today","Sucess Story","Stories",
"Mathematics","U Like ","Question Bank",
"Mathematics Today "};
int mazprice[10][5]={50,10,50,50,25,50,95,60,15,80};
char mazremark[10][50]={"Weekly news","Weekly news ","Advance physics",
"Advance chemistry","Common story","Common story",
"Advance mathsmatics","Computer mazines","Question booklet",
"mathsmatics book"};
settextstyle(1 , HORIZ_DIR, 5);
setcolor(10);outtextxy(230,20,"MAZINES");
setcolor(2);line(220,70,395,70);
setcolor(1);line(215,75,400,75);
setcolor(1);delay(100);
rectangle(5,90,60,290); delay(200);
rectangle(60,90,280,290);delay(200);
rectangle(280,90,400,290);delay(200);
rectangle(400,90,620,290);delay(200);
line(5,115,620,115);
settextstyle(1 , HORIZ_DIR, 1);setcolor(2);delay(100);
outtextxy(10,90,"S.NO.  MAZINES NAME             PRICE      REMARK");
for(int i=0 ;i<=9;i++)
{delay(50);gotoxy(3,9+i);cout<<""<<i+1<<"-\n";
delay(1);gotoxy(10,9+i);cout<<mazname[i];cout<<"\n";
delay(1);gotoxy(39,9+i);cout<<mazprice[0][i]<<".00"<<"\n";
delay(1);gotoxy(52,9+i);cout<<mazremark[i]; delay(400);}
setcolor(15);settextstyle(4,HORIZ_DIR,1);
gotoxy(26,22);cout<<"Press Enter key to order the mazines  \n";
getch();
cleardevice();setbkcolor(0);
gotoxy(26,11);cout<<"ACCOUNT DETAILS ";
gotoxy(26,13);cout<<"Name - ";setcolor(5);rectangle(320,180,510,210);
gotoxy(26,15);cout<<"Account no.- ";setcolor(5);rectangle(320,220,510,250);
delay(1000);setcolor(3);rectangle(320,180,510,210);
gotoxy(42,13);gets(mazacotname);
delay(800);setcolor(3);rectangle(320,220,510,250);
gotoxy(42,15);cin>>mazacotno;
cleardevice();
for(int h= 3;h>0;h--)
{cleardevice();gotoxy(32,12);
cout<<"Account is loading in "<<h<<" sec";delay(1000); }
cleardevice();
settextstyle(3 , HORIZ_DIR, 1);
gotoxy(30,1);cout<<"ACCOUNT DETAILS";
gotoxy(5,5);cout<<"NAME - ";puts(mazacotname);
gotoxy(5,6);cout<<"ACCOUNT NUMBER - ";cout<<mazacotno;
gotoxy(5,7);cout<<"BALANCE - ";cout<<"10,000.00";
for(int i3=0 ;i3<=9;i3++)
{delay(50);gotoxy(3,9+i3);cout<<""<<i3+1<<"-\n";
delay(1);gotoxy(10,9+i3);cout<<mazname[i3];cout<<"\n";
delay(1);gotoxy(39,9+i3);cout<<mazprice[0][i3]<<".00"<<"\n";}
int mazr=0;
for(int y=0;y<9;y++){rectangle(390,125+mazr,470,142+mazr);mazr=mazr+16;}
gotoxy(5,21);cout<<"Press S - For selection and N - Not Selection ";
mazr=0;char mazsel1[10];
for(int y1=0;y1<10;y1++)
 {delay(500);setcolor(2);rectangle(390,125+mazr,470,142+mazr);mazr=mazr+16;
 gotoxy(55,9+y1);cin>>mazsel1[y1];
 if((mazsel1[y1]=='s')||(mazsel1[y1]=='S'))
  {gotoxy(62,9+y1);cout<<"Selected";  }
  else {gotoxy(62,9+y1);cout<<"Not selected";}
 }
int mazitems=0;
for(y1=0;y1<10;y1++)
if((mazsel1[y1]=='s')||(mazsel1[y1]=='S'))mazitems++;
gotoxy(5,25);cout<<"Total items(books)  "<<mazitems<<" they are - \n";
i=0;
for(y1=0;y1<10;y1++)
{if((mazsel1[y1]=='s')||(mazsel1[y1]=='S'))
{delay(50);gotoxy(5,26+y1);cout<<""<<i+1<<"-\n";
delay(1);gotoxy(10,26+y1);cout<<mazname[y1];cout<<"\n";
delay(1);gotoxy(18,26+y1);cout<<mazprice[0][y1]<<".00"<<"\n";i++;}
}
int y2;
for(y2=0;y2<10;y2++)
{if((mazsel1[y2]=='s')||(mazsel1[y2]=='S'))
  {  if(y2==0)mazcost=mazcost+50;
   else if(y2==1)mazcost=mazcost+10;else if(y2==2)mazcost=mazcost+50;
   else if(y2==3)mazcost=mazcost+50;else if(y2==4)mazcost=mazcost+25;
   else if(y2==5)mazcost=mazcost+50;else if(y2==6)mazcost=mazcost+95;
   else if(y2==7)mazcost=mazcost+60;else if(y2==8)mazcost=mazcost+15;
   else if(y2==9)mazcost=mazcost+80;
  }}
cout<<"Total cost of all the items - "<<mazcost<<"\n\n\n";
cout<<"            Current balance  10,000.00 - "<<mazcost<<" = "<<10000-mazcost;
getch();
menu();
}

void balance()
{initgraph(&gdriver, &gmode, "");
setbkcolor(6);

settextstyle(1 , HORIZ_DIR, 5);
setcolor(14);outtextxy(220,20,"BALANCE");
gotoxy(5,7);cout<<"Account name - ";puts(acotname);
gotoxy(5,8);cout<<"Account no. - "<<acotno;
gotoxy(18,15);cout<<"Current balance - "<<10000-cost;
gotoxy(60,5);
struct date d;
getdate(&d);
printf("DATE - %d /", d.da_day);
printf("%d /" , d.da_mon);
printf("%d", d.da_year);
getch();
menu();
}
void logout()
{
//initgraph(&gdriver, &gmode, "");
setbkcolor(9);
settextstyle(1 , HORIZ_DIR, 6);
setcolor(15);outtextxy(180,20,"Thank You");
settextstyle(5 , HORIZ_DIR, 1);
setcolor(11);
outtextxy(80,120,"  Your  Account  is  been  sucessfully  logout  out .");
getch();
exit(0);
}





