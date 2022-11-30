#include <stdio.h>
#include <string.h>
#include "liste.h"
#  include <config.h>


#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

enum {
 Nom,
 Id,
 Nb_cond,
 COLUMNS

};



void afficher_liste(GtkTreeView   *listee)
{
 //Declarations
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;


char id[10],nb_cond[3],nom[20];	
liste l;
FILE *f;
store=NULL;


store=gtk_tree_view_get_model(listee);
if(store==NULL)
{
 renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Nom",renderer,"text",Nom,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(listee),column);

 renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Identifiant",renderer,"text",Id,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(listee),column);

renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Nombre de condidat",renderer,"text",Nb_cond,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(listee),column);

}

store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);

f=fopen("/home/firas/work/fichier_text/les_liste.txt","r");	

if (f==NULL){ return;}	
else {f=fopen("/home/firas/work/fichier_text/les_liste.txt","a+");

while (fscanf(f,"%s %d %d %d %d %d %d %d\n",l.nom_liste,&l.id_liste,&l.id_tete_liste,&l.nombre_condidat,&l.date.jour,&l.date.mois,&l.date.annee,&l.nbr_vote)!=EOF)
{
sprintf(id,"%d",l.id_liste);
sprintf(nb_cond,"%d",l.nombre_condidat);
strcpy(nom,l.nom_liste);
 gtk_list_store_append (store,&iter);
gtk_list_store_set(store,&iter,Nom,nom,Id,id,Nb_cond,nb_cond,-1);

}}
fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(listee),GTK_TREE_MODEL(store));
g_object_unref(store);

//}	


	
}
