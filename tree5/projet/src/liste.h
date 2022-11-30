#include <stdio.h>
#include <string.h>
#  include <config.h>


#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

typedef struct
{
	int jour;
	int mois;
	int annee;

} date_liste;

typedef struct 
{
	char nom_liste[50];
	int id_liste;
	int id_tete_liste;
	int nombre_condidat;
	date_liste date;
	int nbr_vote;
} liste;

int ajouter_liste(liste l);
int modif_liste( int id, liste nouv );
liste recherche_liste(int id) ;
int supprime_liste(int id);
int nbv ();
int l_ordre();
void afficher_liste(GtkTreeView   *listee);

