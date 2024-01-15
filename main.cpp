
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>


float c1=0.0;
float c2=0.0;
float c3=0.0;
float p1=0.0;
float b=0.0;


void init(){

glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
glMatrixMode(GL_PROJECTION);
glOrtho(0.0,1000,0.0,1000,-1000,1000);

}

///SCREENCOLOR///
void screen(){
glBegin(GL_POLYGON);
glColor3f(0.5f, 1.0f, 1.0f);
glVertex2f(0,360);
glVertex2f(1000,360);
glVertex2f(1000,1000);
glVertex2f(0,1000);
glEnd();

}

   /// mid point ...///
void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)
 //radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);


    for(int i=0;i<=100;i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}

void river(){

/// River 1st part ///
   //1st part
   glColor3ub(0, 143, 179);
   //glColor3ub(90, 153, 51);//River above color
   glBegin(GL_POLYGON);
   glVertex2f (0, 45);
   glVertex2f (420, 30);
   glVertex2f (450, 310);
   glVertex2f (0, 320);
   glEnd();


   // 2nd part
   //glEnd();
   glBegin(GL_POLYGON);
   glVertex2f (420, 30);
   glVertex2f (1000, 10);
   glVertex2f (1000, 340);
   glVertex2f (450, 310);

   glEnd();


       ///River field shadow1///
       //1st part//
	glBegin(GL_POLYGON);
	glColor3ub(0, 153, 51);//River above color
	glVertex2i(0,0);
	glVertex2i(420, 0);
	glVertex2i(420, 50);
	glVertex2i(0,65);
	glEnd();

        //2nd part//
	glBegin(GL_POLYGON);
	glColor3ub(0, 153, 51);//River above color
	glVertex2i(420,0);
	glVertex2i(1000, 0);
	glVertex2i(1000, 20);
	glVertex2i(420,50);

	glEnd();


	  ///River field shadow2///
	  //part-1//
	glBegin(GL_POLYGON);
	glColor3ub(0, 153, 51);//River above color
	glVertex2i(0,320);
	glVertex2i(450, 310);
	glVertex2i(450, 360);
	glVertex2i(0,360);

	glEnd();

       //part-2//
    glBegin(GL_POLYGON);
	glColor3ub(0, 153, 51);//River above color
	glVertex2i(450,310);
	glVertex2i(1000, 340);
	glVertex2i(1000, 360);
	glVertex2i(450,360);

	glEnd();



      ///Above shadow field///
      //Part-1//
    glBegin(GL_POLYGON);
	glColor3ub(90, 153, 51);
	glVertex2f(0,360);
	glVertex2f(450, 360);
	glVertex2f(450, 380);
	glVertex2f(0,380);
	glEnd();

	  //Part-2//
    glBegin(GL_POLYGON);
	glColor3ub(90, 153, 51);
	glVertex2f(450, 360);
	glVertex2f(1000, 355);
	glVertex2f(1000, 380);
	glVertex2f(450,380);


	glEnd();
}

void Tilla_One(){

    glBegin(GL_POLYGON);
    glColor3f(0.03, 0.486, 0.153); //Deep Green
    glVertex2f(540,380);
    glVertex2f(680,380);
    glVertex2f(713,440);
    glVertex2f(620,440);

    glEnd();
}
    void brown_hill()
{

    ///Part-1
    glBegin(GL_POLYGON);
    glColor3f(0.50196, 0.25098, 0.0);
    glVertex2f(540, 380);
    glVertex2f(800, 380);
    glVertex2f(710, 680);
    glEnd();


    ///Part-2
    glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    glVertex2f(680, 380);
    glVertex2f(940, 380);
    glVertex2f(880, 550);

    glEnd();


    ///Part-3
     glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    glVertex2f(680, 380);
    glVertex2f(970, 380);
    glVertex2f(970, 550);


glEnd();

}

void white_hill(){

glBegin(GL_POLYGON);
glColor3f(0.28, 0.28, 0.28);
glVertex2f(680,380);
glVertex2f(880,380);
glVertex2f(792,590);


glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 1.0);
glVertex2f(760,530);
glVertex2f(775,505);//1
glVertex2f(807,528);//2
glVertex2f(810,505);//3

glVertex2f(818,530);
glVertex2f(792,590);

glEnd();


}


    ///Right Side house..///
