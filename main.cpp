// p1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<Gl/glut.h>
#include<math.h>
#include<string.h>
void display1();
void display2();
void display3();
void display4();
int then;




/*void light()
{
	GLfloat spot[]={352.5,112.5,0};
	glLightfv(GL_LIGHT0,GL_SPOT_DIRECTION,spot);
	glLightf(GL_LIGHT0,GL_SPOT_CUTOFF,60);
	glLightf(GL_LIGHT0,GL_SPOT_EXPONENT,70.0);
	glLightf(GL_LIGHT0,GL_CONSTANT_ATTENUATION,1.0);
	glLightf(GL_LIGHT0,GL_LINEAR_ATTENUATION,0.0);
	glLightf(GL_LIGHT0,GL_QUADRATIC_ATTENUATION,0.0);



	GLfloat spot1[]={382.5,112.5,0};
	glLightfv(GL_LIGHT1,GL_SPOT_DIRECTION,spot1);
	glLightf(GL_LIGHT1,GL_SPOT_CUTOFF,60);
	glLightf(GL_LIGHT1,GL_SPOT_EXPONENT,70.0);
	glLightf(GL_LIGHT1,GL_CONSTANT_ATTENUATION,1.0);
	glLightf(GL_LIGHT1,GL_LINEAR_ATTENUATION,0.0);
	glLightf(GL_LIGHT1,GL_QUADRATIC_ATTENUATION,0.0);
}*/


void mys()
{
	glColor3f(1,1,0);
	glBegin(GL_POLYGON);
	glVertex2f(475,75);
	glVertex2f(475,125);
	glVertex2f(425,175);
	glVertex2f(425,125);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(475,25);
	glVertex2f(470,30);
	glVertex2f(470,125);
	glVertex2f(475,125);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(425,125);
	glVertex2f(430,120);
	glVertex2f(430,75);
	glVertex2f(425,80);
	glEnd();


	char string1[]="M Y S O R E";
void *font6=GLUT_BITMAP_HELVETICA_18;

glColor3f(0.0,0.0,0.0);


glRasterPos3f(430,123,0);

for(int k=0;k<strlen(string1);k++)
        glutBitmapCharacter(font6,string1[k]);


}

void circle(GLfloat x,GLfloat y,GLfloat r)
{
	GLfloat PI=3.142,i;
	glBegin(GL_POLYGON);
	for( i=0;i<2*PI;i+=2);
	{
		glVertex3f(x+cos(i)*r,y+sin(i)*r,0.0);

	}
	glEnd();
}

void tree1()
{
	/*glColor3f(1.0,0.5,0.0);
	circle(377.5,410,25);
	circle(377.5,430,25);

	glColor3f(1.0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(375,350);
	glVertex2f(400,350);
	glVertex2f(400,400);
	glVertex2f(375,400);
	glEnd();*/

	glColor3f(0.9,0.2,0.0);
glBegin(GL_POLYGON);
glVertex2f(350,325);
glVertex2f(350,395);
glVertex2f(365,395);
glVertex2f(365,325);
glEnd();


		glColor3f(0.0,0,0.0);
		circle(340,400,30);
		circle(380,400,30);

		glColor3f(0.0,1.5,0.0);
		circle(350,440,25);
		circle(370,440,25);

		glColor3f(0.0,1.5,0.0);
		circle(360,465,22);

	}


void shop()
{
	glColor3f(0.41,0.41,0.41);
	glBegin(GL_POLYGON);
	glVertex2f(250,335);
	glVertex2f(250,410);
	glVertex2f(335,425);
	glVertex2f(335,350);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(250,335);
	glVertex2f(250,410);
	glVertex2f(215,435);
	glVertex2f(215,355);
	glEnd();



	glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(250,410);
	glVertex2f(335,425);
	glVertex2f(300,450);
	glVertex2f(215,435);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(260,360);
	glVertex2f(260,400);
	glVertex2f(325,375);
	glVertex2f(325,407.5);
	glEnd();

	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(250,412.5);
	glVertex2f(335,427.5);
	glVertex2f(335,457.5);
	glVertex2f(250,442.5);
	glEnd();

	char string[]="           S  H  O  P   ";
void *font6=GLUT_BITMAP_HELVETICA_18;

glColor3f(0.0,0.0,0.0);


glRasterPos3f(250,425,0);

for(int k=0;k<strlen(string);k++)
        glutBitmapCharacter(font6,string[k]);


}
void house()
{
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(135,25);
	glVertex2f(210,25);
	glVertex2f(210,100);
	glVertex2f(135,100);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(135,25);
	glVertex2f(135,100);
	glVertex2f(100,110);
	glVertex2f(100,50);
	glEnd();

	glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(135,85);
	glVertex2f(160,150);
	glVertex2f(225,85);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(135,85);
	glVertex2f(160,150);
	glVertex2f(90,115);
	glEnd();
}

