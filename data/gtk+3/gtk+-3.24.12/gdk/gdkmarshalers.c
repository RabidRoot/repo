/* This file is generated by glib-genmarshal, do not modify it. This code is licensed under the same license as the containing project. Note that it links to GLib, so must comply with the LGPL linking clauses. */
#include <glib-object.h>

#ifdef G_ENABLE_DEBUG
#define g_marshal_value_peek_boolean(v)  g_value_get_boolean (v)
#define g_marshal_value_peek_char(v)     g_value_get_schar (v)
#define g_marshal_value_peek_uchar(v)    g_value_get_uchar (v)
#define g_marshal_value_peek_int(v)      g_value_get_int (v)
#define g_marshal_value_peek_uint(v)     g_value_get_uint (v)
#define g_marshal_value_peek_long(v)     g_value_get_long (v)
#define g_marshal_value_peek_ulong(v)    g_value_get_ulong (v)
#define g_marshal_value_peek_int64(v)    g_value_get_int64 (v)
#define g_marshal_value_peek_uint64(v)   g_value_get_uint64 (v)
#define g_marshal_value_peek_enum(v)     g_value_get_enum (v)
#define g_marshal_value_peek_flags(v)    g_value_get_flags (v)
#define g_marshal_value_peek_float(v)    g_value_get_float (v)
#define g_marshal_value_peek_double(v)   g_value_get_double (v)
#define g_marshal_value_peek_string(v)   (char*) g_value_get_string (v)
#define g_marshal_value_peek_param(v)    g_value_get_param (v)
#define g_marshal_value_peek_boxed(v)    g_value_get_boxed (v)
#define g_marshal_value_peek_pointer(v)  g_value_get_pointer (v)
#define g_marshal_value_peek_object(v)   g_value_get_object (v)
#define g_marshal_value_peek_variant(v)  g_value_get_variant (v)
#else /* !G_ENABLE_DEBUG */
/* WARNING: This code accesses GValues directly, which is UNSUPPORTED API.
 *          Do not access GValues directly in your code. Instead, use the
 *          g_value_get_*() functions
 */
#define g_marshal_value_peek_boolean(v)  (v)->data[0].v_int
#define g_marshal_value_peek_char(v)     (v)->data[0].v_int
#define g_marshal_value_peek_uchar(v)    (v)->data[0].v_uint
#define g_marshal_value_peek_int(v)      (v)->data[0].v_int
#define g_marshal_value_peek_uint(v)     (v)->data[0].v_uint
#define g_marshal_value_peek_long(v)     (v)->data[0].v_long
#define g_marshal_value_peek_ulong(v)    (v)->data[0].v_ulong
#define g_marshal_value_peek_int64(v)    (v)->data[0].v_int64
#define g_marshal_value_peek_uint64(v)   (v)->data[0].v_uint64
#define g_marshal_value_peek_enum(v)     (v)->data[0].v_long
#define g_marshal_value_peek_flags(v)    (v)->data[0].v_ulong
#define g_marshal_value_peek_float(v)    (v)->data[0].v_float
#define g_marshal_value_peek_double(v)   (v)->data[0].v_double
#define g_marshal_value_peek_string(v)   (v)->data[0].v_pointer
#define g_marshal_value_peek_param(v)    (v)->data[0].v_pointer
#define g_marshal_value_peek_boxed(v)    (v)->data[0].v_pointer
#define g_marshal_value_peek_pointer(v)  (v)->data[0].v_pointer
#define g_marshal_value_peek_object(v)   (v)->data[0].v_pointer
#define g_marshal_value_peek_variant(v)  (v)->data[0].v_pointer
#endif /* !G_ENABLE_DEBUG */

/* VOID:POINTER,POINTER,POINTER (./gdkmarshalers.list:3) */
void
_gdk_marshal_VOID__POINTER_POINTER_POINTER (GClosure     *closure,
                                            GValue       *return_value G_GNUC_UNUSED,
                                            guint         n_param_values,
                                            const GValue *param_values,
                                            gpointer      invocation_hint G_GNUC_UNUSED,
                                            gpointer      marshal_data)
{
  typedef void (*GMarshalFunc_VOID__POINTER_POINTER_POINTER) (gpointer data1,
                                                              gpointer arg1,
                                                              gpointer arg2,
                                                              gpointer arg3,
                                                              gpointer data2);
  GCClosure *cc = (GCClosure *) closure;
  gpointer data1, data2;
  GMarshalFunc_VOID__POINTER_POINTER_POINTER callback;

  g_return_if_fail (n_param_values == 4);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_VOID__POINTER_POINTER_POINTER) (marshal_data ? marshal_data : cc->callback);

  callback (data1,
            g_marshal_value_peek_pointer (param_values + 1),
            g_marshal_value_peek_pointer (param_values + 2),
            g_marshal_value_peek_pointer (param_values + 3),
            data2);
}

