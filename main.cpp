//#include <iostream>
//#include <GL/freeglut_std.h>
//#include "Tools.h"
//
//using namespace std;
//
//void display(void) {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor4f(1, 0, 0, 1);
//
//    glBegin(GL_LINE_STRIP);
//    //drawing the parabola f(x) = 200 + (x - 300) * (x - 300) / 100 in range (150,450)
//    draw_function_cartesian_system(150, 300, translated_quadratic, inverse2_translated_quadratic);
//    draw_function_cartesian_system(300, 450, translated_quadratic, inverse1_translated_quadratic);
//    glEnd();
//
//    glLineWidth(2.0);
//    glColor4f(0, 0, 1, .9);
//
//    glBegin(GL_LINE_STRIP);
//    //drawing the sin wave g(x) = 350 + 50 * sin((x - 250) / 64.0) in range (150,450)
//    draw_function_cartesian_system(150, 350, translated_sin, inverse1_translated_sin);
//    draw_function_cartesian_system(350, 450, translated_sin, inverse2_translated_sin);
//    glEnd();
//
//    glBegin(GL_LINE_LOOP);
//    glColor3f(1.0, 0.0, 0.0);//red
//    glVertex2i(190, 75);//p1
//    glColor3f(0.0, 1.0, 0.0);//green
//    glVertex2i(40, 10);//p2
//    glColor3f(0.0, 0.0, 1.0);//blue
//    glVertex2i(100, 140);//p3
//    glColor3f(1.0, 0.0, 1.0);//purple
//    glVertex2i(170, 10);//p4
//    glColor3f(0.5, 0.5, 0.5);//gray
//    glVertex2i(10, 75);//p5
//    glEnd();
//
//    glFlush();
//}
//
//int main(int argc, char** argv)
//{
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowPosition(200, 50);
//    glutInitWindowSize(200, 150);
//    glutCreateWindow("Non-linear Equation Solver");
//
//    //init();
//    //glutDisplayFunc(display);//drawing plots of functions f(x) and g(x)
//    //glutMouseFunc(onMouseClick);//using mouse clicks to trigger a search for roots
//    glutDisplayFunc(display);
//
//    glutMainLoop();
//}
