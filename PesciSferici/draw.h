#pragma once
#include <FL/gl.h>
#include <FL/glu.h>
#include <GL/glut.h>	  
#include <math.h>
#include "Fish.h"
#include "School.h"

void draw_scene(void);

//prova per potenziale repulsivo+attrattivo.
float posizione1[3] = { 0  ,10, 1.0 };
float velocit�1[3] = { 0, -6, 0.2 };

float posizione2[3] = {0, 0, 0 };
float velocit�2[3] = { 0.3, 0.7, 0.1 };

float posizione3[3] = { 3, -3, -0.2 };
float velocit�3[3] = { -0.3, 0.2, 0.3 };

float posizione4[3] = { 2., -0.3, 0.5 };
float velocit�4[3] = { 1, 0.8, -0.3 };

Fish uno (posizione1, velocit�1);
Fish due(posizione2, velocit�2);
Fish tre(posizione3, velocit�3);
Fish quattro(posizione4, velocit�4);
School un(&uno);
School du(&due);
School tr(&tre);
School qu(&quattro);
vector<School> pozza = { un, du, tr, qu};