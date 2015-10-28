#ifndef COORDINATECALCULATOR_H
#define COORDINATECALCULATOR_H
#include <GL/glut.h>
/*Variable Naming rules:
 * for static variable, which should not change during the runtime
 * it should be like this:
 * OBJECTNAME_STATIC_VARIABLECLASS[3/4]
 * all of characters in a static variable name should be upper case
 * since qt don't allow in class array initialization,
 * we don't use const array. Note that we should not change STATIC
 * variables in the program except initialization.
 * for dynamic variable, which is used to control the animation of
 * the robot, it should be like this:
 * objectname_dynamic_variableclass[3/4]
 * all of the characters in a dynamic name should be lower case
 * the default value of  dynamic translate and rotate should be design to
 * zero, the defalut value of dynamic scale is 1.
 * --------------------------
 */

/* Hierarchy of the robot
 * -----
 *                   body
 * ======================================================
 * neck     left-arm        right-arm            waist
 * -------============-----=============--========================
 *        left-forearm     right-forearm   left-thigh      right-thigh
 * ------==============----=============--=============----============
 *        left-hand         right-hand       left-shank    right-shank
 * ------==============----=============-----============--===========
 *        left-fingers      right-fingers    left-feet      right-feet
 * -----===============----=============------------------------------
 *
 */



