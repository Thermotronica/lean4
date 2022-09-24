// Lean compiler output
// Module: Lean.Server.References
// Imports: Init Lean.Data.Lsp.Internal Lean.Server.Utils
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
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMap_toList___at_Lean_Server_References_removeIlean___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTRAux___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__4(lean_object*, lean_object*);
static uint32_t l_Lean_Server_instInhabitedReference___closed__9;
LEAN_EXPORT lean_object* l_Std_AssocList_replace___at_Lean_Server_combineFvars_insertIdMap___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_updateWorkerRefs___spec__10(lean_object*, lean_object*);
static lean_object* l_Lean_Server_instInhabitedReference___closed__8;
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_References_allRefs___spec__7(lean_object*);
static lean_object* l_Lean_Server_RefInfo_empty___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_References_removeWorkerRefs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_Lean_Server_References_removeIlean___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_ModuleRefs_addRef___spec__2___boxed(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_instInhabitedReference___closed__4;
static lean_object* l_Lean_Server_instInhabitedReference___closed__17;
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionOf_x3f___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerRefs___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instFromJsonIlean;
static lean_object* l_Lean_Server_dedupReferences___closed__7;
static lean_object* l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__2;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_contains___at_Lean_Server_dedupReferences___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonPosition____x40_Lean_Data_Lsp_Basic___hyg_435____spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_dedupReferences___spec__14(lean_object*, size_t, size_t, lean_object*);
lean_object* l_System_Uri_pathToUri(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_dedupReferences___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT uint8_t l_Std_AssocList_contains___at_Lean_Server_ModuleRefs_addRef___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_erase___at_Lean_Server_References_removeWorkerRefs___spec__1(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Std_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__2(lean_object*, lean_object*);
uint64_t l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1727_(lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__1;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___closed__1;
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Server_combineFvars_buildIdMap___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__2(size_t, size_t, lean_object*);
uint64_t l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_118_(lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMap_insert___at_Lean_Server_References_addIlean___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_RefInfo_empty___closed__1;
LEAN_EXPORT lean_object* l_Std_AssocList_erase___at_Lean_Server_References_removeIlean___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_removeIlean___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__4___boxed(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_expand___at_Lean_Server_References_allRefs___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_References_empty___spec__1(lean_object*);
uint64_t l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_630_(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_fromJsonLeanIleanInfoParams____x40_Lean_Data_Lsp_Internal___hyg_850____spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_Server_instInhabitedReference___closed__21;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars_buildIdMap___spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerRefs___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_contains_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__1(size_t, size_t, size_t, lean_object*);
static lean_object* l_Lean_Server_instInhabitedReference___closed__15;
LEAN_EXPORT lean_object* l_Lean_Server_combineFvars_findCanonicalBinder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_Lean_Server_References_removeIlean___spec__8___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_Lsp_instHashableRefIdent;
lean_object* l___private_Lean_Data_HashMap_0__Std_numBucketsForCapacity(lean_object*);
static lean_object* l_Lean_Server_instInhabitedReference___closed__3;
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__10(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_AssocList_contains___at_Lean_Server_References_allRefs___spec__2(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_AssocList_contains___at_Lean_Server_combineFvars_insertIdMap___spec__2(lean_object*, lean_object*);
static lean_object* l_Lean_Server_instInhabitedReference___closed__18;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_References_allRefs___spec__7___boxed(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_referringTo___spec__3(lean_object*, lean_object*);
static lean_object* l_Lean_Server_dedupReferences___closed__11;
LEAN_EXPORT lean_object* l_Lean_Server_References_referringTo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_erase___at_Lean_Server_References_removeIlean___spec__6(lean_object*, lean_object*);
static lean_object* l_Lean_Server_instInhabitedReference___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_combineFvars_buildIdMap(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_Reference_aliases___default___closed__1;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_Info_updateContext_x3f(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_dedupReferences(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Server_RefInfo_instCoeRefInfoRefInfo(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_combineFvars_buildIdMap___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_contains___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_References_empty___spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionsMatching___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_qpartition_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_throwServerError___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_combineFvars_applyIdMap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_replace___at_Lean_Server_References_updateWorkerRefs___spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_HashMapImp_contains___at_Lean_Server_combineFvars___spec__9(lean_object*, lean_object*);
uint8_t l_instDecidableRelLeLeOfOrd___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_instInhabitedReference___closed__2;
lean_object* l_List_join___rarg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Server_findReferences(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__7(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_addIlean___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Server_findReferences___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__2;
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_finalizeWorkerRefs___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_referringTo(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
LEAN_EXPORT lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Server_ModuleRefs_addRef___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Server_combineFvars_findCanonicalBinder___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RefInfo_empty;
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerRefs___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_combineFvars_buildIdMap___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionsMatching(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_updateWorkerRefs___spec__12(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__10___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_fromJsonRpcCallParams____x40_Lean_Data_Lsp_Extra___hyg_1158____spec__1(lean_object*, lean_object*);
static lean_object* l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__2;
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_updateWorkerRefs___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Name_hash___override(lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_combineFvars_findCanonicalBinder___spec__2(lean_object*, lean_object*);
static lean_object* l_Lean_Server_References_findAt___closed__1;
static lean_object* l_Lean_Server_findModuleRefs___closed__2;
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_identOf(lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__10___closed__1;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_removeIlean(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_replace___at_Lean_Server_ModuleRefs_addRef___spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_expand___at_Lean_Server_ModuleRefs_addRef___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_combineFvars___spec__1___boxed(lean_object*);
static lean_object* l_Lean_Server_instInhabitedReference___closed__14;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_instCoeRefInfoRefInfo___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_dedupReferences___spec__11(uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_dedupReferences___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_findModuleRefs___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_References_findAt___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_removeIlean___spec__2(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_combineFvars_insertIdMap___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_removeIlean___spec__3(lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_Lean_Lsp_instBEqRange;
lean_object* lean_array_swap(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_instInhabitedReference___closed__5;
LEAN_EXPORT lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Server_combineFvars___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_realpath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_contains___at_Lean_Server_ModuleRefs_addRef___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_String_Range_toLspRange(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_addIlean(lean_object*, lean_object*, lean_object*);
static lean_object* l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_contains___at_Lean_Server_References_addIlean___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_dedupReferences___closed__2;
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_referringTo___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerRefs(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_References_findAt___closed__2;
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
static lean_object* l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__1;
lean_object* l_Std_mkHashMapImp___rarg(lean_object*);
lean_object* l_instInhabited___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_replace___at_Lean_Server_combineFvars___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_Lean_Server_References_allRefs___spec__8(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_dedupReferences___lambda__1(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Server_Ilean_load(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMap_insert___at_Lean_Server_ModuleRefs_addRef___spec__3(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_551_(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(size_t, size_t, lean_object*);
static lean_object* l_Lean_Server_dedupReferences___closed__4;
LEAN_EXPORT uint8_t l_Lean_Lsp_RefInfo_contains___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_instInhabitedReference___closed__22;
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Server_dedupReferences___spec__7(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_dedupReferences___closed__8;
lean_object* l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_939____rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_referringTo___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_allRefs(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_contains___lambda__1___boxed(lean_object*);
static lean_object* l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13___closed__1;
LEAN_EXPORT lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Server_ModuleRefs_addRef___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_dedupReferences___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_referringTo___spec__4(lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Lean_Server_dedupReferences___closed__1;
LEAN_EXPORT lean_object* l_Std_HashMapImp_expand___at_Lean_Server_References_addIlean___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_removeWorkerRefs(lean_object*, lean_object*);
static lean_object* l_Lean_Server_instInhabitedReference___closed__6;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_instCoeRefInfoRefInfo___spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
static lean_object* l_Lean_Server_instInhabitedReference___closed__16;
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_ModuleRefs_addRef___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_combineFvars_buildIdMap___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_combineFvars_insertIdMap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMap_toList___at_Lean_Server_References_allRefs___spec__9(lean_object*);
LEAN_EXPORT uint8_t l_Std_AssocList_contains___at_Lean_Server_References_addIlean___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_removeIlean___spec__2___boxed(lean_object*, lean_object*);
size_t lean_usize_modn(size_t, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMap_insert___at_Lean_Server_dedupReferences___spec__4(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Lsp_instHashableRange;
static uint64_t l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2___closed__1;
lean_object* l_Lean_Elab_Info_stx(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_contains___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__3(lean_object*, size_t, size_t, lean_object*);
static lean_object* l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__3;
LEAN_EXPORT lean_object* l_List_mapTRAux___at_Lean_Server_References_removeIlean___spec__5(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_contains___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_References_empty___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_findReferences___boxed(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_contains___spec__1___closed__2;
LEAN_EXPORT lean_object* l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineFvars_buildIdMap___spec__10(lean_object*, size_t, size_t, lean_object*, lean_object*);
static lean_object* l_Lean_Server_dedupReferences___closed__9;
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_contains___at_Lean_Server_combineFvars___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_findModuleRefs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_expand___at_Lean_Server_dedupReferences___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ModuleRefs_addRef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineFvars_buildIdMap___spec__10___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_contains___at_Lean_Server_combineFvars___spec__9___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_range_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_finalizeWorkerRefs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Server_References_allRefs___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_empty;
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_dedupReferences___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_merge(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_instBEqProd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_Lean_Server_References_allRefs___spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTRAux___at_Lean_Server_References_removeIlean___spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_identOf___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMap_insert___at_Lean_Server_combineFvars___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMap_insert___at_Lean_Server_combineFvars_insertIdMap___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_findAt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922_(lean_object*);
extern lean_object* l_Lean_Lsp_instOrdPosition;
static lean_object* l_panic___at_Lean_Server_findReferences___spec__4___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_toList___rarg(lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionOf_x3f___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_dedupReferences___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__8(lean_object*, size_t, size_t, lean_object*);
static lean_object* l_panic___at_Lean_Server_findReferences___spec__4___closed__2;
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__2(lean_object*);
static lean_object* l_Lean_Lsp_RefInfo_contains___lambda__2___closed__2;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_RefInfo_contains___lambda__2___closed__3;
LEAN_EXPORT lean_object* l_Std_HashMap_toList___at_Lean_Server_References_referringTo___spec__2(lean_object*);
lean_object* l_List_redLength___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_expand___at_Lean_Server_combineFvars_insertIdMap___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_combineFvars___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instHashableOption___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMap_ofList___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Server_References_updateWorkerRefs___spec__9(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_findModuleRefs(lean_object*, lean_object*, uint8_t, uint8_t);
static lean_object* l_Lean_Server_dedupReferences___closed__5;
static lean_object* l_Lean_Server_instInhabitedReference___closed__19;
static lean_object* l_Lean_Server_Ilean_load___closed__2;
LEAN_EXPORT lean_object* l_Std_HashMapImp_erase___at_Lean_Server_References_removeWorkerRefs___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_findAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedReference;
extern lean_object* l_Id_instMonadId;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineFvars_buildIdMap___spec__10___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_expand___at_Lean_Server_combineFvars___spec__4(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars_buildIdMap___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_instInhabitedReference___closed__10;
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_References_empty___spec__1___boxed(lean_object*);
static lean_object* l_Lean_Server_Ilean_load___closed__1;
LEAN_EXPORT lean_object* l_Std_AssocList_contains___at_Lean_Server_References_allRefs___spec__2___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_Lsp_instBEqRefIdent;
LEAN_EXPORT lean_object* l_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_combineFvars_buildIdMap___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerRefs___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__3;
static lean_object* l_Lean_Server_findModuleRefs___closed__1;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_contains___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMap_insert___at_Lean_Server_References_updateWorkerRefs___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_erase___at_Lean_Server_References_removeIlean___spec__7___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Server_instInhabitedReference___closed__20;
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__8___at_Lean_Server_dedupReferences___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_combineFvars_findCanonicalBinder___spec__2___boxed(lean_object*, lean_object*);
static uint64_t l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2___closed__2;
LEAN_EXPORT lean_object* l_Std_AssocList_replace___at_Lean_Server_dedupReferences___spec__10(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_29_(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__3;
LEAN_EXPORT lean_object* l_Lean_Server_findModuleRefs___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_combineFvars(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Ilean_load___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Server_combineFvars_buildIdMap___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_combineFvars_buildIdMap___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
static lean_object* l_Lean_Server_instInhabitedReference___closed__7;
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_References_findAt___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_combineFvars_buildIdMap___spec__3(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_combineFvars___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_dedupReferences___lambda__1___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RefInfo_addRef(lean_object*, lean_object*);
lean_object* l_List_toArrayAux___rarg(lean_object*, lean_object*);
lean_object* l_instBEq___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_instToJsonIlean___closed__1;
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_dedupReferences___spec__1___boxed(lean_object*);
static lean_object* l_Lean_Server_dedupReferences___closed__6;
lean_object* l_Std_HashMap_toList___at_Lean_Lsp_instToJsonModuleRefs___spec__2(lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMap_toList___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__8(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_References_definitionsMatching___rarg___closed__1;
lean_object* l_StateT_instMonadStateT___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846_(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTRAux___at_Lean_Server_References_removeIlean___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__2(lean_object*, size_t, size_t, lean_object*);
lean_object* l_instHashableProd___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_AssocList_contains___at_Lean_Server_dedupReferences___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_combineFvars_buildIdMap___spec__3___boxed(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_findModuleRefs___lambda__1___boxed(lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Std_AssocList_replace___at_Lean_Server_References_allRefs___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_dedupReferences___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_finalizeWorkerRefs___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__2(lean_object*, lean_object*);
lean_object* l_IO_FS_readFile(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_RefInfo_contains_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Server_combineFvars_insertIdMap___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Reference_aliases___default;
extern lean_object* l_Lean_Lsp_instOrdRange;
LEAN_EXPORT lean_object* l_Lean_Server_References_findAt___lambda__1___boxed(lean_object*);
static lean_object* l_Lean_Server_instInhabitedReference___closed__11;
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__11(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM___at_Lean_Server_findReferences___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Server_combineFvars_buildIdMap___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_empty;
LEAN_EXPORT lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Server_References_findAt___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Server_References_addIlean___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__4;
LEAN_EXPORT lean_object* l_Std_AssocList_contains___at_Lean_Server_combineFvars_insertIdMap___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_dedupReferences___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_contains___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_dedupReferences___closed__10;
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_ModuleRefs_addRef___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM___at_Lean_Server_combineFvars_buildIdMap___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_RefInfo_contains___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_replace___at_Lean_Server_References_addIlean___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_instHashableBool___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_contains(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__4;
LEAN_EXPORT lean_object* l_Std_HashMapImp_erase___at_Lean_Server_References_removeIlean___spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_findAt___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_updateWorkerRefs___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_RefIdent_toString(lean_object*);
static lean_object* l_Lean_Server_instInhabitedReference___closed__13;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_findModuleRefs___spec__1(lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
lean_object* l_Lean_SearchPath_findModuleWithExt(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableRelLtLtOfOrd___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_939____at_Lean_PrettyPrinter_delabCore___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMap_insert___at_Lean_Server_References_allRefs___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineFvars_buildIdMap___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineFvars_buildIdMap___spec__10___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instToJsonIlean;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__10(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Ilean_version___default;
static lean_object* l_Lean_Server_instInhabitedReference___closed__12;
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_combineFvars___spec__1(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_AssocList_contains___at_Lean_Server_combineFvars___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionOf_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMapImp_expand___at_Lean_Server_References_updateWorkerRefs___spec__8(lean_object*, lean_object*);
static lean_object* l_Lean_Server_instFromJsonIlean___closed__1;
lean_object* l_Std_HashMap_insert___at_Lean_Lsp_instFromJsonModuleRefs___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Server_findReferences___spec__4(lean_object*, lean_object*);
static lean_object* _init_l_Lean_Server_Reference_aliases___default___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_Reference_aliases___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Server_Reference_aliases___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_instInhabitedReference___closed__2;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_instInhabitedReference___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_instInhabitedReference___closed__6;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__8() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_Lean_Server_instInhabitedReference___closed__4;
x_3 = l_Lean_Server_instInhabitedReference___closed__7;
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static uint32_t _init_l_Lean_Server_instInhabitedReference___closed__9() {
_start:
{
lean_object* x_1; uint32_t x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_uint32_of_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__10() {
_start:
{
uint32_t x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Server_instInhabitedReference___closed__9;
x_2 = 0;
x_3 = lean_box(0);
x_4 = l_Lean_Server_Reference_aliases___default___closed__1;
x_5 = lean_alloc_ctor(0, 5, 5);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_4);
lean_ctor_set(x_5, 4, x_4);
lean_ctor_set_uint32(x_5, sizeof(void*)*5, x_1);
lean_ctor_set_uint8(x_5, sizeof(void*)*5 + 4, x_2);
return x_5;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Server_instInhabitedReference___closed__4;
x_2 = l_Lean_Server_instInhabitedReference___closed__8;
x_3 = l_Lean_Server_Reference_aliases___default___closed__1;
x_4 = l_Lean_NameSet_empty;
x_5 = l_Lean_Server_instInhabitedReference___closed__10;
x_6 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set(x_6, 4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("", 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_instInhabitedReference___closed__12;
x_2 = l_Lean_Server_Reference_aliases___default___closed__1;
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 2, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_instInhabitedReference___closed__6;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_instInhabitedReference___closed__6;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Server_instInhabitedReference___closed__14;
x_3 = l_Lean_Server_instInhabitedReference___closed__15;
x_4 = l_Lean_Server_instInhabitedReference___closed__7;
x_5 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 2, x_2);
lean_ctor_set(x_5, 3, x_3);
lean_ctor_set(x_5, 4, x_4);
lean_ctor_set(x_5, 5, x_2);
lean_ctor_set(x_5, 6, x_3);
lean_ctor_set(x_5, 7, x_3);
return x_5;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = lean_box(0);
x_2 = l_Lean_Server_instInhabitedReference___closed__11;
x_3 = l_Lean_Server_instInhabitedReference___closed__13;
x_4 = l_Lean_Server_instInhabitedReference___closed__16;
x_5 = lean_box(0);
x_6 = l_Lean_Server_instInhabitedReference___closed__17;
x_7 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_3);
lean_ctor_set(x_7, 2, x_4);
lean_ctor_set(x_7, 3, x_1);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set(x_7, 5, x_1);
lean_ctor_set(x_7, 6, x_6);
return x_7;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = l_Lean_Server_instInhabitedReference___closed__19;
x_3 = l_Lean_Server_instInhabitedReference___closed__16;
x_4 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set(x_4, 2, x_1);
lean_ctor_set(x_4, 3, x_3);
lean_ctor_set(x_4, 4, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_instInhabitedReference___closed__20;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_1 = l_Lean_Server_instInhabitedReference___closed__1;
x_2 = l_Lean_Server_Reference_aliases___default___closed__1;
x_3 = l_Lean_Server_instInhabitedReference___closed__3;
x_4 = lean_box(0);
x_5 = l_Lean_Server_instInhabitedReference___closed__18;
x_6 = l_Lean_Server_instInhabitedReference___closed__21;
x_7 = 0;
x_8 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
lean_ctor_set(x_8, 3, x_4);
lean_ctor_set(x_8, 4, x_5);
lean_ctor_set(x_8, 5, x_6);
lean_ctor_set_uint8(x_8, sizeof(void*)*6, x_7);
return x_8;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedReference() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Server_instInhabitedReference___closed__22;
return x_1;
}
}
static lean_object* _init_l_Lean_Server_RefInfo_empty___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Server_Reference_aliases___default___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_RefInfo_empty() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Server_RefInfo_empty___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RefInfo_addRef(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_2, sizeof(void*)*6);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 0);
lean_dec(x_7);
x_8 = lean_array_push(x_6, x_2);
lean_ctor_set(x_1, 1, x_8);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_array_push(x_9, x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_1);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_1, 0);
lean_dec(x_13);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_2);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
else
{
uint8_t x_18; 
x_18 = lean_ctor_get_uint8(x_2, sizeof(void*)*6);
if (x_18 == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_1);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_1, 1);
x_21 = lean_ctor_get(x_1, 0);
lean_dec(x_21);
x_22 = lean_array_push(x_20, x_2);
lean_ctor_set(x_1, 1, x_22);
return x_1;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_array_push(x_23, x_2);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_3);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_instCoeRefInfoRefInfo___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = lean_ctor_get(x_5, 2);
lean_inc(x_8);
lean_dec(x_5);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_11 = lean_array_uset(x_7, x_2, x_8);
x_2 = x_10;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RefInfo_instCoeRefInfoRefInfo(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_6 = 0;
x_7 = l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_instCoeRefInfoRefInfo___spec__1(x_5, x_6, x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_11, 2);
lean_inc(x_12);
lean_dec(x_11);
lean_ctor_set(x_2, 0, x_12);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_ctor_get(x_14, 2);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_7);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_instCoeRefInfoRefInfo___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_instCoeRefInfoRefInfo___spec__1(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_ModuleRefs_addRef___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_29_(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Server_ModuleRefs_addRef___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_118_(x_2);
x_6 = lean_uint64_to_usize(x_5);
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
lean_dec(x_3);
x_9 = l_Std_AssocList_find_x3f___at_Lean_Server_ModuleRefs_addRef___spec__2(x_2, x_8);
lean_dec(x_8);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT uint8_t l_Std_AssocList_contains___at_Lean_Server_ModuleRefs_addRef___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_29_(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_ModuleRefs_addRef___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_118_(x_4);
x_8 = lean_uint64_to_usize(x_7);
x_9 = lean_usize_modn(x_8, x_6);
lean_dec(x_6);
x_10 = lean_array_uget(x_1, x_9);
lean_ctor_set(x_2, 2, x_10);
x_11 = lean_array_uset(x_1, x_9, x_2);
x_1 = x_11;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
x_16 = lean_array_get_size(x_1);
x_17 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_118_(x_13);
x_18 = lean_uint64_to_usize(x_17);
x_19 = lean_usize_modn(x_18, x_16);
lean_dec(x_16);
x_20 = lean_array_uget(x_1, x_19);
x_21 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_uset(x_1, x_19, x_21);
x_1 = x_22;
x_2 = x_15;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Server_ModuleRefs_addRef___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_AssocList_foldlM___at_Lean_Server_ModuleRefs_addRef___spec__7(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_expand___at_Lean_Server_ModuleRefs_addRef___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashMapImp_moveEntries___at_Lean_Server_ModuleRefs_addRef___spec__6(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_replace___at_Lean_Server_ModuleRefs_addRef___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_29_(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_AssocList_replace___at_Lean_Server_ModuleRefs_addRef___spec__8(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_29_(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_AssocList_replace___at_Lean_Server_ModuleRefs_addRef___spec__8(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMap_insert___at_Lean_Server_ModuleRefs_addRef___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; size_t x_9; size_t x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_118_(x_2);
x_9 = lean_uint64_to_usize(x_8);
x_10 = lean_usize_modn(x_9, x_7);
x_11 = lean_array_uget(x_6, x_10);
x_12 = l_Std_AssocList_contains___at_Lean_Server_ModuleRefs_addRef___spec__4(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_3);
lean_ctor_set(x_15, 2, x_11);
x_16 = lean_array_uset(x_6, x_10, x_15);
x_17 = l___private_Lean_Data_HashMap_0__Std_numBucketsForCapacity(x_14);
x_18 = lean_nat_dec_le(x_17, x_7);
lean_dec(x_7);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_free_object(x_1);
x_19 = l_Std_HashMapImp_expand___at_Lean_Server_ModuleRefs_addRef___spec__5(x_14, x_16);
return x_19;
}
else
{
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_7);
x_20 = l_Std_AssocList_replace___at_Lean_Server_ModuleRefs_addRef___spec__8(x_2, x_3, x_11);
x_21 = lean_array_uset(x_6, x_10, x_20);
lean_ctor_set(x_1, 1, x_21);
return x_1;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint64_t x_25; size_t x_26; size_t x_27; lean_object* x_28; uint8_t x_29; 
x_22 = lean_ctor_get(x_1, 0);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_1);
x_24 = lean_array_get_size(x_23);
x_25 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_118_(x_2);
x_26 = lean_uint64_to_usize(x_25);
x_27 = lean_usize_modn(x_26, x_24);
x_28 = lean_array_uget(x_23, x_27);
x_29 = l_Std_AssocList_contains___at_Lean_Server_ModuleRefs_addRef___spec__4(x_2, x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_22, x_30);
lean_dec(x_22);
x_32 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_32, 0, x_2);
lean_ctor_set(x_32, 1, x_3);
lean_ctor_set(x_32, 2, x_28);
x_33 = lean_array_uset(x_23, x_27, x_32);
x_34 = l___private_Lean_Data_HashMap_0__Std_numBucketsForCapacity(x_31);
x_35 = lean_nat_dec_le(x_34, x_24);
lean_dec(x_24);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = l_Std_HashMapImp_expand___at_Lean_Server_ModuleRefs_addRef___spec__5(x_31, x_33);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_33);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_24);
x_38 = l_Std_AssocList_replace___at_Lean_Server_ModuleRefs_addRef___spec__8(x_2, x_3, x_28);
x_39 = lean_array_uset(x_23, x_27, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_22);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_ModuleRefs_addRef(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_inc(x_3);
lean_inc(x_1);
x_4 = l_Std_HashMapImp_find_x3f___at_Lean_Server_ModuleRefs_addRef___spec__1(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Lean_Server_RefInfo_empty;
x_6 = l_Lean_Server_RefInfo_addRef(x_5, x_2);
x_7 = l_Std_HashMap_insert___at_Lean_Server_ModuleRefs_addRef___spec__3(x_1, x_3, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = l_Lean_Server_RefInfo_addRef(x_8, x_2);
x_10 = l_Std_HashMap_insert___at_Lean_Server_ModuleRefs_addRef___spec__3(x_1, x_3, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_ModuleRefs_addRef___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at_Lean_Server_ModuleRefs_addRef___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_contains___at_Lean_Server_ModuleRefs_addRef___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at_Lean_Server_ModuleRefs_addRef___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_1);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_AssocList_foldlM___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__2(x_4, x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMap_toList___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_box(0);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_2;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_4, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_2;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__3(x_3, x_8, x_9, x_2);
lean_dec(x_3);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTRAux___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_5, 1);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_array_get_size(x_10);
x_12 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_13 = 0;
x_14 = l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_instCoeRefInfoRefInfo___spec__1(x_12, x_13, x_10);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_5, 1, x_16);
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_7;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_9, 0);
x_20 = lean_ctor_get(x_19, 2);
lean_inc(x_20);
lean_dec(x_19);
lean_ctor_set(x_9, 0, x_20);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_9);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_5, 1, x_21);
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_7;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_9, 0);
lean_inc(x_23);
lean_dec(x_9);
x_24 = lean_ctor_get(x_23, 2);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_14);
lean_ctor_set(x_5, 1, x_26);
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_7;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; size_t x_34; size_t x_35; lean_object* x_36; 
x_28 = lean_ctor_get(x_1, 1);
x_29 = lean_ctor_get(x_5, 0);
x_30 = lean_ctor_get(x_5, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_5);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_array_get_size(x_32);
x_34 = lean_usize_of_nat(x_33);
lean_dec(x_33);
x_35 = 0;
x_36 = l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_instCoeRefInfoRefInfo___spec__1(x_34, x_35, x_32);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_29);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_39);
{
lean_object* _tmp_0 = x_28;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_31, 0);
lean_inc(x_41);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 x_42 = x_31;
} else {
 lean_dec_ref(x_31);
 x_42 = lean_box(0);
}
x_43 = lean_ctor_get(x_41, 2);
lean_inc(x_43);
lean_dec(x_41);
if (lean_is_scalar(x_42)) {
 x_44 = lean_alloc_ctor(1, 1, 0);
} else {
 x_44 = x_42;
}
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_36);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_29);
lean_ctor_set(x_46, 1, x_45);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_46);
{
lean_object* _tmp_0 = x_28;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; size_t x_56; size_t x_57; lean_object* x_58; 
x_48 = lean_ctor_get(x_1, 0);
x_49 = lean_ctor_get(x_1, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_1);
x_50 = lean_ctor_get(x_48, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_52 = x_48;
} else {
 lean_dec_ref(x_48);
 x_52 = lean_box(0);
}
x_53 = lean_ctor_get(x_51, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_51, 1);
lean_inc(x_54);
lean_dec(x_51);
x_55 = lean_array_get_size(x_54);
x_56 = lean_usize_of_nat(x_55);
lean_dec(x_55);
x_57 = 0;
x_58 = l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_instCoeRefInfoRefInfo___spec__1(x_56, x_57, x_54);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
if (lean_is_scalar(x_52)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_52;
}
lean_ctor_set(x_61, 0, x_50);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_2);
x_1 = x_49;
x_2 = x_62;
goto _start;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_64 = lean_ctor_get(x_53, 0);
lean_inc(x_64);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 x_65 = x_53;
} else {
 lean_dec_ref(x_53);
 x_65 = lean_box(0);
}
x_66 = lean_ctor_get(x_64, 2);
lean_inc(x_66);
lean_dec(x_64);
if (lean_is_scalar(x_65)) {
 x_67 = lean_alloc_ctor(1, 1, 0);
} else {
 x_67 = x_65;
}
lean_ctor_set(x_67, 0, x_66);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_58);
if (lean_is_scalar(x_52)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_52;
}
lean_ctor_set(x_69, 0, x_50);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_2);
x_1 = x_49;
x_2 = x_70;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_Std_HashMap_insert___at_Lean_Lsp_instFromJsonModuleRefs___spec__1(x_1, x_5, x_6);
x_1 = x_7;
x_2 = x_4;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMap_ofList___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Server_instInhabitedReference___closed__4;
x_3 = l_List_foldl___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__6(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Std_HashMap_toList___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__1(x_1);
x_3 = lean_box(0);
x_4 = l_List_mapTRAux___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__4(x_2, x_3);
x_5 = l_Std_HashMap_ofList___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__5(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_foldlM___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_ModuleRefs_instCoeModuleRefsModuleRefs___spec__3(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Lsp_RefInfo_empty___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Server_Reference_aliases___default___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_RefInfo_empty() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Lsp_RefInfo_empty___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_merge(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_Array_append___rarg(x_6, x_7);
if (lean_obj_tag(x_3) == 0)
{
lean_ctor_set(x_1, 1, x_8);
return x_1;
}
else
{
uint8_t x_9; 
lean_dec(x_5);
x_9 = !lean_is_exclusive(x_3);
if (x_9 == 0)
{
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_3);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_11);
return x_1;
}
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = l_Array_append___rarg(x_13, x_14);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_12);
x_17 = lean_ctor_get(x_3, 0);
lean_inc(x_17);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 x_18 = x_3;
} else {
 lean_dec_ref(x_3);
 x_18 = lean_box(0);
}
if (lean_is_scalar(x_18)) {
 x_19 = lean_alloc_ctor(1, 1, 0);
} else {
 x_19 = x_18;
}
lean_ctor_set(x_19, 0, x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_15);
return x_20;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_RefInfo_contains_contains(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_Lean_Lsp_instOrdPosition;
lean_inc(x_2);
x_5 = l_instDecidableRelLeLeOfOrd___rarg(x_4, x_3, x_2);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_instDecidableRelLtLtOfOrd___rarg(x_4, x_2, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_contains_contains___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Lsp_RefInfo_contains_contains(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_contains___spec__1___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_contains___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_contains___spec__1___closed__1;
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_contains___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_5, x_4);
if (x_7 == 0)
{
lean_dec(x_1);
lean_inc(x_6);
return x_6;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_uget(x_3, x_5);
lean_inc(x_1);
x_9 = l_Lean_Lsp_RefInfo_contains_contains(x_8, x_1);
if (x_9 == 0)
{
size_t x_10; size_t x_11; 
x_10 = 1;
x_11 = lean_usize_add(x_5, x_10);
{
size_t _tmp_4 = x_11;
lean_object* _tmp_5 = x_2;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
else
{
lean_object* x_13; 
lean_dec(x_1);
x_13 = l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_contains___spec__1___closed__2;
return x_13;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_RefInfo_contains___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_RefInfo_contains___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_RefInfo_contains___lambda__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Lsp_RefInfo_contains___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_RefInfo_contains___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_RefInfo_contains___lambda__2___closed__2;
x_2 = lean_box(0);
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_contains___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_array_get_size(x_4);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = 0;
x_8 = l_Lean_Lsp_RefInfo_contains___lambda__2___closed__1;
x_9 = l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_contains___spec__1(x_2, x_8, x_4, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = l_Lean_Lsp_RefInfo_contains___lambda__2___closed__3;
return x_11;
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_contains(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_Lean_Lsp_RefInfo_contains___lambda__2(x_1, x_2, x_4);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
lean_inc(x_2);
x_7 = l_Lean_Lsp_RefInfo_contains_contains(x_6, x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_box(0);
x_9 = l_Lean_Lsp_RefInfo_contains___lambda__2(x_1, x_2, x_8);
lean_dec(x_1);
return x_9;
}
else
{
uint8_t x_10; lean_object* x_11; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = 1;
x_11 = lean_box(x_10);
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_contains___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_contains___spec__1(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_contains___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Lsp_RefInfo_contains___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_contains___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Lsp_RefInfo_contains___lambda__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
lean_inc(x_1);
x_8 = l_Lean_Lsp_RefInfo_contains(x_7, x_1);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_dec(x_6);
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_11; 
x_11 = lean_array_push(x_3, x_6);
x_2 = x_5;
x_3 = x_11;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_findAt(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Std_HashMap_toList___at_Lean_Lsp_instToJsonModuleRefs___spec__2(x_1);
x_4 = l_Lean_Server_Reference_aliases___default___closed__1;
x_5 = l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__1(x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Server_Ilean_version___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(1u);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("version", 7);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("module", 6);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("references", 10);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__1;
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonPosition____x40_Lean_Data_Lsp_Basic___hyg_435____spec__1(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__2;
x_9 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_fromJsonRpcCallParams____x40_Lean_Data_Lsp_Extra___hyg_1158____spec__1(x_1, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_dec(x_9);
x_14 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__3;
x_15 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_fromJsonLeanIleanInfoParams____x40_Lean_Data_Lsp_Internal___hyg_850____spec__1(x_1, x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
lean_dec(x_13);
lean_dec(x_7);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_15);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_15, 0);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_7);
lean_ctor_set(x_21, 1, x_13);
lean_ctor_set(x_21, 2, x_20);
lean_ctor_set(x_15, 0, x_21);
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
lean_inc(x_22);
lean_dec(x_15);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_7);
lean_ctor_set(x_23, 1, x_13);
lean_ctor_set(x_23, 2, x_22);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
return x_24;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Server_instFromJsonIlean___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__1(size_t x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_lt(x_3, x_2);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; 
x_6 = lean_array_uget(x_4, x_3);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_4, x_3, x_7);
x_9 = l_List_redLength___rarg(x_6);
x_10 = lean_mk_empty_array_with_capacity(x_9);
lean_dec(x_9);
x_11 = l_List_toArrayAux___rarg(x_6, x_10);
x_12 = lean_array_get_size(x_11);
x_13 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_14 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__2(x_13, x_1, x_11);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = 1;
x_17 = lean_usize_add(x_3, x_16);
x_18 = lean_array_uset(x_8, x_3, x_15);
x_3 = x_17;
x_4 = x_18;
goto _start;
}
}
}
static lean_object* _init_l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("usages", 6);
return x_1;
}
}
static lean_object* _init_l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("definition", 10);
return x_1;
}
}
static lean_object* _init_l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__2;
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_6, 0);
x_10 = lean_ctor_get(x_6, 1);
x_11 = l_Lean_Lsp_RefIdent_toString(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_array_get_size(x_13);
x_15 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_16 = 0;
x_17 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_15, x_16, x_13);
x_18 = lean_array_get_size(x_17);
x_19 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_20 = l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__1(x_16, x_19, x_16, x_17);
x_21 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__1;
lean_ctor_set(x_6, 1, x_21);
lean_ctor_set(x_6, 0, x_22);
lean_inc(x_1);
lean_ctor_set(x_2, 1, x_1);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__3;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_2);
x_25 = l_Lean_Json_mkObj(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_11);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_3);
x_2 = x_8;
x_3 = x_27;
goto _start;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_29 = lean_ctor_get(x_12, 0);
lean_inc(x_29);
lean_dec(x_12);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_29, 1);
lean_inc(x_33);
lean_dec(x_29);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__4;
x_37 = lean_array_push(x_36, x_31);
x_38 = lean_array_push(x_37, x_32);
x_39 = lean_array_push(x_38, x_34);
x_40 = lean_array_push(x_39, x_35);
x_41 = lean_array_get_size(x_40);
x_42 = lean_usize_of_nat(x_41);
lean_dec(x_41);
x_43 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__2(x_42, x_16, x_40);
x_44 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__2;
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_2);
x_48 = l_Lean_Json_mkObj(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_11);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_3);
x_2 = x_8;
x_3 = x_50;
goto _start;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; size_t x_59; size_t x_60; lean_object* x_61; lean_object* x_62; size_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_52 = lean_ctor_get(x_2, 1);
x_53 = lean_ctor_get(x_6, 0);
x_54 = lean_ctor_get(x_6, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_6);
x_55 = l_Lean_Lsp_RefIdent_toString(x_53);
x_56 = lean_ctor_get(x_54, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_54, 1);
lean_inc(x_57);
lean_dec(x_54);
x_58 = lean_array_get_size(x_57);
x_59 = lean_usize_of_nat(x_58);
lean_dec(x_58);
x_60 = 0;
x_61 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_59, x_60, x_57);
x_62 = lean_array_get_size(x_61);
x_63 = lean_usize_of_nat(x_62);
lean_dec(x_62);
x_64 = l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__1(x_60, x_63, x_60, x_61);
x_65 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__1;
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
lean_inc(x_1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 0, x_67);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_68 = l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__3;
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_2);
x_70 = l_Lean_Json_mkObj(x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_55);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_3);
x_2 = x_52;
x_3 = x_72;
goto _start;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; size_t x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_74 = lean_ctor_get(x_56, 0);
lean_inc(x_74);
lean_dec(x_56);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = lean_ctor_get(x_74, 1);
lean_inc(x_78);
lean_dec(x_74);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__4;
x_82 = lean_array_push(x_81, x_76);
x_83 = lean_array_push(x_82, x_77);
x_84 = lean_array_push(x_83, x_79);
x_85 = lean_array_push(x_84, x_80);
x_86 = lean_array_get_size(x_85);
x_87 = lean_usize_of_nat(x_86);
lean_dec(x_86);
x_88 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__2(x_87, x_60, x_85);
x_89 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_89, 0, x_88);
x_90 = l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__2;
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_89);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_2);
x_93 = l_Lean_Json_mkObj(x_92);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_55);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_3);
x_2 = x_52;
x_3 = x_95;
goto _start;
}
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; size_t x_106; size_t x_107; lean_object* x_108; lean_object* x_109; size_t x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_97 = lean_ctor_get(x_2, 0);
x_98 = lean_ctor_get(x_2, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_2);
x_99 = lean_ctor_get(x_97, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_97, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 lean_ctor_release(x_97, 1);
 x_101 = x_97;
} else {
 lean_dec_ref(x_97);
 x_101 = lean_box(0);
}
x_102 = l_Lean_Lsp_RefIdent_toString(x_99);
x_103 = lean_ctor_get(x_100, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_100, 1);
lean_inc(x_104);
lean_dec(x_100);
x_105 = lean_array_get_size(x_104);
x_106 = lean_usize_of_nat(x_105);
lean_dec(x_105);
x_107 = 0;
x_108 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_106, x_107, x_104);
x_109 = lean_array_get_size(x_108);
x_110 = lean_usize_of_nat(x_109);
lean_dec(x_109);
x_111 = l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__1(x_107, x_110, x_107, x_108);
x_112 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_112, 0, x_111);
x_113 = l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__1;
if (lean_is_scalar(x_101)) {
 x_114 = lean_alloc_ctor(0, 2, 0);
} else {
 x_114 = x_101;
}
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_112);
lean_inc(x_1);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_1);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_116 = l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__3;
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_115);
x_118 = l_Lean_Json_mkObj(x_117);
x_119 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_119, 0, x_102);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_3);
x_2 = x_98;
x_3 = x_120;
goto _start;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; size_t x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_122 = lean_ctor_get(x_103, 0);
lean_inc(x_122);
lean_dec(x_103);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_123, 1);
lean_inc(x_125);
lean_dec(x_123);
x_126 = lean_ctor_get(x_122, 1);
lean_inc(x_126);
lean_dec(x_122);
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
lean_dec(x_126);
x_129 = l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__4;
x_130 = lean_array_push(x_129, x_124);
x_131 = lean_array_push(x_130, x_125);
x_132 = lean_array_push(x_131, x_127);
x_133 = lean_array_push(x_132, x_128);
x_134 = lean_array_get_size(x_133);
x_135 = lean_usize_of_nat(x_134);
lean_dec(x_134);
x_136 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__2(x_135, x_107, x_133);
x_137 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_137, 0, x_136);
x_138 = l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__2;
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_137);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_115);
x_141 = l_Lean_Json_mkObj(x_140);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_102);
lean_ctor_set(x_142, 1, x_141);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_3);
x_2 = x_98;
x_3 = x_143;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_JsonNumber_fromNat(x_2);
x_4 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = 1;
x_11 = l_Lean_Name_toString(x_9, x_10);
x_12 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__2;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_7);
x_16 = lean_ctor_get(x_1, 2);
lean_inc(x_16);
lean_dec(x_1);
x_17 = l_Std_HashMap_toList___at_Lean_Lsp_instToJsonModuleRefs___spec__2(x_16);
x_18 = l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2(x_7, x_17, x_7);
x_19 = l_Lean_Json_mkObj(x_18);
x_20 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__3;
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_7);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_7);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_15);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_8);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_List_join___rarg(x_25);
x_27 = l_Lean_Json_mkObj(x_26);
return x_27;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__1(x_5, x_6, x_7, x_4);
return x_8;
}
}
static lean_object* _init_l_Lean_Server_instToJsonIlean___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922_), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_instToJsonIlean() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Server_instToJsonIlean___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Ilean_load___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Failed to load ilean at ", 24);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Ilean_load___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(": ", 2);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Ilean_load(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_FS_readFile(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = l_Lean_Json_parse(x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_free_object(x_3);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_Server_Ilean_load___closed__1;
x_10 = lean_string_append(x_9, x_1);
x_11 = l_Lean_Server_Ilean_load___closed__2;
x_12 = lean_string_append(x_10, x_11);
x_13 = lean_string_append(x_12, x_8);
lean_dec(x_8);
x_14 = l_Lean_Server_instInhabitedReference___closed__12;
x_15 = lean_string_append(x_13, x_14);
x_16 = l_IO_throwServerError___rarg(x_15, x_6);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_7, 0);
lean_inc(x_17);
lean_dec(x_7);
x_18 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846_(x_17);
lean_dec(x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_free_object(x_3);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lean_Server_Ilean_load___closed__1;
x_21 = lean_string_append(x_20, x_1);
x_22 = l_Lean_Server_Ilean_load___closed__2;
x_23 = lean_string_append(x_21, x_22);
x_24 = lean_string_append(x_23, x_19);
lean_dec(x_19);
x_25 = l_Lean_Server_instInhabitedReference___closed__12;
x_26 = lean_string_append(x_24, x_25);
x_27 = l_IO_throwServerError___rarg(x_26, x_6);
return x_27;
}
else
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_18, 0);
lean_inc(x_28);
lean_dec(x_18);
lean_ctor_set(x_3, 0, x_28);
return x_3;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_3, 0);
x_30 = lean_ctor_get(x_3, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_3);
x_31 = l_Lean_Json_parse(x_29);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
lean_dec(x_31);
x_33 = l_Lean_Server_Ilean_load___closed__1;
x_34 = lean_string_append(x_33, x_1);
x_35 = l_Lean_Server_Ilean_load___closed__2;
x_36 = lean_string_append(x_34, x_35);
x_37 = lean_string_append(x_36, x_32);
lean_dec(x_32);
x_38 = l_Lean_Server_instInhabitedReference___closed__12;
x_39 = lean_string_append(x_37, x_38);
x_40 = l_IO_throwServerError___rarg(x_39, x_30);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_31, 0);
lean_inc(x_41);
lean_dec(x_31);
x_42 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846_(x_41);
lean_dec(x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
lean_dec(x_42);
x_44 = l_Lean_Server_Ilean_load___closed__1;
x_45 = lean_string_append(x_44, x_1);
x_46 = l_Lean_Server_Ilean_load___closed__2;
x_47 = lean_string_append(x_45, x_46);
x_48 = lean_string_append(x_47, x_43);
lean_dec(x_43);
x_49 = l_Lean_Server_instInhabitedReference___closed__12;
x_50 = lean_string_append(x_48, x_49);
x_51 = l_IO_throwServerError___rarg(x_50, x_30);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_42, 0);
lean_inc(x_52);
lean_dec(x_42);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_30);
return x_53;
}
}
}
}
else
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_3);
if (x_54 == 0)
{
return x_3;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_3, 0);
x_56 = lean_ctor_get(x_3, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_3);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Ilean_load___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Server_Ilean_load(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_identOf(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_2, 3);
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = lean_ctor_get_uint8(x_2, sizeof(void*)*4);
x_7 = lean_box(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
case 4:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_ctor_get_uint8(x_2, sizeof(void*)*4);
x_13 = lean_box(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
default: 
{
lean_object* x_16; 
x_16 = lean_box(0);
return x_16;
}
}
}
case 4:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_1, 0);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = 0;
x_21 = lean_box(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
return x_23;
}
default: 
{
lean_object* x_24; 
x_24 = lean_box(0);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_identOf___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Server_identOf(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_Server_findReferences___spec__4___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Id_instMonadId;
x_2 = l_StateT_instMonadStateT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_Server_findReferences___spec__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_panic___at_Lean_Server_findReferences___spec__4___closed__1;
x_3 = l_instInhabited___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Server_findReferences___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_panic___at_Lean_Server_findReferences___spec__4___closed__2;
x_4 = lean_panic_fn(x_3, x_1);
x_5 = lean_apply_1(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Server_findReferences___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_List_reverse___rarg(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3(x_1, x_2, x_3, x_10, x_6);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_ctor_set(x_4, 1, x_5);
lean_ctor_set(x_4, 0, x_13);
{
lean_object* _tmp_3 = x_11;
lean_object* _tmp_4 = x_4;
lean_object* _tmp_5 = x_14;
x_4 = _tmp_3;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_4, 0);
x_17 = lean_ctor_get(x_4, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_18 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3(x_1, x_2, x_3, x_16, x_6);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_5);
x_4 = x_17;
x_5 = x_21;
x_6 = x_20;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Server.InfoUtils", 21);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Elab.InfoTree.visitM.go", 28);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unexpected context-free info tree node", 38);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__1;
x_2 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__2;
x_3 = lean_unsigned_to_nat(23u);
x_4 = lean_unsigned_to_nat(21u);
x_5 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
switch (lean_obj_tag(x_4)) {
case 0:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_6);
x_3 = x_8;
x_4 = x_7;
goto _start;
}
case 1:
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_10 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__4;
x_11 = l_panic___at_Lean_Server_findReferences___spec__4(x_10, x_5);
return x_11;
}
default: 
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_5);
return x_13;
}
}
}
else
{
switch (lean_obj_tag(x_4)) {
case 0:
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_3, 0);
lean_dec(x_15);
x_16 = lean_ctor_get(x_4, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_4, 1);
lean_inc(x_17);
lean_dec(x_4);
lean_ctor_set(x_3, 0, x_16);
x_4 = x_17;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_3);
x_19 = lean_ctor_get(x_4, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_4, 1);
lean_inc(x_20);
lean_dec(x_4);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_19);
x_3 = x_21;
x_4 = x_20;
goto _start;
}
}
case 1:
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_3);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_24 = lean_ctor_get(x_3, 0);
x_25 = lean_ctor_get(x_4, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_4, 1);
lean_inc(x_26);
lean_dec(x_4);
lean_inc(x_1);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
x_27 = lean_apply_4(x_1, x_24, x_25, x_26, x_5);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
lean_inc(x_24);
x_29 = l_Lean_Elab_Info_updateContext_x3f(x_3, x_25);
lean_inc(x_26);
x_30 = l_Std_PersistentArray_toList___rarg(x_26);
x_31 = lean_box(0);
lean_inc(x_2);
x_32 = l_List_mapM_loop___at_Lean_Server_findReferences___spec__5(x_1, x_2, x_29, x_30, x_31, x_28);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_apply_5(x_2, x_24, x_25, x_26, x_33, x_34);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_35, 0, x_38);
return x_35;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_35, 0);
x_40 = lean_ctor_get(x_35, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_35);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_39);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_43 = lean_ctor_get(x_3, 0);
lean_inc(x_43);
lean_dec(x_3);
x_44 = lean_ctor_get(x_4, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_4, 1);
lean_inc(x_45);
lean_dec(x_4);
lean_inc(x_1);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
x_46 = lean_apply_4(x_1, x_43, x_44, x_45, x_5);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
lean_inc(x_43);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_43);
x_49 = l_Lean_Elab_Info_updateContext_x3f(x_48, x_44);
lean_inc(x_45);
x_50 = l_Std_PersistentArray_toList___rarg(x_45);
x_51 = lean_box(0);
lean_inc(x_2);
x_52 = l_List_mapM_loop___at_Lean_Server_findReferences___spec__5(x_1, x_2, x_49, x_50, x_51, x_47);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_apply_5(x_2, x_43, x_44, x_45, x_53, x_54);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_58 = x_55;
} else {
 lean_dec_ref(x_55);
 x_58 = lean_box(0);
}
x_59 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_59, 0, x_56);
if (lean_is_scalar(x_58)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_58;
}
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_57);
return x_60;
}
}
default: 
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_61 = lean_box(0);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_5);
return x_62;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM___at_Lean_Server_findReferences___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3(x_1, x_2, x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_4(x_1, x_2, x_3, x_4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1___lambda__1___boxed), 6, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Lean_Elab_InfoTree_visitM___at_Lean_Server_findReferences___spec__2(x_1, x_5, x_3, x_4);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_dec(x_8);
x_9 = lean_box(0);
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Server_identOf(x_3);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
x_13 = l_Lean_Elab_Info_range_x3f(x_3);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_box(0);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 0, x_14);
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_String_Range_toLspRange(x_1, x_15);
lean_dec(x_15);
x_17 = l_Lean_Elab_Info_stx(x_3);
x_18 = l_Lean_Server_Reference_aliases___default___closed__1;
x_19 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_19, 0, x_11);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_19, 2, x_16);
lean_ctor_set(x_19, 3, x_17);
lean_ctor_set(x_19, 4, x_2);
lean_ctor_set(x_19, 5, x_3);
x_20 = lean_unbox(x_12);
lean_dec(x_12);
lean_ctor_set_uint8(x_19, sizeof(void*)*6, x_20);
x_21 = lean_array_push(x_5, x_19);
x_22 = lean_box(0);
lean_ctor_set(x_9, 1, x_21);
lean_ctor_set(x_9, 0, x_22);
return x_9;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_9, 0);
x_24 = lean_ctor_get(x_9, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_9);
x_25 = l_Lean_Elab_Info_range_x3f(x_3);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_5);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_28 = lean_ctor_get(x_25, 0);
lean_inc(x_28);
lean_dec(x_25);
x_29 = l_String_Range_toLspRange(x_1, x_28);
lean_dec(x_28);
x_30 = l_Lean_Elab_Info_stx(x_3);
x_31 = l_Lean_Server_Reference_aliases___default___closed__1;
x_32 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_32, 0, x_23);
lean_ctor_set(x_32, 1, x_31);
lean_ctor_set(x_32, 2, x_29);
lean_ctor_set(x_32, 3, x_30);
lean_ctor_set(x_32, 4, x_2);
lean_ctor_set(x_32, 5, x_3);
x_33 = lean_unbox(x_24);
lean_dec(x_24);
lean_ctor_set_uint8(x_32, sizeof(void*)*6, x_33);
x_34 = lean_array_push(x_5, x_32);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
}
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__1___boxed), 4, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_4, x_3);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; 
lean_dec(x_5);
x_9 = lean_array_uget(x_2, x_4);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__2___boxed), 5, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___closed__1;
x_12 = l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1(x_11, x_10, x_9, x_6);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = 1;
x_15 = lean_usize_add(x_4, x_14);
x_16 = lean_box(0);
x_4 = x_15;
x_5 = x_16;
x_6 = x_13;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_findReferences(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; size_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_5 = 0;
x_6 = lean_box(0);
x_7 = l_Lean_Server_Reference_aliases___default___closed__1;
x_8 = l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6(x_1, x_2, x_4, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_findReferences___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Server_findReferences(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_combineFvars_findCanonicalBinder___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Server_combineFvars_findCanonicalBinder___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1727_(x_2);
x_6 = lean_uint64_to_usize(x_5);
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
lean_dec(x_3);
x_9 = l_Std_AssocList_find_x3f___at_Lean_Server_combineFvars_findCanonicalBinder___spec__2(x_2, x_8);
lean_dec(x_8);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_combineFvars_findCanonicalBinder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = l_Std_HashMapImp_find_x3f___at_Lean_Server_combineFvars_findCanonicalBinder___spec__1(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_2 = x_4;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_combineFvars_findCanonicalBinder___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at_Lean_Server_combineFvars_findCanonicalBinder___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_combineFvars_applyIdMap(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Lean_Server_combineFvars_findCanonicalBinder(x_1, x_4);
lean_ctor_set(x_2, 0, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Lean_Server_combineFvars_findCanonicalBinder(x_1, x_6);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_AssocList_contains___at_Lean_Server_combineFvars_insertIdMap___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_combineFvars_insertIdMap___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1727_(x_4);
x_8 = lean_uint64_to_usize(x_7);
x_9 = lean_usize_modn(x_8, x_6);
lean_dec(x_6);
x_10 = lean_array_uget(x_1, x_9);
lean_ctor_set(x_2, 2, x_10);
x_11 = lean_array_uset(x_1, x_9, x_2);
x_1 = x_11;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
x_16 = lean_array_get_size(x_1);
x_17 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1727_(x_13);
x_18 = lean_uint64_to_usize(x_17);
x_19 = lean_usize_modn(x_18, x_16);
lean_dec(x_16);
x_20 = lean_array_uget(x_1, x_19);
x_21 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_uset(x_1, x_19, x_21);
x_1 = x_22;
x_2 = x_15;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Server_combineFvars_insertIdMap___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_AssocList_foldlM___at_Lean_Server_combineFvars_insertIdMap___spec__5(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_expand___at_Lean_Server_combineFvars_insertIdMap___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashMapImp_moveEntries___at_Lean_Server_combineFvars_insertIdMap___spec__4(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_replace___at_Lean_Server_combineFvars_insertIdMap___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_name_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_AssocList_replace___at_Lean_Server_combineFvars_insertIdMap___spec__6(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_name_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_AssocList_replace___at_Lean_Server_combineFvars_insertIdMap___spec__6(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMap_insert___at_Lean_Server_combineFvars_insertIdMap___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; size_t x_9; size_t x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1727_(x_2);
x_9 = lean_uint64_to_usize(x_8);
x_10 = lean_usize_modn(x_9, x_7);
x_11 = lean_array_uget(x_6, x_10);
x_12 = l_Std_AssocList_contains___at_Lean_Server_combineFvars_insertIdMap___spec__2(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_3);
lean_ctor_set(x_15, 2, x_11);
x_16 = lean_array_uset(x_6, x_10, x_15);
x_17 = l___private_Lean_Data_HashMap_0__Std_numBucketsForCapacity(x_14);
x_18 = lean_nat_dec_le(x_17, x_7);
lean_dec(x_7);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_free_object(x_1);
x_19 = l_Std_HashMapImp_expand___at_Lean_Server_combineFvars_insertIdMap___spec__3(x_14, x_16);
return x_19;
}
else
{
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_7);
x_20 = l_Std_AssocList_replace___at_Lean_Server_combineFvars_insertIdMap___spec__6(x_2, x_3, x_11);
x_21 = lean_array_uset(x_6, x_10, x_20);
lean_ctor_set(x_1, 1, x_21);
return x_1;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint64_t x_25; size_t x_26; size_t x_27; lean_object* x_28; uint8_t x_29; 
x_22 = lean_ctor_get(x_1, 0);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_1);
x_24 = lean_array_get_size(x_23);
x_25 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1727_(x_2);
x_26 = lean_uint64_to_usize(x_25);
x_27 = lean_usize_modn(x_26, x_24);
x_28 = lean_array_uget(x_23, x_27);
x_29 = l_Std_AssocList_contains___at_Lean_Server_combineFvars_insertIdMap___spec__2(x_2, x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_22, x_30);
lean_dec(x_22);
x_32 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_32, 0, x_2);
lean_ctor_set(x_32, 1, x_3);
lean_ctor_set(x_32, 2, x_28);
x_33 = lean_array_uset(x_23, x_27, x_32);
x_34 = l___private_Lean_Data_HashMap_0__Std_numBucketsForCapacity(x_31);
x_35 = lean_nat_dec_le(x_34, x_24);
lean_dec(x_24);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = l_Std_HashMapImp_expand___at_Lean_Server_combineFvars_insertIdMap___spec__3(x_31, x_33);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_33);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_24);
x_38 = l_Std_AssocList_replace___at_Lean_Server_combineFvars_insertIdMap___spec__6(x_2, x_3, x_28);
x_39 = lean_array_uset(x_23, x_27, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_22);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_combineFvars_insertIdMap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_3);
x_4 = l_Lean_Server_combineFvars_findCanonicalBinder(x_3, x_1);
lean_inc(x_3);
x_5 = l_Lean_Server_combineFvars_findCanonicalBinder(x_3, x_2);
x_6 = lean_name_eq(x_5, x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Std_HashMap_insert___at_Lean_Server_combineFvars_insertIdMap___spec__1(x_3, x_4, x_5);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_contains___at_Lean_Server_combineFvars_insertIdMap___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at_Lean_Server_combineFvars_insertIdMap___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_combineFvars_buildIdMap___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_551_(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Server_combineFvars_buildIdMap___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_630_(x_2);
x_6 = lean_uint64_to_usize(x_5);
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
lean_dec(x_3);
x_9 = l_Std_AssocList_find_x3f___at_Lean_Server_combineFvars_buildIdMap___spec__2(x_2, x_8);
lean_dec(x_8);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_combineFvars_buildIdMap___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars_buildIdMap___spec__4(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_4, x_3);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
x_9 = lean_array_uget(x_2, x_4);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
size_t x_11; size_t x_12; lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
x_11 = 1;
x_12 = lean_usize_add(x_4, x_11);
x_13 = lean_box(0);
x_4 = x_12;
x_5 = x_13;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_9, 2);
lean_inc(x_15);
lean_dec(x_9);
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
lean_inc(x_1);
x_17 = l_Std_HashMapImp_find_x3f___at_Lean_Server_combineFvars_buildIdMap___spec__1(x_1, x_15);
if (lean_obj_tag(x_17) == 0)
{
size_t x_18; size_t x_19; lean_object* x_20; 
lean_dec(x_16);
x_18 = 1;
x_19 = lean_usize_add(x_4, x_18);
x_20 = lean_box(0);
x_4 = x_19;
x_5 = x_20;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_17, 0);
lean_inc(x_22);
lean_dec(x_17);
x_23 = l_Lean_Server_combineFvars_insertIdMap(x_22, x_16, x_6);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = 1;
x_26 = lean_usize_add(x_4, x_25);
x_27 = lean_box(0);
x_4 = x_26;
x_5 = x_27;
x_6 = x_24;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Server_combineFvars_buildIdMap___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_panic___at_Lean_Server_findReferences___spec__4___closed__2;
x_4 = lean_panic_fn(x_3, x_1);
x_5 = lean_apply_1(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Server_combineFvars_buildIdMap___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_List_reverse___rarg(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_combineFvars_buildIdMap___spec__7(x_1, x_2, x_3, x_10, x_6);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_ctor_set(x_4, 1, x_5);
lean_ctor_set(x_4, 0, x_13);
{
lean_object* _tmp_3 = x_11;
lean_object* _tmp_4 = x_4;
lean_object* _tmp_5 = x_14;
x_4 = _tmp_3;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_4, 0);
x_17 = lean_ctor_get(x_4, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_18 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_combineFvars_buildIdMap___spec__7(x_1, x_2, x_3, x_16, x_6);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_5);
x_4 = x_17;
x_5 = x_21;
x_6 = x_20;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_combineFvars_buildIdMap___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
switch (lean_obj_tag(x_4)) {
case 0:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_6);
x_3 = x_8;
x_4 = x_7;
goto _start;
}
case 1:
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_10 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__4;
x_11 = l_panic___at_Lean_Server_combineFvars_buildIdMap___spec__8(x_10, x_5);
return x_11;
}
default: 
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_5);
return x_13;
}
}
}
else
{
switch (lean_obj_tag(x_4)) {
case 0:
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_3, 0);
lean_dec(x_15);
x_16 = lean_ctor_get(x_4, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_4, 1);
lean_inc(x_17);
lean_dec(x_4);
lean_ctor_set(x_3, 0, x_16);
x_4 = x_17;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_3);
x_19 = lean_ctor_get(x_4, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_4, 1);
lean_inc(x_20);
lean_dec(x_4);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_19);
x_3 = x_21;
x_4 = x_20;
goto _start;
}
}
case 1:
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_3);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_24 = lean_ctor_get(x_3, 0);
x_25 = lean_ctor_get(x_4, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_4, 1);
lean_inc(x_26);
lean_dec(x_4);
lean_inc(x_1);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
x_27 = lean_apply_4(x_1, x_24, x_25, x_26, x_5);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
lean_inc(x_24);
x_29 = l_Lean_Elab_Info_updateContext_x3f(x_3, x_25);
lean_inc(x_26);
x_30 = l_Std_PersistentArray_toList___rarg(x_26);
x_31 = lean_box(0);
lean_inc(x_2);
x_32 = l_List_mapM_loop___at_Lean_Server_combineFvars_buildIdMap___spec__9(x_1, x_2, x_29, x_30, x_31, x_28);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_apply_5(x_2, x_24, x_25, x_26, x_33, x_34);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_35, 0, x_38);
return x_35;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_35, 0);
x_40 = lean_ctor_get(x_35, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_35);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_39);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_43 = lean_ctor_get(x_3, 0);
lean_inc(x_43);
lean_dec(x_3);
x_44 = lean_ctor_get(x_4, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_4, 1);
lean_inc(x_45);
lean_dec(x_4);
lean_inc(x_1);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
x_46 = lean_apply_4(x_1, x_43, x_44, x_45, x_5);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
lean_inc(x_43);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_43);
x_49 = l_Lean_Elab_Info_updateContext_x3f(x_48, x_44);
lean_inc(x_45);
x_50 = l_Std_PersistentArray_toList___rarg(x_45);
x_51 = lean_box(0);
lean_inc(x_2);
x_52 = l_List_mapM_loop___at_Lean_Server_combineFvars_buildIdMap___spec__9(x_1, x_2, x_49, x_50, x_51, x_47);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_apply_5(x_2, x_43, x_44, x_45, x_53, x_54);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_58 = x_55;
} else {
 lean_dec_ref(x_55);
 x_58 = lean_box(0);
}
x_59 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_59, 0, x_56);
if (lean_is_scalar(x_58)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_58;
}
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_57);
return x_60;
}
}
default: 
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_61 = lean_box(0);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_5);
return x_62;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM___at_Lean_Server_combineFvars_buildIdMap___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_combineFvars_buildIdMap___spec__7(x_1, x_2, x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_combineFvars_buildIdMap___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1___lambda__1___boxed), 6, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Lean_Elab_InfoTree_visitM___at_Lean_Server_combineFvars_buildIdMap___spec__6(x_1, x_5, x_3, x_4);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_dec(x_8);
x_9 = lean_box(0);
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineFvars_buildIdMap___spec__10___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 8)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Lean_Server_combineFvars_insertIdMap(x_6, x_7, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Server_combineFvars_buildIdMap___spec__10___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Server_combineFvars_buildIdMap___spec__10___lambda__1___boxed), 4, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineFvars_buildIdMap___spec__10(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_2, x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; 
lean_dec(x_4);
x_7 = lean_array_uget(x_1, x_2);
x_8 = l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___closed__1;
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Server_combineFvars_buildIdMap___spec__10___closed__1;
x_10 = l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_combineFvars_buildIdMap___spec__5(x_8, x_9, x_7, x_5);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = 1;
x_14 = lean_usize_add(x_2, x_13);
x_2 = x_14;
x_4 = x_11;
x_5 = x_12;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_4);
lean_ctor_set(x_16, 1, x_5);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_combineFvars_buildIdMap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_6 = 0;
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Std_mkHashMapImp___rarg(x_7);
x_9 = lean_box(0);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars_buildIdMap___spec__4(x_3, x_2, x_5, x_6, x_9, x_8);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_array_get_size(x_1);
x_13 = lean_nat_dec_lt(x_7, x_12);
if (x_13 == 0)
{
lean_dec(x_12);
return x_11;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_12, x_12);
if (x_14 == 0)
{
lean_dec(x_12);
return x_11;
}
else
{
size_t x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_16 = l_Array_foldlMUnsafe_fold___at_Lean_Server_combineFvars_buildIdMap___spec__10(x_1, x_6, x_15, x_9, x_11);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_combineFvars_buildIdMap___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at_Lean_Server_combineFvars_buildIdMap___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_combineFvars_buildIdMap___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMap___at_Lean_Server_combineFvars_buildIdMap___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars_buildIdMap___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars_buildIdMap___spec__4(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineFvars_buildIdMap___spec__10___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_foldlMUnsafe_fold___at_Lean_Server_combineFvars_buildIdMap___spec__10___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineFvars_buildIdMap___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Server_combineFvars_buildIdMap___spec__10(x_1, x_6, x_7, x_4, x_5);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_combineFvars_buildIdMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_combineFvars_buildIdMap(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_combineFvars___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Std_AssocList_contains___at_Lean_Server_combineFvars___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_551_(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_combineFvars___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_630_(x_4);
x_8 = lean_uint64_to_usize(x_7);
x_9 = lean_usize_modn(x_8, x_6);
lean_dec(x_6);
x_10 = lean_array_uget(x_1, x_9);
lean_ctor_set(x_2, 2, x_10);
x_11 = lean_array_uset(x_1, x_9, x_2);
x_1 = x_11;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
x_16 = lean_array_get_size(x_1);
x_17 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_630_(x_13);
x_18 = lean_uint64_to_usize(x_17);
x_19 = lean_usize_modn(x_18, x_16);
lean_dec(x_16);
x_20 = lean_array_uget(x_1, x_19);
x_21 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_uset(x_1, x_19, x_21);
x_1 = x_22;
x_2 = x_15;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Server_combineFvars___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_AssocList_foldlM___at_Lean_Server_combineFvars___spec__6(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_expand___at_Lean_Server_combineFvars___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashMapImp_moveEntries___at_Lean_Server_combineFvars___spec__5(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_replace___at_Lean_Server_combineFvars___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_551_(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_AssocList_replace___at_Lean_Server_combineFvars___spec__7(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_551_(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_AssocList_replace___at_Lean_Server_combineFvars___spec__7(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMap_insert___at_Lean_Server_combineFvars___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; size_t x_9; size_t x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_630_(x_2);
x_9 = lean_uint64_to_usize(x_8);
x_10 = lean_usize_modn(x_9, x_7);
x_11 = lean_array_uget(x_6, x_10);
x_12 = l_Std_AssocList_contains___at_Lean_Server_combineFvars___spec__3(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_3);
lean_ctor_set(x_15, 2, x_11);
x_16 = lean_array_uset(x_6, x_10, x_15);
x_17 = l___private_Lean_Data_HashMap_0__Std_numBucketsForCapacity(x_14);
x_18 = lean_nat_dec_le(x_17, x_7);
lean_dec(x_7);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_free_object(x_1);
x_19 = l_Std_HashMapImp_expand___at_Lean_Server_combineFvars___spec__4(x_14, x_16);
return x_19;
}
else
{
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_7);
x_20 = l_Std_AssocList_replace___at_Lean_Server_combineFvars___spec__7(x_2, x_3, x_11);
x_21 = lean_array_uset(x_6, x_10, x_20);
lean_ctor_set(x_1, 1, x_21);
return x_1;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint64_t x_25; size_t x_26; size_t x_27; lean_object* x_28; uint8_t x_29; 
x_22 = lean_ctor_get(x_1, 0);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_1);
x_24 = lean_array_get_size(x_23);
x_25 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_630_(x_2);
x_26 = lean_uint64_to_usize(x_25);
x_27 = lean_usize_modn(x_26, x_24);
x_28 = lean_array_uget(x_23, x_27);
x_29 = l_Std_AssocList_contains___at_Lean_Server_combineFvars___spec__3(x_2, x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_22, x_30);
lean_dec(x_22);
x_32 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_32, 0, x_2);
lean_ctor_set(x_32, 1, x_3);
lean_ctor_set(x_32, 2, x_28);
x_33 = lean_array_uset(x_23, x_27, x_32);
x_34 = l___private_Lean_Data_HashMap_0__Std_numBucketsForCapacity(x_31);
x_35 = lean_nat_dec_le(x_34, x_24);
lean_dec(x_24);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = l_Std_HashMapImp_expand___at_Lean_Server_combineFvars___spec__4(x_31, x_33);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_33);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_24);
x_38 = l_Std_AssocList_replace___at_Lean_Server_combineFvars___spec__7(x_2, x_3, x_28);
x_39 = lean_array_uset(x_23, x_27, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_22);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__8(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_lt(x_3, x_2);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_array_uget(x_1, x_3);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
size_t x_8; size_t x_9; 
lean_dec(x_7);
lean_dec(x_6);
x_8 = 1;
x_9 = lean_usize_add(x_3, x_8);
x_3 = x_9;
goto _start;
}
else
{
uint8_t x_11; 
x_11 = lean_ctor_get_uint8(x_6, sizeof(void*)*6);
if (x_11 == 0)
{
size_t x_12; size_t x_13; 
lean_dec(x_7);
lean_dec(x_6);
x_12 = 1;
x_13 = lean_usize_add(x_3, x_12);
x_3 = x_13;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_15 = lean_ctor_get(x_6, 2);
lean_inc(x_15);
lean_dec(x_6);
x_16 = lean_ctor_get(x_7, 0);
lean_inc(x_16);
lean_dec(x_7);
x_17 = l_Std_HashMap_insert___at_Lean_Server_combineFvars___spec__2(x_4, x_15, x_16);
x_18 = 1;
x_19 = lean_usize_add(x_3, x_18);
x_3 = x_19;
x_4 = x_17;
goto _start;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_HashMapImp_contains___at_Lean_Server_combineFvars___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; uint8_t x_9; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l___private_Lean_Expr_0__Lean_hashFVarId____x40_Lean_Expr___hyg_1727_(x_2);
x_6 = lean_uint64_to_usize(x_5);
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
x_9 = l_Std_AssocList_contains___at_Lean_Server_combineFvars_insertIdMap___spec__2(x_2, x_8);
lean_dec(x_8);
return x_9;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__10___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__10(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_lt(x_4, x_3);
if (x_6 == 0)
{
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_array_uget(x_2, x_4);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; size_t x_10; size_t x_11; 
lean_dec(x_8);
x_9 = lean_array_push(x_5, x_7);
x_10 = 1;
x_11 = lean_usize_add(x_4, x_10);
x_4 = x_11;
x_5 = x_9;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; uint8_t x_19; 
x_13 = lean_ctor_get(x_7, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_7, 3);
lean_inc(x_14);
x_15 = lean_ctor_get(x_7, 4);
lean_inc(x_15);
x_16 = lean_ctor_get(x_7, 5);
lean_inc(x_16);
x_17 = lean_ctor_get_uint8(x_7, sizeof(void*)*6);
x_18 = lean_ctor_get(x_8, 0);
lean_inc(x_18);
x_19 = l_Std_HashMapImp_contains___at_Lean_Server_combineFvars___spec__9(x_1, x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; size_t x_21; size_t x_22; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_8);
x_20 = lean_array_push(x_5, x_7);
x_21 = 1;
x_22 = lean_usize_add(x_4, x_21);
x_4 = x_22;
x_5 = x_20;
goto _start;
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_7);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; size_t x_35; size_t x_36; 
x_25 = lean_ctor_get(x_7, 5);
lean_dec(x_25);
x_26 = lean_ctor_get(x_7, 4);
lean_dec(x_26);
x_27 = lean_ctor_get(x_7, 3);
lean_dec(x_27);
x_28 = lean_ctor_get(x_7, 2);
lean_dec(x_28);
x_29 = lean_ctor_get(x_7, 1);
lean_dec(x_29);
x_30 = lean_ctor_get(x_7, 0);
lean_dec(x_30);
lean_inc(x_8);
lean_inc(x_1);
x_31 = l_Lean_Server_combineFvars_applyIdMap(x_1, x_8);
x_32 = l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__10___closed__1;
x_33 = lean_array_push(x_32, x_8);
lean_ctor_set(x_7, 1, x_33);
lean_ctor_set(x_7, 0, x_31);
x_34 = lean_array_push(x_5, x_7);
x_35 = 1;
x_36 = lean_usize_add(x_4, x_35);
x_4 = x_36;
x_5 = x_34;
goto _start;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; size_t x_43; size_t x_44; 
lean_dec(x_7);
lean_inc(x_8);
lean_inc(x_1);
x_38 = l_Lean_Server_combineFvars_applyIdMap(x_1, x_8);
x_39 = l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__10___closed__1;
x_40 = lean_array_push(x_39, x_8);
x_41 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_40);
lean_ctor_set(x_41, 2, x_13);
lean_ctor_set(x_41, 3, x_14);
lean_ctor_set(x_41, 4, x_15);
lean_ctor_set(x_41, 5, x_16);
lean_ctor_set_uint8(x_41, sizeof(void*)*6, x_17);
x_42 = lean_array_push(x_5, x_41);
x_43 = 1;
x_44 = lean_usize_add(x_4, x_43);
x_4 = x_44;
x_5 = x_42;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_combineFvars(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Std_mkHashMapImp___rarg(x_3);
x_5 = lean_array_get_size(x_2);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = 0;
x_8 = l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__8(x_2, x_6, x_7, x_4);
x_9 = l_Lean_Server_combineFvars_buildIdMap(x_1, x_2, x_8);
lean_dec(x_1);
x_10 = l_Lean_Server_Reference_aliases___default___closed__1;
x_11 = l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__10(x_9, x_2, x_6, x_7, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_combineFvars___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMap___at_Lean_Server_combineFvars___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_contains___at_Lean_Server_combineFvars___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at_Lean_Server_combineFvars___spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__8(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_contains___at_Lean_Server_combineFvars___spec__9___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_HashMapImp_contains___at_Lean_Server_combineFvars___spec__9(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__10(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_combineFvars___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Server_combineFvars(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_dedupReferences___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_dedupReferences___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_4, 1);
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
x_11 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_29_(x_7, x_9);
if (x_11 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_8, 0);
x_14 = lean_ctor_get(x_8, 1);
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
x_17 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_939____at_Lean_PrettyPrinter_delabCore___spec__3(x_13, x_15);
if (x_17 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
uint8_t x_19; 
x_19 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_551_(x_14, x_16);
if (x_19 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_21; 
lean_inc(x_5);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_5);
return x_21;
}
}
}
}
}
}
static uint64_t _init_l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2___closed__1() {
_start:
{
uint64_t x_1; uint64_t x_2; 
x_1 = 13;
x_2 = lean_uint64_mix_hash(x_1, x_1);
return x_2;
}
}
static uint64_t _init_l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2___closed__2() {
_start:
{
uint64_t x_1; uint64_t x_2; uint64_t x_3; 
x_1 = 13;
x_2 = 11;
x_3 = lean_uint64_mix_hash(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; uint64_t x_10; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
x_7 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_118_(x_5);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_630_(x_9);
lean_dec(x_9);
if (lean_obj_tag(x_8) == 0)
{
uint64_t x_11; uint64_t x_12; uint64_t x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; 
x_11 = 11;
x_12 = lean_uint64_mix_hash(x_11, x_10);
x_13 = lean_uint64_mix_hash(x_7, x_12);
x_14 = lean_uint64_to_usize(x_13);
x_15 = lean_usize_modn(x_14, x_4);
lean_dec(x_4);
x_16 = lean_array_uget(x_3, x_15);
lean_dec(x_3);
x_17 = l_Std_AssocList_find_x3f___at_Lean_Server_dedupReferences___spec__3(x_2, x_16);
lean_dec(x_16);
lean_dec(x_2);
return x_17;
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_8, 0);
lean_inc(x_18);
lean_dec(x_8);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
uint64_t x_20; uint64_t x_21; uint64_t x_22; size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; 
x_20 = l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2___closed__1;
x_21 = lean_uint64_mix_hash(x_20, x_10);
x_22 = lean_uint64_mix_hash(x_7, x_21);
x_23 = lean_uint64_to_usize(x_22);
x_24 = lean_usize_modn(x_23, x_4);
lean_dec(x_4);
x_25 = lean_array_uget(x_3, x_24);
lean_dec(x_3);
x_26 = l_Std_AssocList_find_x3f___at_Lean_Server_dedupReferences___spec__3(x_2, x_25);
lean_dec(x_25);
lean_dec(x_2);
return x_26;
}
else
{
uint64_t x_27; uint64_t x_28; uint64_t x_29; size_t x_30; size_t x_31; lean_object* x_32; lean_object* x_33; 
x_27 = l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2___closed__2;
x_28 = lean_uint64_mix_hash(x_27, x_10);
x_29 = lean_uint64_mix_hash(x_7, x_28);
x_30 = lean_uint64_to_usize(x_29);
x_31 = lean_usize_modn(x_30, x_4);
lean_dec(x_4);
x_32 = lean_array_uget(x_3, x_31);
lean_dec(x_3);
x_33 = l_Std_AssocList_find_x3f___at_Lean_Server_dedupReferences___spec__3(x_2, x_32);
lean_dec(x_32);
lean_dec(x_2);
return x_33;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_AssocList_contains___at_Lean_Server_dedupReferences___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_29_(x_6, x_8);
if (x_10 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 1);
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_ctor_get(x_9, 1);
x_16 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_939____at_Lean_PrettyPrinter_delabCore___spec__3(x_12, x_14);
if (x_16 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_18; 
x_18 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_551_(x_13, x_15);
if (x_18 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_20; 
x_20 = 1;
return x_20;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint64_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 2);
x_7 = lean_array_get_size(x_2);
lean_inc(x_1);
lean_inc(x_5);
x_8 = lean_apply_1(x_1, x_5);
x_9 = lean_unbox_uint64(x_8);
lean_dec(x_8);
x_10 = lean_uint64_to_usize(x_9);
x_11 = lean_usize_modn(x_10, x_7);
lean_dec(x_7);
x_12 = lean_array_uget(x_2, x_11);
lean_ctor_set(x_3, 2, x_12);
x_13 = lean_array_uset(x_2, x_11, x_3);
x_2 = x_13;
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint64_t x_20; size_t x_21; size_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_15 = lean_ctor_get(x_3, 0);
x_16 = lean_ctor_get(x_3, 1);
x_17 = lean_ctor_get(x_3, 2);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_3);
x_18 = lean_array_get_size(x_2);
lean_inc(x_1);
lean_inc(x_15);
x_19 = lean_apply_1(x_1, x_15);
x_20 = lean_unbox_uint64(x_19);
lean_dec(x_19);
x_21 = lean_uint64_to_usize(x_20);
x_22 = lean_usize_modn(x_21, x_18);
lean_dec(x_18);
x_23 = lean_array_uget(x_2, x_22);
x_24 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_24, 0, x_15);
lean_ctor_set(x_24, 1, x_16);
lean_ctor_set(x_24, 2, x_23);
x_25 = lean_array_uset(x_2, x_22, x_24);
x_2 = x_25;
x_3 = x_17;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__8___at_Lean_Server_dedupReferences___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint64_t x_9; lean_object* x_10; lean_object* x_11; uint64_t x_12; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
x_9 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_118_(x_7);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_630_(x_11);
lean_dec(x_11);
if (lean_obj_tag(x_10) == 0)
{
uint64_t x_13; uint64_t x_14; uint64_t x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; 
x_13 = 11;
x_14 = lean_uint64_mix_hash(x_13, x_12);
x_15 = lean_uint64_mix_hash(x_9, x_14);
x_16 = lean_uint64_to_usize(x_15);
x_17 = lean_usize_modn(x_16, x_6);
lean_dec(x_6);
x_18 = lean_array_uget(x_1, x_17);
lean_ctor_set(x_2, 2, x_18);
x_19 = lean_array_uset(x_1, x_17, x_2);
x_1 = x_19;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_10, 0);
lean_inc(x_21);
lean_dec(x_10);
x_22 = lean_unbox(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
uint64_t x_23; uint64_t x_24; uint64_t x_25; size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; 
x_23 = l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2___closed__1;
x_24 = lean_uint64_mix_hash(x_23, x_12);
x_25 = lean_uint64_mix_hash(x_9, x_24);
x_26 = lean_uint64_to_usize(x_25);
x_27 = lean_usize_modn(x_26, x_6);
lean_dec(x_6);
x_28 = lean_array_uget(x_1, x_27);
lean_ctor_set(x_2, 2, x_28);
x_29 = lean_array_uset(x_1, x_27, x_2);
x_1 = x_29;
x_2 = x_5;
goto _start;
}
else
{
uint64_t x_31; uint64_t x_32; uint64_t x_33; size_t x_34; size_t x_35; lean_object* x_36; lean_object* x_37; 
x_31 = l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2___closed__2;
x_32 = lean_uint64_mix_hash(x_31, x_12);
x_33 = lean_uint64_mix_hash(x_9, x_32);
x_34 = lean_uint64_to_usize(x_33);
x_35 = lean_usize_modn(x_34, x_6);
lean_dec(x_6);
x_36 = lean_array_uget(x_1, x_35);
lean_ctor_set(x_2, 2, x_36);
x_37 = lean_array_uset(x_1, x_35, x_2);
x_1 = x_37;
x_2 = x_5;
goto _start;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint64_t x_45; lean_object* x_46; lean_object* x_47; uint64_t x_48; 
x_39 = lean_ctor_get(x_2, 0);
x_40 = lean_ctor_get(x_2, 1);
x_41 = lean_ctor_get(x_2, 2);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_2);
x_42 = lean_array_get_size(x_1);
x_43 = lean_ctor_get(x_39, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_39, 1);
lean_inc(x_44);
x_45 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_118_(x_43);
lean_dec(x_43);
x_46 = lean_ctor_get(x_44, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
lean_dec(x_44);
x_48 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_630_(x_47);
lean_dec(x_47);
if (lean_obj_tag(x_46) == 0)
{
uint64_t x_49; uint64_t x_50; uint64_t x_51; size_t x_52; size_t x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_49 = 11;
x_50 = lean_uint64_mix_hash(x_49, x_48);
x_51 = lean_uint64_mix_hash(x_45, x_50);
x_52 = lean_uint64_to_usize(x_51);
x_53 = lean_usize_modn(x_52, x_42);
lean_dec(x_42);
x_54 = lean_array_uget(x_1, x_53);
x_55 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_55, 0, x_39);
lean_ctor_set(x_55, 1, x_40);
lean_ctor_set(x_55, 2, x_54);
x_56 = lean_array_uset(x_1, x_53, x_55);
x_1 = x_56;
x_2 = x_41;
goto _start;
}
else
{
lean_object* x_58; uint8_t x_59; 
x_58 = lean_ctor_get(x_46, 0);
lean_inc(x_58);
lean_dec(x_46);
x_59 = lean_unbox(x_58);
lean_dec(x_58);
if (x_59 == 0)
{
uint64_t x_60; uint64_t x_61; uint64_t x_62; size_t x_63; size_t x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_60 = l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2___closed__1;
x_61 = lean_uint64_mix_hash(x_60, x_48);
x_62 = lean_uint64_mix_hash(x_45, x_61);
x_63 = lean_uint64_to_usize(x_62);
x_64 = lean_usize_modn(x_63, x_42);
lean_dec(x_42);
x_65 = lean_array_uget(x_1, x_64);
x_66 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_66, 0, x_39);
lean_ctor_set(x_66, 1, x_40);
lean_ctor_set(x_66, 2, x_65);
x_67 = lean_array_uset(x_1, x_64, x_66);
x_1 = x_67;
x_2 = x_41;
goto _start;
}
else
{
uint64_t x_69; uint64_t x_70; uint64_t x_71; size_t x_72; size_t x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_69 = l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2___closed__2;
x_70 = lean_uint64_mix_hash(x_69, x_48);
x_71 = lean_uint64_mix_hash(x_45, x_70);
x_72 = lean_uint64_to_usize(x_71);
x_73 = lean_usize_modn(x_72, x_42);
lean_dec(x_42);
x_74 = lean_array_uget(x_1, x_73);
x_75 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_75, 0, x_39);
lean_ctor_set(x_75, 1, x_40);
lean_ctor_set(x_75, 2, x_74);
x_76 = lean_array_uset(x_1, x_73, x_75);
x_1 = x_76;
x_2 = x_41;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Server_dedupReferences___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__8___at_Lean_Server_dedupReferences___spec__9(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_expand___at_Lean_Server_dedupReferences___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashMapImp_moveEntries___at_Lean_Server_dedupReferences___spec__7(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_replace___at_Lean_Server_dedupReferences___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_29_(x_9, x_11);
lean_dec(x_11);
lean_dec(x_9);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
lean_dec(x_10);
x_14 = l_Std_AssocList_replace___at_Lean_Server_dedupReferences___spec__10(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_14);
return x_3;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_12, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_939____at_Lean_PrettyPrinter_delabCore___spec__3(x_15, x_17);
lean_dec(x_17);
lean_dec(x_15);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_18);
lean_dec(x_16);
x_20 = l_Std_AssocList_replace___at_Lean_Server_dedupReferences___spec__10(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_20);
return x_3;
}
else
{
uint8_t x_21; 
x_21 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_551_(x_16, x_18);
lean_dec(x_18);
lean_dec(x_16);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = l_Std_AssocList_replace___at_Lean_Server_dedupReferences___spec__10(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_22);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_23 = lean_ctor_get(x_3, 0);
x_24 = lean_ctor_get(x_3, 1);
x_25 = lean_ctor_get(x_3, 2);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_3);
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 1);
lean_inc(x_29);
x_30 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_29_(x_26, x_28);
lean_dec(x_28);
lean_dec(x_26);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_29);
lean_dec(x_27);
x_31 = l_Std_AssocList_replace___at_Lean_Server_dedupReferences___spec__10(x_1, x_2, x_25);
x_32 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_32, 0, x_23);
lean_ctor_set(x_32, 1, x_24);
lean_ctor_set(x_32, 2, x_31);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_33 = lean_ctor_get(x_27, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_27, 1);
lean_inc(x_34);
lean_dec(x_27);
x_35 = lean_ctor_get(x_29, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_29, 1);
lean_inc(x_36);
lean_dec(x_29);
x_37 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_939____at_Lean_PrettyPrinter_delabCore___spec__3(x_33, x_35);
lean_dec(x_35);
lean_dec(x_33);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_36);
lean_dec(x_34);
x_38 = l_Std_AssocList_replace___at_Lean_Server_dedupReferences___spec__10(x_1, x_2, x_25);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_23);
lean_ctor_set(x_39, 1, x_24);
lean_ctor_set(x_39, 2, x_38);
return x_39;
}
else
{
uint8_t x_40; 
x_40 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_551_(x_34, x_36);
lean_dec(x_36);
lean_dec(x_34);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = l_Std_AssocList_replace___at_Lean_Server_dedupReferences___spec__10(x_1, x_2, x_25);
x_42 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_42, 0, x_23);
lean_ctor_set(x_42, 1, x_24);
lean_ctor_set(x_42, 2, x_41);
return x_42;
}
else
{
lean_object* x_43; 
lean_dec(x_24);
lean_dec(x_23);
x_43 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_43, 0, x_1);
lean_ctor_set(x_43, 1, x_2);
lean_ctor_set(x_43, 2, x_25);
return x_43;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMap_insert___at_Lean_Server_dedupReferences___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; lean_object* x_25; lean_object* x_26; uint64_t x_27; lean_object* x_28; lean_object* x_29; uint64_t x_30; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6 = lean_box(0);
}
x_7 = lean_array_get_size(x_5);
x_25 = lean_ctor_get(x_2, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_2, 1);
lean_inc(x_26);
x_27 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_118_(x_25);
lean_dec(x_25);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_630_(x_29);
lean_dec(x_29);
if (lean_obj_tag(x_28) == 0)
{
uint64_t x_31; uint64_t x_32; uint64_t x_33; 
x_31 = 11;
x_32 = lean_uint64_mix_hash(x_31, x_30);
x_33 = lean_uint64_mix_hash(x_27, x_32);
x_8 = x_33;
goto block_24;
}
else
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_ctor_get(x_28, 0);
lean_inc(x_34);
lean_dec(x_28);
x_35 = lean_unbox(x_34);
lean_dec(x_34);
if (x_35 == 0)
{
uint64_t x_36; uint64_t x_37; uint64_t x_38; 
x_36 = l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2___closed__1;
x_37 = lean_uint64_mix_hash(x_36, x_30);
x_38 = lean_uint64_mix_hash(x_27, x_37);
x_8 = x_38;
goto block_24;
}
else
{
uint64_t x_39; uint64_t x_40; uint64_t x_41; 
x_39 = l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2___closed__2;
x_40 = lean_uint64_mix_hash(x_39, x_30);
x_41 = lean_uint64_mix_hash(x_27, x_40);
x_8 = x_41;
goto block_24;
}
}
block_24:
{
size_t x_9; size_t x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_uint64_to_usize(x_8);
x_10 = lean_usize_modn(x_9, x_7);
x_11 = lean_array_uget(x_5, x_10);
x_12 = l_Std_AssocList_contains___at_Lean_Server_dedupReferences___spec__5(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_4, x_13);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_3);
lean_ctor_set(x_15, 2, x_11);
x_16 = lean_array_uset(x_5, x_10, x_15);
x_17 = l___private_Lean_Data_HashMap_0__Std_numBucketsForCapacity(x_14);
x_18 = lean_nat_dec_le(x_17, x_7);
lean_dec(x_7);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_6);
x_19 = l_Std_HashMapImp_expand___at_Lean_Server_dedupReferences___spec__6(x_14, x_16);
return x_19;
}
else
{
lean_object* x_20; 
if (lean_is_scalar(x_6)) {
 x_20 = lean_alloc_ctor(0, 2, 0);
} else {
 x_20 = x_6;
}
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_16);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_7);
x_21 = l_Std_AssocList_replace___at_Lean_Server_dedupReferences___spec__10(x_2, x_3, x_11);
x_22 = lean_array_uset(x_5, x_10, x_21);
if (lean_is_scalar(x_6)) {
 x_23 = lean_alloc_ctor(0, 2, 0);
} else {
 x_23 = x_6;
}
lean_ctor_set(x_23, 0, x_4);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_dedupReferences___spec__11(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_lt(x_6, x_5);
if (x_8 == 0)
{
return x_7;
}
else
{
lean_object* x_9; 
x_9 = lean_array_uget(x_4, x_6);
if (x_1 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 2);
lean_inc(x_12);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_14);
lean_inc(x_15);
lean_inc(x_7);
x_16 = l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2(x_7, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; size_t x_18; size_t x_19; 
lean_dec(x_11);
x_17 = l_Std_HashMap_insert___at_Lean_Server_dedupReferences___spec__4(x_7, x_15, x_9);
x_18 = 1;
x_19 = lean_usize_add(x_6, x_18);
x_6 = x_19;
x_7 = x_17;
goto _start;
}
else
{
lean_object* x_21; uint8_t x_22; 
lean_dec(x_9);
x_21 = lean_ctor_get(x_16, 0);
lean_inc(x_21);
lean_dec(x_16);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; size_t x_27; 
x_23 = lean_ctor_get(x_21, 1);
x_24 = l_Array_append___rarg(x_23, x_11);
lean_ctor_set(x_21, 1, x_24);
x_25 = l_Std_HashMap_insert___at_Lean_Server_dedupReferences___spec__4(x_7, x_15, x_21);
x_26 = 1;
x_27 = lean_usize_add(x_6, x_26);
x_6 = x_27;
x_7 = x_25;
goto _start;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; size_t x_39; size_t x_40; 
x_29 = lean_ctor_get(x_21, 0);
x_30 = lean_ctor_get(x_21, 1);
x_31 = lean_ctor_get(x_21, 2);
x_32 = lean_ctor_get(x_21, 3);
x_33 = lean_ctor_get(x_21, 4);
x_34 = lean_ctor_get(x_21, 5);
x_35 = lean_ctor_get_uint8(x_21, sizeof(void*)*6);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_21);
x_36 = l_Array_append___rarg(x_30, x_11);
x_37 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_37, 0, x_29);
lean_ctor_set(x_37, 1, x_36);
lean_ctor_set(x_37, 2, x_31);
lean_ctor_set(x_37, 3, x_32);
lean_ctor_set(x_37, 4, x_33);
lean_ctor_set(x_37, 5, x_34);
lean_ctor_set_uint8(x_37, sizeof(void*)*6, x_35);
x_38 = l_Std_HashMap_insert___at_Lean_Server_dedupReferences___spec__4(x_7, x_15, x_37);
x_39 = 1;
x_40 = lean_usize_add(x_6, x_39);
x_6 = x_40;
x_7 = x_38;
goto _start;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_42 = lean_ctor_get(x_9, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_9, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_9, 2);
lean_inc(x_44);
x_45 = lean_ctor_get_uint8(x_9, sizeof(void*)*6);
x_46 = lean_box(x_45);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_44);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_42);
lean_ctor_set(x_49, 1, x_48);
lean_inc(x_49);
lean_inc(x_7);
x_50 = l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2(x_7, x_49);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; size_t x_52; size_t x_53; 
lean_dec(x_43);
x_51 = l_Std_HashMap_insert___at_Lean_Server_dedupReferences___spec__4(x_7, x_49, x_9);
x_52 = 1;
x_53 = lean_usize_add(x_6, x_52);
x_6 = x_53;
x_7 = x_51;
goto _start;
}
else
{
lean_object* x_55; uint8_t x_56; 
lean_dec(x_9);
x_55 = lean_ctor_get(x_50, 0);
lean_inc(x_55);
lean_dec(x_50);
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; size_t x_60; size_t x_61; 
x_57 = lean_ctor_get(x_55, 1);
x_58 = l_Array_append___rarg(x_57, x_43);
lean_ctor_set(x_55, 1, x_58);
x_59 = l_Std_HashMap_insert___at_Lean_Server_dedupReferences___spec__4(x_7, x_49, x_55);
x_60 = 1;
x_61 = lean_usize_add(x_6, x_60);
x_6 = x_61;
x_7 = x_59;
goto _start;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; 
x_63 = lean_ctor_get(x_55, 0);
x_64 = lean_ctor_get(x_55, 1);
x_65 = lean_ctor_get(x_55, 2);
x_66 = lean_ctor_get(x_55, 3);
x_67 = lean_ctor_get(x_55, 4);
x_68 = lean_ctor_get(x_55, 5);
x_69 = lean_ctor_get_uint8(x_55, sizeof(void*)*6);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_55);
x_70 = l_Array_append___rarg(x_64, x_43);
x_71 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_71, 0, x_63);
lean_ctor_set(x_71, 1, x_70);
lean_ctor_set(x_71, 2, x_65);
lean_ctor_set(x_71, 3, x_66);
lean_ctor_set(x_71, 4, x_67);
lean_ctor_set(x_71, 5, x_68);
lean_ctor_set_uint8(x_71, sizeof(void*)*6, x_69);
x_72 = l_Std_HashMap_insert___at_Lean_Server_dedupReferences___spec__4(x_7, x_49, x_71);
x_73 = 1;
x_74 = lean_usize_add(x_6, x_73);
x_6 = x_74;
x_7 = x_72;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_array_push(x_1, x_3);
x_1 = x_5;
x_2 = x_4;
goto _start;
}
}
}
LEAN_EXPORT uint8_t l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_Lean_Lsp_instOrdRange;
x_6 = l_instDecidableRelLtLtOfOrd___rarg(x_5, x_3, x_4);
return x_6;
}
}
static lean_object* _init_l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_14; 
x_14 = lean_nat_dec_lt(x_3, x_4);
if (x_14 == 0)
{
lean_dec(x_3);
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_15 = lean_nat_add(x_3, x_4);
x_16 = lean_unsigned_to_nat(2u);
x_17 = lean_nat_div(x_15, x_16);
lean_dec(x_15);
lean_inc(x_1);
x_47 = lean_array_get(x_1, x_2, x_17);
lean_inc(x_1);
x_48 = lean_array_get(x_1, x_2, x_3);
x_49 = lean_ctor_get(x_47, 2);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_ctor_get(x_48, 2);
lean_inc(x_50);
lean_dec(x_48);
x_51 = l_Lean_Lsp_instOrdRange;
x_52 = l_instDecidableRelLtLtOfOrd___rarg(x_51, x_49, x_50);
if (x_52 == 0)
{
x_18 = x_2;
goto block_46;
}
else
{
lean_object* x_53; 
x_53 = lean_array_swap(x_2, x_3, x_17);
x_18 = x_53;
goto block_46;
}
block_46:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_inc(x_1);
x_19 = lean_array_get(x_1, x_18, x_4);
lean_inc(x_1);
x_20 = lean_array_get(x_1, x_18, x_3);
x_21 = lean_ctor_get(x_19, 2);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 2);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Lsp_instOrdRange;
lean_inc(x_21);
x_24 = l_instDecidableRelLtLtOfOrd___rarg(x_23, x_21, x_22);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
lean_inc(x_1);
x_25 = lean_array_get(x_1, x_18, x_17);
x_26 = lean_ctor_get(x_25, 2);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_instDecidableRelLtLtOfOrd___rarg(x_23, x_26, x_21);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_17);
x_28 = l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13___closed__1;
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_29 = l_Array_qpartition_loop___rarg(x_1, x_28, x_4, x_19, x_18, x_3, x_3);
x_5 = x_29;
goto block_13;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_19);
x_30 = lean_array_swap(x_18, x_17, x_4);
lean_dec(x_17);
lean_inc(x_1);
x_31 = lean_array_get(x_1, x_30, x_4);
x_32 = l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13___closed__1;
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_33 = l_Array_qpartition_loop___rarg(x_1, x_32, x_4, x_31, x_30, x_3, x_3);
x_5 = x_33;
goto block_13;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
lean_dec(x_21);
lean_dec(x_19);
x_34 = lean_array_swap(x_18, x_3, x_4);
lean_inc(x_1);
x_35 = lean_array_get(x_1, x_34, x_17);
lean_inc(x_1);
x_36 = lean_array_get(x_1, x_34, x_4);
x_37 = lean_ctor_get(x_35, 2);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_36, 2);
lean_inc(x_38);
x_39 = l_instDecidableRelLtLtOfOrd___rarg(x_23, x_37, x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_17);
x_40 = l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13___closed__1;
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_41 = l_Array_qpartition_loop___rarg(x_1, x_40, x_4, x_36, x_34, x_3, x_3);
x_5 = x_41;
goto block_13;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_36);
x_42 = lean_array_swap(x_34, x_17, x_4);
lean_dec(x_17);
lean_inc(x_1);
x_43 = lean_array_get(x_1, x_42, x_4);
x_44 = l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13___closed__1;
lean_inc_n(x_3, 2);
lean_inc(x_1);
x_45 = l_Array_qpartition_loop___rarg(x_1, x_44, x_4, x_43, x_42, x_3, x_3);
x_5 = x_45;
goto block_13;
}
}
}
}
block_13:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_nat_dec_le(x_4, x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_1);
x_9 = l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13(x_1, x_7, x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
x_2 = x_9;
x_3 = x_11;
goto _start;
}
else
{
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_dedupReferences___spec__14(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__12(x_4, x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Server_dedupReferences___lambda__1(uint8_t x_1, uint8_t x_2) {
_start:
{
if (x_1 == 0)
{
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
return x_2;
}
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_dedupReferences___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_dedupReferences___closed__1;
x_2 = lean_alloc_closure((void*)(l_instBEq___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_dedupReferences___closed__2;
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_939____rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_dedupReferences___closed__3;
x_2 = l_Lean_Lsp_instBEqRange;
x_3 = lean_alloc_closure((void*)(l_instBEqProd___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_instBEqRefIdent;
x_2 = l_Lean_Server_dedupReferences___closed__4;
x_3 = lean_alloc_closure((void*)(l_instBEqProd___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instHashableBool___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_dedupReferences___closed__6;
x_2 = lean_alloc_closure((void*)(l_instHashableOption___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_dedupReferences___closed__7;
x_2 = l_Lean_Lsp_instHashableRange;
x_3 = lean_alloc_closure((void*)(l_instHashableProd___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_instHashableRefIdent;
x_2 = l_Lean_Server_dedupReferences___closed__8;
x_3 = lean_alloc_closure((void*)(l_instHashableProd___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Reference_aliases___default___closed__1;
x_2 = lean_array_get_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_dedupReferences___closed__10;
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_sub(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_dedupReferences(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Std_mkHashMapImp___rarg(x_3);
x_5 = lean_array_get_size(x_1);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = 0;
x_8 = l_Lean_Server_dedupReferences___closed__5;
x_9 = l_Lean_Server_dedupReferences___closed__9;
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_dedupReferences___spec__11(x_2, x_8, x_9, x_1, x_6, x_7, x_4);
lean_dec(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_array_get_size(x_11);
x_13 = lean_nat_dec_lt(x_3, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_14 = l_Lean_Server_instInhabitedReference;
x_15 = l_Lean_Server_Reference_aliases___default___closed__1;
x_16 = l_Lean_Server_dedupReferences___closed__11;
x_17 = l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13(x_14, x_15, x_3, x_16);
return x_17;
}
else
{
uint8_t x_18; 
x_18 = lean_nat_dec_le(x_12, x_12);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_12);
lean_dec(x_11);
x_19 = l_Lean_Server_instInhabitedReference;
x_20 = l_Lean_Server_Reference_aliases___default___closed__1;
x_21 = l_Lean_Server_dedupReferences___closed__11;
x_22 = l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13(x_19, x_20, x_3, x_21);
return x_22;
}
else
{
size_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_24 = l_Lean_Server_Reference_aliases___default___closed__1;
x_25 = l_Array_foldlMUnsafe_fold___at_Lean_Server_dedupReferences___spec__14(x_11, x_7, x_23, x_24);
lean_dec(x_11);
x_26 = lean_array_get_size(x_25);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_sub(x_26, x_27);
lean_dec(x_26);
x_29 = l_Lean_Server_instInhabitedReference;
x_30 = l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13(x_29, x_25, x_3, x_28);
lean_dec(x_28);
return x_30;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_dedupReferences___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMap___at_Lean_Server_dedupReferences___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_dedupReferences___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at_Lean_Server_dedupReferences___spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_contains___at_Lean_Server_dedupReferences___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at_Lean_Server_dedupReferences___spec__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_dedupReferences___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_11 = l_Array_forInUnsafe_loop___at_Lean_Server_dedupReferences___spec__11(x_8, x_2, x_3, x_4, x_9, x_10, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13___lambda__1(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_dedupReferences___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_dedupReferences___spec__14(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_dedupReferences___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_Lean_Server_dedupReferences___lambda__1(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_dedupReferences___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_Lean_Server_dedupReferences(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_findModuleRefs___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Lean_Server_ModuleRefs_addRef(x_4, x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = 1;
x_8 = lean_usize_add(x_2, x_7);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
lean_dec(x_9);
x_10 = lean_array_push(x_4, x_6);
x_2 = x_8;
x_4 = x_10;
goto _start;
}
else
{
lean_dec(x_9);
lean_dec(x_6);
x_2 = x_8;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_findModuleRefs___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_dec(x_2);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Std_mkHashMapImp___rarg(x_3);
x_5 = lean_array_get_size(x_1);
x_6 = lean_nat_dec_lt(x_3, x_5);
if (x_6 == 0)
{
lean_dec(x_5);
return x_4;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_5, x_5);
if (x_7 == 0)
{
lean_dec(x_5);
return x_4;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__2(x_1, x_8, x_9, x_4);
return x_10;
}
}
}
}
static lean_object* _init_l_Lean_Server_findModuleRefs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_findModuleRefs___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_findModuleRefs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Server_findModuleRefs___closed__1;
x_2 = l_Lean_Server_Reference_aliases___default___closed__1;
x_3 = lean_box(0);
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_findModuleRefs(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Lean_Server_findReferences(x_1, x_2);
x_6 = l_Lean_Server_combineFvars(x_2, x_5);
lean_dec(x_5);
x_7 = l_Lean_Server_dedupReferences(x_6, x_4);
x_8 = l_Lean_Server_findModuleRefs___closed__1;
if (x_3 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_array_get_size(x_7);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_lt(x_10, x_9);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_7);
x_12 = l_Lean_Server_findModuleRefs___closed__2;
return x_12;
}
else
{
uint8_t x_13; 
x_13 = lean_nat_dec_le(x_9, x_9);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_7);
x_14 = l_Lean_Server_findModuleRefs___closed__2;
return x_14;
}
else
{
size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = 0;
x_16 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_17 = l_Lean_Server_Reference_aliases___default___closed__1;
x_18 = l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__3(x_7, x_15, x_16, x_17);
lean_dec(x_7);
x_19 = lean_box(0);
x_20 = lean_apply_2(x_8, x_18, x_19);
return x_20;
}
}
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
x_22 = lean_apply_2(x_8, x_7, x_21);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_findModuleRefs___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMap___at_Lean_Server_findModuleRefs___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__2(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__3(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_findModuleRefs___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Server_findModuleRefs___lambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_findModuleRefs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_Server_findModuleRefs(x_1, x_2, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_References_empty___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_References_empty___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_References_empty() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_References_empty___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMap___at_Lean_Server_References_empty___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_References_empty___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMap___at_Lean_Server_References_empty___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Std_AssocList_contains___at_Lean_Server_References_addIlean___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_addIlean___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash___override(x_4);
x_8 = lean_uint64_to_usize(x_7);
x_9 = lean_usize_modn(x_8, x_6);
lean_dec(x_6);
x_10 = lean_array_uget(x_1, x_9);
lean_ctor_set(x_2, 2, x_10);
x_11 = lean_array_uset(x_1, x_9, x_2);
x_1 = x_11;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
x_16 = lean_array_get_size(x_1);
x_17 = l_Lean_Name_hash___override(x_13);
x_18 = lean_uint64_to_usize(x_17);
x_19 = lean_usize_modn(x_18, x_16);
lean_dec(x_16);
x_20 = lean_array_uget(x_1, x_19);
x_21 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_uset(x_1, x_19, x_21);
x_1 = x_22;
x_2 = x_15;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Server_References_addIlean___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_AssocList_foldlM___at_Lean_Server_References_addIlean___spec__5(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_expand___at_Lean_Server_References_addIlean___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashMapImp_moveEntries___at_Lean_Server_References_addIlean___spec__4(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_replace___at_Lean_Server_References_addIlean___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_name_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_AssocList_replace___at_Lean_Server_References_addIlean___spec__6(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_name_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_AssocList_replace___at_Lean_Server_References_addIlean___spec__6(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMap_insert___at_Lean_Server_References_addIlean___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; size_t x_9; size_t x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Name_hash___override(x_2);
x_9 = lean_uint64_to_usize(x_8);
x_10 = lean_usize_modn(x_9, x_7);
x_11 = lean_array_uget(x_6, x_10);
x_12 = l_Std_AssocList_contains___at_Lean_Server_References_addIlean___spec__2(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_3);
lean_ctor_set(x_15, 2, x_11);
x_16 = lean_array_uset(x_6, x_10, x_15);
x_17 = l___private_Lean_Data_HashMap_0__Std_numBucketsForCapacity(x_14);
x_18 = lean_nat_dec_le(x_17, x_7);
lean_dec(x_7);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_free_object(x_1);
x_19 = l_Std_HashMapImp_expand___at_Lean_Server_References_addIlean___spec__3(x_14, x_16);
return x_19;
}
else
{
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_7);
x_20 = l_Std_AssocList_replace___at_Lean_Server_References_addIlean___spec__6(x_2, x_3, x_11);
x_21 = lean_array_uset(x_6, x_10, x_20);
lean_ctor_set(x_1, 1, x_21);
return x_1;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint64_t x_25; size_t x_26; size_t x_27; lean_object* x_28; uint8_t x_29; 
x_22 = lean_ctor_get(x_1, 0);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_1);
x_24 = lean_array_get_size(x_23);
x_25 = l_Lean_Name_hash___override(x_2);
x_26 = lean_uint64_to_usize(x_25);
x_27 = lean_usize_modn(x_26, x_24);
x_28 = lean_array_uget(x_23, x_27);
x_29 = l_Std_AssocList_contains___at_Lean_Server_References_addIlean___spec__2(x_2, x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_22, x_30);
lean_dec(x_22);
x_32 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_32, 0, x_2);
lean_ctor_set(x_32, 1, x_3);
lean_ctor_set(x_32, 2, x_28);
x_33 = lean_array_uset(x_23, x_27, x_32);
x_34 = l___private_Lean_Data_HashMap_0__Std_numBucketsForCapacity(x_31);
x_35 = lean_nat_dec_le(x_34, x_24);
lean_dec(x_24);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = l_Std_HashMapImp_expand___at_Lean_Server_References_addIlean___spec__3(x_31, x_33);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_33);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_24);
x_38 = l_Std_AssocList_replace___at_Lean_Server_References_addIlean___spec__6(x_2, x_3, x_28);
x_39 = lean_array_uset(x_23, x_27, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_22);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_addIlean(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 2);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_Std_HashMap_insert___at_Lean_Server_References_addIlean___spec__1(x_5, x_6, x_8);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_dec(x_3);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Std_HashMap_insert___at_Lean_Server_References_addIlean___spec__1(x_10, x_12, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_11);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_contains___at_Lean_Server_References_addIlean___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at_Lean_Server_References_addIlean___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_removeIlean___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_1);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_removeIlean___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_AssocList_foldlM___at_Lean_Server_References_removeIlean___spec__2(x_4, x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMap_toList___at_Lean_Server_References_removeIlean___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_box(0);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_2;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_4, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_2;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_removeIlean___spec__3(x_3, x_8, x_9, x_2);
lean_dec(x_3);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTRAux___at_Lean_Server_References_removeIlean___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_2, 0);
lean_dec(x_9);
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_string_dec_eq(x_10, x_1);
lean_dec(x_10);
if (x_11 == 0)
{
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_8;
goto _start;
}
else
{
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_8;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_ctor_get(x_6, 0);
lean_inc(x_15);
lean_dec(x_6);
x_16 = lean_string_dec_eq(x_15, x_1);
lean_dec(x_15);
if (x_16 == 0)
{
lean_dec(x_5);
x_2 = x_14;
goto _start;
}
else
{
lean_object* x_18; 
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_5);
lean_ctor_set(x_18, 1, x_3);
x_2 = x_14;
x_3 = x_18;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTRAux___at_Lean_Server_References_removeIlean___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_erase___at_Lean_Server_References_removeIlean___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 2);
x_8 = lean_name_eq(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_Std_AssocList_erase___at_Lean_Server_References_removeIlean___spec__7(x_1, x_7);
lean_ctor_set(x_2, 2, x_9);
return x_2;
}
else
{
lean_free_object(x_2);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_13 = lean_name_eq(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Std_AssocList_erase___at_Lean_Server_References_removeIlean___spec__7(x_1, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_dec(x_11);
lean_dec(x_10);
return x_12;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_erase___at_Lean_Server_References_removeIlean___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint64_t x_6; size_t x_7; size_t x_8; lean_object* x_9; uint8_t x_10; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_array_get_size(x_4);
x_6 = l_Lean_Name_hash___override(x_2);
x_7 = lean_uint64_to_usize(x_6);
x_8 = lean_usize_modn(x_7, x_5);
lean_dec(x_5);
x_9 = lean_array_uget(x_4, x_8);
x_10 = l_Std_AssocList_contains___at_Lean_Server_References_addIlean___spec__2(x_2, x_9);
if (x_10 == 0)
{
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_1, 1);
lean_dec(x_12);
x_13 = lean_ctor_get(x_1, 0);
lean_dec(x_13);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_3, x_14);
lean_dec(x_3);
x_16 = l_Std_AssocList_erase___at_Lean_Server_References_removeIlean___spec__7(x_2, x_9);
x_17 = lean_array_uset(x_4, x_8, x_16);
lean_ctor_set(x_1, 1, x_17);
lean_ctor_set(x_1, 0, x_15);
return x_1;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_1);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_3, x_18);
lean_dec(x_3);
x_20 = l_Std_AssocList_erase___at_Lean_Server_References_removeIlean___spec__7(x_2, x_9);
x_21 = lean_array_uset(x_4, x_8, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Lean_Server_References_removeIlean___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_1, 0);
x_7 = l_Std_HashMapImp_erase___at_Lean_Server_References_removeIlean___spec__6(x_6, x_4);
lean_ctor_set(x_1, 0, x_7);
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_1);
x_13 = l_Std_HashMapImp_erase___at_Lean_Server_References_removeIlean___spec__6(x_11, x_9);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
x_1 = x_14;
x_2 = x_10;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_removeIlean(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_Std_HashMap_toList___at_Lean_Server_References_removeIlean___spec__1(x_3);
x_5 = lean_box(0);
x_6 = l_List_filterTRAux___at_Lean_Server_References_removeIlean___spec__4(x_2, x_4, x_5);
lean_dec(x_2);
x_7 = l_List_mapTRAux___at_Lean_Server_References_removeIlean___spec__5(x_6, x_5);
x_8 = l_List_foldl___at_Lean_Server_References_removeIlean___spec__8(x_1, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_removeIlean___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_foldlM___at_Lean_Server_References_removeIlean___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_removeIlean___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_removeIlean___spec__3(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_filterTRAux___at_Lean_Server_References_removeIlean___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_filterTRAux___at_Lean_Server_References_removeIlean___spec__4(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_erase___at_Lean_Server_References_removeIlean___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_erase___at_Lean_Server_References_removeIlean___spec__7(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_erase___at_Lean_Server_References_removeIlean___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_erase___at_Lean_Server_References_removeIlean___spec__6(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Lean_Server_References_removeIlean___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___at_Lean_Server_References_removeIlean___spec__8(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Name_hash___override(x_2);
x_6 = lean_uint64_to_usize(x_5);
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
lean_dec(x_3);
x_9 = l_Std_AssocList_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__2(x_2, x_8);
lean_dec(x_8);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_29_(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_118_(x_2);
x_6 = lean_uint64_to_usize(x_5);
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
lean_dec(x_3);
x_9 = l_Std_AssocList_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__4(x_2, x_8);
lean_dec(x_8);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_updateWorkerRefs___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
lean_dec(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_6 = l_Std_HashMapImp_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__3(x_1, x_3);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Lean_Lsp_RefInfo_empty;
x_8 = l_Lean_Lsp_RefInfo_merge(x_7, x_4);
x_9 = l_Std_HashMap_insert___at_Lean_Lsp_instFromJsonModuleRefs___spec__1(x_1, x_3, x_8);
x_1 = x_9;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = l_Lean_Lsp_RefInfo_merge(x_11, x_4);
x_13 = l_Std_HashMap_insert___at_Lean_Lsp_instFromJsonModuleRefs___spec__1(x_1, x_3, x_12);
x_1 = x_13;
x_2 = x_5;
goto _start;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_updateWorkerRefs___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash___override(x_4);
x_8 = lean_uint64_to_usize(x_7);
x_9 = lean_usize_modn(x_8, x_6);
lean_dec(x_6);
x_10 = lean_array_uget(x_1, x_9);
lean_ctor_set(x_2, 2, x_10);
x_11 = lean_array_uset(x_1, x_9, x_2);
x_1 = x_11;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
x_16 = lean_array_get_size(x_1);
x_17 = l_Lean_Name_hash___override(x_13);
x_18 = lean_uint64_to_usize(x_17);
x_19 = lean_usize_modn(x_18, x_16);
lean_dec(x_16);
x_20 = lean_array_uget(x_1, x_19);
x_21 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_uset(x_1, x_19, x_21);
x_1 = x_22;
x_2 = x_15;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Server_References_updateWorkerRefs___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_AssocList_foldlM___at_Lean_Server_References_updateWorkerRefs___spec__10(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_expand___at_Lean_Server_References_updateWorkerRefs___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashMapImp_moveEntries___at_Lean_Server_References_updateWorkerRefs___spec__9(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_replace___at_Lean_Server_References_updateWorkerRefs___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_name_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_AssocList_replace___at_Lean_Server_References_updateWorkerRefs___spec__11(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_name_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_AssocList_replace___at_Lean_Server_References_updateWorkerRefs___spec__11(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMap_insert___at_Lean_Server_References_updateWorkerRefs___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; size_t x_9; size_t x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Name_hash___override(x_2);
x_9 = lean_uint64_to_usize(x_8);
x_10 = lean_usize_modn(x_9, x_7);
x_11 = lean_array_uget(x_6, x_10);
x_12 = l_Std_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__7(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_3);
lean_ctor_set(x_15, 2, x_11);
x_16 = lean_array_uset(x_6, x_10, x_15);
x_17 = l___private_Lean_Data_HashMap_0__Std_numBucketsForCapacity(x_14);
x_18 = lean_nat_dec_le(x_17, x_7);
lean_dec(x_7);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_free_object(x_1);
x_19 = l_Std_HashMapImp_expand___at_Lean_Server_References_updateWorkerRefs___spec__8(x_14, x_16);
return x_19;
}
else
{
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_7);
x_20 = l_Std_AssocList_replace___at_Lean_Server_References_updateWorkerRefs___spec__11(x_2, x_3, x_11);
x_21 = lean_array_uset(x_6, x_10, x_20);
lean_ctor_set(x_1, 1, x_21);
return x_1;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint64_t x_25; size_t x_26; size_t x_27; lean_object* x_28; uint8_t x_29; 
x_22 = lean_ctor_get(x_1, 0);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_1);
x_24 = lean_array_get_size(x_23);
x_25 = l_Lean_Name_hash___override(x_2);
x_26 = lean_uint64_to_usize(x_25);
x_27 = lean_usize_modn(x_26, x_24);
x_28 = lean_array_uget(x_23, x_27);
x_29 = l_Std_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__7(x_2, x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_22, x_30);
lean_dec(x_22);
x_32 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_32, 0, x_2);
lean_ctor_set(x_32, 1, x_3);
lean_ctor_set(x_32, 2, x_28);
x_33 = lean_array_uset(x_23, x_27, x_32);
x_34 = l___private_Lean_Data_HashMap_0__Std_numBucketsForCapacity(x_31);
x_35 = lean_nat_dec_le(x_34, x_24);
lean_dec(x_24);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = l_Std_HashMapImp_expand___at_Lean_Server_References_updateWorkerRefs___spec__8(x_31, x_33);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_33);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_24);
x_38 = l_Std_AssocList_replace___at_Lean_Server_References_updateWorkerRefs___spec__11(x_2, x_3, x_28);
x_39 = lean_array_uset(x_23, x_27, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_22);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_updateWorkerRefs___spec__12(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_AssocList_foldlM___at_Lean_Server_References_updateWorkerRefs___spec__5(x_4, x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerRefs___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerRefs___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_nat_dec_eq(x_1, x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_11 = lean_box(0);
x_12 = lean_apply_1(x_3, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_dec(x_3);
x_13 = lean_ctor_get(x_4, 1);
lean_inc(x_13);
lean_dec(x_4);
x_14 = lean_ctor_get(x_5, 1);
x_15 = lean_array_get_size(x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_nat_dec_lt(x_16, x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_1);
lean_ctor_set(x_18, 1, x_13);
x_19 = l_Std_HashMap_insert___at_Lean_Server_References_updateWorkerRefs___spec__6(x_6, x_7, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_8);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
else
{
uint8_t x_21; 
x_21 = lean_nat_dec_le(x_15, x_15);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_15);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_13);
x_23 = l_Std_HashMap_insert___at_Lean_Server_References_updateWorkerRefs___spec__6(x_6, x_7, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_8);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
else
{
size_t x_25; size_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = 0;
x_26 = lean_usize_of_nat(x_15);
lean_dec(x_15);
x_27 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_updateWorkerRefs___spec__12(x_14, x_25, x_26, x_13);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_1);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Std_HashMap_insert___at_Lean_Server_References_updateWorkerRefs___spec__6(x_6, x_7, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_8);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerRefs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Lean_Server_References_updateWorkerRefs___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_7);
x_8 = l_Std_HashMapImp_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__1(x_7, x_2);
if (lean_obj_tag(x_8) == 0)
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_nat_dec_lt(x_13, x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_free_object(x_1);
x_15 = lean_box(0);
x_16 = l_Lean_Server_References_updateWorkerRefs___lambda__2(x_3, x_13, x_5, x_12, x_4, x_7, x_2, x_6, x_15);
lean_dec(x_4);
lean_dec(x_13);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_13);
lean_dec(x_5);
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 1);
lean_dec(x_18);
x_19 = lean_ctor_get(x_12, 0);
lean_dec(x_19);
lean_ctor_set(x_12, 1, x_4);
lean_ctor_set(x_12, 0, x_3);
x_20 = l_Std_HashMap_insert___at_Lean_Server_References_updateWorkerRefs___spec__6(x_7, x_2, x_12);
lean_ctor_set(x_1, 1, x_20);
return x_1;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_12);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_3);
lean_ctor_set(x_21, 1, x_4);
x_22 = l_Std_HashMap_insert___at_Lean_Server_References_updateWorkerRefs___spec__6(x_7, x_2, x_21);
lean_ctor_set(x_1, 1, x_22);
return x_1;
}
}
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_1);
x_23 = lean_ctor_get(x_8, 0);
lean_inc(x_23);
lean_dec(x_8);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_nat_dec_lt(x_24, x_3);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_box(0);
x_27 = l_Lean_Server_References_updateWorkerRefs___lambda__2(x_3, x_24, x_5, x_23, x_4, x_7, x_2, x_6, x_26);
lean_dec(x_4);
lean_dec(x_24);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_24);
lean_dec(x_5);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_28 = x_23;
} else {
 lean_dec_ref(x_23);
 x_28 = lean_box(0);
}
if (lean_is_scalar(x_28)) {
 x_29 = lean_alloc_ctor(0, 2, 0);
} else {
 x_29 = x_28;
}
lean_ctor_set(x_29, 0, x_3);
lean_ctor_set(x_29, 1, x_4);
x_30 = l_Std_HashMap_insert___at_Lean_Server_References_updateWorkerRefs___spec__6(x_7, x_2, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_6);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__7(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_updateWorkerRefs___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_updateWorkerRefs___spec__12(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerRefs___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Server_References_updateWorkerRefs___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerRefs___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Server_References_updateWorkerRefs___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_finalizeWorkerRefs___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_3);
x_9 = l_Std_HashMap_insert___at_Lean_Server_References_updateWorkerRefs___spec__6(x_7, x_4, x_8);
lean_ctor_set(x_1, 1, x_9);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_3);
x_13 = l_Std_HashMap_insert___at_Lean_Server_References_updateWorkerRefs___spec__6(x_11, x_4, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_finalizeWorkerRefs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_2);
x_6 = l_Std_HashMapImp_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__1(x_5, x_2);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l_Lean_Server_References_finalizeWorkerRefs___lambda__1(x_1, x_3, x_4, x_2, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_nat_dec_lt(x_3, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_box(0);
x_13 = l_Lean_Server_References_finalizeWorkerRefs___lambda__1(x_1, x_3, x_4, x_2, x_12);
return x_13;
}
else
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_finalizeWorkerRefs___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Server_References_finalizeWorkerRefs___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 2);
x_8 = lean_name_eq(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_Std_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__2(x_1, x_7);
lean_ctor_set(x_2, 2, x_9);
return x_2;
}
else
{
lean_free_object(x_2);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_13 = lean_name_eq(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Std_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__2(x_1, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_dec(x_11);
lean_dec(x_10);
return x_12;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_erase___at_Lean_Server_References_removeWorkerRefs___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint64_t x_6; size_t x_7; size_t x_8; lean_object* x_9; uint8_t x_10; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_array_get_size(x_4);
x_6 = l_Lean_Name_hash___override(x_2);
x_7 = lean_uint64_to_usize(x_6);
x_8 = lean_usize_modn(x_7, x_5);
lean_dec(x_5);
x_9 = lean_array_uget(x_4, x_8);
x_10 = l_Std_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__7(x_2, x_9);
if (x_10 == 0)
{
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_1, 1);
lean_dec(x_12);
x_13 = lean_ctor_get(x_1, 0);
lean_dec(x_13);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_3, x_14);
lean_dec(x_3);
x_16 = l_Std_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__2(x_2, x_9);
x_17 = lean_array_uset(x_4, x_8, x_16);
lean_ctor_set(x_1, 1, x_17);
lean_ctor_set(x_1, 0, x_15);
return x_1;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_1);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_3, x_18);
lean_dec(x_3);
x_20 = l_Std_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__2(x_2, x_9);
x_21 = lean_array_uset(x_4, x_8, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_removeWorkerRefs(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_Std_HashMapImp_erase___at_Lean_Server_References_removeWorkerRefs___spec__1(x_4, x_2);
lean_ctor_set(x_1, 1, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_8 = l_Std_HashMapImp_erase___at_Lean_Server_References_removeWorkerRefs___spec__1(x_7, x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_erase___at_Lean_Server_References_removeWorkerRefs___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_erase___at_Lean_Server_References_removeWorkerRefs___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_removeWorkerRefs___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Server_References_removeWorkerRefs(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Std_AssocList_contains___at_Lean_Server_References_allRefs___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash___override(x_4);
x_8 = lean_uint64_to_usize(x_7);
x_9 = lean_usize_modn(x_8, x_6);
lean_dec(x_6);
x_10 = lean_array_uget(x_1, x_9);
lean_ctor_set(x_2, 2, x_10);
x_11 = lean_array_uset(x_1, x_9, x_2);
x_1 = x_11;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
x_16 = lean_array_get_size(x_1);
x_17 = l_Lean_Name_hash___override(x_13);
x_18 = lean_uint64_to_usize(x_17);
x_19 = lean_usize_modn(x_18, x_16);
lean_dec(x_16);
x_20 = lean_array_uget(x_1, x_19);
x_21 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_uset(x_1, x_19, x_21);
x_1 = x_22;
x_2 = x_15;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Server_References_allRefs___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__5(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_expand___at_Lean_Server_References_allRefs___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashMapImp_moveEntries___at_Lean_Server_References_allRefs___spec__4(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_replace___at_Lean_Server_References_allRefs___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_name_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_AssocList_replace___at_Lean_Server_References_allRefs___spec__6(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_name_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_AssocList_replace___at_Lean_Server_References_allRefs___spec__6(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMap_insert___at_Lean_Server_References_allRefs___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; size_t x_9; size_t x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Name_hash___override(x_2);
x_9 = lean_uint64_to_usize(x_8);
x_10 = lean_usize_modn(x_9, x_7);
x_11 = lean_array_uget(x_6, x_10);
x_12 = l_Std_AssocList_contains___at_Lean_Server_References_allRefs___spec__2(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_3);
lean_ctor_set(x_15, 2, x_11);
x_16 = lean_array_uset(x_6, x_10, x_15);
x_17 = l___private_Lean_Data_HashMap_0__Std_numBucketsForCapacity(x_14);
x_18 = lean_nat_dec_le(x_17, x_7);
lean_dec(x_7);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_free_object(x_1);
x_19 = l_Std_HashMapImp_expand___at_Lean_Server_References_allRefs___spec__3(x_14, x_16);
return x_19;
}
else
{
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_7);
x_20 = l_Std_AssocList_replace___at_Lean_Server_References_allRefs___spec__6(x_2, x_3, x_11);
x_21 = lean_array_uset(x_6, x_10, x_20);
lean_ctor_set(x_1, 1, x_21);
return x_1;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint64_t x_25; size_t x_26; size_t x_27; lean_object* x_28; uint8_t x_29; 
x_22 = lean_ctor_get(x_1, 0);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_1);
x_24 = lean_array_get_size(x_23);
x_25 = l_Lean_Name_hash___override(x_2);
x_26 = lean_uint64_to_usize(x_25);
x_27 = lean_usize_modn(x_26, x_24);
x_28 = lean_array_uget(x_23, x_27);
x_29 = l_Std_AssocList_contains___at_Lean_Server_References_allRefs___spec__2(x_2, x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_22, x_30);
lean_dec(x_22);
x_32 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_32, 0, x_2);
lean_ctor_set(x_32, 1, x_3);
lean_ctor_set(x_32, 2, x_28);
x_33 = lean_array_uset(x_23, x_27, x_32);
x_34 = l___private_Lean_Data_HashMap_0__Std_numBucketsForCapacity(x_31);
x_35 = lean_nat_dec_le(x_34, x_24);
lean_dec(x_24);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = l_Std_HashMapImp_expand___at_Lean_Server_References_allRefs___spec__3(x_31, x_33);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_33);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_24);
x_38 = l_Std_AssocList_replace___at_Lean_Server_References_allRefs___spec__6(x_2, x_3, x_28);
x_39 = lean_array_uset(x_23, x_27, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_22);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_References_allRefs___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Lean_Server_References_allRefs___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = l_Std_HashMap_insert___at_Lean_Server_References_allRefs___spec__1(x_1, x_6, x_7);
x_1 = x_8;
x_2 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_1);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__11(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__10(x_4, x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMap_toList___at_Lean_Server_References_allRefs___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_box(0);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_2;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_4, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_2;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__11(x_3, x_8, x_9, x_2);
lean_dec(x_3);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Lean_Server_References_allRefs___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = l_Std_HashMap_insert___at_Lean_Server_References_allRefs___spec__1(x_1, x_6, x_7);
x_1 = x_8;
x_2 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_allRefs(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Std_mkHashMapImp___rarg(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_Std_HashMap_toList___at_Lean_Server_References_removeIlean___spec__1(x_4);
x_6 = l_List_foldl___at_Lean_Server_References_allRefs___spec__8(x_3, x_5);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_Std_HashMap_toList___at_Lean_Server_References_allRefs___spec__9(x_7);
x_9 = l_List_foldl___at_Lean_Server_References_allRefs___spec__12(x_6, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_contains___at_Lean_Server_References_allRefs___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at_Lean_Server_References_allRefs___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_mkHashMap___at_Lean_Server_References_allRefs___spec__7___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMap___at_Lean_Server_References_allRefs___spec__7(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__10___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__10(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__11(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_References_findAt___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Server_References_findAt___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Name_hash___override(x_2);
x_6 = lean_uint64_to_usize(x_5);
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
lean_dec(x_3);
x_9 = l_Std_AssocList_find_x3f___at_Lean_Server_References_findAt___spec__2(x_2, x_8);
lean_dec(x_8);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_findAt___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Server_Reference_aliases___default___closed__1;
return x_2;
}
}
static lean_object* _init_l_Lean_Server_References_findAt___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_References_findAt___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_References_findAt___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_References_findAt___closed__1;
x_2 = lean_box(0);
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_findAt(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Server_References_allRefs(x_1);
x_5 = l_Std_HashMapImp_find_x3f___at_Lean_Server_References_findAt___spec__1(x_4, x_2);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = l_Lean_Server_References_findAt___closed__2;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Lean_Lsp_ModuleRefs_findAt(x_7, x_3);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_find_x3f___at_Lean_Server_References_findAt___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at_Lean_Server_References_findAt___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_findAt___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Server_References_findAt___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_4, x_3);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; 
x_9 = lean_array_uget(x_2, x_4);
lean_inc(x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_array_push(x_5, x_10);
x_12 = 1;
x_13 = lean_usize_add(x_4, x_12);
x_4 = x_13;
x_5 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_referringTo___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_1);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_referringTo___spec__4(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_AssocList_foldlM___at_Lean_Server_References_referringTo___spec__3(x_4, x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Std_HashMap_toList___at_Lean_Server_References_referringTo___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_box(0);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_2;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_4, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_2;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_referringTo___spec__4(x_3, x_8, x_9, x_2);
lean_dec(x_3);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_9 = 0;
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__1(x_2, x_6, x_8, x_9, x_3, x_5);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("lean", 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
lean_inc(x_1);
x_12 = l_Std_HashMapImp_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__3(x_11, x_1);
if (lean_obj_tag(x_12) == 0)
{
lean_dec(x_10);
x_4 = x_9;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___closed__1;
lean_inc(x_2);
x_16 = l_Lean_SearchPath_findModuleWithExt(x_2, x_15, x_10, x_6);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
lean_dec(x_14);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_4 = x_9;
x_6 = x_18;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_io_realpath(x_21, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_System_Uri_pathToUri(x_23);
if (x_3 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_box(0);
x_27 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___lambda__1(x_14, x_25, x_5, x_26, x_24);
lean_dec(x_14);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
lean_dec(x_28);
x_4 = x_9;
x_5 = x_30;
x_6 = x_29;
goto _start;
}
else
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_14, 0);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_box(0);
x_34 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___lambda__1(x_14, x_25, x_5, x_33, x_24);
lean_dec(x_14);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
lean_dec(x_35);
x_4 = x_9;
x_5 = x_37;
x_6 = x_36;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_39 = lean_ctor_get(x_32, 0);
lean_inc(x_39);
lean_dec(x_32);
lean_inc(x_25);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_25);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_array_push(x_5, x_40);
x_42 = lean_box(0);
x_43 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___lambda__1(x_14, x_25, x_41, x_42, x_24);
lean_dec(x_14);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_ctor_get(x_44, 0);
lean_inc(x_46);
lean_dec(x_44);
x_4 = x_9;
x_5 = x_46;
x_6 = x_45;
goto _start;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_22);
if (x_48 == 0)
{
return x_22;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_22, 0);
x_50 = lean_ctor_get(x_22, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_22);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_16);
if (x_52 == 0)
{
return x_16;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_16, 0);
x_54 = lean_ctor_get(x_16, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_16);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__6(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
lean_inc(x_1);
x_12 = l_Std_HashMapImp_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__3(x_11, x_1);
if (lean_obj_tag(x_12) == 0)
{
lean_dec(x_10);
x_4 = x_9;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___closed__1;
lean_inc(x_2);
x_16 = l_Lean_SearchPath_findModuleWithExt(x_2, x_15, x_10, x_6);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
lean_dec(x_14);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_4 = x_9;
x_6 = x_18;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_io_realpath(x_21, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_System_Uri_pathToUri(x_23);
if (x_3 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_box(0);
x_27 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___lambda__1(x_14, x_25, x_5, x_26, x_24);
lean_dec(x_14);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
lean_dec(x_28);
x_4 = x_9;
x_5 = x_30;
x_6 = x_29;
goto _start;
}
else
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_14, 0);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_box(0);
x_34 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___lambda__1(x_14, x_25, x_5, x_33, x_24);
lean_dec(x_14);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
lean_dec(x_35);
x_4 = x_9;
x_5 = x_37;
x_6 = x_36;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_39 = lean_ctor_get(x_32, 0);
lean_inc(x_39);
lean_dec(x_32);
lean_inc(x_25);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_25);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_array_push(x_5, x_40);
x_42 = lean_box(0);
x_43 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___lambda__1(x_14, x_25, x_41, x_42, x_24);
lean_dec(x_14);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_ctor_get(x_44, 0);
lean_inc(x_46);
lean_dec(x_44);
x_4 = x_9;
x_5 = x_46;
x_6 = x_45;
goto _start;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_22);
if (x_48 == 0)
{
return x_22;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_22, 0);
x_50 = lean_ctor_get(x_22, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_22);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_16);
if (x_52 == 0)
{
return x_16;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_16, 0);
x_54 = lean_ctor_get(x_16, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_16);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__7(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
lean_inc(x_1);
x_12 = l_Std_HashMapImp_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__3(x_11, x_1);
if (lean_obj_tag(x_12) == 0)
{
lean_dec(x_10);
x_4 = x_9;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___closed__1;
lean_inc(x_2);
x_16 = l_Lean_SearchPath_findModuleWithExt(x_2, x_15, x_10, x_6);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
lean_dec(x_14);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_4 = x_9;
x_6 = x_18;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_io_realpath(x_21, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_System_Uri_pathToUri(x_23);
if (x_3 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_box(0);
x_27 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___lambda__1(x_14, x_25, x_5, x_26, x_24);
lean_dec(x_14);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
lean_dec(x_28);
x_4 = x_9;
x_5 = x_30;
x_6 = x_29;
goto _start;
}
else
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_14, 0);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_box(0);
x_34 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___lambda__1(x_14, x_25, x_5, x_33, x_24);
lean_dec(x_14);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
lean_dec(x_35);
x_4 = x_9;
x_5 = x_37;
x_6 = x_36;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_39 = lean_ctor_get(x_32, 0);
lean_inc(x_39);
lean_dec(x_32);
lean_inc(x_25);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_25);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_array_push(x_5, x_40);
x_42 = lean_box(0);
x_43 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___lambda__1(x_14, x_25, x_41, x_42, x_24);
lean_dec(x_14);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_ctor_get(x_44, 0);
lean_inc(x_46);
lean_dec(x_44);
x_4 = x_9;
x_5 = x_46;
x_6 = x_45;
goto _start;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_22);
if (x_48 == 0)
{
return x_22;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_22, 0);
x_50 = lean_ctor_get(x_22, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_22);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_16);
if (x_52 == 0)
{
return x_16;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_16, 0);
x_54 = lean_ctor_get(x_16, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_16);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_referringTo(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_7 = l_Lean_Server_References_allRefs(x_1);
x_8 = l_Std_HashMap_toList___at_Lean_Server_References_referringTo___spec__2(x_7);
x_9 = l_Lean_Server_Reference_aliases___default___closed__1;
x_10 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5(x_3, x_4, x_5, x_8, x_9, x_6);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = l_Lean_Server_References_allRefs(x_1);
lean_inc(x_2);
x_20 = l_Std_HashMapImp_find_x3f___at_Lean_Server_References_findAt___spec__1(x_19, x_2);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_2);
x_21 = lean_box(0);
x_22 = l_Lean_Server_Reference_aliases___default___closed__1;
x_23 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__6(x_3, x_4, x_5, x_21, x_22, x_6);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
return x_23;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_23);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_23);
if (x_28 == 0)
{
return x_23;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_23, 0);
x_30 = lean_ctor_get(x_23, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_23);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_ctor_get(x_20, 0);
lean_inc(x_32);
lean_dec(x_20);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_2);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Lean_Server_Reference_aliases___default___closed__1;
x_37 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__7(x_3, x_4, x_5, x_35, x_36, x_6);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
return x_37;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_37);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_37);
if (x_42 == 0)
{
return x_37;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_37, 0);
x_44 = lean_ctor_get(x_37, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_37);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__1(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Std_AssocList_foldlM___at_Lean_Server_References_referringTo___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_foldlM___at_Lean_Server_References_referringTo___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_referringTo___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_referringTo___spec__4(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5(x_1, x_2, x_7, x_4, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__6(x_1, x_2, x_7, x_4, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__7(x_1, x_2, x_7, x_4, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_referringTo___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_5);
lean_dec(x_5);
x_8 = l_Lean_Server_References_referringTo(x_1, x_2, x_3, x_4, x_7, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionOf_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
lean_inc(x_1);
x_12 = l_Std_HashMapImp_find_x3f___at_Lean_Server_References_updateWorkerRefs___spec__3(x_11, x_1);
if (lean_obj_tag(x_12) == 0)
{
lean_dec(x_10);
lean_inc(x_3);
{
lean_object* _tmp_3 = x_9;
lean_object* _tmp_4 = x_3;
x_4 = _tmp_3;
x_5 = _tmp_4;
}
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_dec(x_10);
lean_inc(x_3);
{
lean_object* _tmp_3 = x_9;
lean_object* _tmp_4 = x_3;
x_4 = _tmp_3;
x_5 = _tmp_4;
}
goto _start;
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_15, 0);
x_19 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___closed__1;
lean_inc(x_2);
x_20 = l_Lean_SearchPath_findModuleWithExt(x_2, x_19, x_10, x_6);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
lean_free_object(x_15);
lean_dec(x_18);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_3);
{
lean_object* _tmp_3 = x_9;
lean_object* _tmp_4 = x_3;
lean_object* _tmp_5 = x_22;
x_4 = _tmp_3;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
else
{
lean_object* x_24; uint8_t x_25; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
lean_dec(x_20);
x_25 = !lean_is_exclusive(x_21);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_21, 0);
x_27 = lean_io_realpath(x_26, x_24);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = l_System_Uri_pathToUri(x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_18);
lean_ctor_set(x_21, 0, x_31);
lean_ctor_set(x_15, 0, x_21);
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_15);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set(x_27, 0, x_33);
return x_27;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_34 = lean_ctor_get(x_27, 0);
x_35 = lean_ctor_get(x_27, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_27);
x_36 = l_System_Uri_pathToUri(x_34);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_18);
lean_ctor_set(x_21, 0, x_37);
lean_ctor_set(x_15, 0, x_21);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_15);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_35);
return x_40;
}
}
else
{
uint8_t x_41; 
lean_free_object(x_21);
lean_free_object(x_15);
lean_dec(x_18);
x_41 = !lean_is_exclusive(x_27);
if (x_41 == 0)
{
return x_27;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_27, 0);
x_43 = lean_ctor_get(x_27, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_27);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_21, 0);
lean_inc(x_45);
lean_dec(x_21);
x_46 = lean_io_realpath(x_45, x_24);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_49 = x_46;
} else {
 lean_dec_ref(x_46);
 x_49 = lean_box(0);
}
x_50 = l_System_Uri_pathToUri(x_47);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_18);
x_52 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_15, 0, x_52);
x_53 = lean_box(0);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_15);
lean_ctor_set(x_54, 1, x_53);
if (lean_is_scalar(x_49)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_49;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_48);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_free_object(x_15);
lean_dec(x_18);
x_56 = lean_ctor_get(x_46, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_46, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_58 = x_46;
} else {
 lean_dec_ref(x_46);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_58;
}
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
}
}
else
{
uint8_t x_60; 
lean_free_object(x_15);
lean_dec(x_18);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_20);
if (x_60 == 0)
{
return x_20;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_20, 0);
x_62 = lean_ctor_get(x_20, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_20);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_15, 0);
lean_inc(x_64);
lean_dec(x_15);
x_65 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___closed__1;
lean_inc(x_2);
x_66 = l_Lean_SearchPath_findModuleWithExt(x_2, x_65, x_10, x_6);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; 
lean_dec(x_64);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
lean_inc(x_3);
{
lean_object* _tmp_3 = x_9;
lean_object* _tmp_4 = x_3;
lean_object* _tmp_5 = x_68;
x_4 = _tmp_3;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_70 = lean_ctor_get(x_66, 1);
lean_inc(x_70);
lean_dec(x_66);
x_71 = lean_ctor_get(x_67, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 x_72 = x_67;
} else {
 lean_dec_ref(x_67);
 x_72 = lean_box(0);
}
x_73 = lean_io_realpath(x_71, x_70);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_76 = x_73;
} else {
 lean_dec_ref(x_73);
 x_76 = lean_box(0);
}
x_77 = l_System_Uri_pathToUri(x_74);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_64);
if (lean_is_scalar(x_72)) {
 x_79 = lean_alloc_ctor(1, 1, 0);
} else {
 x_79 = x_72;
}
lean_ctor_set(x_79, 0, x_78);
x_80 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_80, 0, x_79);
x_81 = lean_box(0);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
if (lean_is_scalar(x_76)) {
 x_83 = lean_alloc_ctor(0, 2, 0);
} else {
 x_83 = x_76;
}
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_75);
return x_83;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_72);
lean_dec(x_64);
x_84 = lean_ctor_get(x_73, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_73, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_86 = x_73;
} else {
 lean_dec_ref(x_73);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(1, 2, 0);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_85);
return x_87;
}
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_64);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_88 = lean_ctor_get(x_66, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_66, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_90 = x_66;
} else {
 lean_dec_ref(x_66);
 x_90 = lean_box(0);
}
if (lean_is_scalar(x_90)) {
 x_91 = lean_alloc_ctor(1, 2, 0);
} else {
 x_91 = x_90;
}
lean_ctor_set(x_91, 0, x_88);
lean_ctor_set(x_91, 1, x_89);
return x_91;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionOf_x3f___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionOf_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_Lean_Server_References_allRefs(x_1);
x_6 = l_Std_HashMap_toList___at_Lean_Server_References_referringTo___spec__2(x_5);
x_7 = lean_box(0);
x_8 = l_Lean_Lsp_RefInfo_contains___lambda__2___closed__1;
x_9 = l_List_forIn_loop___at_Lean_Server_References_definitionOf_x3f___spec__1(x_2, x_3, x_8, x_6, x_8, x_4);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_9, 0);
lean_dec(x_13);
lean_ctor_set(x_9, 0, x_7);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_9);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_9, 0);
lean_dec(x_17);
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
lean_dec(x_11);
lean_ctor_set(x_9, 0, x_18);
return x_9;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_dec(x_9);
x_20 = lean_ctor_get(x_11, 0);
lean_inc(x_20);
lean_dec(x_11);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_9);
if (x_22 == 0)
{
return x_9;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_9, 0);
x_24 = lean_ctor_get(x_9, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_9);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionOf_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_References_definitionOf_x3f___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_9, 1);
x_13 = lean_ctor_get(x_9, 0);
lean_dec(x_13);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
lean_free_object(x_9);
lean_dec(x_10);
x_15 = lean_ctor_get(x_5, 1);
lean_inc(x_15);
lean_dec(x_5);
x_16 = !lean_is_exclusive(x_6);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_6, 0);
lean_dec(x_17);
lean_inc(x_3);
lean_ctor_set(x_6, 0, x_3);
x_5 = x_15;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_6, 1);
lean_inc(x_19);
lean_dec(x_6);
lean_inc(x_3);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_19);
x_5 = x_15;
x_6 = x_20;
goto _start;
}
}
else
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_5, 1);
lean_inc(x_22);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_6);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_6, 1);
x_25 = lean_ctor_get(x_6, 0);
lean_dec(x_25);
x_26 = lean_ctor_get(x_10, 0);
lean_inc(x_26);
lean_dec(x_10);
x_27 = lean_ctor_get(x_14, 0);
lean_inc(x_27);
lean_dec(x_14);
lean_inc(x_1);
x_28 = lean_apply_1(x_1, x_26);
if (lean_obj_tag(x_28) == 0)
{
lean_dec(x_27);
lean_free_object(x_9);
lean_inc(x_3);
lean_ctor_set(x_6, 0, x_3);
x_5 = x_22;
goto _start;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
lean_dec(x_28);
lean_inc(x_4);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_4);
lean_ctor_set(x_31, 1, x_27);
lean_ctor_set(x_9, 1, x_31);
lean_ctor_set(x_9, 0, x_30);
x_32 = lean_array_push(x_24, x_9);
if (lean_obj_tag(x_2) == 0)
{
lean_inc(x_3);
lean_ctor_set(x_6, 1, x_32);
lean_ctor_set(x_6, 0, x_3);
x_5 = x_22;
goto _start;
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = lean_ctor_get(x_2, 0);
lean_inc(x_34);
x_35 = lean_array_get_size(x_32);
x_36 = lean_nat_dec_le(x_34, x_35);
lean_dec(x_35);
lean_dec(x_34);
if (x_36 == 0)
{
lean_inc(x_3);
lean_ctor_set(x_6, 1, x_32);
lean_ctor_set(x_6, 0, x_3);
x_5 = x_22;
goto _start;
}
else
{
uint8_t x_38; 
lean_dec(x_22);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_2);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_2, 0);
lean_dec(x_39);
lean_inc(x_32);
lean_ctor_set(x_2, 0, x_32);
lean_ctor_set(x_6, 1, x_32);
lean_ctor_set(x_6, 0, x_2);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_6);
lean_ctor_set(x_40, 1, x_7);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_2);
lean_inc(x_32);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_32);
lean_ctor_set(x_6, 1, x_32);
lean_ctor_set(x_6, 0, x_41);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_6);
lean_ctor_set(x_42, 1, x_7);
return x_42;
}
}
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_6, 1);
lean_inc(x_43);
lean_dec(x_6);
x_44 = lean_ctor_get(x_10, 0);
lean_inc(x_44);
lean_dec(x_10);
x_45 = lean_ctor_get(x_14, 0);
lean_inc(x_45);
lean_dec(x_14);
lean_inc(x_1);
x_46 = lean_apply_1(x_1, x_44);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; 
lean_dec(x_45);
lean_free_object(x_9);
lean_inc(x_3);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_3);
lean_ctor_set(x_47, 1, x_43);
x_5 = x_22;
x_6 = x_47;
goto _start;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_46, 0);
lean_inc(x_49);
lean_dec(x_46);
lean_inc(x_4);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_4);
lean_ctor_set(x_50, 1, x_45);
lean_ctor_set(x_9, 1, x_50);
lean_ctor_set(x_9, 0, x_49);
x_51 = lean_array_push(x_43, x_9);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_52; 
lean_inc(x_3);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_3);
lean_ctor_set(x_52, 1, x_51);
x_5 = x_22;
x_6 = x_52;
goto _start;
}
else
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_54 = lean_ctor_get(x_2, 0);
lean_inc(x_54);
x_55 = lean_array_get_size(x_51);
x_56 = lean_nat_dec_le(x_54, x_55);
lean_dec(x_55);
lean_dec(x_54);
if (x_56 == 0)
{
lean_object* x_57; 
lean_inc(x_3);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_3);
lean_ctor_set(x_57, 1, x_51);
x_5 = x_22;
x_6 = x_57;
goto _start;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_22);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 x_59 = x_2;
} else {
 lean_dec_ref(x_2);
 x_59 = lean_box(0);
}
lean_inc(x_51);
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(1, 1, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_51);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_51);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_7);
return x_62;
}
}
}
}
}
}
else
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_ctor_get(x_9, 1);
lean_inc(x_63);
lean_dec(x_9);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
lean_dec(x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_10);
x_65 = lean_ctor_get(x_5, 1);
lean_inc(x_65);
lean_dec(x_5);
x_66 = lean_ctor_get(x_6, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_67 = x_6;
} else {
 lean_dec_ref(x_6);
 x_67 = lean_box(0);
}
lean_inc(x_3);
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_3);
lean_ctor_set(x_68, 1, x_66);
x_5 = x_65;
x_6 = x_68;
goto _start;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_70 = lean_ctor_get(x_5, 1);
lean_inc(x_70);
lean_dec(x_5);
x_71 = lean_ctor_get(x_6, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_72 = x_6;
} else {
 lean_dec_ref(x_6);
 x_72 = lean_box(0);
}
x_73 = lean_ctor_get(x_10, 0);
lean_inc(x_73);
lean_dec(x_10);
x_74 = lean_ctor_get(x_64, 0);
lean_inc(x_74);
lean_dec(x_64);
lean_inc(x_1);
x_75 = lean_apply_1(x_1, x_73);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; 
lean_dec(x_74);
lean_inc(x_3);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(0, 2, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_3);
lean_ctor_set(x_76, 1, x_71);
x_5 = x_70;
x_6 = x_76;
goto _start;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_78 = lean_ctor_get(x_75, 0);
lean_inc(x_78);
lean_dec(x_75);
lean_inc(x_4);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_74);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_array_push(x_71, x_80);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_82; 
lean_inc(x_3);
if (lean_is_scalar(x_72)) {
 x_82 = lean_alloc_ctor(0, 2, 0);
} else {
 x_82 = x_72;
}
lean_ctor_set(x_82, 0, x_3);
lean_ctor_set(x_82, 1, x_81);
x_5 = x_70;
x_6 = x_82;
goto _start;
}
else
{
lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_84 = lean_ctor_get(x_2, 0);
lean_inc(x_84);
x_85 = lean_array_get_size(x_81);
x_86 = lean_nat_dec_le(x_84, x_85);
lean_dec(x_85);
lean_dec(x_84);
if (x_86 == 0)
{
lean_object* x_87; 
lean_inc(x_3);
if (lean_is_scalar(x_72)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_72;
}
lean_ctor_set(x_87, 0, x_3);
lean_ctor_set(x_87, 1, x_81);
x_5 = x_70;
x_6 = x_87;
goto _start;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_70);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 x_89 = x_2;
} else {
 lean_dec_ref(x_2);
 x_89 = lean_box(0);
}
lean_inc(x_81);
if (lean_is_scalar(x_89)) {
 x_90 = lean_alloc_ctor(1, 1, 0);
} else {
 x_90 = x_89;
}
lean_ctor_set(x_90, 0, x_81);
if (lean_is_scalar(x_72)) {
 x_91 = lean_alloc_ctor(0, 2, 0);
} else {
 x_91 = x_72;
}
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_81);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_7);
return x_92;
}
}
}
}
}
}
else
{
lean_object* x_93; uint8_t x_94; 
lean_dec(x_10);
lean_dec(x_9);
x_93 = lean_ctor_get(x_5, 1);
lean_inc(x_93);
lean_dec(x_5);
x_94 = !lean_is_exclusive(x_6);
if (x_94 == 0)
{
lean_object* x_95; 
x_95 = lean_ctor_get(x_6, 0);
lean_dec(x_95);
lean_inc(x_3);
lean_ctor_set(x_6, 0, x_3);
x_5 = x_93;
goto _start;
}
else
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_6, 1);
lean_inc(x_97);
lean_dec(x_6);
lean_inc(x_3);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_3);
lean_ctor_set(x_98, 1, x_97);
x_5 = x_93;
x_6 = x_98;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__1___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = !lean_is_exclusive(x_6);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_6, 1);
x_15 = lean_ctor_get(x_6, 0);
lean_dec(x_15);
x_16 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___closed__1;
lean_inc(x_1);
x_17 = l_Lean_SearchPath_findModuleWithExt(x_1, x_16, x_11, x_7);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
lean_dec(x_12);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_4);
lean_ctor_set(x_6, 0, x_4);
x_5 = x_10;
x_7 = x_19;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_ctor_get(x_18, 0);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_io_realpath(x_22, x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_System_Uri_pathToUri(x_24);
x_27 = l_Std_HashMap_toList___at_Lean_Lsp_instToJsonModuleRefs___spec__2(x_12);
lean_inc(x_4);
lean_ctor_set(x_6, 0, x_4);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_28 = l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__1___rarg(x_2, x_3, x_4, x_26, x_27, x_6, x_25);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = !lean_is_exclusive(x_29);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_29, 0);
lean_dec(x_33);
lean_inc(x_4);
lean_ctor_set(x_29, 0, x_4);
x_5 = x_10;
x_6 = x_29;
x_7 = x_31;
goto _start;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_29, 1);
lean_inc(x_35);
lean_dec(x_29);
lean_inc(x_4);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_4);
lean_ctor_set(x_36, 1, x_35);
x_5 = x_10;
x_6 = x_36;
x_7 = x_31;
goto _start;
}
}
else
{
uint8_t x_38; 
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_28);
if (x_38 == 0)
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_28, 0);
lean_dec(x_39);
x_40 = !lean_is_exclusive(x_29);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_ctor_get(x_29, 0);
lean_dec(x_41);
x_42 = !lean_is_exclusive(x_30);
if (x_42 == 0)
{
return x_28;
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_30, 0);
lean_inc(x_43);
lean_dec(x_30);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_29, 0, x_44);
return x_28;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_45 = lean_ctor_get(x_29, 1);
lean_inc(x_45);
lean_dec(x_29);
x_46 = lean_ctor_get(x_30, 0);
lean_inc(x_46);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 x_47 = x_30;
} else {
 lean_dec_ref(x_30);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(1, 1, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_46);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_45);