void
_gdk_marshal_VOID__POINTER_POINTER_POINTERv (GClosure *closure,
                                             GValue   *return_value G_GNUC_UNUSED,
                                             gpointer  instance,
                                             va_list   args,
                                             gpointer  marshal_data,
                                             int       n_params,
                                             GType    *param_types)
{
  typedef void (*GMarshalFunc_VOID__POINTER_POINTER_POINTER) (gpointer data1,
                                                              gpointer arg1,
                                                              gpointer arg2,
                                                              gpointer arg3,
                                                              gpointer data2);
  GCClosure *cc = (GCClosure *) closure;
  gpointer data1, data2;
  GMarshalFunc_VOID__POINTER_POINTER_POINTER callback;
  gpointer arg0;
  gpointer arg1;
  gpointer arg2;
  va_list args_copy;

  G_VA_COPY (args_copy, args);
  arg0 = (gpointer) va_arg (args_copy, gpointer);
  arg1 = (gpointer) va_arg (args_copy, gpointer);
  arg2 = (gpointer) va_arg (args_copy, gpointer);
  va_end (args_copy);


  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = instance;
    }
  else
    {
      data1 = instance;
      data2 = closure->data;
    }
  callback = (GMarshalFunc_VOID__POINTER_POINTER_POINTER) (marshal_data ? marshal_data : cc->callback);

  callback (data1,
            arg0,
            arg1,
            arg2,
            data2);

}

/* OBJECT:VOID (./gdkmarshalers.list:4) */
void
_gdk_marshal_OBJECT__VOID (GClosure     *closure,
                           GValue       *return_value,
                           guint         n_param_values,
                           const GValue *param_values,
                           gpointer      invocation_hint G_GNUC_UNUSED,
                           gpointer      marshal_data)
{
  typedef GObject* (*GMarshalFunc_OBJECT__VOID) (gpointer data1,
                                                 gpointer data2);
  GCClosure *cc = (GCClosure *) closure;
  gpointer data1, data2;
  GMarshalFunc_OBJECT__VOID callback;
  GObject* v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 1);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_OBJECT__VOID) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       data2);

  g_value_take_object (return_value, v_return);
}

void
_gdk_marshal_OBJECT__VOIDv (GClosure *closure,
                            GValue   *return_value,
                            gpointer  instance,
                            va_list   args,
                            gpointer  marshal_data,
                            int       n_params,
                            GType    *param_types)
{
  typedef GObject* (*GMarshalFunc_OBJECT__VOID) (gpointer data1,
                                                 gpointer data2);
  GCClosure *cc = (GCClosure *) closure;
  gpointer data1, data2;
  GMarshalFunc_OBJECT__VOID callback;
  GObject* v_return;

  g_return_if_fail (return_value != NULL);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = instance;
    }
  else
    {
      data1 = instance;
      data2 = closure->data;
    }
  callback = (GMarshalFunc_OBJECT__VOID) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       data2);


  g_value_take_object (return_value, v_return);
}

/* OBJECT:DOUBLE,DOUBLE (./gdkmarshalers.list:5) */
void
_gdk_marshal_OBJECT__DOUBLE_DOUBLE (GClosure     *closure,
                                    GValue       *return_value,
                                    guint         n_param_values,
                                    const GValue *param_values,
                                    gpointer      invocation_hint G_GNUC_UNUSED,
                                    gpointer      marshal_data)
{
  typedef GObject* (*GMarshalFunc_OBJECT__DOUBLE_DOUBLE) (gpointer data1,
                                                          gdouble arg1,
                                                          gdouble arg2,
                                                          gpointer data2);
  GCClosure *cc = (GCClosure *) closure;
  gpointer data1, data2;
  GMarshalFunc_OBJECT__DOUBLE_DOUBLE callback;
  GObject* v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 3);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_OBJECT__DOUBLE_DOUBLE) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_double (param_values + 1),
                       g_marshal_value_peek_double (param_values + 2),
                       data2);

  g_value_take_object (return_value, v_return);
}

