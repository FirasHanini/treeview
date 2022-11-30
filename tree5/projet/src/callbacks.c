#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "liste.h"
#include<string.h>

void
on_t1_row_activated                    (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
 GtkTreeIter iter;
gchar *Nom;
gchar *Id;
gchar *Nb_cond;

liste l;

GtkTreeModel *model =gtk_tree_view_get_model(treeview);

if (gtk_tree_model_get_iter(model, &iter, path)){
gtk_tree_model_get(GTK_LIST_STORE(model), &iter,0,&Nom,1,&Id,2,&Nb_cond,-1);


strcpy(l.nom_liste,Nom);
strcpy(l.id_liste,Id);
strcpy(l.nombre_condidat,Nb_cond);}

afficher_liste(treeview);
}






void
on_2_clicked                           (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window1;
GtkTreeView  *tree;
window1=lookup_widget(objet_graphique,"window1");
window1=create_window1();
gtk_widget_show(window1);

tree=lookup_widget(window1,"t1");
 afficher_liste(tree);
}