void road()
{
	glColor3f(0.14,0.14,0.14);
	glBegin(GL_POLYGON);
	glVertex2i(0,125);//S1
	glVertex2i(0,260);//P1
	glVertex2i(110,280);//Q1
	glVertex2i(210,180);//R1
	glEnd();

	glColor3f(0.14,0.14,0.14);
	glBegin(GL_POLYGON);
	glVertex2i(200,300);//P11
	glVertex2i(500,350);//Q11
	glVertex2i(500,250);//R11
	glVertex2i(300,200);//S11
	glEnd();


}
void track()
{
	glColor3f(0.35,0.2,0.1);//outer
	glBegin(GL_POLYGON);
	glVertex2i(500,0);//A1
	glVertex2i(390,0);//B1
	glVertex2i(0,390);//C1
	glVertex2i(0,500);//D1
glEnd()	;
	glColor3f(0.4,0.4,0.45);//inner
	glBegin(GL_POLYGON);
	glVertex2i(490,0);//A11
	glVertex2i(400,0);//B11
	glVertex2i(0,400);//C11
	glVertex2i(0,490);//D11
glEnd()	;
	glColor3f(0.35,0.2,0.1);//strip1
	glBegin(GL_POLYGON);
	glVertex2i(0,460);
	glVertex2i(0,475);
	glVertex2i(15,478);
	glVertex2i(25,465);
	glEnd()	;
	glColor3f(0.35,0.2,0.1);//2
	glBegin(GL_POLYGON);
	glVertex2i(0,428);
	glVertex2i(0,440);
	glVertex2i(40,450);
	glVertex2i(50,440);
	glEnd()	;
	glColor3f(0.35,0.2,0.1);//3
	glBegin(GL_POLYGON);
	glVertex2i(0,400);
	glVertex2i(0,410);
	glVertex2i(65,425);
	glVertex2i(75,415);
	glEnd()	;
	glColor3f(0.35,0.2,0.1);//4
	glBegin(GL_POLYGON);
	glVertex2i(25,375);
	glVertex2i(15,385);
	glVertex2i(90,400);
	glVertex2i(100,390);
	glEnd()	;
	glColor3f(0.35,0.2,0.1);//5
	glBegin(GL_POLYGON);
	glVertex2i(50,350);
	glVertex2i(40,360);
	glVertex2i(115,375);
	glVertex2i(125,365);
	glEnd()	;
	glColor3f(0.35,0.2,0.1);//6
	glBegin(GL_POLYGON);
	glVertex2i(75,325);
	glVertex2i(65,335);
	glVertex2i(140,350);
	glVertex2i(150,340);
	glEnd()	;
	glColor3f(0.35,0.2,0.1);//7
	glBegin(GL_POLYGON);
	glVertex2i(100,300);
	glVertex2i(90,310);
	glVertex2i(165,325);
	glVertex2i(175,315);
	glEnd()	;
	glColor3f(0.35,0.2,0.1);//8
	glBegin(GL_POLYGON);
	glVertex2i(125,275);
	glVertex2i(115,285);
	glVertex2i(190,300);
	glVertex2i(200,290);
	glEnd()	;
	glColor3f(0.35,0.2,0.1);//9
	glBegin(GL_POLYGON);
	glVertex2i(150,250);
	glVertex2i(140,260);
	glVertex2i(215,275);
	glVertex2i(225,265);
	glEnd()	;
	glColor3f(0.35,0.2,0.1);//10
	glBegin(GL_POLYGON);
	glVertex2i(175,225);
	glVertex2i(165,235);
	glVertex2i(240,250);
	glVertex2i(250,240);
	glEnd();
	glColor3f(0.35,0.2,0.1);//11
	glBegin(GL_POLYGON);
	glVertex2i(200,200);
	glVertex2i(190,210);
	glVertex2i(265,225);
	glVertex2i(275,215);
	glEnd()	;
	glColor3f(0.35,0.2,0.1);//12
	glBegin(GL_POLYGON);
	glVertex2i(225,175);
	glVertex2i(215,185);
	glVertex2i(290,200);
	glVertex2i(300,190);
	glEnd()	;
	glColor3f(0.35,0.2,0.1);//13
	glBegin(GL_POLYGON);
	glVertex2i(250,150);
	glVertex2i(240,160);
	glVertex2i(315,175);
	glVertex2i(325,165);
	glEnd()	;
	glColor3f(0.35,0.2,0.1);//14
	glBegin(GL_POLYGON);
	glVertex2i(275,125);
	glVertex2i(265,135);
	glVertex2i(340,150);
	glVertex2i(350,140);
	glEnd()	;
	glColor3f(0.35,0.2,0.1);//15
	glBegin(GL_POLYGON);
	glVertex2i(300,100);
	glVertex2i(290,110);
	glVertex2i(365,125);
	glVertex2i(375,115);
	glEnd()	;
	glColor3f(0.35,0.2,0.1);//16
	glBegin(GL_POLYGON);
	glVertex2i(325,75);
	glVertex2i(315,85);
	glVertex2i(390,100);
	glVertex2i(400,90);
	glEnd()	;
	glColor3f(0.35,0.2,0.1);//17
	glBegin(GL_POLYGON);
	glVertex2i(350,50);
	glVertex2i(340,60);
	glVertex2i(415,75);
	glVertex2i(425,65);
	glEnd()	;
	glColor3f(0.35,0.2,0.1);//18
	glBegin(GL_POLYGON);
	glVertex2i(375,25);
	glVertex2i(365,35);
	glVertex2i(440,50);
	glVertex2i(450,40);
	glEnd()	;
	glColor3f(0.35,0.2,0.1);//19
	glBegin(GL_POLYGON);
	glVertex2i(400,0);
	glVertex2i(390,10);
	glVertex2i(465,25);
	glVertex2i(475,15);
	glEnd();

	glColor3f(0.14,0.14,0.14);
	glBegin(GL_POLYGON);
	glVertex2i(125,275);
	glVertex2i(200,290);

	glVertex2i(215,275);
	glVertex2i(140,260);
glEnd();

glColor3f(0.14,0.14,0.14);
	glBegin(GL_POLYGON);
	glVertex2i(150,250);
	glVertex2i(225,265);

	glVertex2i(240,250);
	glVertex2i(165,235);
glEnd();

	glColor3f(0.14,0.14,0.14);
	glBegin(GL_POLYGON);
	glVertex2i(175,225);
	glVertex2i(250,240);
	glVertex2i(265,225);
	glVertex2i(190,210);
glEnd();

	glColor3f(0.14,0.14,0.14);
	glBegin(GL_POLYGON);
	glVertex2i(200,200);
	glVertex2i(275,215);
	glVertex2i(290,200);
	glVertex2i(215,185);
	glEnd();


	}