void
_gdk_marshal_OBJECT__DOUBLE_DOUBLEv (GClosure *closure,
                                     GValue   *return_value,
                                     gpointer  instance,
                                     va_list   args,
                                     gpointer  marshal_data,
                                     int       n_params,
                                     GType    *param_types)
{
  typedef GObject* (*GMarshalFunc_OBJECT__DOUBLE_DOUBLE) (gpointer data1,
                                                          gdouble arg1,
                                                          gdouble arg2,
                                                          gpointer data2);
  GCClosure *cc = (GCClosure *) closure;
  gpointer data1, data2;
  GMarshalFunc_OBJECT__DOUBLE_DOUBLE callback;
  GObject* v_return;
  gdouble arg0;
  gdouble arg1;
  va_list args_copy;

  G_VA_COPY (args_copy, args);
  arg0 = (gdouble) va_arg (args_copy, gdouble);
  arg1 = (gdouble) va_arg (args_copy, gdouble);
  va_end (args_copy);

  g_return_if_fail (return_value != NULL);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = instance;
    }
  else
    {
      data1 = instance;
      data2 = closure->data;
    }
  callback = (GMarshalFunc_OBJECT__DOUBLE_DOUBLE) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       arg0,
                       arg1,
                       data2);


  g_value_take_object (return_value, v_return);
}

/* BOXED:INT,INT (./gdkmarshalers.list:6) */
void
_gdk_marshal_BOXED__INT_INT (GClosure     *closure,
                             GValue       *return_value,
                             guint         n_param_values,
                             const GValue *param_values,
                             gpointer      invocation_hint G_GNUC_UNUSED,
                             gpointer      marshal_data)
{
  typedef gpointer (*GMarshalFunc_BOXED__INT_INT) (gpointer data1,
                                                   gint arg1,
                                                   gint arg2,
                                                   gpointer data2);
  GCClosure *cc = (GCClosure *) closure;
  gpointer data1, data2;
  GMarshalFunc_BOXED__INT_INT callback;
  gpointer v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 3);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOXED__INT_INT) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_int (param_values + 1),
                       g_marshal_value_peek_int (param_values + 2),
                       data2);

  g_value_take_boxed (return_value, v_return);
}

void
_gdk_marshal_BOXED__INT_INTv (GClosure *closure,
                              GValue   *return_value,
                              gpointer  instance,
                              va_list   args,
                              gpointer  marshal_data,
                              int       n_params,
                              GType    *param_types)
{
  typedef gpointer (*GMarshalFunc_BOXED__INT_INT) (gpointer data1,
                                                   gint arg1,
                                                   gint arg2,
                                                   gpointer data2);
  GCClosure *cc = (GCClosure *) closure;
  gpointer data1, data2;
  GMarshalFunc_BOXED__INT_INT callback;
  gpointer v_return;
  gint arg0;
  gint arg1;
  va_list args_copy;

  G_VA_COPY (args_copy, args);
  arg0 = (gint) va_arg (args_copy, gint);
  arg1 = (gint) va_arg (args_copy, gint);
  va_end (args_copy);

  g_return_if_fail (return_value != NULL);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = instance;
    }
  else
    {
      data1 = instance;
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOXED__INT_INT) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       arg0,
                       arg1,
                       data2);


  g_value_take_boxed (return_value, v_return);
}

/* VOID:DOUBLE,DOUBLE,POINTER,POINTER (./gdkmarshalers.list:7) */
void
_gdk_marshal_VOID__DOUBLE_DOUBLE_POINTER_POINTER (GClosure     *closure,
                                                  GValue       *return_value G_GNUC_UNUSED,
                                                  guint         n_param_values,
                                                  const GValue *param_values,
                                                  gpointer      invocation_hint G_GNUC_UNUSED,
                                                  gpointer      marshal_data)
{
  typedef void (*GMarshalFunc_VOID__DOUBLE_DOUBLE_POINTER_POINTER) (gpointer data1,
                                                                    gdouble arg1,
                                                                    gdouble arg2,
                                                                    gpointer arg3,
                                                                    gpointer arg4,
                                                                    gpointer data2);
  GCClosure *cc = (GCClosure *) closure;
  gpointer data1, data2;
  GMarshalFunc_VOID__DOUBLE_DOUBLE_POINTER_POINTER callback;

  g_return_if_fail (n_param_values == 5);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_VOID__DOUBLE_DOUBLE_POINTER_POINTER) (marshal_data ? marshal_data : cc->callback);

  callback (data1,
            g_marshal_value_peek_double (param_values + 1),
            g_marshal_value_peek_double (param_values + 2),
            g_marshal_value_peek_pointer (param_values + 3),
            g_marshal_value_peek_pointer (param_values + 4),
            data2);
}