class CoordinateCalculator
{
public:
    CoordinateCalculator();
//==================================
    /*neck coordinates*/
    /*static coordinate means the relative
     * coordinate to the relative object,
     * for neck, it's body
     * NOTE:STATIC coordinates should not
     * change in the runtime
     */
    GLfloat NECK_STATIC_POSITION[3];
    GLfloat NECK_STATIC_ROTATION[4];
    GLfloat NECK_STATIC_SCALING[3];
    /*------------------*/
    /*dynamic coordinate means the relative
     * coordinates that control the animation
     * system.
     * by calling xx_dynamic_xx[x] < x
     * xx_dynamic_xx[x]++ in the timer event
     * function, we can simulate animation
     */
    GLfloat neck_dynamic_translate[3];
    GLfloat neck_dynamic_rotate[4];
    GLfloat neck_dynamic_scale[3];
//==================================
    /*body coordinates*/
    /* STATIC_VARIABLES
     * body is the father object*/
    GLfloat BODY_STATIC_POSITION[3];
    GLfloat BODY_STATIC_ROTATION[4];
    GLfloat BODY_STATIC_SCALING[3];
    /*--------------------*/
    /* dynamic_variables*/
    GLfloat body_dynamic_translate[3];
    GLfloat body_dynamic_rotate[4];
    GLfloat body_dynamic_scale[3];
//==================================
    /*left arm coordinates*/
    /* STATIC_VARIABLES
     * the relative object for left arm is body*/
    GLfloat LEFTARM_STATIC_POSITION[3];
    GLfloat LEFTARM_STATIC_ROTATION[4];
    GLfloat LEFTARM_STATIC_SCALING[3];
    /*--------------------*/
    /* dynamic_variables*/
    GLfloat leftarm_dynamic_translate[3];
    GLfloat leftarm_dynamic_rotate[4];
    GLfloat leftarm_dynamic_scale[3];
//===================================
    /*right arm coordinates*/
    /* STATIC_VARIABLES
     * the relative object for right arm is body*/
    GLfloat RIGHTARM_STATIC_POSITION[3];
    GLfloat RIGHTARM_STATIC_ROTATION[4];
    GLfloat RIGHTARM_STATIC_SCALING[3];
    /*--------------------*/
    /* dynamic_variables*/
    GLfloat rightarm_dynamic_translate[3];
    GLfloat rightarm_dynamic_rotate[4];
    GLfloat rightarm_dynamic_scale[3];
//===================================
    /*left forearm coordinates*/
    /* STATIC_VARIABLES
     * the relative object for left forearm is left arm*/
    GLfloat LEFTFOREARM_STATIC_POSITION[3];
    GLfloat LEFTFOREARM_STATIC_ROTATION[4];
    GLfloat LEFTFOREARM_STATIC_SCALING[3];
    /*--------------------*/
    /* dynamic_variables*/
    GLfloat leftforearm_dynamic_translate[3];
    GLfloat leftforearm_dynamic_rotate[4];
    GLfloat leftforearm_dynamic_scale[3];
//===================================
    /*right forearm coordinates*/
    /* STATIC_VARIABLES
     * the relative object for right forearm is right arm*/
    GLfloat RIGHTFOREARM_STATIC_POSITION[3];
    GLfloat RIGHTFOREARM_STATIC_ROTATION[4];
    GLfloat RIGHTFOREARM_STATIC_SCALING[3];
    /*--------------------*/
    /* dynamic_variables*/
    GLfloat rightforearm_dynamic_translate[3];
    GLfloat rightforearm_dynamic_rotate[4];
    GLfloat rightforearm_dynamic_scale[3];
//===================================
    /*left hand coordinates*/
    /* STATIC_VARIABLES
     * the relative object for left hand is left forearm*/
    GLfloat LEFTHAND_STATIC_POSITION[3];
    GLfloat LEFTHAND_STATIC_ROTATION[4];
    GLfloat LEFTHAND_STATIC_SCALING[3];
    /*--------------------*/
    /* dynamic_variables*/
    GLfloat lefthand_dynamic_translate[3];
    GLfloat lefthand_dynamic_rotate[4];
    GLfloat lefthand_dynamic_scale[3];
//===================================
    /*right hand coordinates*/
    /* STATIC_VARIABLES
     * the relative object for right hand is right forearm*/
    GLfloat RIGHTHAND_STATIC_POSITION[3];
    GLfloat RIGHTHAND_STATIC_ROTATION[4];
    GLfloat RIGHTHAND_STATIC_SCALING[3];
    /*--------------------*/
    /* dynamic_variables*/
    GLfloat righthand_dynamic_translate[3];
    GLfloat righthand_dynamic_rotate[4];
    GLfloat righthand_dynamic_scale[3];
//===================================
    /*left fingers coordinates*/
    /* STATIC_VARIABLES
     * the realtive object for left fingers is left hand
     * to maximum simplify our program, the robot have 3 fingers on each hand*/
    GLfloat LEFTFINGERS_STATIC_POSITION[3][3];
    GLfloat LEFTFINGERS_STATIC_ROTATION[3][4];
    GLfloat LEFTFINGERS_STATIC_SCALING[3][3];
    /*------------------------*/
    /* dynamic_variables*/
    GLfloat leftfingers_dynamic_translate[3][3];
    GLfloat leftfingers_dynamic_rotate[3][4];
    GLfloat leftfingers_dynamic_scale[3][3];
//====================================
    /*right fingers coordinates*/
    /* STATIC_VARIABLES
     * the realtive object for right fingers is right hand
     * to maximum simplify our program, the robot have 3 fingers on each hand*/
    GLfloat RIGHTFINGERS_STATIC_POSITION[3][3];
    GLfloat RIGHTFINGERS_STATIC_ROTATION[3][4];
    GLfloat RIGHTFINGERS_STATIC_SCALING[3][3];
    /*------------------------*/
    /* dynamic_variables*/
    GLfloat rightfingers_dynamic_translate[3][3];
    GLfloat rightfingers_dynamic_rotate[3][4];
    GLfloat rightfingers_dynamic_scale[3][3];
//====================================
    /*left finger-knuckles coordinates*/
    /* STATIC_VARIABLES
     * the father object for left finger-knuckles is left fingers
     */
    GLfloat LEFTFINGERKNUCKLES_STATIC_POSITION[3][3];
    GLfloat LEFTFINGERKNUCKLES_STATIC_ROTATION[3][4];
    GLfloat LEFTFINGERKNUCKLES_STATIC_SCALING[3][3];
    /*-----------------------*/
    /* dynamic variables*/
    GLfloat leftfingerknuckles_dynamic_translate[3][3];
    GLfloat leftfingerknuckles_dynamic_rotate[3][4];
    GLfloat leftfingerknuckles_dynamic_scale[3][3];
//====================================
    /*right finger-knuckles coordinates*/
    /* STATIC_VARIABLES
     * the father object for right finger-knuckles is right fingers
     */
    GLfloat RIGHTFINGERKNUCKLES_STATIC_POSITION[3][3];
    GLfloat RIGHTFINGERKNUCKLES_STATIC_ROTATION[3][4];
    GLfloat RIGHTFINGERKNUCKLES_STATIC_SCALING[3][3];
    /*-----------------------*/
    /* dynamic variables*/
    GLfloat rightfingerknuckles_dynamic_translate[3][3];
    GLfloat rightfingerknuckles_dynamic_rotate[3][4];
    GLfloat rightfingerknuckles_dynamic_scale[3][3];
//====================================
    /*waist coordinates*/
    /* STATIC_VARIABLES
     * the relative object for waist is body*/
    GLfloat WAIST_STATIC_POSITION[3];
    GLfloat WAIST_STATIC_ROTATION[4];
    GLfloat WAIST_STATIC_SCALING[3];
    /*--------------------*/
    /* dynamic_variables
     * note: to maximum simplify out program,
     * the waist of the robot can only rotate
     */
    GLfloat waist_dynamic_rotate[4];
//====================================
    /*left thigh coordinates*/
    /* STATIC_VARIABLES
     * the relative object for left thigh is waist*/
    GLfloat LEFTTHIGH_STATIC_POSITION[3];
    GLfloat LEFTTHIGH_STATIC_ROTATION[4];
    GLfloat LEFTTHIGH_STATIC_SCALING[3];
    /*--------------------*/
    /* dynamic_variables*/
    GLfloat leftthigh_dynamic_translate[3];
    GLfloat leftthigh_dynamic_rotate[4];
    GLfloat leftthigh_dynamic_scale[3];
//====================================
    //TO-DO:Right thigh, two shanks, two feet
    /* right thigh coordinates*/
    /* STATIC_VARIABLES
     * the relative object for right thigh is waist*/
    GLfloat RIGHTTHIGH_STATIC_POSITION[3];
    GLfloat RIGHTTHIGH_STATIC_ROTATION[4];
    GLfloat RIGHTTHIGH_STATIC_SCALING[3];
    /*--------------------*/
    /* dynamic_variables*/
    GLfloat rightthigh_dynamic_translate[3];
    GLfloat rightthigh_dynamic_rotate[4];
    GLfloat rightthigh_dynamic_scale[3];
//====================================
    /*left shank coordinates*/
    /* STATIC_VARIABLES
     * the relative object for left shank is left thigh*/
    GLfloat LEFTSHANK_STATIC_POSITION[3];
    GLfloat LEFTSHANK_STATIC_ROTATION[4];
    GLfloat LEFTSHANK_STATIC_SCALING[3];
    /*--------------------*/
    /* dynamic_variables*/
    GLfloat leftshank_dynamic_translate[3];
    GLfloat leftshank_dynamic_rotate[4];
    GLfloat leftshank_dynamic_scale[3];
//====================================
    /*right shank coordinates*/
    /* STATIC_VARIABLES
     * the relative object for right shank is right thigh*/
    GLfloat RIGHTSHANK_STATIC_POSITION[3];
    GLfloat RIGHTSHANK_STATIC_ROTATION[4];
    GLfloat RIGHTSHANK_STATIC_SCALING[3];
    /*--------------------*/
    /* dynamic_variables*/
    GLfloat rightshank_dynamic_translate[3];
    GLfloat rightshank_dynamic_rotate[4];
    GLfloat rightshank_dynamic_scale[3];
//====================================
    /*left feet coordinates*/
    /* STATIC_VARIABLES
     * the relative object for left feet is left shank*/
    GLfloat LEFTFEET_STATIC_POSITION[3];
    GLfloat LEFTFEET_STATIC_ROTATION[4];
    GLfloat LEFTFEET_STATIC_SCALING[3];
    /*--------------------*/
    /* dynamic_variables*/
    GLfloat leftfeet_dynamic_translate[3];
    GLfloat leftfeet_dynamic_rotate[4];
    GLfloat leftfeet_dynamic_scale[3];
//====================================
    /*right feet coordinates*/
    /* STATIC_VARIABLES
     * the relative object for right feet is right shank*/
    GLfloat RIGHTFEET_STATIC_POSITION[3];
    GLfloat RIGHTFEET_STATIC_ROTATION[4];
    GLfloat RIGHTFEET_STATIC_SCALING[3];
    /*--------------------*/
    /* dynamic_variables*/
    GLfloat rightfeet_dynamic_translate[3];
    GLfloat rightfeet_dynamic_rotate[4];
    GLfloat rightfeet_dynamic_scale[3];
//====================================
    void standby(); //set dynamic coordinates to 0
private:
    void initDefaultCoordinates();  //called when first built coordinate calculator
    //call function standby() and setStaticCoor()
    void setStaticCoor();
//signals:
//public slots:
};

#endif // COORDINATECALCULATOR_H