lean_ctor_set(x_28, 0, x_49);
return x_28;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_50 = lean_ctor_get(x_28, 1);
lean_inc(x_50);
lean_dec(x_28);
x_51 = lean_ctor_get(x_29, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_52 = x_29;
} else {
 lean_dec_ref(x_29);
 x_52 = lean_box(0);
}
x_53 = lean_ctor_get(x_30, 0);
lean_inc(x_53);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 x_54 = x_30;
} else {
 lean_dec_ref(x_30);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(1, 1, 0);
} else {
 x_55 = x_54;
}
lean_ctor_set(x_55, 0, x_53);
if (lean_is_scalar(x_52)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_52;
}
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_51);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_50);
return x_57;
}
}
}
else
{
uint8_t x_58; 
lean_free_object(x_6);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_23);
if (x_58 == 0)
{
return x_23;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_23, 0);
x_60 = lean_ctor_get(x_23, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_23);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
}
else
{
uint8_t x_62; 
lean_free_object(x_6);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_62 = !lean_is_exclusive(x_17);
if (x_62 == 0)
{
return x_17;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_17, 0);
x_64 = lean_ctor_get(x_17, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_17);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_6, 1);
lean_inc(x_66);
lean_dec(x_6);
x_67 = l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___closed__1;
lean_inc(x_1);
x_68 = l_Lean_SearchPath_findModuleWithExt(x_1, x_67, x_11, x_7);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; 
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; 
lean_dec(x_12);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
lean_inc(x_4);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_4);
lean_ctor_set(x_71, 1, x_66);
x_5 = x_10;
x_6 = x_71;
x_7 = x_70;
goto _start;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_68, 1);
lean_inc(x_73);
lean_dec(x_68);
x_74 = lean_ctor_get(x_69, 0);
lean_inc(x_74);
lean_dec(x_69);
x_75 = lean_io_realpath(x_74, x_73);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = l_System_Uri_pathToUri(x_76);
x_79 = l_Std_HashMap_toList___at_Lean_Lsp_instToJsonModuleRefs___spec__2(x_12);
lean_inc(x_4);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_4);
lean_ctor_set(x_80, 1, x_66);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_81 = l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__1___rarg(x_2, x_3, x_4, x_78, x_79, x_80, x_77);
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_84 = lean_ctor_get(x_81, 1);
lean_inc(x_84);
lean_dec(x_81);
x_85 = lean_ctor_get(x_82, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_86 = x_82;
} else {
 lean_dec_ref(x_82);
 x_86 = lean_box(0);
}
lean_inc(x_4);
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_4);
lean_ctor_set(x_87, 1, x_85);
x_5 = x_10;
x_6 = x_87;
x_7 = x_84;
goto _start;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_89 = lean_ctor_get(x_81, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_90 = x_81;
} else {
 lean_dec_ref(x_81);
 x_90 = lean_box(0);
}
x_91 = lean_ctor_get(x_82, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_92 = x_82;
} else {
 lean_dec_ref(x_82);
 x_92 = lean_box(0);
}
x_93 = lean_ctor_get(x_83, 0);
lean_inc(x_93);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 x_94 = x_83;
} else {
 lean_dec_ref(x_83);
 x_94 = lean_box(0);
}
if (lean_is_scalar(x_94)) {
 x_95 = lean_alloc_ctor(1, 1, 0);
} else {
 x_95 = x_94;
}
lean_ctor_set(x_95, 0, x_93);
if (lean_is_scalar(x_92)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_92;
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_91);
if (lean_is_scalar(x_90)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_90;
}
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_89);
return x_97;
}
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_66);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_98 = lean_ctor_get(x_75, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_75, 1);
lean_inc(x_99);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_100 = x_75;
} else {
 lean_dec_ref(x_75);
 x_100 = lean_box(0);
}
if (lean_is_scalar(x_100)) {
 x_101 = lean_alloc_ctor(1, 2, 0);
} else {
 x_101 = x_100;
}
lean_ctor_set(x_101, 0, x_98);
lean_ctor_set(x_101, 1, x_99);
return x_101;
}
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
lean_dec(x_66);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_102 = lean_ctor_get(x_68, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_68, 1);
lean_inc(x_103);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_104 = x_68;
} else {
 lean_dec_ref(x_68);
 x_104 = lean_box(0);
}
if (lean_is_scalar(x_104)) {
 x_105 = lean_alloc_ctor(1, 2, 0);
} else {
 x_105 = x_104;
}
lean_ctor_set(x_105, 0, x_102);
lean_ctor_set(x_105, 1, x_103);
return x_105;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__2___rarg), 7, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_References_definitionsMatching___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Server_Reference_aliases___default___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionsMatching___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = l_Lean_Server_References_allRefs(x_1);
x_7 = l_Std_HashMap_toList___at_Lean_Server_References_referringTo___spec__2(x_6);
x_8 = lean_box(0);
x_9 = l_Lean_Server_References_definitionsMatching___rarg___closed__1;
x_10 = l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__2___rarg(x_2, x_3, x_4, x_8, x_7, x_9, x_5);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
lean_ctor_set(x_10, 0, x_15);
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
uint8_t x_19; 
lean_dec(x_11);
x_19 = !lean_is_exclusive(x_10);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_10, 0);
lean_dec(x_20);
x_21 = lean_ctor_get(x_12, 0);
lean_inc(x_21);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_21);
return x_10;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_dec(x_10);
x_23 = lean_ctor_get(x_12, 0);
lean_inc(x_23);
lean_dec(x_12);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
}
else
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_10);
if (x_25 == 0)
{
return x_10;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_10, 0);
x_27 = lean_ctor_get(x_10, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_10);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionsMatching(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_References_definitionsMatching___rarg), 5, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Data_Lsp_Internal(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Server_Utils(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_References(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Lsp_Internal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Utils(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Server_Reference_aliases___default___closed__1 = _init_l_Lean_Server_Reference_aliases___default___closed__1();
lean_mark_persistent(l_Lean_Server_Reference_aliases___default___closed__1);
l_Lean_Server_Reference_aliases___default = _init_l_Lean_Server_Reference_aliases___default();
lean_mark_persistent(l_Lean_Server_Reference_aliases___default);
l_Lean_Server_instInhabitedReference___closed__1 = _init_l_Lean_Server_instInhabitedReference___closed__1();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__1);
l_Lean_Server_instInhabitedReference___closed__2 = _init_l_Lean_Server_instInhabitedReference___closed__2();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__2);
l_Lean_Server_instInhabitedReference___closed__3 = _init_l_Lean_Server_instInhabitedReference___closed__3();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__3);
l_Lean_Server_instInhabitedReference___closed__4 = _init_l_Lean_Server_instInhabitedReference___closed__4();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__4);
l_Lean_Server_instInhabitedReference___closed__5 = _init_l_Lean_Server_instInhabitedReference___closed__5();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__5);
l_Lean_Server_instInhabitedReference___closed__6 = _init_l_Lean_Server_instInhabitedReference___closed__6();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__6);
l_Lean_Server_instInhabitedReference___closed__7 = _init_l_Lean_Server_instInhabitedReference___closed__7();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__7);
l_Lean_Server_instInhabitedReference___closed__8 = _init_l_Lean_Server_instInhabitedReference___closed__8();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__8);
l_Lean_Server_instInhabitedReference___closed__9 = _init_l_Lean_Server_instInhabitedReference___closed__9();
l_Lean_Server_instInhabitedReference___closed__10 = _init_l_Lean_Server_instInhabitedReference___closed__10();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__10);
l_Lean_Server_instInhabitedReference___closed__11 = _init_l_Lean_Server_instInhabitedReference___closed__11();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__11);
l_Lean_Server_instInhabitedReference___closed__12 = _init_l_Lean_Server_instInhabitedReference___closed__12();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__12);
l_Lean_Server_instInhabitedReference___closed__13 = _init_l_Lean_Server_instInhabitedReference___closed__13();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__13);
l_Lean_Server_instInhabitedReference___closed__14 = _init_l_Lean_Server_instInhabitedReference___closed__14();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__14);
l_Lean_Server_instInhabitedReference___closed__15 = _init_l_Lean_Server_instInhabitedReference___closed__15();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__15);
l_Lean_Server_instInhabitedReference___closed__16 = _init_l_Lean_Server_instInhabitedReference___closed__16();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__16);
l_Lean_Server_instInhabitedReference___closed__17 = _init_l_Lean_Server_instInhabitedReference___closed__17();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__17);
l_Lean_Server_instInhabitedReference___closed__18 = _init_l_Lean_Server_instInhabitedReference___closed__18();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__18);
l_Lean_Server_instInhabitedReference___closed__19 = _init_l_Lean_Server_instInhabitedReference___closed__19();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__19);
l_Lean_Server_instInhabitedReference___closed__20 = _init_l_Lean_Server_instInhabitedReference___closed__20();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__20);
l_Lean_Server_instInhabitedReference___closed__21 = _init_l_Lean_Server_instInhabitedReference___closed__21();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__21);
l_Lean_Server_instInhabitedReference___closed__22 = _init_l_Lean_Server_instInhabitedReference___closed__22();
lean_mark_persistent(l_Lean_Server_instInhabitedReference___closed__22);
l_Lean_Server_instInhabitedReference = _init_l_Lean_Server_instInhabitedReference();
lean_mark_persistent(l_Lean_Server_instInhabitedReference);
l_Lean_Server_RefInfo_empty___closed__1 = _init_l_Lean_Server_RefInfo_empty___closed__1();
lean_mark_persistent(l_Lean_Server_RefInfo_empty___closed__1);
l_Lean_Server_RefInfo_empty = _init_l_Lean_Server_RefInfo_empty();
lean_mark_persistent(l_Lean_Server_RefInfo_empty);
l_Lean_Lsp_RefInfo_empty___closed__1 = _init_l_Lean_Lsp_RefInfo_empty___closed__1();
lean_mark_persistent(l_Lean_Lsp_RefInfo_empty___closed__1);
l_Lean_Lsp_RefInfo_empty = _init_l_Lean_Lsp_RefInfo_empty();
lean_mark_persistent(l_Lean_Lsp_RefInfo_empty);
l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_contains___spec__1___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_contains___spec__1___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_contains___spec__1___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_contains___spec__1___closed__2 = _init_l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_contains___spec__1___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_contains___spec__1___closed__2);
l_Lean_Lsp_RefInfo_contains___lambda__2___closed__1 = _init_l_Lean_Lsp_RefInfo_contains___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Lsp_RefInfo_contains___lambda__2___closed__1);
l_Lean_Lsp_RefInfo_contains___lambda__2___closed__2 = _init_l_Lean_Lsp_RefInfo_contains___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Lsp_RefInfo_contains___lambda__2___closed__2);
l_Lean_Lsp_RefInfo_contains___lambda__2___closed__3 = _init_l_Lean_Lsp_RefInfo_contains___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Lsp_RefInfo_contains___lambda__2___closed__3);
l_Lean_Server_Ilean_version___default = _init_l_Lean_Server_Ilean_version___default();
lean_mark_persistent(l_Lean_Server_Ilean_version___default);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__1 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__1();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__1);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__2 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__2();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__2);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__3 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__3();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_846____closed__3);
l_Lean_Server_instFromJsonIlean___closed__1 = _init_l_Lean_Server_instFromJsonIlean___closed__1();
lean_mark_persistent(l_Lean_Server_instFromJsonIlean___closed__1);
l_Lean_Server_instFromJsonIlean = _init_l_Lean_Server_instFromJsonIlean();
lean_mark_persistent(l_Lean_Server_instFromJsonIlean);
l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__1 = _init_l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__1();
lean_mark_persistent(l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__1);
l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__2 = _init_l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__2();
lean_mark_persistent(l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__2);
l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__3 = _init_l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__3();
lean_mark_persistent(l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__3);
l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__4 = _init_l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__4();
lean_mark_persistent(l_List_mapTRAux___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_922____spec__2___closed__4);
l_Lean_Server_instToJsonIlean___closed__1 = _init_l_Lean_Server_instToJsonIlean___closed__1();
lean_mark_persistent(l_Lean_Server_instToJsonIlean___closed__1);
l_Lean_Server_instToJsonIlean = _init_l_Lean_Server_instToJsonIlean();
lean_mark_persistent(l_Lean_Server_instToJsonIlean);
l_Lean_Server_Ilean_load___closed__1 = _init_l_Lean_Server_Ilean_load___closed__1();
lean_mark_persistent(l_Lean_Server_Ilean_load___closed__1);
l_Lean_Server_Ilean_load___closed__2 = _init_l_Lean_Server_Ilean_load___closed__2();
lean_mark_persistent(l_Lean_Server_Ilean_load___closed__2);
l_panic___at_Lean_Server_findReferences___spec__4___closed__1 = _init_l_panic___at_Lean_Server_findReferences___spec__4___closed__1();
lean_mark_persistent(l_panic___at_Lean_Server_findReferences___spec__4___closed__1);
l_panic___at_Lean_Server_findReferences___spec__4___closed__2 = _init_l_panic___at_Lean_Server_findReferences___spec__4___closed__2();
lean_mark_persistent(l_panic___at_Lean_Server_findReferences___spec__4___closed__2);
l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__1 = _init_l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__1();
lean_mark_persistent(l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__1);
l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__2 = _init_l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__2();
lean_mark_persistent(l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__2);
l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__3 = _init_l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__3();
lean_mark_persistent(l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__3);
l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__4 = _init_l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__4();
lean_mark_persistent(l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__4);
l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___closed__1);
l_Array_foldlMUnsafe_fold___at_Lean_Server_combineFvars_buildIdMap___spec__10___closed__1 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Server_combineFvars_buildIdMap___spec__10___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Server_combineFvars_buildIdMap___spec__10___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__10___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__10___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Server_combineFvars___spec__10___closed__1);
l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2___closed__1 = _init_l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2___closed__1();
l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2___closed__2 = _init_l_Std_HashMapImp_find_x3f___at_Lean_Server_dedupReferences___spec__2___closed__2();
l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13___closed__1 = _init_l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13___closed__1();
lean_mark_persistent(l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__13___closed__1);
l_Lean_Server_dedupReferences___closed__1 = _init_l_Lean_Server_dedupReferences___closed__1();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__1);
l_Lean_Server_dedupReferences___closed__2 = _init_l_Lean_Server_dedupReferences___closed__2();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__2);
l_Lean_Server_dedupReferences___closed__3 = _init_l_Lean_Server_dedupReferences___closed__3();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__3);
l_Lean_Server_dedupReferences___closed__4 = _init_l_Lean_Server_dedupReferences___closed__4();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__4);
l_Lean_Server_dedupReferences___closed__5 = _init_l_Lean_Server_dedupReferences___closed__5();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__5);
l_Lean_Server_dedupReferences___closed__6 = _init_l_Lean_Server_dedupReferences___closed__6();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__6);
l_Lean_Server_dedupReferences___closed__7 = _init_l_Lean_Server_dedupReferences___closed__7();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__7);
l_Lean_Server_dedupReferences___closed__8 = _init_l_Lean_Server_dedupReferences___closed__8();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__8);
l_Lean_Server_dedupReferences___closed__9 = _init_l_Lean_Server_dedupReferences___closed__9();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__9);
l_Lean_Server_dedupReferences___closed__10 = _init_l_Lean_Server_dedupReferences___closed__10();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__10);
l_Lean_Server_dedupReferences___closed__11 = _init_l_Lean_Server_dedupReferences___closed__11();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__11);
l_Lean_Server_findModuleRefs___closed__1 = _init_l_Lean_Server_findModuleRefs___closed__1();
lean_mark_persistent(l_Lean_Server_findModuleRefs___closed__1);
l_Lean_Server_findModuleRefs___closed__2 = _init_l_Lean_Server_findModuleRefs___closed__2();
lean_mark_persistent(l_Lean_Server_findModuleRefs___closed__2);
l_Lean_Server_References_empty = _init_l_Lean_Server_References_empty();
lean_mark_persistent(l_Lean_Server_References_empty);
l_Lean_Server_References_findAt___closed__1 = _init_l_Lean_Server_References_findAt___closed__1();
lean_mark_persistent(l_Lean_Server_References_findAt___closed__1);
l_Lean_Server_References_findAt___closed__2 = _init_l_Lean_Server_References_findAt___closed__2();
lean_mark_persistent(l_Lean_Server_References_findAt___closed__2);
l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___closed__1 = _init_l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___closed__1();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Server_References_referringTo___spec__5___closed__1);
l_Lean_Server_References_definitionsMatching___rarg___closed__1 = _init_l_Lean_Server_References_definitionsMatching___rarg___closed__1();
lean_mark_persistent(l_Lean_Server_References_definitionsMatching___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