void
_gdk_marshal_VOID__DOUBLE_DOUBLE_POINTER_POINTERv (GClosure *closure,
                                                   GValue   *return_value G_GNUC_UNUSED,
                                                   gpointer  instance,
                                                   va_list   args,
                                                   gpointer  marshal_data,
                                                   int       n_params,
                                                   GType    *param_types)
{
  typedef void (*GMarshalFunc_VOID__DOUBLE_DOUBLE_POINTER_POINTER) (gpointer data1,
                                                                    gdouble arg1,
                                                                    gdouble arg2,
                                                                    gpointer arg3,
                                                                    gpointer arg4,
                                                                    gpointer data2);
  GCClosure *cc = (GCClosure *) closure;
  gpointer data1, data2;
  GMarshalFunc_VOID__DOUBLE_DOUBLE_POINTER_POINTER callback;
  gdouble arg0;
  gdouble arg1;
  gpointer arg2;
  gpointer arg3;
  va_list args_copy;

  G_VA_COPY (args_copy, args);
  arg0 = (gdouble) va_arg (args_copy, gdouble);
  arg1 = (gdouble) va_arg (args_copy, gdouble);
  arg2 = (gpointer) va_arg (args_copy, gpointer);
  arg3 = (gpointer) va_arg (args_copy, gpointer);
  va_end (args_copy);


  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = instance;
    }
  else
    {
      data1 = instance;
      data2 = closure->data;
    }
  callback = (GMarshalFunc_VOID__DOUBLE_DOUBLE_POINTER_POINTER) (marshal_data ? marshal_data : cc->callback);

  callback (data1,
            arg0,
            arg1,
            arg2,
            arg3,
            data2);

}

/* VOID:POINTER,POINTER,BOOLEAN,BOOLEAN (./gdkmarshalers.list:8) */
void
_gdk_marshal_VOID__POINTER_POINTER_BOOLEAN_BOOLEAN (GClosure     *closure,
                                                    GValue       *return_value G_GNUC_UNUSED,
                                                    guint         n_param_values,
                                                    const GValue *param_values,
                                                    gpointer      invocation_hint G_GNUC_UNUSED,
                                                    gpointer      marshal_data)
{
  typedef void (*GMarshalFunc_VOID__POINTER_POINTER_BOOLEAN_BOOLEAN) (gpointer data1,
                                                                      gpointer arg1,
                                                                      gpointer arg2,
                                                                      gboolean arg3,
                                                                      gboolean arg4,
                                                                      gpointer data2);
  GCClosure *cc = (GCClosure *) closure;
  gpointer data1, data2;
  GMarshalFunc_VOID__POINTER_POINTER_BOOLEAN_BOOLEAN callback;

  g_return_if_fail (n_param_values == 5);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_VOID__POINTER_POINTER_BOOLEAN_BOOLEAN) (marshal_data ? marshal_data : cc->callback);

  callback (data1,
            g_marshal_value_peek_pointer (param_values + 1),
            g_marshal_value_peek_pointer (param_values + 2),
            g_marshal_value_peek_boolean (param_values + 3),
            g_marshal_value_peek_boolean (param_values + 4),
            data2);
}

void
_gdk_marshal_VOID__POINTER_POINTER_BOOLEAN_BOOLEANv (GClosure *closure,
                                                     GValue   *return_value G_GNUC_UNUSED,
                                                     gpointer  instance,
                                                     va_list   args,
                                                     gpointer  marshal_data,
                                                     int       n_params,
                                                     GType    *param_types)
{
  typedef void (*GMarshalFunc_VOID__POINTER_POINTER_BOOLEAN_BOOLEAN) (gpointer data1,
                                                                      gpointer arg1,
                                                                      gpointer arg2,
                                                                      gboolean arg3,
                                                                      gboolean arg4,
                                                                      gpointer data2);
  GCClosure *cc = (GCClosure *) closure;
  gpointer data1, data2;
  GMarshalFunc_VOID__POINTER_POINTER_BOOLEAN_BOOLEAN callback;
  gpointer arg0;
  gpointer arg1;
  gboolean arg2;
  gboolean arg3;
  va_list args_copy;

  G_VA_COPY (args_copy, args);
  arg0 = (gpointer) va_arg (args_copy, gpointer);
  arg1 = (gpointer) va_arg (args_copy, gpointer);
  arg2 = (gboolean) va_arg (args_copy, gboolean);
  arg3 = (gboolean) va_arg (args_copy, gboolean);
  va_end (args_copy);


  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = instance;
    }
  else
    {
      data1 = instance;
      data2 = closure->data;
    }
  callback = (GMarshalFunc_VOID__POINTER_POINTER_BOOLEAN_BOOLEAN) (marshal_data ? marshal_data : cc->callback);

  callback (data1,
            arg0,
            arg1,
            arg2,
            arg3,
            data2);

}