void car()
{
	glColor3f(0.2,0.2,0.8);
	glBegin(GL_POLYGON);
	glVertex2i(315,260);//a
	glVertex2i(335,275);//b
	glVertex2i(355,285);//c
	glVertex2i(400,275);//d
	glVertex2i(385,265);//e
	glVertex2i(370,250);//f
	glVertex2i(360,250);//g
	glVertex2i(330,255);//h
	glEnd();

	glColor3f(0.9,0.9,0.9);
	glBegin(GL_POLYGON);
	glVertex2i(315,260);//a
	glVertex2i(335,275);//b
	glVertex2i(335,270);//b1
	glVertex2i(320,260);//a1
	glEnd()	;
	glColor3f(0.9,0.9,0.9);
	glBegin(GL_POLYGON);
	glVertex2i(385,265);//e
	glVertex2i(370,250);//f
	glVertex2i(360,250);//g
	glVertex2i(375,265);//e1
	glEnd()	;
	glColor3f(0.25,0.25,0.90);
	glBegin(GL_POLYGON);
	glVertex2i(315,260);//a
	glVertex2i(330,255);//h
	glVertex2i(360,250);//g
	glVertex2i(370,250);//f
	glVertex2i(370,235);//i
	glVertex2i(315,245);//j
	glEnd()	;
	glColor3f(0.23,0.23,0.85);
	glBegin(GL_POLYGON);
	glVertex2i(400,275);//d
	glVertex2i(385,265);//e
	glVertex2i(370,250);//f
	glVertex2i(370,235);//i
	glVertex2i(380,235);//k
	glVertex2i(395,240);//l


	glVertex2i(400,275);
	glEnd()	;
	glColor3f(0.23,0.23,0.8);
	glBegin(GL_POLYGON);
	glVertex2i(400,275);//d

	glVertex2i(395,240);//l
	glVertex2i(415,245);//q
	glVertex2i(460,260);//r
	glVertex2i(465,275);//s
	glVertex2i(470,275);//t
	glVertex2i(475,270);//u
	glVertex2i(470,280);//v
	glVertex2i(465,285);//w
	glVertex2i(455,285);//x
	glVertex2i(450,285);//y
	glVertex2i(420,275);//z
	glEnd()	;
	glColor3f(0.22,0.22,0.22);//window
	glBegin(GL_POLYGON);
glVertex2i(355,285);//c
glVertex2i(400,275);//d
glVertex2i(415,295);//1
glVertex2i(380,300);//2
glEnd()	;
	glColor3f(0.22,0.22,0.22);//window
	glBegin(GL_POLYGON);
glVertex2i(405,275);//6
glVertex2i(420,295);//3
glVertex2i(430,295);//4
glVertex2i(450,285);//y
glVertex2i(420,275);//z
glEnd()	;
	glColor3f(0.25,0.25,0.9);
	glBegin(GL_POLYGON);
glVertex2i(380,300);//2
glVertex2i(415,295);//1
glVertex2i(420,295);//3
glVertex2i(430,295);//4
glVertex2i(425,300);//y
glEnd()	;
	glColor3f(0.25,0.25,0.75);
	glBegin(GL_POLYGON);
glVertex2i(425,300);//5
glVertex2i(430,295);//4
glVertex2i(450,285);//y
glVertex2i(455,285);//x
glEnd()	;

glColor3f(0.25,0.25,0.9);
	glBegin(GL_POLYGON);
	glVertex2i(415,295);//1
	glVertex2i(420,295);//3
	glVertex2i(405,275);//6
	glVertex2i(400,275);//d
	glEnd();

	glColor3f(0.4,0.4,0.4);//window lines
	glBegin(GL_LINES);
glVertex2i(420,280);
glVertex2i(428,290);
glEnd();

glColor3f(0.4,0.4,0.4);//window lines
	glBegin(GL_LINES);
glVertex2i(423,280);
glVertex2i(432,290);
glEnd();

glColor3f(0.4,0.4,0.4);//window lines
	glBegin(GL_LINES);
glVertex2i(379,285);
glVertex2i(390,295);
glEnd();

glColor3f(0.4,0.4,0.4);//window lines
	glBegin(GL_LINES);
glVertex2i(382,283);
glVertex2i(395,294);
glEnd();
}


