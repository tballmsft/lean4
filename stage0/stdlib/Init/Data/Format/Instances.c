// Lean compiler output
// Module: Init.Data.Format.Instances
// Imports: Init.Data.Format.Basic Init.Data.Array.Basic Init.Data.ToString.Basic
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
extern lean_object* l_instReprOption___rarg___closed__2;
lean_object* l_instToFormatProd_match__1___rarg(lean_object*, lean_object*);
lean_object* l_String_toFormat(lean_object*);
lean_object* l_List_format_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_instReprProd___rarg___closed__2;
lean_object* l_Option_format(lean_object*);
lean_object* l_instToString___rarg(lean_object*);
lean_object* l_Std_Format_joinSep___at_String_toFormat___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_List_format_match__1(lean_object*, lean_object*);
lean_object* l_Option_format_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_sbracket___closed__4;
lean_object* l_instToFormatProd_match__1(lean_object*, lean_object*, lean_object*);
lean_object* l_String_splitOn(lean_object*, lean_object*);
extern lean_object* l_Std_Format_paren___closed__2;
extern lean_object* l_instReprProd___rarg___closed__1;
lean_object* l_instToFormatProd___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_format___rarg(lean_object*, lean_object*);
lean_object* l_instToFormatOption_match__1(lean_object*, lean_object*);
lean_object* l_instToFormatList___rarg(lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
extern lean_object* l_Std_Format_paren___closed__4;
lean_object* l_instToString___rarg___closed__1;
lean_object* l_Std_Format_joinSep___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_instReprList___rarg___closed__2;
lean_object* l_Std_fmt___at_instToFormatArray___spec__1___rarg(lean_object*, lean_object*);
extern lean_object* l_Std_Format_sbracket___closed__3;
lean_object* l_instToString(lean_object*);
lean_object* l_Option_format___rarg(lean_object*, lean_object*);
extern lean_object* l_Array_instToStringArray___rarg___closed__1;
lean_object* l_instToFormatProd(lean_object*, lean_object*);
lean_object* l_Std_Format_joinSep___at_String_toFormat___spec__1(lean_object*, lean_object*);
lean_object* l_instToString___rarg___lambda__1(lean_object*);
lean_object* l_Option_format_match__1(lean_object*, lean_object*);
lean_object* l_instToFormatOption(lean_object*);
lean_object* l_instToFormatArray___rarg(lean_object*, lean_object*);
extern lean_object* l_Std_Format_sbracket___closed__2;
lean_object* l_instToFormatOption_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_instToFormatOption___rarg(lean_object*, lean_object*);
lean_object* l_instToFormatArray(lean_object*);
extern lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushNewline___closed__1;
lean_object* l_Std_fmt___at_instToFormatArray___spec__1(lean_object*);
extern lean_object* l_instReprOption___rarg___closed__4;
lean_object* l_instToFormatArray___rarg___closed__1;
lean_object* l_List_format(lean_object*);
extern lean_object* l_Std_Format_paren___closed__3;
lean_object* l_instToFormatList(lean_object*);
lean_object* l_instToString___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_instToString___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instToString___rarg___lambda__1), 1, 0);
return x_1;
}
}
lean_object* l_instToString___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_instToString___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_instToString(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instToString___rarg), 1, 0);
return x_2;
}
}
lean_object* l_List_format_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_List_format_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_format_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_List_format___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = l_instReprList___rarg___closed__2;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_4 = l_instReprProd___rarg___closed__2;
x_5 = l_Std_Format_joinSep___rarg(x_1, x_2, x_4);
x_6 = l_Std_Format_sbracket___closed__3;
x_7 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = l_Std_Format_sbracket___closed__4;
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_Std_Format_sbracket___closed__2;
x_11 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = 0;
x_13 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set_uint8(x_13, sizeof(void*)*1, x_12);
return x_13;
}
}
}
lean_object* l_List_format(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_format___rarg), 2, 0);
return x_2;
}
}
lean_object* l_instToFormatList___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_format___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_instToFormatList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instToFormatList___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Std_fmt___at_instToFormatArray___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_format___rarg(x_1, x_2);
return x_3;
}
}
lean_object* l_Std_fmt___at_instToFormatArray___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_fmt___at_instToFormatArray___spec__1___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_instToFormatArray___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_instToStringArray___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_instToFormatArray___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_array_to_list(lean_box(0), x_2);
x_4 = l_List_format___rarg(x_1, x_3);
x_5 = l_instToFormatArray___rarg___closed__1;
x_6 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
lean_object* l_instToFormatArray(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instToFormatArray___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Option_format_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Option_format_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Option_format_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Option_format___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = l_instReprOption___rarg___closed__2;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_1, x_4);
x_6 = l_instReprOption___rarg___closed__4;
x_7 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
}
lean_object* l_Option_format(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Option_format___rarg), 2, 0);
return x_2;
}
}
lean_object* l_instToFormatOption_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_instToFormatOption_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instToFormatOption_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_instToFormatOption___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = l_instReprOption___rarg___closed__2;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_1, x_4);
x_6 = l_instReprOption___rarg___closed__4;
x_7 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
}
lean_object* l_instToFormatOption(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instToFormatOption___rarg), 2, 0);
return x_2;
}
}
lean_object* l_instToFormatProd_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_instToFormatProd_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instToFormatProd_match__1___rarg), 2, 0);
return x_4;
}
}
lean_object* l_instToFormatProd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_apply_1(x_1, x_4);
x_7 = l_instReprProd___rarg___closed__1;
x_8 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_box(1);
x_10 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_apply_1(x_2, x_5);
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Std_Format_paren___closed__3;
x_14 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
x_15 = l_Std_Format_paren___closed__4;
x_16 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Std_Format_paren___closed__2;
x_18 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = 0;
x_20 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set_uint8(x_20, sizeof(void*)*1, x_19);
return x_20;
}
}
lean_object* l_instToFormatProd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instToFormatProd___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Std_Format_joinSep___at_String_toFormat___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
lean_inc(x_2);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_2);
x_10 = l_Std_Format_joinSep___at_String_toFormat___spec__1(x_4, x_2);
x_11 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
}
lean_object* l_String_toFormat(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___private_Init_Data_Format_Basic_0__Std_Format_pushNewline___closed__1;
x_3 = l_String_splitOn(x_1, x_2);
x_4 = lean_box(1);
x_5 = l_Std_Format_joinSep___at_String_toFormat___spec__1(x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_Format_joinSep___at_String_toFormat___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_Format_joinSep___at_String_toFormat___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init_Data_Format_Basic(lean_object*);
lean_object* initialize_Init_Data_Array_Basic(lean_object*);
lean_object* initialize_Init_Data_ToString_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Data_Format_Instances(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Format_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instToString___rarg___closed__1 = _init_l_instToString___rarg___closed__1();
lean_mark_persistent(l_instToString___rarg___closed__1);
l_instToFormatArray___rarg___closed__1 = _init_l_instToFormatArray___rarg___closed__1();
lean_mark_persistent(l_instToFormatArray___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif