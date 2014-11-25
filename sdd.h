#ifndef SDD_H
#define SDD_H

//PREPROCESSEUR
#define COTE_DAMIER 10
#define TAILLE_DAMIER COTE_DAMIER*COTE_DAMIER
#define NB_PION_B 20
#define NB_PION_N 20
#define NB_PION NB_PION_B+NB_PION_N

//STRUCTURES
typedef struct{
	int x;
	int y;
}POS;

typedef enum{
	T_PION,
	T_DAME
}eTYPE_PION;

typedef enum{
	BLANC,
	NOIR
}eCOULEUR;

typedef struct{
	POS position;
	eCOULEUR couleur;
	eTYPE_PION type;
}PION;

typedef struct{
	eCOULEUR c_tour;
	int nb_pion_b;
	int nb_pion_n;
	PION **liste_pion;
}DAMIER;

//FONCTIONS
DAMIER* init_damier();
int free_damier(DAMIER *damier);
void tour_suivant(DAMIER *damier);
PION* rech_pion_c(DAMIER *damier, int x, int y);
void aff_damier(DAMIER damier);
int deplacer(DAMIER *damier, int dx, int dy, int ax, int ay);
int prendre(DAMIER *damier, int dx, int dy, int ax, int ay);





#endif