void grass()
{
	glColor3f(0.0,0.4,0.0);
	glBegin(GL_POLYGON);
glVertex2i(0,390);
glVertex2i(0,260);
glVertex2i(110,280);
glEnd()	;
	//glColor3f(0.0,0.2,0.0);
	glBegin(GL_POLYGON);
glVertex2i(0,125);
glVertex2i(210,180);
glVertex2i(390,0);
glVertex2i(0,0);
glEnd()	;
	//glColor3f(0.0,0.2,0.0);
	glBegin(GL_POLYGON);
glVertex2i(300,200);
glVertex2i(500,250);
glVertex2i(500,0);
glEnd()	;
	//glColor3f(0.0,0.2,0.0);
	glBegin(GL_POLYGON);
glVertex2i(200,300);
glVertex2i(0,500);
glVertex2i(500,500);
glVertex2i(500,350);
glEnd();
}

void gate()
{
	//gate no. 1
		glColor3f(0.8,0.8,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(215,350);//g11
	glVertex2i(230,355);//g12
	glVertex2i(230,320);//g13
	glVertex2i(220,330);//g7
	glVertex2i(220,310);//g8
	glVertex2i(230,300);//g9
	glVertex2i(215,300);//g10

	glEnd()	;
		glColor3f(0.9,0.9,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(190,350);//g1
	glVertex2i(195,355);//g2
	glVertex2i(215,335);//g5
	glVertex2i(215,325);//g6
	glEnd()	;

	glColor3f(0.9,0.9,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(220,330);//g7
	glVertex2i(220,320);//g8
	glVertex2i(355,190);//g4
	glVertex2i(360,195);//g3
	glEnd()	;


	glColor3f(0.6,0.6,0.0);
	glBegin(GL_LINES);
	glVertex2i(215,315);//g13
	glVertex2i(200,340);//g14
	glEnd();
	glColor3f(0.5,0.5,0.0);
	glBegin(GL_LINES);
	glVertex2i(220,310);
	glVertex2i(350,185);
	glEnd();

	glColor3f(0.45,0.45,0.0);
	glBegin(GL_LINES);
	glVertex2i(350,185);//1 2
	glVertex2i(350,195);
	glVertex2f(338,195.75);//3 4
	glVertex2f(338,205.75);
	glVertex2f(325,208);//5 6
	glVertex2f(325,218);
	glVertex2i(313,220);//7 8
	glVertex2i(313,230);
	glVertex2i(300,233);//9 10
	glVertex2i(300,243);
	glVertex2i(288,245);//11 12
	glVertex2i(288,255);
	glVertex2i(275,256);//13 14
	glVertex2i(275,267);
	glVertex2i(263,268);//15 16
	glVertex2i(263,278);
	glVertex2f(250,280.5);//17 18
	glVertex2i(250,291);
	glVertex2i(235,295);
	glVertex2i(235,305);
	glVertex2i(225,305);
	glVertex2i(225,315);
	glEnd();





	//gate no. 2
		glColor3f(0.8,0.8,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(215-150,350-30);//g11
	glVertex2i(230-150,355-30);//g12
	glVertex2i(230-150,320-30);//g13
	glVertex2i(220-150,330-30);//g7
	glVertex2i(220-150,310-30);//g8
	glVertex2i(230-150,300-30);//g9
	glVertex2i(215-150,300-30);//g10

	glEnd()	;
		glColor3f(0.9,0.9,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(190-150,350-30);//g1
	glVertex2i(195-150,355-30);//g2
	glVertex2i(215-150,335-30);//g5
	glVertex2i(215-150,325-30);//g6
	glEnd()	;

	glColor3f(0.9,0.9,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(220-150,330-30);//g7
	glVertex2i(220-150,320-30);//g8
	glVertex2i(355-150,190-30);//g4
	glVertex2i(360-150,195-30);//g3
	glEnd()	;


	glColor3f(0.6,0.6,0.0);
	glBegin(GL_LINES);
	glVertex2i(215-150,315-30);//g13
	glVertex2i(200-150,340-30);//g14
	glEnd();
	glColor3f(0.5,0.5,0.0);
	glBegin(GL_LINES);
	glVertex2i(220-150,310-30);
	glVertex2i(350-150,185-30);
	glEnd();

	glColor3f(0.45,0.45,0.0);
	glBegin(GL_LINES);
	glVertex2i(350-150,185-30);//1 2
	glVertex2i(350-150,195-30);
	glVertex2f(338-150,195.75-30);//3 4
	glVertex2f(338-150,205.75-30);
	glVertex2f(325-150,208-30);//5 6
	glVertex2f(325-150,218-30);
	glVertex2i(313-150,220-30);//7 8
	glVertex2i(313-150,230-30);
	glVertex2i(300-150,233-30);//9 10
	glVertex2i(300-150,243-30);
	glVertex2i(288-150,245-30);//11 12
	glVertex2i(288-150,255-30);
	glVertex2i(275-150,256-30);//13 14
	glVertex2i(275-150,267-30);
	glVertex2i(263-150,268-30);//15 16
	glVertex2i(263-150,278-30);
	glVertex2f(250-150,280.5-30);//17 18
	glVertex2i(250-150,291-30);
	glVertex2i(235-150,295-30);
	glVertex2i(235-150,305-30);
	glVertex2i(225-150,305-30);
	glVertex2i(225-150,315-30);
	glEnd();



}



void train()

{
	glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(165,230);//32
	glVertex2i(165,335);//33
	glVertex2i(185,360);//34
	glVertex2i(235,365);//35              //back long strip
	glVertex2i(255,355);//36
	glVertex2i(250,360);//37
	glVertex2i(230,370);//38
	glVertex2i(180,365);//39
	glVertex2i(160,340);//40
	glVertex2i(160,235);//41
	glEnd();

	glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(245,150);//22
	glVertex2i(245,260);//23                 // front long strip
	glVertex2i(260,280);//24
	glVertex2i(315,285);//
	glVertex2i(335,275);
	glVertex2i(330,280);
	glVertex2i(310,290);
	glVertex2i(255,285);
	glVertex2i(240,265);
	glVertex2i(240,155);
	glEnd();


	glColor3f(0.65,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(315,115);//a
	glVertex2i(410,140);//b
	glVertex2i(410,95);//c             //bottom part
	glVertex2i(315,75);//d
	glEnd();

	glColor3f(0.0,0.2,0.5);
	glBegin(GL_POLYGON);
	glVertex2i(315,188);//4
	glVertex2i(410,200);//6
	glVertex2i(410,140);//b
	glVertex2i(315,115);//a
	glEnd();

	glColor3f(0.55,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(315,188);//4
	glVertex2i(410,200);//6
	glVertex2i(410,140);//b
	glVertex2i(315,115);//a
	glEnd();

	glColor3f(0.6,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(315,180);//4
	glVertex2i(325,185);//3
	glVertex2i(325,140);//2
	glVertex2i(315,135);//1
	glEnd();

	glColor3f(0.3,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(315,180);//4
	glVertex2i(325,185);//3
	glVertex2i(325,140);//2
	glVertex2i(315,135);//1
	glEnd();

	glColor3f(0.6,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(405,195);//5
	glVertex2i(410,200);//6
	glVertex2i(410,160);//7
	glVertex2i(405,155);//8
	glEnd();

	glColor3f(0.3,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(405,195);//5
	glVertex2i(410,200);//6
	glVertex2i(410,160);//7
	glVertex2i(405,155);//8
	glEnd();




	glColor3f(0.33,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(330,170);//9
	glVertex2i(365,150);//10
	glVertex2i(400,180);//11
	glVertex2i(400,165);//12
	glVertex2i(365,140);//13
	glVertex2i(330,155);//14
	glEnd();



	glColor3f(0.05,0.05,0.05);
	glBegin(GL_LINE_LOOP);
	glVertex2i(330,170);//9
	glVertex2i(365,150);//10
	glVertex2i(400,180);//11
	glVertex2i(400,165);//12
	glVertex2i(365,140);//13
	glVertex2i(330,155);//14
	glEnd();

	glColor3f(0.25,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(330,185);//15
	glVertex2i(400,195);//16
	glVertex2i(400,190);//17
	glVertex2i(365,170);//18
	glVertex2i(330,175);//19
	glEnd();

	glColor3f(0.05,0.05,0.05);
	glBegin(GL_LINE_LOOP);
	glVertex2i(330,185);//15
	glVertex2i(400,195);//16
	glVertex2i(400,190);//17
	glVertex2i(365,170);//18
	glVertex2i(330,175);//19
	glEnd();

	glColor3f(0.85,0.85,0.85);
	glBegin(GL_POLYGON);
	glVertex2i(335,110);//e
	glVertex2i(350,115);//f       //right headlight
	glVertex2i(350,100);//g
	glVertex2i(330,95);//h
	glEnd();

	glColor3f(0.2,0.2,0.2);
	glBegin(GL_LINE_LOOP);
	glVertex2i(335,110);//e
	glVertex2i(350,115);//f
	glVertex2i(350,100);//g
	glVertex2i(330,95);//h
	glEnd();

	glColor3f(0.85,0.85,0.85);
	glBegin(GL_POLYGON);
	glVertex2i(380,120);//i
	glVertex2i(395,125);//j         //left headlight
	glVertex2i(400,110);//k
	glVertex2i(380,105);//l
	glEnd();

	glColor3f(0.2,0.2,0.2);
	glBegin(GL_LINE_LOOP);
	glVertex2i(380,120);//i
	glVertex2i(395,125);//j
	glVertex2i(400,110);//k
	glVertex2i(380,105);//l
	glEnd();


	glColor3f(0.65,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(245,150);//22
	glVertex2i(315,75);//d
	glVertex2i(315,180);//4
	glVertex2i(245,260);//23
	glEnd();

	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex2i(244,257);//23
	glVertex2i(315,180);//4
	glVertex2i(340,205);//20
	glVertex2i(260,280);//24
	glEnd();

	glColor3f(0.75,0.75,0.75);
	glBegin(GL_POLYGON);
	glVertex2i(340,205);//20
	glVertex2i(390,210);//21
	glVertex2i(315,285);//25
	glVertex2i(260,280);//24
	glEnd();

	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex2i(315,285);//25
	glVertex2i(335,275);//26
	glVertex2i(410,200);//6
	glVertex2i(390,210);//21
	glEnd();

	glColor3f(0.65,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(240,155);//31
	glVertex2i(165,230);//32
	glVertex2i(165,335);//33
	glVertex2i(240,265);//30
	glEnd();

	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex2i(239,262);//30
	glVertex2i(255,285);//29
	glVertex2i(185,360);//34
	glVertex2i(165,335);//33
	glEnd();

	glColor3f(0.75,0.75,0.75);
	glBegin(GL_POLYGON);
	glVertex2i(310,290);//28
	glVertex2i(255,285);//29
	glVertex2i(185,360);//34
	glVertex2i(235,365);//35
	glEnd();

	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex2i(235,365);//35
	glVertex2i(255,355);//36
	glVertex2i(330,280);	//27
	glVertex2i(310,290);//28
	glEnd();

	glColor3f(0.65,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(160,235);//41
	glVertex2i(90,305);//42
	glVertex2i(90,410);	//43
	glVertex2i(160,340);//40
	glEnd();

	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex2i(160,340);//40
	glVertex2i(90,410);//43
	glVertex2i(110,430);	//44
	glVertex2i(180,365);//39
	glEnd();

	glColor3f(0.75,0.75,0.75);
	glBegin(GL_POLYGON);
	glVertex2i(180,365);//39
	glVertex2i(110,430);//44
	glVertex2i(165,435);//45
	glVertex2i(230,370);//38
	glEnd();

	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex2i(165,435);//45
	glVertex2i(185,430);//46
	glVertex2i(250,360);	//37
	glVertex2i(230,370);//38
	glEnd();

	glColor3f(0.6,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(410,200);//6
	glVertex2i(313,178);//4
	glVertex2i(340,205);//20
	glVertex2i(390,210);//21
	glEnd();

glColor3f(0.6,0.6,0.6);//*1
	glBegin(GL_POLYGON);
	glVertex2i(90,380);
	glVertex2i(90,363);
	glVertex2i(160,295);
	glVertex2i(160,310);
	glEnd();

	glColor3f(0.6,0.6,0.6);//*3
	glBegin(GL_POLYGON);
	glVertex2i(165,305);
	glVertex2i(165,290);
	glVertex2i(240,219);
	glVertex2i(240,235);
	glEnd();

	glColor3f(0.6,0.6,0.6);//*5
	glBegin(GL_POLYGON);
	glVertex2i(245,230);
	glVertex2i(245,213);
	glVertex2i(315,143);
	glVertex2i(315,160);
	glEnd();

	glColor3f(0.6,0.6,0.6);//*2
	glBegin(GL_POLYGON);
	glVertex2i(90,359);
	glVertex2i(90,345);
	glVertex2i(160,275);
	glVertex2i(160,290);
	glEnd();

	glColor3f(0.55,0.55,0.55);//*4
	glBegin(GL_POLYGON);
	glVertex2i(165,285);
	glVertex2i(165,270);
	glVertex2i(240,200);
	glVertex2i(240,215);
	glEnd();

	glColor3f(0.55,0.55,0.55);//*6
	glBegin(GL_POLYGON);
	glVertex2i(245,209);
	glVertex2i(245,195);
	glVertex2i(315,125);
	glVertex2i(315,139);
	glEnd();

	glColor3f(0.15,0.15,0.15);
	glBegin(GL_LINES);
	glVertex2i(350,115);//f
	glVertex2i(380,120);//i

	glVertex2i(350,113);
	glVertex2i(380,118);

	glVertex2i(350,111);
	glVertex2i(380,116);

	glVertex2i(350,109);
	glVertex2i(380,114);

	glVertex2i(350,107);
	glVertex2i(380,112);

	glVertex2i(350,105);
	glVertex2i(380,110);

	glVertex2i(350,103);
	glVertex2i(380,108);

	glVertex2i(350,101);
	glVertex2i(380,106);
	glEnd();
}
void gate1()
{
	//gate no 1
	glColor3f(0.8,0.8,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(215,350);//g11
	glVertex2i(230,355);//g12
	glVertex2i(230,335);//gnew
	glVertex2i(220,330);//g7
	glVertex2i(220,310);//g8
	glVertex2i(230,320);//g13
	glVertex2i(230,300);//g9
	glVertex2i(215,300);//g10
	glEnd();

	glColor3f(0.9,0.9,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(215,325);
	glVertex2i(190,310);
	glVertex2i(190,303);
	glVertex2i(215,318);
	glEnd();

	glColor3f(0.9,0.9,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(220,330);//g1
	glVertex2i(380,435);//n1
	glVertex2i(380,427);//n2
	glVertex2i(220,322);
	glEnd();


	glColor3f(0.6,0.6,0.0);
	glBegin(GL_LINES);
	glVertex2i(195,305);
	glVertex2i(215,310);
	glEnd();


	glColor3f(0.6,0.6,0.0);
	glBegin(GL_LINES);
	glVertex2i(220,313);
	glVertex2i(375,413);

	glEnd();

	glColor3f(0.6,0.6,0.0);
	glBegin(GL_LINES);
	glVertex2i(375,413);//1
	glVertex2i(375,425);//2
	glVertex2i(360,403);//3
	glVertex2i(360,415);//4

	glVertex2i(345,393);//5
	glVertex2i(345,405);//6
	glVertex2i(330,385);//7
	glVertex2i(330,395);//8

	glVertex2i(315,375);//9
	glVertex2i(315,385);//10
	glVertex2i(300,365);//11
	glVertex2i(300,375);//12

	glVertex2i(285,355);//13
	glVertex2i(285,365);//14
	glVertex2i(270,345);//15
	glVertex2i(270,355);//16

	glVertex2i(255,335);//17
	glVertex2i(255,345);//18
	glVertex2i(240,325);//19
	glVertex2i(240,335);//20

	glVertex2i(225,316);//21
	glVertex2i(225,326);//22

	glEnd();

	glColor3f(0.9,0.9,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(215,325);
	glVertex2i(190,310);
	glVertex2i(190,305);
	glVertex2i(215,320);
	glEnd();




	//gate no 2
	glColor3f(0.8,0.8,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(215-150,350-30);//g11
	glVertex2i(230-150,355-30);//g12
	glVertex2i(230-150,335-30);//gnew
	glVertex2i(220-150,330-30);//g7
	glVertex2i(220-150,310-30);//g8
	glVertex2i(230-150,320-30);//g13
	glVertex2i(230-150,300-30);//g9
	glVertex2i(215-150,300-30);//g10
	glEnd();

	glColor3f(0.9,0.9,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(215-150,325-30);
	glVertex2i(190-150,310-30);
	glVertex2i(190-150,303-30);
	glVertex2i(215-150,318-30);
	glEnd();

	glColor3f(0.9,0.9,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(220-150,330-30);//g1
	glVertex2i(380-150,435-30);//n1
	glVertex2i(380-150,427-30);//n2
	glVertex2i(220-150,322-30);
	glEnd();


	glColor3f(0.6,0.6,0.0);
	glBegin(GL_LINES);
	glVertex2i(195-150,305-30);
	glVertex2i(215-150,310-30);
	glEnd();


	glColor3f(0.6,0.6,0.0);
	glBegin(GL_LINES);
	glVertex2i(220-150,313-30);
	glVertex2i(375-150,413-30);

	glEnd();

	glColor3f(0.6,0.6,0.0);
	glBegin(GL_LINES);
	glVertex2i(375-150,413-30);//1
	glVertex2i(375-150,425-30);//2
	glVertex2i(360-150,403-30);//3
	glVertex2i(360-150,415-30);//4

	glVertex2i(345-150,393-30);//5
	glVertex2i(345-150,405-30);//6
	glVertex2i(330-150,385-30);//7
	glVertex2i(330-150,395-30);//8

	glVertex2i(315-150,375-30);//9
	glVertex2i(315-150,385-30);//10
	glVertex2i(300-150,365-30);//11
	glVertex2i(300-150,375-30);//12

	glVertex2i(285-150,355-30);//13
	glVertex2i(285-150,365-30);//14
	glVertex2i(270-150,345-30);//15
	glVertex2i(270-150,355-30);//16

	glVertex2i(255-150,335-30);//17
	glVertex2i(255-150,345-30);//18
	glVertex2i(240-150,325-30);//19
	glVertex2i(240-150,335-30);//20

	glVertex2i(225-150,316-30);//21
	glVertex2i(225-150,326-30);//22

	glEnd();

	glColor3f(0.9,0.9,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(215-150,325-30);
	glVertex2i(190-150,310-30);
	glVertex2i(190-150,305-30);
	glVertex2i(215-150,320-30);
	glEnd();



}

void keyboard(unsigned char key,int x,int y)
{
	if(key=='e') exit(0);
}
void mouse(int btn,int state,int x,int y)
{

	if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
    {
	then=1;
    glutPostRedisplay();

	}

	if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
		display1();
	else if(btn==GLUT_MIDDLE_BUTTON && state==GLUT_DOWN)
		display2();
	else if(btn==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
		display3();
}




void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
		track();
		road();
		car();
		grass();
		house();
		shop();
		//tree1();
		mys();
		gate();


	glFlush();
}
void display3()
{

	track();
	road();
	car();
	gate1();
	grass();
	house();
	shop();
	mys();
	//tree1();
	float x=0,y=0;
	for(int i=0;i<2200;i++)
	{
		glClear(GL_COLOR_BUFFER_BIT);
			track();
			road();
			grass();
			house();
			shop();
			//tree1();
			mys();
			gate1();
			glPushMatrix();
			glTranslatef(x,y,0.0);
			car();
			x-=0.25;
			y-=0.05;
			glPopMatrix();
		glFlush();
	}

}
void display2()
{
	glClear(GL_COLOR_BUFFER_BIT);
		track();
		road();
		car();
		grass();
		house();
		shop();
		//tree1();
		mys();
		gate1();
	glFlush();
}
void display1()
{
	glClear(GL_COLOR_BUFFER_BIT);
		track();
		road();
		car();
		grass();
		house();
		shop();
		//tree1();
		mys();
		gate();

		float x=-200,y=195;
		for(int i=0;i<1800;i++)
		{
			glClear(GL_COLOR_BUFFER_BIT);
			track();
				road();
				car();
				grass();
				house();
				shop();
				//tree1();
				mys();
				gate();
				glPushMatrix();
				glTranslatef(x,y,0.0);
				train();
				//light();
				x+=0.35;
				y-=0.35;
				glPopMatrix();
			glFlush();
		}
}
void myinit()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glColor3f(1.0,0.0,0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,500.0,0.0,500.0);
}
int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("train");
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);

	glutMouseFunc(mouse);
	//glEnable(GL_LIGHTING);
	//glEnable(GL_LIGHT0);
	//glEnable(GL_LIGHT1);
	myinit();
	glutMainLoop();
}