void house_1(){

glBegin(GL_POLYGON);
glColor3f(.96, .18, .0588);
glVertex2f(620,440);
glVertex2f(713,440);
glVertex2f(763,510);
glVertex2f(620,510);
glEnd();


glColor3f(.42, .42, .42);
glRectf(630,460,645,490);  // window
glRectf(655,460,670,490);
glRectf(680,445,700,500); // door
glRectf(705,460,720,490);

//roof of house
glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(620,520);
glVertex2f(763,508.5);
glVertex2f(620,510);
glEnd();


//Above roof house
glBegin(GL_POLYGON);
glColor3f(.0, .28, .384);
glVertex2f(620,520);
glVertex2f(763,508.5);
glVertex2f(763,513.5);
glVertex2f(620,530);

glEnd();
}


void house_2(){

//house//
glColor3f(.039, .475, .49);
glRectf(755,380,820,460);

//door
glColor3f(0.5f, 0.5f, 0.5f);
glRectf(777,380,797,420);


// Roof of house
glBegin(GL_POLYGON);
glColor3f(.78, .1, .0);
glVertex2f(745,460);
glVertex2f(830,460);
glVertex2f(788,490);

glEnd();


glColor3f(0.5f, 0.5f, 0.5f);
glRectf(800,420,815,440);  //window//

glColor3f(0.5f, 0.5f, 0.5f);
glRectf(760,420,775,440);

}

void house_3(){

glColor3f(.93, 0.588, 0.0);
glRectf(820,380,900,435);

glColor3f(.78, .1, .0);
glRectf(825,395,842,415);
glRectf(850,395,867,415);
glRectf(875,395,892,415);
}


   /// Tilla part-2...///
void Tilla_two(){

glBegin(GL_POLYGON);
glColor3f(0.03, 0.486, 0.153); //Deep Green
glVertex2f(797,380);
glVertex2f(970,380);
glVertex2f(900,450);
glVertex2f(930,435);
glVertex2f(850,460);
glEnd();

}
void Tilla_three(){

    glBegin(GL_POLYGON);
    glColor3f(0.03, 0.486, 0.153); //Deep Green
    glVertex2f(400,380);
    glVertex2f(440,430);
    glVertex2f(540,380);
    glVertex2f(500,450);

    glEnd();

}


/// BUILDING START..///

void building(){
//Start B-1//
glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
glRectf(40,380,170,750);  //building_1

glColor3f(0.0f, 0.0f, 0.0f);//Black
glRectf(45,395,165,425);
glRectf(45,449,165,477);
glRectf(45,505,165,530);
glRectf(45,555,165,578);
glRectf(45,601,165,622);
glRectf(45,645,165,664);
glRectf(45,685,165,702);
glRectf(45,720,165,732);
//End B-1//





glColor3f(0.82, 0.188, .78);
glRectf(215,380,385,640);  //building_2


glColor3f(0.0, 0.0, .0);
glRectf(220,395,380,435);

glColor3f(0.65, 0.64, .62);
glRectf(220,460,380,500);

glColor3f(0.65, 0.64, .62);
glRectf(220,525,380,565);

glColor3f(0.65, 0.64, .62);
glRectf(220,587,380,625);
//End B-2//
}


///Boat start...///

void Boat(){

glBegin(GL_POLYGON);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(b-190,200);
glVertex2f(b-140,140);
glVertex2f(b-40,140);
glVertex2f(b-5,200);

glEnd();

//Upper part of boat
glColor3f(0.85f, 0.275, 0.275);
glRectf(b-135,200,b-50,245);
//Fan of boat
glBegin(GL_POLYGON);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(b-30,180);
glVertex2f(b-20,130);
glVertex2f(b-20,235);

glEnd();

if(b>=0)
b=b-0.080;
else
b=1000;

}


void plain(){

//1st pain
glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 1.0f);//light blue
glVertex2f(p1-180,780);
glVertex2f(p1-125,780);
glVertex2f(p1-125,800);
glVertex2f(p1-160,800);
glEnd();



//2nd plain
glBegin(GL_POLYGON);
glColor3f(0.93, .8, .0);//light blue
glVertex2f(p1-285,850);
glVertex2f(p1-230,850);
glVertex2f(p1-230,870);
glVertex2f(p1-265,870);

glEnd();

//1st pakha
glBegin(GL_POLYGON);
glColor3f(1.0f, 0.0f, 1.0f);//Purple
glVertex2f(p1-140,800);
glVertex2f(p1-125,800);
glVertex2f(p1-125,817);

