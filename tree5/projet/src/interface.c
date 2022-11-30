/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *fixed1;
  GtkWidget *t1;
  GtkWidget *_2;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("window1"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);

  t1 = gtk_tree_view_new ();
  gtk_widget_show (t1);
  gtk_fixed_put (GTK_FIXED (fixed1), t1, 80, 64);
  gtk_widget_set_size_request (t1, 300, 200);

  _2 = gtk_button_new_with_mnemonic (_("button1"));
  gtk_widget_show (_2);
  gtk_fixed_put (GTK_FIXED (fixed1), _2, 208, 288);
  gtk_widget_set_size_request (_2, 66, 29);

  g_signal_connect ((gpointer) t1, "row_activated",
                    G_CALLBACK (on_t1_row_activated),
                    NULL);
  g_signal_connect ((gpointer) _2, "clicked",
                    G_CALLBACK (on_2_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, t1, "t1");
  GLADE_HOOKUP_OBJECT (window1, _2, "_2");

  return window1;
}

