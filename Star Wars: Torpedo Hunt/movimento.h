#ifndef MOVIMENTO_H
#define MOVIMENTO_H

#include "teclado.h"
#include "func.h"
#include "callbacksGerais.h"

double calc_dist(torp n1, torp n2);
void bordasWASD ();
void bordasAD();
void atualiza(int idx);

#endif
