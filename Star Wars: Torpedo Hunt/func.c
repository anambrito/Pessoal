#include "func.h"


torp squad[50];
pontos posicaoQuadrado;
tamanho tamanhoQuadrado;

pontos posicaoObj;
tamanho tamanhoObj;

float posicaoAnteriorX;
float posicaoAnteriorY;

float velocidade = 0.17;
float velocidadeInicial = 0.17;
float telaLimite = 9;

char tecla;
int angulo = 1;
float rotacao = 0;
int tamSquad =0;

GLuint texturaMenu;
GLuint texturaControls;
GLuint texturaCredits;
GLuint texturaNaveWASD;
GLuint texturaNaveAD;
GLuint texturaSpaceWASD;
GLuint texturaSpaceAD;
GLuint texturaObj;
GLuint texturaPause;
GLuint texturaReinicia;
GLuint texturaGameOver;
GLuint texturaESC;

GLfloat posicaoNaveX = 0, posicaoNaveY = 0; 
GLfloat speed = 0.03;
GLfloat pause = 0;
GLfloat pause2 =0;

int ModoDeJogo = 0;
int tipoMusica = 0;

GLfloat velocidadeAngular = 0.5;
GLfloat velocidadeTangencial = 0.07;


Mix_Music *musica = NULL; 
Mix_Chunk *somObj = NULL; 
Mix_Chunk *somPortal = NULL; 
Mix_Chunk *somMenu = NULL;
Mix_Chunk *somMais = NULL;
Mix_Chunk *somMenos = NULL;

int telaMenu = 1;
int telaComandos=0;
int telaCreditos=0;
int telaPause = 0;
int telaReinicia = 0;
int telaGameOver = 0;
int telaESC = 0;

#define radianoParaGraus(radianos) (radianos * (180.0 / M_PI))
#define grausParaRadianos(graus) ((graus * M_PI) / 180.0)
