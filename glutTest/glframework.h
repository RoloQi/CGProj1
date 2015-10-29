﻿#ifndef GLFRAMEWORK_H
#define GLFRAMEWORK_H

#include <QOpenGLFunctions_1_1>
#include <QOpenGLWidget>
#include <QBasicTimer>
#include <coordinatecalculator.h>
#include <iostream>
class glframework : public QOpenGLWidget , protected QOpenGLFunctions_1_1
{
    Q_OBJECT
public:
    explicit glframework(QWidget *parent = 0);
    ~glframework();
    void initializeGL();
    void paintGL();
    void resizeGL(int w,int h);
    double eyex = 0,eyey = 0, eyez = 0, centerx = 0, centery = 0, centerz = 0;
protected:
    void timerEvent(QTimerEvent *e);
private:
    CoordinateCalculator * coordinates;
    QBasicTimer timer;
    void draw_robot();
    void draw_body();
    void draw_head();
    //============================================
    void draw_leftarm();//draw left arm and it's children
    void draw_leftforearm();//draw leftforearm and it's children
    //called in function draw_leftarm();
    void draw_lefthand();//draw left hand, called in
    //function draw_leftforearm()
    //============================================
    void draw_rightarm();
    void draw_rightforearm();
signals:

public slots:
};

#endif // GLFRAMEWORK_H
