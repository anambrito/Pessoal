#ifndef TECLADO_H
#define TECLADO_H

#include "func.h"


void menu (unsigned char key);
void pausar(unsigned char key);
void despausar(unsigned char key);
void reiniciar(unsigned char key);
void tecladoWASD(unsigned char key);
void tecladoAD(unsigned char key);
void GameOver(unsigned char key);
void esc(unsigned char key);
void teclado(unsigned char key, int a, int b);

#endif
