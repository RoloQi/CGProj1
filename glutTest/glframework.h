﻿#ifndef GLFRAMEWORK_H
#define GLFRAMEWORK_H

#include <QOpenGLFunctions_1_1>
#include <QOpenGLWidget>
#include <QBasicTimer>
#include <coordinatecalculator.h>
#include <iostream>
#include <QOpenGLTexture>
class glframework : public QOpenGLWidget , protected QOpenGLFunctions_1_1
{
    Q_OBJECT
public:

    explicit glframework(QWidget *parent = 0);
    ~glframework();
    void initializeGL();
    const int BLUE = 1;
    void paintGL();
    void resizeGL(int w,int h);
    CoordinateCalculator * coordinates;
    double eyex = -8,eyey = 6, eyez = -14, centerx = 0, centery = 0, centerz = 0;
protected:
    void timerEvent(QTimerEvent *e);
private:
    QOpenGLTexture * leftwing;
    QOpenGLTexture * wave;
    QOpenGLTexture * blade;
    QOpenGLTexture * ground;
    QBasicTimer timer;
    QOpenGLTexture* LoadGLTextures( const char * name );
    void draw_fog();
    void draw_sword();
    void draw_ground();
    void setMaterial(int flag);
    //============================================
    void draw_robot();
    //============================================
    void draw_body();
    void draw_planehead();
    void draw_leftShoulder();
    void draw_rightShoulder();
    void draw_leftwing();
    void draw_rightwing();
    //============================================
    void draw_head();
    //============================================
    void draw_leftarm();//draw left arm and it's children
    void draw_leftforearm();//draw leftforearm and it's children
    //called in function draw_leftarm();
    void draw_lefthand();//draw left hand, called in
    //function draw_leftforearm()
    void draw_leftfingers();
    void draw_leftfingerknuckles(int index);
    //============================================
    void draw_rightarm();
    void draw_rightforearm();
    void draw_righthand();
    void draw_rightfingers();
    void draw_rightfingerknuckles(int index);
    //============================================
    void draw_waist();
    /*left leg*/
    void draw_leftthigh();
    void draw_leftshank();
    void draw_leftfeet();
    /*right leg*/
    void draw_rightthigh();
    void draw_rightshank();
    void draw_rightfeet();

signals:

public slots:
};

#endif // GLFRAMEWORK_H