glEnd();

//2nd pakha
glBegin(GL_POLYGON);
glColor3f(1.0f, 0.0f, 1.0f);//Purple
glVertex2f(p1-245,870);
glVertex2f(p1-230,870);
glVertex2f(p1-230,890);

glEnd();

//1st window & door//
glColor3f(1.0f, 0.0f, 0.0f);//Orange
glRectf(p1-265,850,p1-260,862);//1st

glColor3f(1.0f, 0.0f, 0.0f);//Orange
glRectf(p1-255,855,p1-250,865);

glColor3f(1.0f, 0.0f, 0.0f);//Orange
glRectf(p1-245,855,p1-240,865);
//1st window & door//


//2nd window & door//
glColor3f(1.0f, 0.5f, 0.0f);//Orange
glRectf(p1-160,780,p1-155,795);

glColor3f(1.0f, 0.5f, 0.0f);//Orange
glRectf(p1-150,785,p1-145,795);

glColor3f(1.0f, 0.5f, 0.0f);//Orange
glRectf(p1-140,785,p1-135,795);

if(p1>=0)
p1=p1-0.13;
else
p1=1000;
}

void tree(){


///tree-1//
glColor3f(0.2, .82, 0.078);//Green
 circle(16,16,936.5,413);
 circle(16,18,936.5,426);

 glColor3f(0.0f,0.0f,0.0f);
glRectf(935,380,938,415);


///tree-2//


glColor3f(0.2, .82, 0.078);//Green
 circle(13,13,678.5,416);
 circle(13,15,678.5,430);

 glColor3f(0.0f,0.0f,0.0f);
glRectf(677,380,680,415);

///tree-3//

glBegin(GL_POLYGON);
glColor3f(0.2, .82, 0.078);//Green
glVertex2f(565,432);
glVertex2f(600,432);
glVertex2f(583,468);
glEnd();


glBegin(GL_POLYGON);
glColor3f(0.2, .82, 0.078);//Green ki eta!
glVertex2f(565,452);
glVertex2f(600,452);
glVertex2f(583,488);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glRectf(580,410,583,435);


   ///tree-4///

glColor3f(0.2, .82, 0.078);//Green
 circle(20,20,453,470);
 circle(16,22,473,470);
 circle(16,22,462.5,500);

 glColor3f(0.0, .0, 0.0);
glRectf(460,422,463,475);


///Tree-5
glBegin(GL_POLYGON);
glColor3f(0.2, .82, 0.078);//Green
glVertex2f(510,432);
glVertex2f(535,432);
glVertex2f(523,468);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glRectf(520,410,523,435);


///Tree-6
glBegin(GL_POLYGON);
glColor3f(0.2, .82, 0.078);//Green
glVertex2f(405,428);
glVertex2f(438,428);
glVertex2f(420.5,468);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glRectf(418,404,421,429);
}

void cloud(){


///cloud-1///
glColor4f(1.0f, 1.0f, 1.0f, 0.0f);  //white
circle(20,32,c1+80,820);
circle(20,40,c1+110,820);
circle(20,32,c1+120,860);
circle(20,45,c1+100,860);
circle(20,32,c1+70,860);


if(c1<=1000){
   c1=c1+0.10;
   }
else
   c1=-0;
   glutPostRedisplay();

///cloud-2///
glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
circle(15,22,c2+220,950);
circle(15,22,c2+240,964);
circle(15,22,c2+260,950);
circle(15,22,c2+230,925);
circle(15,22,c2+250,925);

if(c2<=1000){
   c2=c2+0.078;
   }
else
   c2=-0;
   glutPostRedisplay();



///cloud-3///
 circle(20,20,c3+453,760);
 circle(16,22,c3+473,760);
 circle(16,22,c3+462.5,790);


if(c3<=1000){
   c3=c3+0.074;
   }
else
   c3=-0;
   glutPostRedisplay();




}


void sun(){

glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
circle(30,50,600,920);
}

void Draw()
{
   glClear(GL_COLOR_BUFFER_BIT);


   screen();
   river();
   Boat();
   brown_hill();
   house_1();

   white_hill();
   house_2();
   Tilla_two();
   house_3();
   Tilla_One();
   Tilla_three();

   tree();

   building();

   plain();

   cloud();

   sun();


// Write your Code


glutSwapBuffers();
}



int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1800,1800);
    glutCreateWindow("Project for final");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
