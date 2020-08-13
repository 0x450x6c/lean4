// Lean compiler output
// Module: Lean.Elab.Level
// Imports: Init Lean.Meta.LevelDefEq Lean.Elab.Exception Lean.Elab.Log
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
lean_object* l_Lean_Elab_Level_withRef___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_mkFreshLevelMVar___rarg(lean_object*);
lean_object* l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___closed__9;
lean_object* l_Lean_Syntax_isNatLitAux(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___closed__4;
lean_object* l_Lean_Elab_Level_elabLevel___main___closed__7;
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_addLevelMVarDecl(lean_object*, lean_object*);
lean_object* l_ReaderT_read___at_Lean_Elab_Level_LevelElabM_MonadLog___spec__1(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getIdAt(lean_object*, lean_object*);
uint8_t l_List_elem___main___at_Lean_NameHashSet_insert___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__3(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Level_max___elambda__1___closed__1;
extern lean_object* l_Lean_Parser_Level_num___elambda__1___closed__1;
lean_object* lean_array_get_size(lean_object*);
extern lean_object* l_String_splitAux___main___closed__1;
lean_object* l___private_Init_Data_Array_Basic_4__foldrRangeMAux___main___at_Lean_Elab_Level_elabLevel___main___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_elabLevel(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_mkFreshLevelMVar___boxed(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat___main(lean_object*);
lean_object* l_Lean_Elab_mkMessageAt___at_Lean_Elab_Level_elabLevel___main___spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_elabLevel___main___closed__6;
extern lean_object* l_Lean_Parser_Level_imax___elambda__1___closed__1;
lean_object* l_Lean_mkLevelIMax(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_numLitKind;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_mkFreshLevelMVar(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_4__foldrRangeMAux___main___at_Lean_Elab_Level_elabLevel___main___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Level_addLit___elambda__1___closed__2;
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___closed__2;
lean_object* l_Lean_Elab_Level_elabLevel___main___closed__5;
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___closed__6;
lean_object* l_Lean_Elab_mkMessageAt___at_Lean_Elab_Level_elabLevel___main___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelMax(lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Elab_Level_LevelElabM_MonadLog___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_addOffsetAux___main(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___closed__8;
lean_object* l_Lean_Elab_Level_mkFreshId(lean_object*);
lean_object* l_Lean_Elab_Level_elabLevel___main___closed__3;
lean_object* l_ReaderT_bind___at_Lean_Elab_Level_LevelElabM_MonadLog___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___closed__1;
lean_object* l_Lean_Elab_Level_elabLevel___main___closed__9;
lean_object* l_Lean_Elab_mkMessage___at_Lean_Elab_Level_elabLevel___main___spec__2(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_elabLevel___main___closed__1;
lean_object* l_Lean_Elab_Level_mkFreshId___rarg(lean_object*);
extern lean_object* l_Lean_Parser_Level_ident___elambda__1___closed__1;
lean_object* l_Lean_mkLevelMVar(lean_object*);
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Level_elabLevel___main___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog;
extern lean_object* l_Lean_Parser_Level_hole___elambda__1___closed__1;
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___closed__7;
lean_object* l_Lean_Elab_mkMessage___at_Lean_Elab_Level_elabLevel___main___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___closed__5;
lean_object* l_Lean_Elab_Level_withRef(lean_object*);
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__3___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___closed__3;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_4__foldrRangeMAux___main___at_Lean_Elab_Level_elabLevel___main___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos(lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_levelParser_parenthesizer___lambda__1___closed__3;
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Level_elabLevel___main___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_withRef___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_mkFreshId___boxed(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_4__foldrRangeMAux___main___at_Lean_Elab_Level_elabLevel___main___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(lean_object*);
lean_object* l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_elabLevel___main___closed__4;
lean_object* l_Lean_Elab_Level_elabLevel___main___closed__2;
lean_object* l_Lean_Elab_Level_elabLevel___main___closed__8;
lean_object* l_Lean_Elab_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_elabLevel___main(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_read___at_Lean_Elab_Level_LevelElabM_MonadLog___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_ReaderT_bind___at_Lean_Elab_Level_LevelElabM_MonadLog___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
x_5 = lean_apply_2(x_1, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_3(x_2, x_6, x_3, x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_5);
if (x_9 == 0)
{
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_5);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_ReaderT_bind___at_Lean_Elab_Level_LevelElabM_MonadLog___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Level_LevelElabM_MonadLog___spec__2___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Level_LevelElabM_MonadLog___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ReaderT_read___at_Lean_Elab_Level_LevelElabM_MonadLog___spec__1), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Level_LevelElabM_MonadLog___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__1___boxed), 3, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Level_LevelElabM_MonadLog___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Level_LevelElabM_MonadLog___closed__1;
x_2 = l_Lean_Elab_Level_LevelElabM_MonadLog___closed__2;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Level_LevelElabM_MonadLog___spec__2___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Level_LevelElabM_MonadLog___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__2___boxed), 3, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Level_LevelElabM_MonadLog___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Level_LevelElabM_MonadLog___closed__1;
x_2 = l_Lean_Elab_Level_LevelElabM_MonadLog___closed__4;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Level_LevelElabM_MonadLog___spec__2___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Level_LevelElabM_MonadLog___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__3___boxed), 3, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Level_LevelElabM_MonadLog___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Level_LevelElabM_MonadLog___closed__1;
x_2 = l_Lean_Elab_Level_LevelElabM_MonadLog___closed__6;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Level_LevelElabM_MonadLog___spec__2___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Level_LevelElabM_MonadLog___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__4___boxed), 3, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Level_LevelElabM_MonadLog___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Elab_Level_LevelElabM_MonadLog___closed__3;
x_2 = l_Lean_Elab_Level_LevelElabM_MonadLog___closed__5;
x_3 = l_Lean_Elab_Level_LevelElabM_MonadLog___closed__7;
x_4 = l_Lean_Elab_Level_LevelElabM_MonadLog___closed__8;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Level_LevelElabM_MonadLog() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Level_LevelElabM_MonadLog___closed__9;
return x_1;
}
}
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__3(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Level_LevelElabM_MonadLog___lambda__4(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_Level_withRef___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_3, 2);
x_7 = l_Lean_Elab_replaceRef(x_1, x_6);
lean_dec(x_6);
lean_ctor_set(x_3, 2, x_7);
x_8 = lean_apply_2(x_2, x_3, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_3, 1);
x_11 = lean_ctor_get(x_3, 2);
x_12 = lean_ctor_get(x_3, 3);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_3);
x_13 = l_Lean_Elab_replaceRef(x_1, x_11);
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_14, 0, x_9);
lean_ctor_set(x_14, 1, x_10);
lean_ctor_set(x_14, 2, x_13);
lean_ctor_set(x_14, 3, x_12);
x_15 = lean_apply_2(x_2, x_14, x_4);
return x_15;
}
}
}
lean_object* l_Lean_Elab_Level_withRef(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Level_withRef___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Level_withRef___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Level_withRef___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Level_mkFreshId___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
x_7 = lean_name_mk_numeral(x_5, x_6);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_6, x_8);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_9);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_1);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_12);
lean_inc(x_11);
x_13 = lean_name_mk_numeral(x_11, x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_12, x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_1, 0, x_16);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_1);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 x_22 = x_18;
} else {
 lean_dec_ref(x_18);
 x_22 = lean_box(0);
}
lean_inc(x_21);
lean_inc(x_20);
x_23 = lean_name_mk_numeral(x_20, x_21);
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_add(x_21, x_24);
lean_dec(x_21);
if (lean_is_scalar(x_22)) {
 x_26 = lean_alloc_ctor(0, 2, 0);
} else {
 x_26 = x_22;
}
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_19);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_23);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
lean_object* l_Lean_Elab_Level_mkFreshId(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Level_mkFreshId___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Level_mkFreshId___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Level_mkFreshId(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Level_mkFreshLevelMVar___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_Elab_Level_mkFreshId___rarg(x_1);
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_6 = l_Lean_mkLevelMVar(x_4);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 1);
x_9 = l_Lean_MetavarContext_addLevelMVarDecl(x_8, x_4);
lean_ctor_set(x_5, 1, x_9);
lean_ctor_set(x_2, 0, x_6);
return x_2;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_5);
x_12 = l_Lean_MetavarContext_addLevelMVarDecl(x_11, x_4);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set(x_2, 1, x_13);
lean_ctor_set(x_2, 0, x_6);
return x_2;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_2);
lean_inc(x_14);
x_16 = l_Lean_mkLevelMVar(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
if (lean_is_exclusive(x_15)) {
 lean_ctor_release(x_15, 0);
 lean_ctor_release(x_15, 1);
 x_19 = x_15;
} else {
 lean_dec_ref(x_15);
 x_19 = lean_box(0);
}
x_20 = l_Lean_MetavarContext_addLevelMVarDecl(x_18, x_14);
if (lean_is_scalar(x_19)) {
 x_21 = lean_alloc_ctor(0, 2, 0);
} else {
 x_21 = x_19;
}
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
lean_object* l_Lean_Elab_Level_mkFreshLevelMVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Level_mkFreshLevelMVar___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Level_mkFreshLevelMVar___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Level_mkFreshLevelMVar(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Level_elabLevel___main___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 2);
x_4 = l_Lean_Syntax_getPos(x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_2);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_2);
return x_8;
}
}
}
lean_object* l_Lean_Elab_mkMessageAt___at_Lean_Elab_Level_elabLevel___main___spec__4(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = l_Lean_FileMap_toPosition(x_7, x_3);
x_9 = lean_box(0);
x_10 = l_String_splitAux___main___closed__1;
lean_inc(x_6);
x_11 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_8);
lean_ctor_set(x_11, 2, x_9);
lean_ctor_set(x_11, 3, x_10);
lean_ctor_set(x_11, 4, x_1);
lean_ctor_set_uint8(x_11, sizeof(void*)*5, x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_5);
return x_12;
}
}
lean_object* l_Lean_Elab_mkMessage___at_Lean_Elab_Level_elabLevel___main___spec__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Lean_Elab_getRefPos___at_Lean_Elab_Level_elabLevel___main___spec__3(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Lean_Elab_mkMessageAt___at_Lean_Elab_Level_elabLevel___main___spec__4(x_1, x_2, x_6, x_3, x_7);
return x_8;
}
}
lean_object* l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; uint8_t x_6; 
x_4 = 2;
x_5 = l_Lean_Elab_mkMessage___at_Lean_Elab_Level_elabLevel___main___spec__2(x_1, x_4, x_2, x_3);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_8);
return x_5;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_5);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
}
lean_object* l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; uint8_t x_6; 
x_4 = 2;
x_5 = l_Lean_Elab_mkMessage___at_Lean_Elab_Level_elabLevel___main___spec__2(x_1, x_4, x_2, x_3);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_8);
return x_5;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_5);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
}
lean_object* l___private_Init_Data_Array_Basic_4__foldrRangeMAux___main___at_Lean_Elab_Level_elabLevel___main___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_3, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_3, x_10);
lean_dec(x_3);
x_12 = lean_array_fget(x_1, x_11);
lean_inc(x_6);
x_13 = l_Lean_Elab_Level_elabLevel___main(x_12, x_6, x_7);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
x_17 = l_Lean_mkLevelIMax(x_5, x_15);
x_18 = lean_nat_dec_eq(x_11, x_2);
if (x_18 == 0)
{
lean_free_object(x_13);
x_3 = x_11;
x_4 = lean_box(0);
x_5 = x_17;
x_7 = x_16;
goto _start;
}
else
{
lean_dec(x_11);
lean_dec(x_6);
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_13, 0);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_13);
x_22 = l_Lean_mkLevelIMax(x_5, x_20);
x_23 = lean_nat_dec_eq(x_11, x_2);
if (x_23 == 0)
{
x_3 = x_11;
x_4 = lean_box(0);
x_5 = x_22;
x_7 = x_21;
goto _start;
}
else
{
lean_object* x_25; 
lean_dec(x_11);
lean_dec(x_6);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_21);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
x_26 = !lean_is_exclusive(x_13);
if (x_26 == 0)
{
return x_13;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_13, 0);
x_28 = lean_ctor_get(x_13, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_13);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; 
lean_dec(x_6);
lean_dec(x_3);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_5);
lean_ctor_set(x_30, 1, x_7);
return x_30;
}
}
}
lean_object* l___private_Init_Data_Array_Basic_4__foldrRangeMAux___main___at_Lean_Elab_Level_elabLevel___main___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_3, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_3, x_10);
lean_dec(x_3);
x_12 = lean_array_fget(x_1, x_11);
lean_inc(x_6);
x_13 = l_Lean_Elab_Level_elabLevel___main(x_12, x_6, x_7);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
x_17 = l_Lean_mkLevelMax(x_5, x_15);
x_18 = lean_nat_dec_eq(x_11, x_2);
if (x_18 == 0)
{
lean_free_object(x_13);
x_3 = x_11;
x_4 = lean_box(0);
x_5 = x_17;
x_7 = x_16;
goto _start;
}
else
{
lean_dec(x_11);
lean_dec(x_6);
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_13, 0);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_13);
x_22 = l_Lean_mkLevelMax(x_5, x_20);
x_23 = lean_nat_dec_eq(x_11, x_2);
if (x_23 == 0)
{
x_3 = x_11;
x_4 = lean_box(0);
x_5 = x_22;
x_7 = x_21;
goto _start;
}
else
{
lean_object* x_25; 
lean_dec(x_11);
lean_dec(x_6);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_21);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
x_26 = !lean_is_exclusive(x_13);
if (x_26 == 0)
{
return x_13;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_13, 0);
x_28 = lean_ctor_get(x_13, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_13);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; 
lean_dec(x_6);
lean_dec(x_3);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_5);
lean_ctor_set(x_30, 1, x_7);
return x_30;
}
}
}
lean_object* _init_l_Lean_Elab_Level_elabLevel___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected universe level syntax kind");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Level_elabLevel___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Level_elabLevel___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Level_elabLevel___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Level_elabLevel___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Level_elabLevel___main___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ill-formed universe level syntax");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Level_elabLevel___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Level_elabLevel___main___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Level_elabLevel___main___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Level_elabLevel___main___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Level_elabLevel___main___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown universe level ");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Level_elabLevel___main___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Level_elabLevel___main___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Level_elabLevel___main___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Level_elabLevel___main___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Level_elabLevel___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
lean_inc(x_1);
x_4 = l_Lean_Syntax_getKind(x_1);
x_5 = l_Lean_PrettyPrinter_Parenthesizer_levelParser_parenthesizer___lambda__1___closed__3;
x_6 = lean_name_eq(x_4, x_5);
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_2, 2);
x_9 = lean_ctor_get(x_2, 3);
x_10 = l_Lean_Elab_replaceRef(x_1, x_8);
lean_dec(x_8);
lean_inc(x_9);
lean_ctor_set(x_2, 2, x_10);
if (x_6 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_Parser_Level_max___elambda__1___closed__1;
x_12 = lean_name_eq(x_4, x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_Lean_Parser_Level_imax___elambda__1___closed__1;
x_14 = lean_name_eq(x_4, x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = l_Lean_Parser_Level_hole___elambda__1___closed__1;
x_16 = lean_name_eq(x_4, x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_Lean_Parser_Level_num___elambda__1___closed__1;
x_18 = lean_name_eq(x_4, x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Lean_Parser_Level_ident___elambda__1___closed__1;
x_20 = lean_name_eq(x_4, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
lean_dec(x_9);
x_21 = l_Lean_Parser_Level_addLit___elambda__1___closed__2;
x_22 = lean_name_eq(x_4, x_21);
lean_dec(x_4);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_1);
x_23 = l_Lean_Elab_Level_elabLevel___main___closed__3;
x_24 = l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__1(x_23, x_2, x_3);
lean_dec(x_2);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_unsigned_to_nat(0u);
x_26 = l_Lean_Syntax_getArg(x_1, x_25);
lean_inc(x_2);
x_27 = l_Lean_Elab_Level_elabLevel___main(x_26, x_2, x_3);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_ctor_get(x_27, 1);
x_31 = lean_unsigned_to_nat(2u);
x_32 = l_Lean_Syntax_getArg(x_1, x_31);
lean_dec(x_1);
x_33 = l_Lean_numLitKind;
x_34 = l_Lean_Syntax_isNatLitAux(x_33, x_32);
lean_dec(x_32);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_free_object(x_27);
lean_dec(x_29);
x_35 = l_Lean_Elab_Level_elabLevel___main___closed__6;
x_36 = l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__1(x_35, x_2, x_30);
lean_dec(x_2);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_2);
x_37 = lean_ctor_get(x_34, 0);
lean_inc(x_37);
lean_dec(x_34);
x_38 = l_Lean_Level_addOffsetAux___main(x_37, x_29);
lean_ctor_set(x_27, 0, x_38);
return x_27;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_ctor_get(x_27, 0);
x_40 = lean_ctor_get(x_27, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_27);
x_41 = lean_unsigned_to_nat(2u);
x_42 = l_Lean_Syntax_getArg(x_1, x_41);
lean_dec(x_1);
x_43 = l_Lean_numLitKind;
x_44 = l_Lean_Syntax_isNatLitAux(x_43, x_42);
lean_dec(x_42);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_39);
x_45 = l_Lean_Elab_Level_elabLevel___main___closed__6;
x_46 = l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__1(x_45, x_2, x_40);
lean_dec(x_2);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_2);
x_47 = lean_ctor_get(x_44, 0);
lean_inc(x_47);
lean_dec(x_44);
x_48 = l_Lean_Level_addOffsetAux___main(x_47, x_39);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_40);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_2);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_27);
if (x_50 == 0)
{
return x_27;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_27, 0);
x_52 = lean_ctor_get(x_27, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_27);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
else
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; 
lean_dec(x_4);
x_54 = lean_unsigned_to_nat(0u);
x_55 = l_Lean_Syntax_getIdAt(x_1, x_54);
lean_dec(x_1);
x_56 = l_List_elem___main___at_Lean_NameHashSet_insert___spec__2(x_55, x_9);
lean_dec(x_9);
lean_inc(x_55);
x_57 = l_Lean_mkLevelParam(x_55);
if (x_56 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
lean_dec(x_57);
x_58 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_58, 0, x_55);
x_59 = l_Lean_Elab_Level_elabLevel___main___closed__9;
x_60 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__5(x_60, x_2, x_3);
lean_dec(x_2);
x_62 = !lean_is_exclusive(x_61);
if (x_62 == 0)
{
return x_61;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_61, 0);
x_64 = lean_ctor_get(x_61, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_61);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
else
{
lean_object* x_66; 
lean_dec(x_55);
lean_dec(x_2);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_57);
lean_ctor_set(x_66, 1, x_3);
return x_66;
}
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_9);
lean_dec(x_4);
x_67 = lean_unsigned_to_nat(0u);
x_68 = l_Lean_Syntax_getArg(x_1, x_67);
lean_dec(x_1);
x_69 = l_Lean_numLitKind;
x_70 = l_Lean_Syntax_isNatLitAux(x_69, x_68);
lean_dec(x_68);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = l_Lean_Elab_Level_elabLevel___main___closed__6;
x_72 = l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__1(x_71, x_2, x_3);
lean_dec(x_2);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_2);
x_73 = lean_ctor_get(x_70, 0);
lean_inc(x_73);
lean_dec(x_70);
x_74 = l_Lean_Level_ofNat___main(x_73);
lean_dec(x_73);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_3);
return x_75;
}
}
}
else
{
lean_object* x_76; 
lean_dec(x_2);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_1);
x_76 = l_Lean_Elab_Level_mkFreshLevelMVar___rarg(x_3);
return x_76;
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_9);
lean_dec(x_4);
x_77 = lean_unsigned_to_nat(1u);
x_78 = l_Lean_Syntax_getArg(x_1, x_77);
lean_dec(x_1);
x_79 = l_Lean_Syntax_getArgs(x_78);
lean_dec(x_78);
x_80 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_79);
lean_inc(x_2);
x_81 = l_Lean_Elab_Level_elabLevel___main(x_80, x_2, x_3);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_84 = lean_array_get_size(x_79);
x_85 = lean_nat_sub(x_84, x_77);
x_86 = lean_nat_dec_le(x_85, x_84);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
lean_dec(x_85);
x_87 = lean_unsigned_to_nat(0u);
x_88 = l___private_Init_Data_Array_Basic_4__foldrRangeMAux___main___at_Lean_Elab_Level_elabLevel___main___spec__6(x_79, x_87, x_84, lean_box(0), x_82, x_2, x_83);
lean_dec(x_79);
return x_88;
}
else
{
lean_object* x_89; lean_object* x_90; 
lean_dec(x_84);
x_89 = lean_unsigned_to_nat(0u);
x_90 = l___private_Init_Data_Array_Basic_4__foldrRangeMAux___main___at_Lean_Elab_Level_elabLevel___main___spec__6(x_79, x_89, x_85, lean_box(0), x_82, x_2, x_83);
lean_dec(x_79);
return x_90;
}
}
else
{
uint8_t x_91; 
lean_dec(x_79);
lean_dec(x_2);
x_91 = !lean_is_exclusive(x_81);
if (x_91 == 0)
{
return x_81;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_81, 0);
x_93 = lean_ctor_get(x_81, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_81);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_9);
lean_dec(x_4);
x_95 = lean_unsigned_to_nat(1u);
x_96 = l_Lean_Syntax_getArg(x_1, x_95);
lean_dec(x_1);
x_97 = l_Lean_Syntax_getArgs(x_96);
lean_dec(x_96);
x_98 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_97);
lean_inc(x_2);
x_99 = l_Lean_Elab_Level_elabLevel___main(x_98, x_2, x_3);
if (lean_obj_tag(x_99) == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
lean_dec(x_99);
x_102 = lean_array_get_size(x_97);
x_103 = lean_nat_sub(x_102, x_95);
x_104 = lean_nat_dec_le(x_103, x_102);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; 
lean_dec(x_103);
x_105 = lean_unsigned_to_nat(0u);
x_106 = l___private_Init_Data_Array_Basic_4__foldrRangeMAux___main___at_Lean_Elab_Level_elabLevel___main___spec__7(x_97, x_105, x_102, lean_box(0), x_100, x_2, x_101);
lean_dec(x_97);
return x_106;
}
else
{
lean_object* x_107; lean_object* x_108; 
lean_dec(x_102);
x_107 = lean_unsigned_to_nat(0u);
x_108 = l___private_Init_Data_Array_Basic_4__foldrRangeMAux___main___at_Lean_Elab_Level_elabLevel___main___spec__7(x_97, x_107, x_103, lean_box(0), x_100, x_2, x_101);
lean_dec(x_97);
return x_108;
}
}
else
{
uint8_t x_109; 
lean_dec(x_97);
lean_dec(x_2);
x_109 = !lean_is_exclusive(x_99);
if (x_109 == 0)
{
return x_99;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_99, 0);
x_111 = lean_ctor_get(x_99, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_99);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
}
else
{
lean_object* x_113; lean_object* x_114; 
lean_dec(x_9);
lean_dec(x_4);
x_113 = lean_unsigned_to_nat(1u);
x_114 = l_Lean_Syntax_getArg(x_1, x_113);
lean_dec(x_1);
x_1 = x_114;
goto _start;
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_116 = lean_ctor_get(x_2, 0);
x_117 = lean_ctor_get(x_2, 1);
x_118 = lean_ctor_get(x_2, 2);
x_119 = lean_ctor_get(x_2, 3);
lean_inc(x_119);
lean_inc(x_118);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_2);
x_120 = l_Lean_Elab_replaceRef(x_1, x_118);
lean_dec(x_118);
lean_inc(x_119);
x_121 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_121, 0, x_116);
lean_ctor_set(x_121, 1, x_117);
lean_ctor_set(x_121, 2, x_120);
lean_ctor_set(x_121, 3, x_119);
if (x_6 == 0)
{
lean_object* x_122; uint8_t x_123; 
x_122 = l_Lean_Parser_Level_max___elambda__1___closed__1;
x_123 = lean_name_eq(x_4, x_122);
if (x_123 == 0)
{
lean_object* x_124; uint8_t x_125; 
x_124 = l_Lean_Parser_Level_imax___elambda__1___closed__1;
x_125 = lean_name_eq(x_4, x_124);
if (x_125 == 0)
{
lean_object* x_126; uint8_t x_127; 
x_126 = l_Lean_Parser_Level_hole___elambda__1___closed__1;
x_127 = lean_name_eq(x_4, x_126);
if (x_127 == 0)
{
lean_object* x_128; uint8_t x_129; 
x_128 = l_Lean_Parser_Level_num___elambda__1___closed__1;
x_129 = lean_name_eq(x_4, x_128);
if (x_129 == 0)
{
lean_object* x_130; uint8_t x_131; 
x_130 = l_Lean_Parser_Level_ident___elambda__1___closed__1;
x_131 = lean_name_eq(x_4, x_130);
if (x_131 == 0)
{
lean_object* x_132; uint8_t x_133; 
lean_dec(x_119);
x_132 = l_Lean_Parser_Level_addLit___elambda__1___closed__2;
x_133 = lean_name_eq(x_4, x_132);
lean_dec(x_4);
if (x_133 == 0)
{
lean_object* x_134; lean_object* x_135; 
lean_dec(x_1);
x_134 = l_Lean_Elab_Level_elabLevel___main___closed__3;
x_135 = l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__1(x_134, x_121, x_3);
lean_dec(x_121);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_136 = lean_unsigned_to_nat(0u);
x_137 = l_Lean_Syntax_getArg(x_1, x_136);
lean_inc(x_121);
x_138 = l_Lean_Elab_Level_elabLevel___main(x_137, x_121, x_3);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_139 = lean_ctor_get(x_138, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_138, 1);
lean_inc(x_140);
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 x_141 = x_138;
} else {
 lean_dec_ref(x_138);
 x_141 = lean_box(0);
}
x_142 = lean_unsigned_to_nat(2u);
x_143 = l_Lean_Syntax_getArg(x_1, x_142);
lean_dec(x_1);
x_144 = l_Lean_numLitKind;
x_145 = l_Lean_Syntax_isNatLitAux(x_144, x_143);
lean_dec(x_143);
if (lean_obj_tag(x_145) == 0)
{
lean_object* x_146; lean_object* x_147; 
lean_dec(x_141);
lean_dec(x_139);
x_146 = l_Lean_Elab_Level_elabLevel___main___closed__6;
x_147 = l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__1(x_146, x_121, x_140);
lean_dec(x_121);
return x_147;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_121);
x_148 = lean_ctor_get(x_145, 0);
lean_inc(x_148);
lean_dec(x_145);
x_149 = l_Lean_Level_addOffsetAux___main(x_148, x_139);
if (lean_is_scalar(x_141)) {
 x_150 = lean_alloc_ctor(0, 2, 0);
} else {
 x_150 = x_141;
}
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_140);
return x_150;
}
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
lean_dec(x_121);
lean_dec(x_1);
x_151 = lean_ctor_get(x_138, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_138, 1);
lean_inc(x_152);
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 x_153 = x_138;
} else {
 lean_dec_ref(x_138);
 x_153 = lean_box(0);
}
if (lean_is_scalar(x_153)) {
 x_154 = lean_alloc_ctor(1, 2, 0);
} else {
 x_154 = x_153;
}
lean_ctor_set(x_154, 0, x_151);
lean_ctor_set(x_154, 1, x_152);
return x_154;
}
}
}
else
{
lean_object* x_155; lean_object* x_156; uint8_t x_157; lean_object* x_158; 
lean_dec(x_4);
x_155 = lean_unsigned_to_nat(0u);
x_156 = l_Lean_Syntax_getIdAt(x_1, x_155);
lean_dec(x_1);
x_157 = l_List_elem___main___at_Lean_NameHashSet_insert___spec__2(x_156, x_119);
lean_dec(x_119);
lean_inc(x_156);
x_158 = l_Lean_mkLevelParam(x_156);
if (x_157 == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_158);
x_159 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_159, 0, x_156);
x_160 = l_Lean_Elab_Level_elabLevel___main___closed__9;
x_161 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_161, 0, x_160);
lean_ctor_set(x_161, 1, x_159);
x_162 = l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__5(x_161, x_121, x_3);
lean_dec(x_121);
x_163 = lean_ctor_get(x_162, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_162, 1);
lean_inc(x_164);
if (lean_is_exclusive(x_162)) {
 lean_ctor_release(x_162, 0);
 lean_ctor_release(x_162, 1);
 x_165 = x_162;
} else {
 lean_dec_ref(x_162);
 x_165 = lean_box(0);
}
if (lean_is_scalar(x_165)) {
 x_166 = lean_alloc_ctor(1, 2, 0);
} else {
 x_166 = x_165;
}
lean_ctor_set(x_166, 0, x_163);
lean_ctor_set(x_166, 1, x_164);
return x_166;
}
else
{
lean_object* x_167; 
lean_dec(x_156);
lean_dec(x_121);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_158);
lean_ctor_set(x_167, 1, x_3);
return x_167;
}
}
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
lean_dec(x_119);
lean_dec(x_4);
x_168 = lean_unsigned_to_nat(0u);
x_169 = l_Lean_Syntax_getArg(x_1, x_168);
lean_dec(x_1);
x_170 = l_Lean_numLitKind;
x_171 = l_Lean_Syntax_isNatLitAux(x_170, x_169);
lean_dec(x_169);
if (lean_obj_tag(x_171) == 0)
{
lean_object* x_172; lean_object* x_173; 
x_172 = l_Lean_Elab_Level_elabLevel___main___closed__6;
x_173 = l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__1(x_172, x_121, x_3);
lean_dec(x_121);
return x_173;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
lean_dec(x_121);
x_174 = lean_ctor_get(x_171, 0);
lean_inc(x_174);
lean_dec(x_171);
x_175 = l_Lean_Level_ofNat___main(x_174);
lean_dec(x_174);
x_176 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_3);
return x_176;
}
}
}
else
{
lean_object* x_177; 
lean_dec(x_121);
lean_dec(x_119);
lean_dec(x_4);
lean_dec(x_1);
x_177 = l_Lean_Elab_Level_mkFreshLevelMVar___rarg(x_3);
return x_177;
}
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
lean_dec(x_119);
lean_dec(x_4);
x_178 = lean_unsigned_to_nat(1u);
x_179 = l_Lean_Syntax_getArg(x_1, x_178);
lean_dec(x_1);
x_180 = l_Lean_Syntax_getArgs(x_179);
lean_dec(x_179);
x_181 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_180);
lean_inc(x_121);
x_182 = l_Lean_Elab_Level_elabLevel___main(x_181, x_121, x_3);
if (lean_obj_tag(x_182) == 0)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; uint8_t x_187; 
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_182, 1);
lean_inc(x_184);
lean_dec(x_182);
x_185 = lean_array_get_size(x_180);
x_186 = lean_nat_sub(x_185, x_178);
x_187 = lean_nat_dec_le(x_186, x_185);
if (x_187 == 0)
{
lean_object* x_188; lean_object* x_189; 
lean_dec(x_186);
x_188 = lean_unsigned_to_nat(0u);
x_189 = l___private_Init_Data_Array_Basic_4__foldrRangeMAux___main___at_Lean_Elab_Level_elabLevel___main___spec__6(x_180, x_188, x_185, lean_box(0), x_183, x_121, x_184);
lean_dec(x_180);
return x_189;
}
else
{
lean_object* x_190; lean_object* x_191; 
lean_dec(x_185);
x_190 = lean_unsigned_to_nat(0u);
x_191 = l___private_Init_Data_Array_Basic_4__foldrRangeMAux___main___at_Lean_Elab_Level_elabLevel___main___spec__6(x_180, x_190, x_186, lean_box(0), x_183, x_121, x_184);
lean_dec(x_180);
return x_191;
}
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; 
lean_dec(x_180);
lean_dec(x_121);
x_192 = lean_ctor_get(x_182, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_182, 1);
lean_inc(x_193);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 x_194 = x_182;
} else {
 lean_dec_ref(x_182);
 x_194 = lean_box(0);
}
if (lean_is_scalar(x_194)) {
 x_195 = lean_alloc_ctor(1, 2, 0);
} else {
 x_195 = x_194;
}
lean_ctor_set(x_195, 0, x_192);
lean_ctor_set(x_195, 1, x_193);
return x_195;
}
}
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
lean_dec(x_119);
lean_dec(x_4);
x_196 = lean_unsigned_to_nat(1u);
x_197 = l_Lean_Syntax_getArg(x_1, x_196);
lean_dec(x_1);
x_198 = l_Lean_Syntax_getArgs(x_197);
lean_dec(x_197);
x_199 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_198);
lean_inc(x_121);
x_200 = l_Lean_Elab_Level_elabLevel___main(x_199, x_121, x_3);
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; uint8_t x_205; 
x_201 = lean_ctor_get(x_200, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_200, 1);
lean_inc(x_202);
lean_dec(x_200);
x_203 = lean_array_get_size(x_198);
x_204 = lean_nat_sub(x_203, x_196);
x_205 = lean_nat_dec_le(x_204, x_203);
if (x_205 == 0)
{
lean_object* x_206; lean_object* x_207; 
lean_dec(x_204);
x_206 = lean_unsigned_to_nat(0u);
x_207 = l___private_Init_Data_Array_Basic_4__foldrRangeMAux___main___at_Lean_Elab_Level_elabLevel___main___spec__7(x_198, x_206, x_203, lean_box(0), x_201, x_121, x_202);
lean_dec(x_198);
return x_207;
}
else
{
lean_object* x_208; lean_object* x_209; 
lean_dec(x_203);
x_208 = lean_unsigned_to_nat(0u);
x_209 = l___private_Init_Data_Array_Basic_4__foldrRangeMAux___main___at_Lean_Elab_Level_elabLevel___main___spec__7(x_198, x_208, x_204, lean_box(0), x_201, x_121, x_202);
lean_dec(x_198);
return x_209;
}
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; 
lean_dec(x_198);
lean_dec(x_121);
x_210 = lean_ctor_get(x_200, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_200, 1);
lean_inc(x_211);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 x_212 = x_200;
} else {
 lean_dec_ref(x_200);
 x_212 = lean_box(0);
}
if (lean_is_scalar(x_212)) {
 x_213 = lean_alloc_ctor(1, 2, 0);
} else {
 x_213 = x_212;
}
lean_ctor_set(x_213, 0, x_210);
lean_ctor_set(x_213, 1, x_211);
return x_213;
}
}
}
else
{
lean_object* x_214; lean_object* x_215; 
lean_dec(x_119);
lean_dec(x_4);
x_214 = lean_unsigned_to_nat(1u);
x_215 = l_Lean_Syntax_getArg(x_1, x_214);
lean_dec(x_1);
x_1 = x_215;
x_2 = x_121;
goto _start;
}
}
}
}
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Level_elabLevel___main___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_getRefPos___at_Lean_Elab_Level_elabLevel___main___spec__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_mkMessageAt___at_Lean_Elab_Level_elabLevel___main___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_2);
lean_dec(x_2);
x_7 = l_Lean_Elab_mkMessageAt___at_Lean_Elab_Level_elabLevel___main___spec__4(x_1, x_6, x_3, x_4, x_5);
lean_dec(x_4);
return x_7;
}
}
lean_object* l_Lean_Elab_mkMessage___at_Lean_Elab_Level_elabLevel___main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_Lean_Elab_mkMessage___at_Lean_Elab_Level_elabLevel___main___spec__2(x_1, x_5, x_3, x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_throwError___at_Lean_Elab_Level_elabLevel___main___spec__5(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l___private_Init_Data_Array_Basic_4__foldrRangeMAux___main___at_Lean_Elab_Level_elabLevel___main___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Data_Array_Basic_4__foldrRangeMAux___main___at_Lean_Elab_Level_elabLevel___main___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Init_Data_Array_Basic_4__foldrRangeMAux___main___at_Lean_Elab_Level_elabLevel___main___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Data_Array_Basic_4__foldrRangeMAux___main___at_Lean_Elab_Level_elabLevel___main___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Level_elabLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Level_elabLevel___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_LevelDefEq(lean_object*);
lean_object* initialize_Lean_Elab_Exception(lean_object*);
lean_object* initialize_Lean_Elab_Log(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Level(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LevelDefEq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Exception(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Log(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Level_LevelElabM_MonadLog___closed__1 = _init_l_Lean_Elab_Level_LevelElabM_MonadLog___closed__1();
lean_mark_persistent(l_Lean_Elab_Level_LevelElabM_MonadLog___closed__1);
l_Lean_Elab_Level_LevelElabM_MonadLog___closed__2 = _init_l_Lean_Elab_Level_LevelElabM_MonadLog___closed__2();
lean_mark_persistent(l_Lean_Elab_Level_LevelElabM_MonadLog___closed__2);
l_Lean_Elab_Level_LevelElabM_MonadLog___closed__3 = _init_l_Lean_Elab_Level_LevelElabM_MonadLog___closed__3();
lean_mark_persistent(l_Lean_Elab_Level_LevelElabM_MonadLog___closed__3);
l_Lean_Elab_Level_LevelElabM_MonadLog___closed__4 = _init_l_Lean_Elab_Level_LevelElabM_MonadLog___closed__4();
lean_mark_persistent(l_Lean_Elab_Level_LevelElabM_MonadLog___closed__4);
l_Lean_Elab_Level_LevelElabM_MonadLog___closed__5 = _init_l_Lean_Elab_Level_LevelElabM_MonadLog___closed__5();
lean_mark_persistent(l_Lean_Elab_Level_LevelElabM_MonadLog___closed__5);
l_Lean_Elab_Level_LevelElabM_MonadLog___closed__6 = _init_l_Lean_Elab_Level_LevelElabM_MonadLog___closed__6();
lean_mark_persistent(l_Lean_Elab_Level_LevelElabM_MonadLog___closed__6);
l_Lean_Elab_Level_LevelElabM_MonadLog___closed__7 = _init_l_Lean_Elab_Level_LevelElabM_MonadLog___closed__7();
lean_mark_persistent(l_Lean_Elab_Level_LevelElabM_MonadLog___closed__7);
l_Lean_Elab_Level_LevelElabM_MonadLog___closed__8 = _init_l_Lean_Elab_Level_LevelElabM_MonadLog___closed__8();
lean_mark_persistent(l_Lean_Elab_Level_LevelElabM_MonadLog___closed__8);
l_Lean_Elab_Level_LevelElabM_MonadLog___closed__9 = _init_l_Lean_Elab_Level_LevelElabM_MonadLog___closed__9();
lean_mark_persistent(l_Lean_Elab_Level_LevelElabM_MonadLog___closed__9);
l_Lean_Elab_Level_LevelElabM_MonadLog = _init_l_Lean_Elab_Level_LevelElabM_MonadLog();
lean_mark_persistent(l_Lean_Elab_Level_LevelElabM_MonadLog);
l_Lean_Elab_Level_elabLevel___main___closed__1 = _init_l_Lean_Elab_Level_elabLevel___main___closed__1();
lean_mark_persistent(l_Lean_Elab_Level_elabLevel___main___closed__1);
l_Lean_Elab_Level_elabLevel___main___closed__2 = _init_l_Lean_Elab_Level_elabLevel___main___closed__2();
lean_mark_persistent(l_Lean_Elab_Level_elabLevel___main___closed__2);
l_Lean_Elab_Level_elabLevel___main___closed__3 = _init_l_Lean_Elab_Level_elabLevel___main___closed__3();
lean_mark_persistent(l_Lean_Elab_Level_elabLevel___main___closed__3);
l_Lean_Elab_Level_elabLevel___main___closed__4 = _init_l_Lean_Elab_Level_elabLevel___main___closed__4();
lean_mark_persistent(l_Lean_Elab_Level_elabLevel___main___closed__4);
l_Lean_Elab_Level_elabLevel___main___closed__5 = _init_l_Lean_Elab_Level_elabLevel___main___closed__5();
lean_mark_persistent(l_Lean_Elab_Level_elabLevel___main___closed__5);
l_Lean_Elab_Level_elabLevel___main___closed__6 = _init_l_Lean_Elab_Level_elabLevel___main___closed__6();
lean_mark_persistent(l_Lean_Elab_Level_elabLevel___main___closed__6);
l_Lean_Elab_Level_elabLevel___main___closed__7 = _init_l_Lean_Elab_Level_elabLevel___main___closed__7();
lean_mark_persistent(l_Lean_Elab_Level_elabLevel___main___closed__7);
l_Lean_Elab_Level_elabLevel___main___closed__8 = _init_l_Lean_Elab_Level_elabLevel___main___closed__8();
lean_mark_persistent(l_Lean_Elab_Level_elabLevel___main___closed__8);
l_Lean_Elab_Level_elabLevel___main___closed__9 = _init_l_Lean_Elab_Level_elabLevel___main___closed__9();
lean_mark_persistent(l_Lean_Elab_Level_elabLevel___main___closed__9);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif
