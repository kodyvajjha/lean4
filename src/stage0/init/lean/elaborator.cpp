// Lean compiler output
// Module: init.lean.elaborator
// Imports: init.lean.parser.module init.lean.expander init.lean.expr init.lean.options
#include "runtime/object.h"
#include "runtime/apply.h"
typedef lean::object obj;    typedef lean::usize  usize;
typedef lean::uint8  uint8;  typedef lean::uint16 uint16;
typedef lean::uint32 uint32; typedef lean::uint64 uint64;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
obj* l_List_foldr___main___at_Lean_Elaborator_matchOpenSpec___spec__1___boxed(obj*, obj*, obj*);
obj* l_Lean_Elaborator_currentScope___boxed(obj*, obj*, obj*);
obj* l_RBNode_setBlack___main___rarg(obj*);
extern "C" obj* lean_expr_mk_mdata(obj*, obj*);
obj* l_Lean_Expander_getOptType___main(obj*);
obj* l_Option_toMonad___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__1(obj*);
obj* l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__1(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_inferModToPexpr___closed__2;
obj* l_Lean_Elaborator_notation_elaborate(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_postprocessNotationSpec___closed__1;
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__14___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__2;
obj* l_Lean_Elaborator_include_elaborate(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_precToNat(obj*);
obj* l_Lean_Parser_stringLit_View_value(obj*);
extern "C" uint8 lean_name_dec_eq(obj*, obj*);
obj* l_Lean_Elaborator_open_elaborate(obj*, obj*, obj*, obj*);
obj* l_List_zipWith___main___rarg(obj*, obj*, obj*);
extern obj* l_Lean_Expander_getOptType___main___closed__1;
obj* l_Lean_Elaborator_dummy;
obj* l_Lean_Elaborator_toPexpr___main___closed__8;
extern obj* l_Lean_MessageLog_empty;
obj* l_Lean_Elaborator_toPexpr___main___closed__46;
extern "C" obj* lean_expr_mk_sort(obj*);
obj* l_Lean_KVMap_setBool(obj*, obj*, uint8);
uint8 l_List_foldr___main___at_Lean_Elaborator_matchOpenSpec___spec__1(obj*, uint8, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__1;
obj* l_Lean_Elaborator_mkState___closed__3;
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_List_map___main___at_Lean_Elaborator_toPexpr___main___spec__2(obj*);
obj* l_Lean_Elaborator_processCommand(obj*, obj*, obj*);
obj* l_Lean_Elaborator_toLevel___main___closed__1;
obj* l_List_mfilter___main___at_Lean_Elaborator_variables_elaborate___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__2___closed__1;
obj* l_Lean_Format_pretty(obj*, obj*);
obj* l_Lean_Elaborator_mkNotationKind___rarg___closed__1;
obj* l_Lean_Elaborator_ElaboratorM_MonadExcept;
obj* l_Lean_Elaborator_attribute_elaborate___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__6;
obj* l_RBNode_find___main___at_Lean_Elaborator_processCommand___spec__3___boxed(obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__21;
obj* l_Lean_Elaborator_matchSpec(obj*, obj*);
obj* l_Lean_Elaborator_matchOpenSpec(obj*, obj*);
obj* l_RBTree_toList___at_Lean_Elaborator_oldElabCommand___spec__1(obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_elaboratorInh(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_OrderedRBMap_empty___rarg(obj*);
obj* l_Lean_Elaborator_declModifiersToPexpr___closed__3;
obj* l_List_mfoldl___main___at_Lean_Elaborator_CommandParserConfig_registerNotationTokens___spec__1___closed__1;
obj* l_List_foldl___main___at_Lean_Elaborator_toPexpr___main___spec__16(obj*, obj*);
extern obj* l_Lean_Parser_command_namespace;
extern obj* l_Lean_Parser_Level_trailing_HasView;
obj* l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_List_lengthAux___main___rarg(obj*, obj*);
extern obj* l_Lean_Parser_Level_leading_HasView_x_27___lambda__1___closed__5;
obj* l_List_mfoldl___main___at_Lean_Elaborator_CommandParserConfig_registerNotationTokens___spec__1(obj*, obj*);
obj* l_Lean_Elaborator_identUnivParamsToPexpr(obj*);
obj* l_Lean_Elaborator_OrderedRBMap_ofList___rarg(obj*, obj*);
extern obj* l_Lean_Parser_Module_header;
obj* l_List_mmap___main___at_Lean_Elaborator_attrsToPexpr___spec__2___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__22;
obj* l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_ElaboratorM_MonadState;
obj* l_Lean_Elaborator_elaborators;
obj* l_Lean_Elaborator_Declaration_elaborate___lambda__3___closed__2;
obj* l_StateT_Monad___rarg(obj*);
extern "C" obj* lean_expr_mk_pi(obj*, uint8, obj*, obj*);
obj* l_Lean_Elaborator_resolveContext___main___closed__1;
obj* l_Lean_Elaborator_Declaration_elaborate___lambda__3___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_section_elaborate(obj*, obj*, obj*, obj*);
obj* l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_variables_elaborate___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_reserveNotation_elaborate___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_processCommand___lambda__1___closed__2;
obj* l_Lean_Elaborator_variables_elaborate(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_oldElabCommand(obj*, obj*, obj*, obj*, obj*);
uint8 l_Lean_Elaborator_isOpenNamespace(obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__37;
extern "C" obj* level_mk_mvar(obj*);
obj* l_List_foldl___main___at_Lean_Elaborator_include_elaborate___spec__1(obj*, obj*);
obj* l_Option_toMonad___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__1___rarg(obj*);
extern "C" obj* lean_expr_local(obj*, obj*, obj*, uint8);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__3___closed__1;
extern "C" obj* lean_expr_mk_app(obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__3;
obj* l_List_foldl___main___at_Lean_Parser_Term_mkApp___spec__1(obj*, obj*);
obj* l_List_reverse___rarg(obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__9;
extern obj* l_Lean_Parser_command_attribute;
obj* l_Lean_Elaborator_Declaration_elaborate___lambda__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_TokenMap_insert___rarg(obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_attrsToPexpr___spec__1(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main(obj*, obj*, obj*, obj*);
obj* l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1(obj*);
obj* l_List_foldr___main___at_Lean_Elaborator_isOpenNamespace___main___spec__2___boxed(obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__30;
extern "C" obj* lean_expr_mk_let(obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__13___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_modifyCurrentScope___boxed(obj*, obj*, obj*, obj*);
uint8 l_Lean_Parser_Syntax_isOfKind___main(obj*, obj*);
extern obj* l_Lean_Parser_command_variables;
obj* l_Lean_Elaborator_elabDefLike(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_KVMap_setNat(obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__4;
obj* l_Lean_Elaborator_declModifiersToPexpr___closed__2;
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__17(obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__5___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_RBNode_ins___main___rarg(obj*, obj*, obj*, obj*);
obj* l_List_foldl___main___at_Lean_Elaborator_mangleIdent___spec__1(obj*, obj*);
obj* l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_inferModToPexpr___closed__3;
obj* l_Lean_Elaborator_elabDefLike___lambda__1(obj*, obj*);
obj* l_Lean_Name_toStringWithSep___main(obj*, obj*);
obj* l_List_mfilter___main___at_Lean_Elaborator_variables_elaborate___spec__1___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__28;
extern obj* l_Lean_Parser_Term_have_HasView;
obj* l_Lean_Expr_mkCapp(obj*, obj*);
obj* l_Lean_Elaborator_end_elaborate___closed__1;
obj* l_Lean_Elaborator_toPexpr___main___closed__19;
obj* l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__1___boxed(obj*);
obj* l_Lean_Elaborator_OrderedRBMap_ofList___boxed(obj*, obj*);
obj* l_Lean_Parser_Term_simpleBinder_View_toBinderInfo___main(obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__31;
extern obj* l_Lean_Parser_Term_structInst_HasView;
obj* l_Lean_Elaborator_universe_elaborate___closed__1;
obj* l_List_map___main___at_Lean_Elaborator_namesToPexpr___spec__1(obj*);
obj* l_Lean_Elaborator_mkNotationKind(obj*, obj*);
obj* l_Lean_Elaborator_command_elaborate(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__34;
obj* l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__2___boxed(obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_simpleBindersToPexpr___spec__1(obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__12___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_List_map___main___at_Lean_Elaborator_export_elaborate___spec__1(obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__45;
obj* l_Lean_Elaborator_toLevel___main___boxed(obj*, obj*, obj*, obj*);
extern obj* l_Lean_Options_empty;
obj* l_Lean_Elaborator_section_elaborate___closed__2;
obj* l_Lean_Elaborator_universe_elaborate___closed__2;
obj* l_Lean_Elaborator_toPexpr___main___closed__1;
extern obj* l_Lean_Parser_number_HasView;
obj* l_Lean_Elaborator_check_elaborate(obj*, obj*, obj*, obj*);
obj* l_List_foldl___main___at_Lean_Elaborator_OrderedRBMap_ofList___spec__1___boxed(obj*, obj*);
obj* l_RBNode_ins___main___at_Lean_Elaborator_elaborators___spec__1(obj*, obj*, obj*);
obj* l_Lean_Elaborator_OrderedRBMap_empty___rarg___boxed(obj*);
obj* l_monadStateTrans___rarg(obj*, obj*);
obj* l_Lean_Elaborator_namesToPexpr(obj*);
obj* l_Lean_Elaborator_OrderedRBMap_insert___boxed(obj*, obj*);
obj* l_Lean_Name_quickLt___boxed(obj*, obj*);
obj* l_Lean_Elaborator_toLevel___main___closed__4;
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__3(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_notation_elaborate___closed__1;
obj* l_Lean_Elaborator_mkState___closed__4;
obj* l_Lean_Elaborator_Declaration_elaborate___lambda__2(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_RBTree_ofList___main___at_Lean_Elaborator_oldElabCommand___spec__3(obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__15___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Level_ofNat___main(obj*);
obj* l_RBNode_ins___main___at_Lean_Expander_builtinTransformers___spec__1(obj*, obj*, obj*);
obj* l_Lean_Elaborator_export_elaborate___boxed(obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_command_section;
obj* l_Lean_Elaborator_toPexpr___main___closed__14;
obj* l_ExceptT_MonadExcept___rarg(obj*);
extern obj* l_Lean_Parser_command_attribute_HasView;
obj* l_Lean_Elaborator_toPexpr___main___closed__32;
extern obj* l_Lean_Parser_command_reserveNotation_HasView;
obj* l_List_spanAux___main___at_Lean_Elaborator_toPexpr___main___spec__5(obj*, obj*);
extern obj* l_Id_Monad;
extern obj* l_Lean_Parser_command_export_HasView;
obj* l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_resolveContext___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_inferModToPexpr___closed__1;
obj* l_Lean_Elaborator_notation_elaborateAux(obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6(obj*, obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_command_variables_HasView;
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__10(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_binderIdent_Parser(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_resolveContext___main___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__18;
obj* l_Lean_Elaborator_declModifiersToPexpr___closed__6;
obj* l_RBNode_balance2___main___rarg(obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__10;
obj* l_ReaderT_read___rarg(obj*, obj*);
obj* l_Lean_Elaborator_include_elaborate___lambda__1(obj*, obj*);
obj* l_Lean_Elaborator_simpleBindersToPexpr___boxed(obj*, obj*, obj*, obj*);
obj* l_List_foldl___main___at_Lean_Elaborator_elabDefLike___spec__3(obj*, obj*);
obj* l_Lean_Parser_Syntax_asNode___main(obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__44;
obj* l_Lean_Elaborator_levelAdd___main(obj*, obj*);
extern obj* l_Lean_Parser_command_end_HasView;
obj* l_Lean_Elaborator_attribute_elaborate___closed__2;
obj* l_Lean_Elaborator_elaboratorInh___closed__1;
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__1;
obj* l_List_foldl___main___at_Lean_Elaborator_OrderedRBMap_ofList___spec__1(obj*, obj*);
obj* l_Lean_Elaborator_attribute_elaborate(obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__4;
obj* l_Lean_Elaborator_OrderedRBMap_insert(obj*, obj*);
obj* l_fix1___rarg___lambda__1___boxed(obj*, obj*);
extern obj* l_Lean_Parser_command_end;
extern obj* l_Lean_Parser_Term_sort_HasView_x_27___lambda__1___closed__4;
obj* l_Lean_Elaborator_toPexpr___main___closed__27;
obj* l_ReaderT_lift___rarg___boxed(obj*, obj*);
obj* l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__3(obj*, obj*, obj*);
obj* l_Lean_Elaborator_preresolve___boxed(obj*, obj*, obj*, obj*);
obj* l_ReaderT_bind___at_Lean_Elaborator_Declaration_elaborate___spec__1(obj*, obj*);
obj* l_Lean_Elaborator_Module_header_elaborate(obj*, obj*, obj*, obj*);
extern "C" obj* lean_expr_mk_const(obj*, obj*);
obj* l_Lean_Elaborator_toLevel___boxed(obj*, obj*, obj*, obj*);
extern "C" obj* level_mk_param(obj*);
obj* l_List_enumFrom___main___rarg(obj*, obj*);
extern obj* l_Lean_Parser_command_export;
obj* l_Lean_Elaborator_end_elaborate___closed__4;
obj* l_Lean_Elaborator_mangleIdent(obj*);
obj* l_Lean_Elaborator_universe_elaborate___lambda__1(obj*, obj*);
uint8 l_Lean_Elaborator_isOpenNamespace___main(obj*, obj*);
obj* l_ReaderT_Monad___rarg(obj*);
obj* l_Lean_Parser_Term_Parser(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_List_foldl___main___at_Lean_Expr_mkApp___spec__1(obj*, obj*);
obj* l_Lean_Elaborator_initQuot_elaborate(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_resolveContext___main(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__12;
obj* l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1___closed__2;
obj* l_List_foldr___main___at_Lean_Elaborator_toLevel___main___spec__2___boxed(obj*, obj*);
extern obj* l_Lean_Parser_Term_show_HasView;
obj* l_List_join___main___rarg(obj*);
obj* l_List_mfoldl___main___at_Lean_Elaborator_updateParserConfig___spec__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_declModifiersToPexpr(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__29;
extern obj* l_Lean_Parser_Term_structInstItem_HasView;
extern obj* l_Lean_Parser_command_setOption_HasView;
obj* l_Lean_Elaborator_Expr_mkAnnotation___closed__1;
obj* l_Lean_Elaborator_ElaboratorM_Lean_Parser_MonadRec;
obj* l_Lean_Elaborator_toPexpr(obj*, obj*, obj*, obj*);
obj* l_List_map___main___at_Lean_Elaborator_elabDefLike___spec__2(obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__4___boxed(obj*, obj*, obj*, obj*);
namespace lean {
obj* string_append(obj*, obj*);
}
obj* l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__2;
obj* l_Lean_Elaborator_Declaration_elaborate___lambda__3(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_registerNotationMacro(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__20;
extern obj* l_Lean_Parser_command_initQuot;
obj* l_Lean_KVMap_setName(obj*, obj*, obj*);
obj* l_Lean_Elaborator_matchSpec___closed__1;
extern obj* l_Lean_Parser_command_open_HasView;
obj* l_Lean_Elaborator_inferModToPexpr___boxed(obj*);
obj* l_Lean_Elaborator_OrderedRBMap_find___rarg(obj*, obj*, obj*);
extern obj* l_Lean_Parser_command_check;
extern obj* l_Lean_Parser_Term_explicit_HasView;
obj* l_Lean_Parser_command_NotationSpec_precedenceTerm_View_toNat___main(obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__17;
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__15(obj*, obj*, obj*, obj*);
obj* l_List_mfor___main___at_Lean_Elaborator_noKind_elaborate___spec__1(obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_currLbp___rarg___lambda__3___closed__1;
namespace lean {
uint8 nat_dec_lt(obj*, obj*);
}
extern obj* l_Lean_Parser_command_include_HasView;
obj* l_List_map___main___at_Lean_Elaborator_mkEqns___spec__1___closed__1;
obj* l_Lean_Elaborator_Declaration_elaborate___closed__3;
obj* l_Lean_Elaborator_end_elaborate___closed__3;
obj* l_Lean_Elaborator_toPexpr___main___closed__33;
obj* l_Lean_Elaborator_notation_elaborate___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_reserveNotation_elaborate(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_toLevel(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_mkEqns___closed__1;
obj* l_Lean_Parser_Syntax_getPos(obj*);
extern obj* l_Lean_Expander_builtinTransformers;
obj* l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___boxed(obj*);
obj* l_Lean_Elaborator_declModifiersToPexpr___closed__4;
extern obj* l_Char_HasRepr___closed__1;
obj* l_List_foldl___main___at_Lean_Elaborator_elaborators___spec__2(obj*, obj*);
extern obj* l_Lean_Parser_noKind;
obj* l_Lean_Elaborator_toPexpr___main___closed__39;
extern obj* l_Lean_Parser_Term_lambda_HasView;
obj* l_RBNode_ins___main___at_Lean_NameSet_insert___spec__1(obj*, obj*, obj*);
obj* l_Lean_Elaborator_mkState(obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__36;
obj* l_List_append___rarg(obj*, obj*);
obj* l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_preresolve___main___boxed(obj*, obj*, obj*, obj*);
extern "C" obj* lean_name_mk_string(obj*, obj*);
obj* l_Lean_Elaborator_oldElabCommand___lambda__1(obj*, obj*);
obj* l_Lean_Elaborator_notation_elaborateAux___boxed(obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__1(obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__3;
obj* l_Lean_Elaborator_isOpenNamespace___main___boxed(obj*, obj*);
extern obj* l_Lean_Parser_Module_header_HasView;
obj* l_List_spanAux___main___at_Lean_Elaborator_toPexpr___main___spec__4(obj*, obj*);
extern obj* l_Lean_Parser_command_setOption;
obj* l_Lean_Elaborator_toPexpr___main___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Expander_mkNotationTransformer(obj*, obj*, obj*);
extern obj* l_Lean_Parser_command_notation;
obj* l_List_filterMap___main___at_Lean_Elaborator_resolveContext___main___spec__5(obj*, obj*);
namespace lean {
obj* nat_add(obj*, obj*);
}
obj* l_Lean_Elaborator_matchPrecedence___main___boxed(obj*, obj*);
obj* l_ReaderT_bind___at_Lean_Elaborator_Declaration_elaborate___spec__1___rarg(obj*, obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_Module_eoi;
obj* l_Lean_Elaborator_attrsToPexpr(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_elaborateCommand___boxed(obj*, obj*, obj*);
obj* l_List_map___main___at_Lean_Elaborator_identUnivParamsToPexpr___spec__1(obj*);
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
uint8 l_List_foldr___main___at_Lean_Elaborator_notation_elaborate___spec__1(uint8, obj*);
obj* l_Lean_Elaborator_inferModToPexpr(obj*);
obj* l_Lean_Elaborator_Expr_mkAnnotation(obj*, obj*);
obj* l_StateT_MonadExcept___rarg(obj*, obj*, obj*);
obj* l_Lean_Elaborator_Declaration_elaborate___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_section_elaborate___closed__1;
obj* l_Lean_Elaborator_currentScope___closed__1;
uint8 l_RBNode_isRed___main___rarg(obj*);
obj* l_Lean_Elaborator_OrderedRBMap_ofList(obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2(obj*);
obj* l_Lean_Elaborator_setOption_elaborate___lambda__1(obj*, obj*);
obj* l_Lean_Elaborator_noKind_elaborate___closed__1;
obj* l_Lean_Elaborator_CommandParserConfig_registerNotationTokens(obj*, obj*);
obj* l_Lean_Elaborator_updateParserConfig___boxed(obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__11;
obj* l_Lean_Elaborator_toPexpr___main___closed__40;
obj* l_Lean_Elaborator_eoi_elaborate___closed__1;
obj* l_Lean_Elaborator_toLevel___main___closed__3;
obj* l_Lean_Elaborator_end_elaborate___closed__2;
obj* l_Lean_Elaborator_OrderedRBMap_find___boxed(obj*, obj*);
extern "C" obj* level_mk_imax(obj*, obj*);
obj* l_Lean_Elaborator_section_elaborate___boxed(obj*, obj*, obj*, obj*);
uint8 l_List_foldr___main___at_Lean_Elaborator_isOpenNamespace___main___spec__2(obj*, uint8, obj*);
obj* l_Lean_Elaborator_Declaration_elaborate___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_command_Declaration;
obj* l_Lean_Parser_Combinators_node___at_Lean_Parser_Term_sortApp_Parser_Lean_Parser_HasTokens___spec__3(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_universe_elaborate___boxed(obj*, obj*, obj*, obj*);
obj* l_List_foldr___main___at_Lean_Elaborator_toLevel___main___spec__3(obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__5(obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_Level_trailing_HasView_x_27___lambda__1___closed__2;
obj* l_Lean_Elaborator_OrderedRBMap_find(obj*, obj*);
obj* l_Lean_Elaborator_preresolve(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_Declaration_elaborate(obj*, obj*, obj*, obj*);
extern obj* l_Lean_Expander_expandBracketedBinder___main___closed__4;
obj* l_Lean_Elaborator_toPexpr___main___closed__13;
obj* l_Lean_Elaborator_processCommand___lambda__1___closed__1;
obj* l_Lean_Elaborator_mkEqns___closed__2;
namespace lean {
uint8 string_dec_eq(obj*, obj*);
}
obj* l_Lean_Elaborator_processCommand___closed__1;
obj* l_Lean_Elaborator_Declaration_elaborate___lambda__3___closed__1;
obj* l_Lean_Elaborator_check_elaborate___boxed(obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_command_open;
obj* l_Lean_Elaborator_OrderedRBMap_empty___boxed(obj*, obj*);
obj* l_Lean_Elaborator_namespace_elaborate(obj*, obj*, obj*, obj*);
obj* l_coe___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__4___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_command_notation_HasView;
extern obj* l_Lean_Parser_command_section_HasView;
obj* l_List_filterMap___main___at_Lean_Elaborator_notation_elaborateAux___spec__1(obj*, obj*);
obj* l_Lean_Elaborator_levelAdd___main___boxed(obj*, obj*);
extern obj* l_Lean_Parser_Term_app_HasView;
obj* l_coe___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__4(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__2;
obj* l_List_foldl___main___at_Lean_Elaborator_OrderedRBMap_ofList___spec__1___rarg(obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__8___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__9___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_elabDefLike___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_open_elaborate___lambda__1(obj*, obj*);
uint8 l_Lean_Elaborator_matchPrecedence(obj*, obj*);
obj* l_Lean_Elaborator_toLevel___main___closed__2;
obj* l_List_mmap___main___at_Lean_Elaborator_toLevel___main___spec__1(obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_Term_projection_HasView;
obj* l_List_mmap___main___at_Lean_Elaborator_attrsToPexpr___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_simpleBindersToPexpr___spec__1___boxed(obj*, obj*, obj*, obj*);
extern "C" obj* lean_expr_mk_mvar(obj*, obj*);
extern obj* l_Lean_Parser_maxPrec;
extern "C" obj* lean_expr_mk_bvar(obj*);
extern "C" obj* lean_elaborator_elaborate_command(obj*, obj*, obj*);
obj* l_Lean_Elaborator_setOption_elaborate(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_open_elaborate___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__2___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_RBNode_find___main___rarg(obj*, obj*, obj*, obj*);
obj* l_List_mfoldl___main___at_Lean_Elaborator_updateParserConfig___spec__2(obj*, obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_Term_sortApp_HasView;
obj* l_Lean_Elaborator_mkNotationKind___boxed(obj*, obj*);
obj* l_Lean_Elaborator_OrderedRBMap_empty(obj*, obj*);
obj* l_Lean_Elaborator_mkEqns(obj*, obj*);
obj* l_Lean_Elaborator_namespace_elaborate___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_isOpenNamespace___boxed(obj*, obj*);
obj* l_String_trim(obj*);
obj* l_Lean_Elaborator_toLevel___main___closed__5;
extern obj* l_Lean_Parser_command_universe;
obj* l_List_filterMap___main___at_Lean_Elaborator_resolveContext___main___spec__2(obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__10___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__3___boxed(obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__11(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Name_replacePrefix___main(obj*, obj*, obj*);
obj* l_Lean_Elaborator_declModifiersToPexpr___closed__7;
extern "C" obj* level_mk_succ(obj*);
obj* l_Lean_Elaborator_levelGetAppArgs___main___closed__1;
obj* l_Lean_Elaborator_toPexpr___main___closed__43;
extern obj* l_Lean_Expander_bindingAnnotationUpdate;
obj* l_ReaderT_bind___at_Lean_Elaborator_Declaration_elaborate___spec__1___boxed(obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_levelAdd___boxed(obj*, obj*);
extern obj* l_Lean_Parser_command_namespace_HasView;
obj* l_Lean_Elaborator_setOption_elaborate___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_levelGetAppArgs(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_elabDefLike___closed__1;
obj* l_Lean_Elaborator_levelGetAppArgs___main(obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__13(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_levelGetAppArgs___main___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_namespace_elaborate___closed__1;
obj* l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__4___boxed(obj*, obj*, obj*);
obj* l_Lean_Elaborator_mkState___closed__1;
obj* l_List_mmap___main___at_Lean_Elaborator_toLevel___main___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_modifyCurrentScope___closed__1;
uint8 l_Lean_Name_quickLt(obj*, obj*);
obj* l_ReaderT_MonadExcept___rarg(obj*);
obj* l_List_map___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__3(obj*);
obj* l_Lean_Elaborator_getNamespace___boxed(obj*, obj*, obj*);
extern obj* l_Lean_Parser_command_universe_HasView;
extern "C" obj* lean_name_mk_numeral(obj*, obj*);
obj* l_Lean_Elaborator_OrderedRBMap_insert___rarg(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_simpleBindersToPexpr(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_declModifiersToPexpr___closed__5;
obj* l_Lean_Elaborator_levelGetAppArgs___boxed(obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_Term_anonymousConstructor_HasView;
obj* l_Lean_Elaborator_end_elaborate(obj*, obj*, obj*, obj*);
obj* l_List_map___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__5(obj*);
obj* l_Lean_Elaborator_elaboratorConfigCoeFrontendConfig(obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__4(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_Declaration_elaborate___closed__4;
obj* l_List_mmap___main___at_Lean_Elaborator_preresolve___main___spec__1(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_oldElabCommand___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_Declaration_elaborate___closed__5;
obj* l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__6(obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__24;
uint8 l_List_decidableMem___main___at_Lean_Elaborator_isOpenNamespace___main___spec__1(obj*, obj*);
obj* l_Lean_Elaborator_initQuot_elaborate___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_number_View_ofNat(obj*);
obj* l_Lean_environment_contains___boxed(obj*, obj*);
obj* l_DList_singleton___rarg(obj*, obj*);
extern obj* l_Lean_Parser_Term_borrowed_HasView;
obj* l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__1___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__26;
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__9(obj*, obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_Level_leading_HasView;
obj* l_Lean_Elaborator_eoi_elaborate___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_KVMap_setString(obj*, obj*, obj*);
obj* l_Lean_Elaborator_CommandParserConfig_registerNotationParser___closed__1;
obj* l_Lean_Parser_RecT_recurse___rarg(obj*, obj*);
obj* l_Lean_Elaborator_notation_elaborate___lambda__1(obj*, obj*);
obj* l_Lean_Elaborator_elabDefLike___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
extern "C" uint8 lean_environment_contains(obj*, obj*);
obj* l_ExceptT_Monad___rarg(obj*);
extern obj* l_Lean_Parser_number_HasView_x_27___lambda__1___closed__6;
obj* l_Lean_Elaborator_preresolve___main(obj*, obj*, obj*, obj*);
obj* l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__2(obj*);
obj* l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__38;
obj* l_RBNode_revFold___main___at_Lean_Elaborator_oldElabCommand___spec__2(obj*, obj*);
extern obj* l_Lean_Parser_command_check_HasView;
obj* l_Lean_Elaborator_variables_elaborate___closed__2;
obj* l_Lean_Elaborator_processCommand___lambda__1(obj*, obj*, obj*, obj*);
obj* l_Lean_KVMap_insertCore___main(obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__16;
obj* l_RBNode_balance1___main___rarg(obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__35;
obj* l_Lean_Elaborator_toPexpr___main___closed__7;
namespace lean {
uint32 uint32_of_nat(obj*);
}
obj* l_Lean_Elaborator_Module_header_elaborate___closed__1;
extern obj* l_Lean_Name_toString___closed__1;
obj* l_Lean_Elaborator_declModifiersToPexpr___boxed(obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__8(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_updateParserConfig(obj*, obj*, obj*);
obj* l_Lean_Elaborator_ElaboratorM_MonadReader;
obj* l_Lean_Elaborator_toPexpr___main___closed__41;
obj* l_Lean_Elaborator_toPexpr___main___closed__25;
obj* l_Lean_Elaborator_attribute_elaborate___closed__1;
obj* l_RBNode_find___main___at_Lean_Elaborator_processCommand___spec__3(obj*, obj*);
obj* l_Lean_Elaborator_matchPrecedence___boxed(obj*, obj*);
obj* l_List_map___main___at_Lean_Elaborator_mkEqns___spec__1(obj*, obj*);
extern "C" obj* lean_expr_mk_lambda(obj*, uint8, obj*, obj*);
obj* l_Lean_Elaborator_end_elaborate___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Syntax_kind___main(obj*);
obj* l_Lean_Elaborator_elabDefLike___closed__2;
obj* l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__5;
obj* l_Lean_Elaborator_variables_elaborate___closed__1;
obj* l_Lean_Elaborator_modifyCurrentScope(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_elaboratorInh___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_export_elaborate(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__5;
obj* l_List_mfoldl___main___at_Lean_Elaborator_updateParserConfig___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_List_mfoldl___main___at_Lean_Elaborator_updateParserConfig___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_ElaboratorM_Monad;
obj* l_Lean_Elaborator_levelAdd(obj*, obj*);
obj* l_Lean_Elaborator_eoi_elaborate(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_noKind_elaborate(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_Module_header_elaborate___boxed(obj*, obj*, obj*, obj*);
obj* l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__6___boxed(obj*, obj*, obj*);
obj* l_Lean_FileMap_toPosition(obj*, obj*);
obj* l_List_foldr___main___at_Lean_Elaborator_toLevel___main___spec__2(obj*, obj*);
extern obj* l_Lean_Parser_stringLit_HasView;
obj* l_Lean_Elaborator_toLevel___main(obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__11___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_currentScope(obj*, obj*, obj*);
obj* l_Option_toMonad___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__1___boxed(obj*);
extern obj* l_Lean_Parser_Term_inaccessible_HasView;
obj* l_Lean_Elaborator_precToNat___main(obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_include_elaborate___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__1(obj*);
obj* l_Lean_Elaborator_declModifiersToPexpr___closed__1;
obj* l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__2___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_registerNotationMacro___boxed(obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_Term_match_HasView;
obj* l_Lean_Parser_Term_getLeading___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_attrsToPexpr___spec__2(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_mkNotationKind___rarg(obj*);
obj* l_Lean_Elaborator_elaboratorConfigCoeFrontendConfig___boxed(obj*);
obj* l_Lean_Expr_local___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Substring_ofString(obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_preresolve___main___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_Declaration_elaborate___closed__1;
extern obj* l_Lean_Parser_command_Declaration_HasView;
obj* l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__4(obj*, obj*, obj*);
obj* l_List_map___main___at_Lean_Elaborator_Declaration_elaborate___spec__3(obj*);
extern obj* l_Lean_Expander_noExpansion___closed__1;
extern obj* l_Lean_Parser_Term_sort_HasView;
obj* l_Lean_Elaborator_resolveContext(obj*, obj*, obj*, obj*);
obj* l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__3___boxed(obj*, obj*, obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__23;
obj* l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1___closed__1;
obj* l_ReaderT_lift___boxed(obj*, obj*, obj*, obj*);
obj* l_List_foldr___main___at_Lean_Elaborator_toLevel___main___spec__3___boxed(obj*, obj*);
extern obj* l_Lean_Parser_identUnivs_HasView;
obj* l_Lean_Elaborator_Declaration_elaborate___closed__2;
obj* l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_notation_elaborate___closed__2;
extern obj* l_Lean_Parser_command_reserveNotation;
obj* l_Lean_Name_append___main(obj*, obj*);
obj* l_Lean_Elaborator_check_elaborate___closed__1;
obj* l_List_mfilter___main___at_Lean_Elaborator_variables_elaborate___spec__1(obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__17___boxed(obj*, obj*, obj*, obj*);
obj* l_List_foldr___main___at_Lean_Elaborator_toPexpr___main___spec__7___boxed(obj*, obj*);
obj* l_List_zip___rarg___lambda__1(obj*, obj*);
obj* l_List_foldr___main___at_Lean_Elaborator_notation_elaborate___spec__1___boxed(obj*, obj*);
obj* l_List_mfilter___main___at_Lean_Elaborator_variables_elaborate___spec__1___lambda__1(obj*, uint8, obj*, obj*);
uint8 l_Lean_Elaborator_matchPrecedence___main(obj*, obj*);
obj* l_Lean_Elaborator_attrsToPexpr___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_mkState___closed__2;
obj* l_Lean_Elaborator_initQuot_elaborate___closed__1;
obj* l_Lean_Parser_Syntax_toFormat___main(obj*);
obj* l_StateT_MonadState___rarg(obj*);
obj* l_List_decidableMem___main___at_Lean_Elaborator_isOpenNamespace___main___spec__1___boxed(obj*, obj*);
extern obj* l_List_mmap___main___at_Lean_Parser_Syntax_reprint___main___spec__1___closed__1;
obj* l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__2(obj*, obj*, obj*, obj*, obj*);
obj* l_List_foldr___main___at_Lean_Elaborator_toPexpr___main___spec__7(obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__14(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_universe_elaborate(obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_CommandParserConfig_registerNotationParser(obj*, obj*, obj*);
extern "C" obj* lean_expr_mk_lit(obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_elabDefLike___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Elaborator_notation_elaborateAux___closed__1;
obj* l_Lean_Elaborator_getNamespace(obj*, obj*, obj*);
extern obj* l_Lean_Parser_Term_let_HasView;
obj* l_Lean_Parser_number_View_toNat___main(obj*);
extern "C" obj* level_mk_max(obj*, obj*);
obj* l_Lean_Parser_Term_binders_Parser(obj*, obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_Term_pi_HasView;
obj* l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_matchSpec___spec__1(obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__42;
obj* l___private_init_lean_parser_trie_2__insertAux___main___rarg(obj*, obj*, obj*, obj*);
obj* l_List_map___main___at_Lean_Expander_paren_transform___spec__1(obj*);
obj* l_Lean_Elaborator_toPexpr___main___closed__15;
obj* l_Lean_Elaborator_postprocessNotationSpec(obj*);
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__12(obj*, obj*, obj*, obj*, obj*);
extern obj* l_String_splitAux___main___closed__1;
obj* l_Lean_Elaborator_locally(obj*, obj*, obj*, obj*);
extern obj* l_Lean_Parser_command_include;
obj* l_Lean_environment_contains___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean_environment_contains(x_0, x_1);
x_3 = lean::box(x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_Expr_local___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_3);
x_5 = lean_expr_local(x_0, x_1, x_2, x_4);
return x_5;
}
}
obj* l_Lean_Elaborator_elaborateCommand___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean_elaborator_elaborate_command(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_2);
return x_3;
}
}
obj* l_Lean_Elaborator_OrderedRBMap_empty___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = lean::box(0);
x_2 = lean::box(0);
x_3 = lean::mk_nat_obj(0ul);
x_4 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_4, 0, x_1);
lean::cnstr_set(x_4, 1, x_2);
lean::cnstr_set(x_4, 2, x_3);
return x_4;
}
}
obj* l_Lean_Elaborator_OrderedRBMap_empty(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_OrderedRBMap_empty___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_Lean_Elaborator_OrderedRBMap_empty___rarg___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_Elaborator_OrderedRBMap_empty___rarg(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_Lean_Elaborator_OrderedRBMap_empty___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Elaborator_OrderedRBMap_empty(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Elaborator_OrderedRBMap_insert___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_12; obj* x_13; obj* x_16; obj* x_17; uint8 x_18; 
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
x_8 = lean::mk_nat_obj(1ul);
x_9 = lean::nat_add(x_6, x_8);
lean::inc(x_3);
lean::inc(x_2);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_2);
lean::cnstr_set(x_12, 1, x_3);
x_13 = lean::cnstr_get(x_1, 0);
lean::inc(x_13);
lean::dec(x_1);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_12);
lean::cnstr_set(x_16, 1, x_13);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_6);
lean::cnstr_set(x_17, 1, x_3);
x_18 = l_RBNode_isRed___main___rarg(x_4);
if (x_18 == 0)
{
obj* x_19; obj* x_20; 
x_19 = l_RBNode_ins___main___rarg(x_0, x_4, x_2, x_17);
x_20 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_20, 0, x_16);
lean::cnstr_set(x_20, 1, x_19);
lean::cnstr_set(x_20, 2, x_9);
return x_20;
}
else
{
obj* x_21; obj* x_22; obj* x_23; 
x_21 = l_RBNode_ins___main___rarg(x_0, x_4, x_2, x_17);
x_22 = l_RBNode_setBlack___main___rarg(x_21);
x_23 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_23, 0, x_16);
lean::cnstr_set(x_23, 1, x_22);
lean::cnstr_set(x_23, 2, x_9);
return x_23;
}
}
}
obj* l_Lean_Elaborator_OrderedRBMap_insert(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_OrderedRBMap_insert___rarg), 4, 0);
return x_2;
}
}
obj* l_Lean_Elaborator_OrderedRBMap_insert___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Elaborator_OrderedRBMap_insert(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Elaborator_OrderedRBMap_find___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; 
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
lean::dec(x_1);
x_6 = l_RBNode_find___main___rarg(x_0, lean::box(0), x_3, x_2);
return x_6;
}
}
obj* l_Lean_Elaborator_OrderedRBMap_find(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_OrderedRBMap_find___rarg), 3, 0);
return x_2;
}
}
obj* l_Lean_Elaborator_OrderedRBMap_find___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Elaborator_OrderedRBMap_find(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_List_foldl___main___at_Lean_Elaborator_OrderedRBMap_ofList___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
obj* x_4; obj* x_6; obj* x_9; obj* x_11; obj* x_15; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_2, 1);
lean::inc(x_6);
lean::dec(x_2);
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_4, 1);
lean::inc(x_11);
lean::dec(x_4);
lean::inc(x_0);
x_15 = l_Lean_Elaborator_OrderedRBMap_insert___rarg(x_0, x_1, x_9, x_11);
x_1 = x_15;
x_2 = x_6;
goto _start;
}
}
}
obj* l_List_foldl___main___at_Lean_Elaborator_OrderedRBMap_ofList___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_List_foldl___main___at_Lean_Elaborator_OrderedRBMap_ofList___spec__1___rarg), 3, 0);
return x_2;
}
}
obj* l_Lean_Elaborator_OrderedRBMap_ofList___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = l_Lean_Elaborator_OrderedRBMap_empty___rarg(x_0);
x_3 = l_List_foldl___main___at_Lean_Elaborator_OrderedRBMap_ofList___spec__1___rarg(x_0, x_2, x_1);
return x_3;
}
}
obj* l_Lean_Elaborator_OrderedRBMap_ofList(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_OrderedRBMap_ofList___rarg), 2, 0);
return x_2;
}
}
obj* l_List_foldl___main___at_Lean_Elaborator_OrderedRBMap_ofList___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_List_foldl___main___at_Lean_Elaborator_OrderedRBMap_ofList___spec__1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Elaborator_OrderedRBMap_ofList___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Elaborator_OrderedRBMap_ofList(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Elaborator_elaboratorConfigCoeFrontendConfig(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
return x_1;
}
}
obj* l_Lean_Elaborator_elaboratorConfigCoeFrontendConfig___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_Elaborator_elaboratorConfigCoeFrontendConfig(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_Lean_Elaborator_ElaboratorM_Monad() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_0 = l_Id_Monad;
x_1 = l_ExceptT_Monad___rarg(x_0);
x_2 = l_StateT_Monad___rarg(x_1);
x_3 = l_ReaderT_Monad___rarg(x_2);
x_4 = l_ReaderT_Monad___rarg(x_3);
return x_4;
}
}
obj* _init_l_Lean_Elaborator_ElaboratorM_Lean_Parser_MonadRec() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_RecT_recurse___rarg), 2, 0);
return x_0;
}
}
obj* _init_l_Lean_Elaborator_ElaboratorM_MonadReader() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_0 = l_Id_Monad;
x_1 = l_ExceptT_Monad___rarg(x_0);
x_2 = l_StateT_Monad___rarg(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_read___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_lift___rarg___boxed), 2, 1);
lean::closure_set(x_4, 0, x_3);
return x_4;
}
}
obj* _init_l_Lean_Elaborator_ElaboratorM_MonadState() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = l_Id_Monad;
x_1 = l_ExceptT_Monad___rarg(x_0);
lean::inc(x_1);
x_3 = l_StateT_Monad___rarg(x_1);
lean::inc(x_3);
x_5 = l_ReaderT_Monad___rarg(x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_lift___boxed), 4, 3);
lean::closure_set(x_6, 0, lean::box(0));
lean::closure_set(x_6, 1, lean::box(0));
lean::closure_set(x_6, 2, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_lift___boxed), 4, 3);
lean::closure_set(x_7, 0, lean::box(0));
lean::closure_set(x_7, 1, lean::box(0));
lean::closure_set(x_7, 2, x_3);
x_8 = l_StateT_MonadState___rarg(x_1);
x_9 = l_monadStateTrans___rarg(x_7, x_8);
x_10 = l_monadStateTrans___rarg(x_6, x_9);
return x_10;
}
}
obj* _init_l_Lean_Elaborator_ElaboratorM_MonadExcept() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_0 = l_Id_Monad;
x_1 = l_ExceptT_Monad___rarg(x_0);
x_2 = l_ExceptT_MonadExcept___rarg(x_0);
x_3 = l_StateT_MonadExcept___rarg(x_1, lean::box(0), x_2);
x_4 = l_ReaderT_MonadExcept___rarg(x_3);
x_5 = l_ReaderT_MonadExcept___rarg(x_4);
return x_5;
}
}
obj* _init_l_Lean_Elaborator_elaboratorInh___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; uint8 x_5; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::mk_nat_obj(0ul);
x_1 = lean::mk_nat_obj(1ul);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::box(0);
x_4 = lean::mk_string("");
x_5 = 2;
lean::inc(x_4);
lean::inc(x_4);
x_8 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_8, 0, x_4);
lean::cnstr_set(x_8, 1, x_2);
lean::cnstr_set(x_8, 2, x_3);
lean::cnstr_set(x_8, 3, x_4);
lean::cnstr_set(x_8, 4, x_4);
lean::cnstr_set_scalar(x_8, sizeof(void*)*5, x_5);
x_9 = x_8;
x_10 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_10, 0, x_9);
return x_10;
}
}
obj* l_Lean_Elaborator_elaboratorInh(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_elaboratorInh___closed__1;
return x_4;
}
}
obj* l_Lean_Elaborator_elaboratorInh___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_elaboratorInh(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
return x_4;
}
}
obj* l_Lean_Elaborator_command_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_3(x_1, x_0, x_2, x_3);
return x_4;
}
}
obj* l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; obj* x_10; obj* x_13; 
x_5 = lean::cnstr_get(x_3, 0);
lean::inc(x_5);
lean::dec(x_3);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_5, 2);
lean::inc(x_10);
lean::dec(x_5);
x_13 = lean::box(0);
if (lean::obj_tag(x_0) == 0)
{
obj* x_14; obj* x_15; uint8 x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_14 = lean::mk_nat_obj(0ul);
x_15 = l_Lean_FileMap_toPosition(x_10, x_14);
x_16 = 2;
x_17 = l_String_splitAux___main___closed__1;
x_18 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_18, 0, x_8);
lean::cnstr_set(x_18, 1, x_15);
lean::cnstr_set(x_18, 2, x_13);
lean::cnstr_set(x_18, 3, x_17);
lean::cnstr_set(x_18, 4, x_1);
lean::cnstr_set_scalar(x_18, sizeof(void*)*5, x_16);
x_19 = x_18;
x_20 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_20, 0, x_19);
return x_20;
}
else
{
obj* x_21; obj* x_22; 
x_21 = lean::cnstr_get(x_0, 0);
x_22 = l_Lean_Parser_Syntax_getPos(x_21);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; obj* x_24; uint8 x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_23 = lean::mk_nat_obj(0ul);
x_24 = l_Lean_FileMap_toPosition(x_10, x_23);
x_25 = 2;
x_26 = l_String_splitAux___main___closed__1;
x_27 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_27, 0, x_8);
lean::cnstr_set(x_27, 1, x_24);
lean::cnstr_set(x_27, 2, x_13);
lean::cnstr_set(x_27, 3, x_26);
lean::cnstr_set(x_27, 4, x_1);
lean::cnstr_set_scalar(x_27, sizeof(void*)*5, x_25);
x_28 = x_27;
x_29 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_29, 0, x_28);
return x_29;
}
else
{
obj* x_30; obj* x_33; uint8 x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_30 = lean::cnstr_get(x_22, 0);
lean::inc(x_30);
lean::dec(x_22);
x_33 = l_Lean_FileMap_toPosition(x_10, x_30);
x_34 = 2;
x_35 = l_String_splitAux___main___closed__1;
x_36 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_36, 0, x_8);
lean::cnstr_set(x_36, 1, x_33);
lean::cnstr_set(x_36, 2, x_13);
lean::cnstr_set(x_36, 3, x_35);
lean::cnstr_set(x_36, 4, x_1);
lean::cnstr_set_scalar(x_36, sizeof(void*)*5, x_34);
x_37 = x_36;
x_38 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_38, 0, x_37);
return x_38;
}
}
}
}
obj* l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg___boxed), 5, 0);
return x_1;
}
}
obj* _init_l_Lean_Elaborator_currentScope___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("currentScope: unreachable");
return x_0;
}
}
obj* l_Lean_Elaborator_currentScope(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::cnstr_get(x_2, 4);
lean::inc(x_3);
if (lean::obj_tag(x_3) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = lean::box(0);
x_6 = l_Lean_Elaborator_currentScope___closed__1;
x_7 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_5, x_6, x_0, x_1, x_2);
lean::dec(x_2);
return x_7;
}
else
{
obj* x_10; obj* x_13; obj* x_14; 
lean::dec(x_1);
x_10 = lean::cnstr_get(x_3, 0);
lean::inc(x_10);
lean::dec(x_3);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_10);
lean::cnstr_set(x_13, 1, x_2);
x_14 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_14, 0, x_13);
return x_14;
}
}
}
obj* l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_4);
return x_5;
}
}
obj* l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_Lean_Elaborator_currentScope___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Elaborator_currentScope(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* _init_l_Lean_Elaborator_modifyCurrentScope___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("modifyCurrentScope: unreachable");
return x_0;
}
}
obj* l_Lean_Elaborator_modifyCurrentScope(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::cnstr_get(x_3, 4);
lean::inc(x_4);
if (lean::obj_tag(x_4) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_0);
x_7 = lean::box(0);
x_8 = l_Lean_Elaborator_modifyCurrentScope___closed__1;
x_9 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_7, x_8, x_1, x_2, x_3);
lean::dec(x_3);
return x_9;
}
else
{
obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_25; obj* x_26; obj* x_27; obj* x_29; obj* x_31; obj* x_33; obj* x_35; obj* x_37; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
lean::dec(x_2);
x_12 = lean::cnstr_get(x_4, 0);
x_14 = lean::cnstr_get(x_4, 1);
if (lean::is_exclusive(x_4)) {
 x_16 = x_4;
} else {
 lean::inc(x_12);
 lean::inc(x_14);
 lean::dec(x_4);
 x_16 = lean::box(0);
}
x_17 = lean::cnstr_get(x_3, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_3, 1);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_3, 2);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_3, 3);
lean::inc(x_23);
x_25 = lean::apply_1(x_0, x_12);
if (lean::is_scalar(x_16)) {
 x_26 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_26 = x_16;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_14);
x_27 = lean::cnstr_get(x_3, 5);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_3, 6);
lean::inc(x_29);
x_31 = lean::cnstr_get(x_3, 7);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_3, 8);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_3, 9);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_3, 10);
lean::inc(x_37);
lean::dec(x_3);
x_40 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_40, 0, x_17);
lean::cnstr_set(x_40, 1, x_19);
lean::cnstr_set(x_40, 2, x_21);
lean::cnstr_set(x_40, 3, x_23);
lean::cnstr_set(x_40, 4, x_26);
lean::cnstr_set(x_40, 5, x_27);
lean::cnstr_set(x_40, 6, x_29);
lean::cnstr_set(x_40, 7, x_31);
lean::cnstr_set(x_40, 8, x_33);
lean::cnstr_set(x_40, 9, x_35);
lean::cnstr_set(x_40, 10, x_37);
x_41 = lean::box(0);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_41);
lean::cnstr_set(x_42, 1, x_40);
x_43 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_43, 0, x_42);
return x_43;
}
}
}
obj* l_Lean_Elaborator_modifyCurrentScope___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_modifyCurrentScope(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_List_foldl___main___at_Lean_Elaborator_mangleIdent___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean_name_mk_numeral(x_0, x_2);
x_0 = x_7;
x_1 = x_4;
goto _start;
}
}
}
obj* l_Lean_Elaborator_mangleIdent(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; 
x_1 = lean::cnstr_get(x_0, 2);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 4);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_List_foldl___main___at_Lean_Elaborator_mangleIdent___spec__1(x_1, x_3);
return x_6;
}
}
obj* _init_l_Lean_Elaborator_levelGetAppArgs___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("levelGetAppArgs: unexpected input: ");
return x_0;
}
}
obj* l_Lean_Elaborator_levelGetAppArgs___main(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; 
lean::inc(x_0);
x_5 = l_Lean_Parser_Syntax_kind___main(x_0);
if (lean::obj_tag(x_5) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_14; 
lean::inc(x_0);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_0);
x_8 = l_Lean_Parser_Syntax_toFormat___main(x_0);
x_9 = l_Lean_Options_empty;
x_10 = l_Lean_Format_pretty(x_8, x_9);
x_11 = l_Lean_Elaborator_levelGetAppArgs___main___closed__1;
x_12 = lean::string_append(x_11, x_10);
lean::dec(x_10);
x_14 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_7, x_12, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_7);
return x_14;
}
else
{
obj* x_17; obj* x_19; obj* x_20; uint8 x_21; 
x_17 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_set(x_5, 0, lean::box(0));
 x_19 = x_5;
} else {
 lean::inc(x_17);
 lean::dec(x_5);
 x_19 = lean::box(0);
}
x_20 = l_Lean_Parser_Level_leading_HasView_x_27___lambda__1___closed__5;
x_21 = lean_name_dec_eq(x_17, x_20);
if (x_21 == 0)
{
obj* x_22; uint8 x_23; 
x_22 = l_Lean_Parser_Level_trailing_HasView_x_27___lambda__1___closed__2;
x_23 = lean_name_dec_eq(x_17, x_22);
lean::dec(x_17);
if (x_23 == 0)
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_33; 
lean::inc(x_0);
if (lean::is_scalar(x_19)) {
 x_26 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_26 = x_19;
}
lean::cnstr_set(x_26, 0, x_0);
x_27 = l_Lean_Parser_Syntax_toFormat___main(x_0);
x_28 = l_Lean_Options_empty;
x_29 = l_Lean_Format_pretty(x_27, x_28);
x_30 = l_Lean_Elaborator_levelGetAppArgs___main___closed__1;
x_31 = lean::string_append(x_30, x_29);
lean::dec(x_29);
x_33 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_26, x_31, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_26);
return x_33;
}
else
{
obj* x_37; obj* x_38; obj* x_42; 
lean::dec(x_19);
x_37 = l_Lean_Parser_Level_trailing_HasView;
x_38 = lean::cnstr_get(x_37, 0);
lean::inc(x_38);
lean::dec(x_37);
lean::inc(x_0);
x_42 = lean::apply_1(x_38, x_0);
if (lean::obj_tag(x_42) == 0)
{
obj* x_44; obj* x_47; obj* x_49; 
lean::dec(x_0);
x_44 = lean::cnstr_get(x_42, 0);
lean::inc(x_44);
lean::dec(x_42);
x_47 = lean::cnstr_get(x_44, 0);
lean::inc(x_47);
x_49 = l_Lean_Elaborator_levelGetAppArgs___main(x_47, x_1, x_2, x_3);
if (lean::obj_tag(x_49) == 0)
{
obj* x_51; obj* x_53; obj* x_54; 
lean::dec(x_44);
x_51 = lean::cnstr_get(x_49, 0);
if (lean::is_exclusive(x_49)) {
 x_53 = x_49;
} else {
 lean::inc(x_51);
 lean::dec(x_49);
 x_53 = lean::box(0);
}
if (lean::is_scalar(x_53)) {
 x_54 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_54 = x_53;
}
lean::cnstr_set(x_54, 0, x_51);
return x_54;
}
else
{
obj* x_55; obj* x_57; obj* x_58; obj* x_60; obj* x_62; obj* x_63; obj* x_65; obj* x_67; obj* x_68; obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
x_55 = lean::cnstr_get(x_49, 0);
if (lean::is_exclusive(x_49)) {
 x_57 = x_49;
} else {
 lean::inc(x_55);
 lean::dec(x_49);
 x_57 = lean::box(0);
}
x_58 = lean::cnstr_get(x_55, 0);
x_60 = lean::cnstr_get(x_55, 1);
if (lean::is_exclusive(x_55)) {
 x_62 = x_55;
} else {
 lean::inc(x_58);
 lean::inc(x_60);
 lean::dec(x_55);
 x_62 = lean::box(0);
}
x_63 = lean::cnstr_get(x_58, 0);
x_65 = lean::cnstr_get(x_58, 1);
if (lean::is_exclusive(x_58)) {
 x_67 = x_58;
} else {
 lean::inc(x_63);
 lean::inc(x_65);
 lean::dec(x_58);
 x_67 = lean::box(0);
}
x_68 = lean::cnstr_get(x_44, 1);
lean::inc(x_68);
lean::dec(x_44);
x_71 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_71, 0, x_68);
lean::cnstr_set(x_71, 1, x_65);
if (lean::is_scalar(x_67)) {
 x_72 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_72 = x_67;
}
lean::cnstr_set(x_72, 0, x_63);
lean::cnstr_set(x_72, 1, x_71);
if (lean::is_scalar(x_62)) {
 x_73 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_73 = x_62;
}
lean::cnstr_set(x_73, 0, x_72);
lean::cnstr_set(x_73, 1, x_60);
if (lean::is_scalar(x_57)) {
 x_74 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_74 = x_57;
}
lean::cnstr_set(x_74, 0, x_73);
return x_74;
}
}
else
{
obj* x_77; obj* x_78; obj* x_79; obj* x_80; 
lean::dec(x_2);
lean::dec(x_42);
x_77 = lean::box(0);
x_78 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_78, 0, x_0);
lean::cnstr_set(x_78, 1, x_77);
x_79 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_79, 0, x_78);
lean::cnstr_set(x_79, 1, x_3);
x_80 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_80, 0, x_79);
return x_80;
}
}
}
else
{
obj* x_84; obj* x_85; obj* x_86; obj* x_87; 
lean::dec(x_19);
lean::dec(x_2);
lean::dec(x_17);
x_84 = lean::box(0);
x_85 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_85, 0, x_0);
lean::cnstr_set(x_85, 1, x_84);
x_86 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_86, 0, x_85);
lean::cnstr_set(x_86, 1, x_3);
x_87 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_87, 0, x_86);
return x_87;
}
}
}
}
obj* l_Lean_Elaborator_levelGetAppArgs___main___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_levelGetAppArgs___main(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Elaborator_levelGetAppArgs(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_levelGetAppArgs___main(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l_Lean_Elaborator_levelGetAppArgs___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_levelGetAppArgs(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Elaborator_levelAdd___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; uint8 x_3; 
x_2 = lean::mk_nat_obj(0ul);
x_3 = lean::nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_8; 
x_4 = lean::mk_nat_obj(1ul);
x_5 = lean::nat_sub(x_1, x_4);
x_6 = l_Lean_Elaborator_levelAdd___main(x_0, x_5);
lean::dec(x_5);
x_8 = level_mk_succ(x_6);
return x_8;
}
else
{
lean::inc(x_0);
return x_0;
}
}
}
obj* l_Lean_Elaborator_levelAdd___main___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Elaborator_levelAdd___main(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Elaborator_levelAdd(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Elaborator_levelAdd___main(x_0, x_1);
return x_2;
}
}
obj* l_Lean_Elaborator_levelAdd___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Elaborator_levelAdd(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toLevel___main___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
x_10 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_12 = x_0;
} else {
 lean::inc(x_8);
 lean::inc(x_10);
 lean::dec(x_0);
 x_12 = lean::box(0);
}
lean::inc(x_2);
x_14 = l_Lean_Elaborator_toLevel___main(x_8, x_1, x_2, x_3);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_10);
lean::dec(x_12);
lean::dec(x_2);
x_18 = lean::cnstr_get(x_14, 0);
if (lean::is_exclusive(x_14)) {
 x_20 = x_14;
} else {
 lean::inc(x_18);
 lean::dec(x_14);
 x_20 = lean::box(0);
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_25; obj* x_27; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
lean::dec(x_14);
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
lean::dec(x_22);
x_30 = l_List_mmap___main___at_Lean_Elaborator_toLevel___main___spec__1(x_10, x_1, x_2, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_33; obj* x_35; obj* x_36; 
lean::dec(x_12);
lean::dec(x_25);
x_33 = lean::cnstr_get(x_30, 0);
if (lean::is_exclusive(x_30)) {
 x_35 = x_30;
} else {
 lean::inc(x_33);
 lean::dec(x_30);
 x_35 = lean::box(0);
}
if (lean::is_scalar(x_35)) {
 x_36 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_36 = x_35;
}
lean::cnstr_set(x_36, 0, x_33);
return x_36;
}
else
{
obj* x_37; obj* x_39; obj* x_40; obj* x_42; obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
x_37 = lean::cnstr_get(x_30, 0);
if (lean::is_exclusive(x_30)) {
 x_39 = x_30;
} else {
 lean::inc(x_37);
 lean::dec(x_30);
 x_39 = lean::box(0);
}
x_40 = lean::cnstr_get(x_37, 0);
x_42 = lean::cnstr_get(x_37, 1);
if (lean::is_exclusive(x_37)) {
 x_44 = x_37;
} else {
 lean::inc(x_40);
 lean::inc(x_42);
 lean::dec(x_37);
 x_44 = lean::box(0);
}
if (lean::is_scalar(x_12)) {
 x_45 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_45 = x_12;
}
lean::cnstr_set(x_45, 0, x_25);
lean::cnstr_set(x_45, 1, x_40);
if (lean::is_scalar(x_44)) {
 x_46 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_46 = x_44;
}
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_42);
if (lean::is_scalar(x_39)) {
 x_47 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_47 = x_39;
}
lean::cnstr_set(x_47, 0, x_46);
return x_47;
}
}
}
}
}
obj* l_List_foldr___main___at_Lean_Elaborator_toLevel___main___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::inc(x_0);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_List_foldr___main___at_Lean_Elaborator_toLevel___main___spec__2(x_0, x_5);
x_9 = level_mk_max(x_3, x_8);
return x_9;
}
}
}
obj* l_List_foldr___main___at_Lean_Elaborator_toLevel___main___spec__3(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::inc(x_0);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_List_foldr___main___at_Lean_Elaborator_toLevel___main___spec__3(x_0, x_5);
x_9 = level_mk_imax(x_3, x_8);
return x_9;
}
}
}
obj* _init_l_Lean_Elaborator_toLevel___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("toLevel: unexpected input: ");
return x_0;
}
}
obj* _init_l_Lean_Elaborator_toLevel___main___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed universe Level");
return x_0;
}
}
obj* _init_l_Lean_Elaborator_toLevel___main___closed__3() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = level_mk_mvar(x_0);
return x_1;
}
}
obj* _init_l_Lean_Elaborator_toLevel___main___closed__4() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Name_quickLt___boxed), 2, 0);
return x_0;
}
}
obj* _init_l_Lean_Elaborator_toLevel___main___closed__5() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unknown universe variable '");
return x_0;
}
}
obj* l_Lean_Elaborator_toLevel___main(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; 
lean::inc(x_2);
lean::inc(x_0);
x_6 = l_Lean_Elaborator_levelGetAppArgs___main(x_0, x_1, x_2, x_3);
if (lean::obj_tag(x_6) == 0)
{
obj* x_9; obj* x_11; obj* x_12; 
lean::dec(x_0);
lean::dec(x_2);
x_9 = lean::cnstr_get(x_6, 0);
if (lean::is_exclusive(x_6)) {
 x_11 = x_6;
} else {
 lean::inc(x_9);
 lean::dec(x_6);
 x_11 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_12 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_12 = x_11;
}
lean::cnstr_set(x_12, 0, x_9);
return x_12;
}
else
{
obj* x_13; obj* x_16; obj* x_18; obj* x_21; obj* x_23; obj* x_27; 
x_13 = lean::cnstr_get(x_6, 0);
lean::inc(x_13);
lean::dec(x_6);
x_16 = lean::cnstr_get(x_13, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_13, 1);
lean::inc(x_18);
lean::dec(x_13);
x_21 = lean::cnstr_get(x_16, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_16, 1);
lean::inc(x_23);
lean::dec(x_16);
lean::inc(x_2);
x_27 = l_Lean_Elaborator_currentScope(x_1, x_2, x_18);
if (lean::obj_tag(x_27) == 0)
{
obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_21);
lean::dec(x_23);
x_32 = lean::cnstr_get(x_27, 0);
if (lean::is_exclusive(x_27)) {
 x_34 = x_27;
} else {
 lean::inc(x_32);
 lean::dec(x_27);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
return x_35;
}
else
{
obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_45; 
x_36 = lean::cnstr_get(x_27, 0);
if (lean::is_exclusive(x_27)) {
 lean::cnstr_set(x_27, 0, lean::box(0));
 x_38 = x_27;
} else {
 lean::inc(x_36);
 lean::dec(x_27);
 x_38 = lean::box(0);
}
x_39 = lean::cnstr_get(x_36, 0);
x_41 = lean::cnstr_get(x_36, 1);
if (lean::is_exclusive(x_36)) {
 lean::cnstr_set(x_36, 0, lean::box(0));
 lean::cnstr_set(x_36, 1, lean::box(0));
 x_43 = x_36;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::dec(x_36);
 x_43 = lean::box(0);
}
lean::inc(x_21);
x_45 = l_Lean_Parser_Syntax_kind___main(x_21);
if (lean::obj_tag(x_45) == 0)
{
obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_59; 
lean::dec(x_21);
lean::dec(x_23);
lean::dec(x_38);
lean::dec(x_39);
lean::dec(x_43);
lean::inc(x_0);
x_52 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_52, 0, x_0);
x_53 = l_Lean_Parser_Syntax_toFormat___main(x_0);
x_54 = l_Lean_Options_empty;
x_55 = l_Lean_Format_pretty(x_53, x_54);
x_56 = l_Lean_Elaborator_toLevel___main___closed__1;
x_57 = lean::string_append(x_56, x_55);
lean::dec(x_55);
x_59 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_52, x_57, x_1, x_2, x_41);
lean::dec(x_41);
lean::dec(x_52);
return x_59;
}
else
{
obj* x_62; obj* x_64; obj* x_65; uint8 x_66; 
x_62 = lean::cnstr_get(x_45, 0);
if (lean::is_exclusive(x_45)) {
 lean::cnstr_set(x_45, 0, lean::box(0));
 x_64 = x_45;
} else {
 lean::inc(x_62);
 lean::dec(x_45);
 x_64 = lean::box(0);
}
x_65 = l_Lean_Parser_Level_leading_HasView_x_27___lambda__1___closed__5;
x_66 = lean_name_dec_eq(x_62, x_65);
if (x_66 == 0)
{
obj* x_70; uint8 x_71; 
lean::dec(x_38);
lean::dec(x_39);
lean::dec(x_43);
x_70 = l_Lean_Parser_Level_trailing_HasView_x_27___lambda__1___closed__2;
x_71 = lean_name_dec_eq(x_62, x_70);
lean::dec(x_62);
if (x_71 == 0)
{
obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_83; 
lean::dec(x_21);
lean::dec(x_23);
lean::inc(x_0);
if (lean::is_scalar(x_64)) {
 x_76 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_76 = x_64;
}
lean::cnstr_set(x_76, 0, x_0);
x_77 = l_Lean_Parser_Syntax_toFormat___main(x_0);
x_78 = l_Lean_Options_empty;
x_79 = l_Lean_Format_pretty(x_77, x_78);
x_80 = l_Lean_Elaborator_toLevel___main___closed__1;
x_81 = lean::string_append(x_80, x_79);
lean::dec(x_79);
x_83 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_76, x_81, x_1, x_2, x_41);
lean::dec(x_41);
lean::dec(x_76);
return x_83;
}
else
{
obj* x_86; obj* x_87; obj* x_90; 
x_86 = l_Lean_Parser_Level_trailing_HasView;
x_87 = lean::cnstr_get(x_86, 0);
lean::inc(x_87);
lean::dec(x_86);
x_90 = lean::apply_1(x_87, x_21);
if (lean::obj_tag(x_90) == 0)
{
obj* x_93; obj* x_94; obj* x_95; 
lean::dec(x_90);
lean::dec(x_23);
if (lean::is_scalar(x_64)) {
 x_93 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_93 = x_64;
}
lean::cnstr_set(x_93, 0, x_0);
x_94 = l_Lean_Elaborator_toLevel___main___closed__2;
x_95 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_93, x_94, x_1, x_2, x_41);
lean::dec(x_41);
lean::dec(x_93);
return x_95;
}
else
{
if (lean::obj_tag(x_23) == 0)
{
obj* x_100; obj* x_103; obj* x_105; 
lean::dec(x_64);
lean::dec(x_0);
x_100 = lean::cnstr_get(x_90, 0);
lean::inc(x_100);
lean::dec(x_90);
x_103 = lean::cnstr_get(x_100, 0);
lean::inc(x_103);
x_105 = l_Lean_Elaborator_toLevel___main(x_103, x_1, x_2, x_41);
if (lean::obj_tag(x_105) == 0)
{
obj* x_107; obj* x_109; obj* x_110; 
lean::dec(x_100);
x_107 = lean::cnstr_get(x_105, 0);
if (lean::is_exclusive(x_105)) {
 x_109 = x_105;
} else {
 lean::inc(x_107);
 lean::dec(x_105);
 x_109 = lean::box(0);
}
if (lean::is_scalar(x_109)) {
 x_110 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_110 = x_109;
}
lean::cnstr_set(x_110, 0, x_107);
return x_110;
}
else
{
obj* x_111; obj* x_113; obj* x_114; obj* x_116; obj* x_118; obj* x_119; obj* x_122; obj* x_123; obj* x_126; obj* x_127; 
x_111 = lean::cnstr_get(x_105, 0);
if (lean::is_exclusive(x_105)) {
 x_113 = x_105;
} else {
 lean::inc(x_111);
 lean::dec(x_105);
 x_113 = lean::box(0);
}
x_114 = lean::cnstr_get(x_111, 0);
x_116 = lean::cnstr_get(x_111, 1);
if (lean::is_exclusive(x_111)) {
 x_118 = x_111;
} else {
 lean::inc(x_114);
 lean::inc(x_116);
 lean::dec(x_111);
 x_118 = lean::box(0);
}
x_119 = lean::cnstr_get(x_100, 2);
lean::inc(x_119);
lean::dec(x_100);
x_122 = l_Lean_Parser_number_View_toNat___main(x_119);
x_123 = l_Lean_Elaborator_levelAdd___main(x_114, x_122);
lean::dec(x_122);
lean::dec(x_114);
if (lean::is_scalar(x_118)) {
 x_126 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_126 = x_118;
}
lean::cnstr_set(x_126, 0, x_123);
lean::cnstr_set(x_126, 1, x_116);
if (lean::is_scalar(x_113)) {
 x_127 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_127 = x_113;
}
lean::cnstr_set(x_127, 0, x_126);
return x_127;
}
}
else
{
obj* x_130; obj* x_131; obj* x_132; 
lean::dec(x_90);
lean::dec(x_23);
if (lean::is_scalar(x_64)) {
 x_130 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_130 = x_64;
}
lean::cnstr_set(x_130, 0, x_0);
x_131 = l_Lean_Elaborator_toLevel___main___closed__2;
x_132 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_130, x_131, x_1, x_2, x_41);
lean::dec(x_41);
lean::dec(x_130);
return x_132;
}
}
}
}
else
{
obj* x_136; obj* x_137; obj* x_140; 
lean::dec(x_62);
x_136 = l_Lean_Parser_Level_leading_HasView;
x_137 = lean::cnstr_get(x_136, 0);
lean::inc(x_137);
lean::dec(x_136);
x_140 = lean::apply_1(x_137, x_21);
switch (lean::obj_tag(x_140)) {
case 0:
{
lean::dec(x_38);
lean::dec(x_39);
lean::dec(x_43);
lean::dec(x_140);
if (lean::obj_tag(x_23) == 0)
{
obj* x_145; obj* x_146; obj* x_147; 
if (lean::is_scalar(x_64)) {
 x_145 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_145 = x_64;
}
lean::cnstr_set(x_145, 0, x_0);
x_146 = l_Lean_Elaborator_toLevel___main___closed__2;
x_147 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_145, x_146, x_1, x_2, x_41);
lean::dec(x_41);
lean::dec(x_145);
return x_147;
}
else
{
obj* x_152; obj* x_154; obj* x_158; 
lean::dec(x_64);
lean::dec(x_0);
x_152 = lean::cnstr_get(x_23, 0);
lean::inc(x_152);
x_154 = lean::cnstr_get(x_23, 1);
lean::inc(x_154);
lean::dec(x_23);
lean::inc(x_2);
x_158 = l_Lean_Elaborator_toLevel___main(x_152, x_1, x_2, x_41);
if (lean::obj_tag(x_158) == 0)
{
obj* x_161; obj* x_163; obj* x_164; 
lean::dec(x_154);
lean::dec(x_2);
x_161 = lean::cnstr_get(x_158, 0);
if (lean::is_exclusive(x_158)) {
 x_163 = x_158;
} else {
 lean::inc(x_161);
 lean::dec(x_158);
 x_163 = lean::box(0);
}
if (lean::is_scalar(x_163)) {
 x_164 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_164 = x_163;
}
lean::cnstr_set(x_164, 0, x_161);
return x_164;
}
else
{
obj* x_165; obj* x_168; obj* x_170; obj* x_173; 
x_165 = lean::cnstr_get(x_158, 0);
lean::inc(x_165);
lean::dec(x_158);
x_168 = lean::cnstr_get(x_165, 0);
lean::inc(x_168);
x_170 = lean::cnstr_get(x_165, 1);
lean::inc(x_170);
lean::dec(x_165);
x_173 = l_List_mmap___main___at_Lean_Elaborator_toLevel___main___spec__1(x_154, x_1, x_2, x_170);
if (lean::obj_tag(x_173) == 0)
{
obj* x_175; obj* x_177; obj* x_178; 
lean::dec(x_168);
x_175 = lean::cnstr_get(x_173, 0);
if (lean::is_exclusive(x_173)) {
 x_177 = x_173;
} else {
 lean::inc(x_175);
 lean::dec(x_173);
 x_177 = lean::box(0);
}
if (lean::is_scalar(x_177)) {
 x_178 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_178 = x_177;
}
lean::cnstr_set(x_178, 0, x_175);
return x_178;
}
else
{
obj* x_179; obj* x_181; obj* x_182; obj* x_184; obj* x_186; obj* x_187; obj* x_189; obj* x_190; 
x_179 = lean::cnstr_get(x_173, 0);
if (lean::is_exclusive(x_173)) {
 x_181 = x_173;
} else {
 lean::inc(x_179);
 lean::dec(x_173);
 x_181 = lean::box(0);
}
x_182 = lean::cnstr_get(x_179, 0);
x_184 = lean::cnstr_get(x_179, 1);
if (lean::is_exclusive(x_179)) {
 x_186 = x_179;
} else {
 lean::inc(x_182);
 lean::inc(x_184);
 lean::dec(x_179);
 x_186 = lean::box(0);
}
x_187 = l_List_foldr___main___at_Lean_Elaborator_toLevel___main___spec__2(x_168, x_182);
lean::dec(x_168);
if (lean::is_scalar(x_186)) {
 x_189 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_189 = x_186;
}
lean::cnstr_set(x_189, 0, x_187);
lean::cnstr_set(x_189, 1, x_184);
if (lean::is_scalar(x_181)) {
 x_190 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_190 = x_181;
}
lean::cnstr_set(x_190, 0, x_189);
return x_190;
}
}
}
}
case 1:
{
lean::dec(x_38);
lean::dec(x_39);
lean::dec(x_43);
lean::dec(x_140);
if (lean::obj_tag(x_23) == 0)
{
obj* x_195; obj* x_196; obj* x_197; 
if (lean::is_scalar(x_64)) {
 x_195 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_195 = x_64;
}
lean::cnstr_set(x_195, 0, x_0);
x_196 = l_Lean_Elaborator_toLevel___main___closed__2;
x_197 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_195, x_196, x_1, x_2, x_41);
lean::dec(x_41);
lean::dec(x_195);
return x_197;
}
else
{
obj* x_202; obj* x_204; obj* x_208; 
lean::dec(x_64);
lean::dec(x_0);
x_202 = lean::cnstr_get(x_23, 0);
lean::inc(x_202);
x_204 = lean::cnstr_get(x_23, 1);
lean::inc(x_204);
lean::dec(x_23);
lean::inc(x_2);
x_208 = l_Lean_Elaborator_toLevel___main(x_202, x_1, x_2, x_41);
if (lean::obj_tag(x_208) == 0)
{
obj* x_211; obj* x_213; obj* x_214; 
lean::dec(x_204);
lean::dec(x_2);
x_211 = lean::cnstr_get(x_208, 0);
if (lean::is_exclusive(x_208)) {
 x_213 = x_208;
} else {
 lean::inc(x_211);
 lean::dec(x_208);
 x_213 = lean::box(0);
}
if (lean::is_scalar(x_213)) {
 x_214 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_214 = x_213;
}
lean::cnstr_set(x_214, 0, x_211);
return x_214;
}
else
{
obj* x_215; obj* x_218; obj* x_220; obj* x_223; 
x_215 = lean::cnstr_get(x_208, 0);
lean::inc(x_215);
lean::dec(x_208);
x_218 = lean::cnstr_get(x_215, 0);
lean::inc(x_218);
x_220 = lean::cnstr_get(x_215, 1);
lean::inc(x_220);
lean::dec(x_215);
x_223 = l_List_mmap___main___at_Lean_Elaborator_toLevel___main___spec__1(x_204, x_1, x_2, x_220);
if (lean::obj_tag(x_223) == 0)
{
obj* x_225; obj* x_227; obj* x_228; 
lean::dec(x_218);
x_225 = lean::cnstr_get(x_223, 0);
if (lean::is_exclusive(x_223)) {
 x_227 = x_223;
} else {
 lean::inc(x_225);
 lean::dec(x_223);
 x_227 = lean::box(0);
}
if (lean::is_scalar(x_227)) {
 x_228 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_228 = x_227;
}
lean::cnstr_set(x_228, 0, x_225);
return x_228;
}
else
{
obj* x_229; obj* x_231; obj* x_232; obj* x_234; obj* x_236; obj* x_237; obj* x_239; obj* x_240; 
x_229 = lean::cnstr_get(x_223, 0);
if (lean::is_exclusive(x_223)) {
 x_231 = x_223;
} else {
 lean::inc(x_229);
 lean::dec(x_223);
 x_231 = lean::box(0);
}
x_232 = lean::cnstr_get(x_229, 0);
x_234 = lean::cnstr_get(x_229, 1);
if (lean::is_exclusive(x_229)) {
 x_236 = x_229;
} else {
 lean::inc(x_232);
 lean::inc(x_234);
 lean::dec(x_229);
 x_236 = lean::box(0);
}
x_237 = l_List_foldr___main___at_Lean_Elaborator_toLevel___main___spec__3(x_218, x_232);
lean::dec(x_218);
if (lean::is_scalar(x_236)) {
 x_239 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_239 = x_236;
}
lean::cnstr_set(x_239, 0, x_237);
lean::cnstr_set(x_239, 1, x_234);
if (lean::is_scalar(x_231)) {
 x_240 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_240 = x_231;
}
lean::cnstr_set(x_240, 0, x_239);
return x_240;
}
}
}
}
case 2:
{
lean::dec(x_39);
lean::dec(x_140);
if (lean::obj_tag(x_23) == 0)
{
obj* x_246; obj* x_247; obj* x_248; 
lean::dec(x_64);
lean::dec(x_0);
lean::dec(x_2);
x_246 = l_Lean_Elaborator_toLevel___main___closed__3;
if (lean::is_scalar(x_43)) {
 x_247 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_247 = x_43;
}
lean::cnstr_set(x_247, 0, x_246);
lean::cnstr_set(x_247, 1, x_41);
if (lean::is_scalar(x_38)) {
 x_248 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_248 = x_38;
}
lean::cnstr_set(x_248, 0, x_247);
return x_248;
}
else
{
obj* x_252; obj* x_253; obj* x_254; 
lean::dec(x_23);
lean::dec(x_38);
lean::dec(x_43);
if (lean::is_scalar(x_64)) {
 x_252 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_252 = x_64;
}
lean::cnstr_set(x_252, 0, x_0);
x_253 = l_Lean_Elaborator_toLevel___main___closed__2;
x_254 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_252, x_253, x_1, x_2, x_41);
lean::dec(x_41);
lean::dec(x_252);
return x_254;
}
}
case 3:
{
obj* x_262; obj* x_263; obj* x_264; 
lean::dec(x_23);
lean::dec(x_38);
lean::dec(x_39);
lean::dec(x_43);
lean::dec(x_140);
if (lean::is_scalar(x_64)) {
 x_262 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_262 = x_64;
}
lean::cnstr_set(x_262, 0, x_0);
x_263 = l_Lean_Elaborator_toLevel___main___closed__2;
x_264 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_262, x_263, x_1, x_2, x_41);
lean::dec(x_41);
lean::dec(x_262);
return x_264;
}
case 4:
{
lean::dec(x_39);
if (lean::obj_tag(x_23) == 0)
{
obj* x_271; obj* x_274; obj* x_275; obj* x_277; obj* x_278; 
lean::dec(x_64);
lean::dec(x_0);
lean::dec(x_2);
x_271 = lean::cnstr_get(x_140, 0);
lean::inc(x_271);
lean::dec(x_140);
x_274 = l_Lean_Parser_number_View_toNat___main(x_271);
x_275 = l_Lean_Level_ofNat___main(x_274);
lean::dec(x_274);
if (lean::is_scalar(x_43)) {
 x_277 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_277 = x_43;
}
lean::cnstr_set(x_277, 0, x_275);
lean::cnstr_set(x_277, 1, x_41);
if (lean::is_scalar(x_38)) {
 x_278 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_278 = x_38;
}
lean::cnstr_set(x_278, 0, x_277);
return x_278;
}
else
{
obj* x_283; obj* x_284; obj* x_285; 
lean::dec(x_23);
lean::dec(x_38);
lean::dec(x_43);
lean::dec(x_140);
if (lean::is_scalar(x_64)) {
 x_283 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_283 = x_64;
}
lean::cnstr_set(x_283, 0, x_0);
x_284 = l_Lean_Elaborator_toLevel___main___closed__2;
x_285 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_283, x_284, x_1, x_2, x_41);
lean::dec(x_41);
lean::dec(x_283);
return x_285;
}
}
default:
{
if (lean::obj_tag(x_23) == 0)
{
obj* x_288; obj* x_291; obj* x_292; obj* x_295; obj* x_297; 
x_288 = lean::cnstr_get(x_140, 0);
lean::inc(x_288);
lean::dec(x_140);
x_291 = l_Lean_Elaborator_mangleIdent(x_288);
x_292 = lean::cnstr_get(x_39, 3);
lean::inc(x_292);
lean::dec(x_39);
x_295 = l_Lean_Elaborator_toLevel___main___closed__4;
lean::inc(x_291);
x_297 = l_Lean_Elaborator_OrderedRBMap_find___rarg(x_295, x_292, x_291);
if (lean::obj_tag(x_297) == 0)
{
obj* x_300; obj* x_301; obj* x_302; obj* x_303; obj* x_304; obj* x_306; obj* x_307; obj* x_308; 
lean::dec(x_38);
lean::dec(x_43);
if (lean::is_scalar(x_64)) {
 x_300 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_300 = x_64;
}
lean::cnstr_set(x_300, 0, x_0);
x_301 = l_Lean_Name_toString___closed__1;
x_302 = l_Lean_Name_toStringWithSep___main(x_301, x_291);
x_303 = l_Lean_Elaborator_toLevel___main___closed__5;
x_304 = lean::string_append(x_303, x_302);
lean::dec(x_302);
x_306 = l_Char_HasRepr___closed__1;
x_307 = lean::string_append(x_304, x_306);
x_308 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_300, x_307, x_1, x_2, x_41);
lean::dec(x_41);
lean::dec(x_300);
return x_308;
}
else
{
obj* x_315; obj* x_316; obj* x_317; 
lean::dec(x_64);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_297);
x_315 = level_mk_param(x_291);
if (lean::is_scalar(x_43)) {
 x_316 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_316 = x_43;
}
lean::cnstr_set(x_316, 0, x_315);
lean::cnstr_set(x_316, 1, x_41);
if (lean::is_scalar(x_38)) {
 x_317 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_317 = x_38;
}
lean::cnstr_set(x_317, 0, x_316);
return x_317;
}
}
else
{
obj* x_323; obj* x_324; obj* x_325; 
lean::dec(x_23);
lean::dec(x_38);
lean::dec(x_39);
lean::dec(x_43);
lean::dec(x_140);
if (lean::is_scalar(x_64)) {
 x_323 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_323 = x_64;
}
lean::cnstr_set(x_323, 0, x_0);
x_324 = l_Lean_Elaborator_toLevel___main___closed__2;
x_325 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_323, x_324, x_1, x_2, x_41);
lean::dec(x_41);
lean::dec(x_323);
return x_325;
}
}
}
}
}
}
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toLevel___main___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_List_mmap___main___at_Lean_Elaborator_toLevel___main___spec__1(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_List_foldr___main___at_Lean_Elaborator_toLevel___main___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_List_foldr___main___at_Lean_Elaborator_toLevel___main___spec__2(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_List_foldr___main___at_Lean_Elaborator_toLevel___main___spec__3___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_List_foldr___main___at_Lean_Elaborator_toLevel___main___spec__3(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_Lean_Elaborator_toLevel___main___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_toLevel___main(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Elaborator_toLevel(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_toLevel___main(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l_Lean_Elaborator_toLevel___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_toLevel(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_Elaborator_Expr_mkAnnotation___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("annotation");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_Lean_Elaborator_Expr_mkAnnotation(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::box(0);
x_3 = l_Lean_Elaborator_Expr_mkAnnotation___closed__1;
x_4 = l_Lean_KVMap_setName(x_2, x_3, x_0);
x_5 = lean_expr_mk_mdata(x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Elaborator_dummy() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Prop");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::box(0);
x_4 = lean_expr_mk_const(x_2, x_3);
return x_4;
}
}
obj* _init_l_List_map___main___at_Lean_Elaborator_mkEqns___spec__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("@");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_List_map___main___at_Lean_Elaborator_mkEqns___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_14; obj* x_16; obj* x_20; uint8 x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_4, 1);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 x_10 = x_1;
} else {
 lean::inc(x_8);
 lean::dec(x_1);
 x_10 = lean::box(0);
}
x_11 = lean::cnstr_get(x_4, 0);
lean::inc(x_11);
lean::dec(x_4);
x_14 = lean::cnstr_get(x_6, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_6, 1);
lean::inc(x_16);
lean::dec(x_6);
lean::inc(x_0);
x_20 = l_List_map___main___at_Lean_Elaborator_mkEqns___spec__1(x_0, x_8);
x_21 = 4;
lean::inc(x_11);
x_23 = lean_expr_local(x_11, x_11, x_0, x_21);
x_24 = l_List_map___main___at_Lean_Elaborator_mkEqns___spec__1___closed__1;
x_25 = l_Lean_Elaborator_Expr_mkAnnotation(x_24, x_23);
x_26 = l_List_foldl___main___at_Lean_Expr_mkApp___spec__1(x_25, x_14);
x_27 = lean_expr_mk_app(x_26, x_16);
if (lean::is_scalar(x_10)) {
 x_28 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_28 = x_10;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_20);
return x_28;
}
}
}
obj* _init_l_Lean_Elaborator_mkEqns___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_mkEqns___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("preEquations");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_Lean_Elaborator_mkEqns(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_List_map___main___at_Lean_Elaborator_mkEqns___spec__1(x_0, x_1);
x_3 = l_Lean_Elaborator_mkEqns___closed__1;
x_4 = l_Lean_Expr_mkCapp(x_3, x_2);
x_5 = l_Lean_Elaborator_mkEqns___closed__2;
x_6 = l_Lean_Elaborator_Expr_mkAnnotation(x_5, x_4);
return x_6;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_17; 
x_8 = lean::cnstr_get(x_0, 0);
x_10 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_12 = x_0;
} else {
 lean::inc(x_8);
 lean::inc(x_10);
 lean::dec(x_0);
 x_12 = lean::box(0);
}
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
lean::dec(x_8);
lean::inc(x_2);
x_17 = l_Lean_Elaborator_toPexpr___main(x_13, x_1, x_2, x_3);
if (lean::obj_tag(x_17) == 0)
{
obj* x_21; obj* x_23; obj* x_24; 
lean::dec(x_10);
lean::dec(x_12);
lean::dec(x_2);
x_21 = lean::cnstr_get(x_17, 0);
if (lean::is_exclusive(x_17)) {
 x_23 = x_17;
} else {
 lean::inc(x_21);
 lean::dec(x_17);
 x_23 = lean::box(0);
}
if (lean::is_scalar(x_23)) {
 x_24 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_24 = x_23;
}
lean::cnstr_set(x_24, 0, x_21);
return x_24;
}
else
{
obj* x_25; obj* x_28; obj* x_30; obj* x_33; 
x_25 = lean::cnstr_get(x_17, 0);
lean::inc(x_25);
lean::dec(x_17);
x_28 = lean::cnstr_get(x_25, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_25, 1);
lean::inc(x_30);
lean::dec(x_25);
x_33 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__1(x_10, x_1, x_2, x_30);
if (lean::obj_tag(x_33) == 0)
{
obj* x_36; obj* x_38; obj* x_39; 
lean::dec(x_12);
lean::dec(x_28);
x_36 = lean::cnstr_get(x_33, 0);
if (lean::is_exclusive(x_33)) {
 x_38 = x_33;
} else {
 lean::inc(x_36);
 lean::dec(x_33);
 x_38 = lean::box(0);
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_36);
return x_39;
}
else
{
obj* x_40; obj* x_42; obj* x_43; obj* x_45; obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
x_40 = lean::cnstr_get(x_33, 0);
if (lean::is_exclusive(x_33)) {
 x_42 = x_33;
} else {
 lean::inc(x_40);
 lean::dec(x_33);
 x_42 = lean::box(0);
}
x_43 = lean::cnstr_get(x_40, 0);
x_45 = lean::cnstr_get(x_40, 1);
if (lean::is_exclusive(x_40)) {
 x_47 = x_40;
} else {
 lean::inc(x_43);
 lean::inc(x_45);
 lean::dec(x_40);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_12)) {
 x_48 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_48 = x_12;
}
lean::cnstr_set(x_48, 0, x_28);
lean::cnstr_set(x_48, 1, x_43);
if (lean::is_scalar(x_47)) {
 x_49 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_49 = x_47;
}
lean::cnstr_set(x_49, 0, x_48);
lean::cnstr_set(x_49, 1, x_45);
if (lean::is_scalar(x_42)) {
 x_50 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_50 = x_42;
}
lean::cnstr_set(x_50, 0, x_49);
return x_50;
}
}
}
}
}
obj* l_List_map___main___at_Lean_Elaborator_toPexpr___main___spec__2(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_10; obj* x_11; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
lean::dec(x_2);
x_10 = l_List_map___main___at_Lean_Elaborator_toPexpr___main___spec__2(x_4);
if (lean::is_scalar(x_6)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_6;
}
lean::cnstr_set(x_11, 0, x_7);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
}
obj* _init_l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__3___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_matchFn");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_16; 
x_8 = lean::cnstr_get(x_0, 0);
x_10 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_12 = x_0;
} else {
 lean::inc(x_8);
 lean::inc(x_10);
 lean::dec(x_0);
 x_12 = lean::box(0);
}
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
lean::inc(x_2);
x_16 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__1(x_13, x_1, x_2, x_3);
if (lean::obj_tag(x_16) == 0)
{
obj* x_21; obj* x_23; obj* x_24; 
lean::dec(x_8);
lean::dec(x_10);
lean::dec(x_12);
lean::dec(x_2);
x_21 = lean::cnstr_get(x_16, 0);
if (lean::is_exclusive(x_16)) {
 x_23 = x_16;
} else {
 lean::inc(x_21);
 lean::dec(x_16);
 x_23 = lean::box(0);
}
if (lean::is_scalar(x_23)) {
 x_24 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_24 = x_23;
}
lean::cnstr_set(x_24, 0, x_21);
return x_24;
}
else
{
obj* x_25; obj* x_28; obj* x_30; obj* x_32; obj* x_33; obj* x_37; 
x_25 = lean::cnstr_get(x_16, 0);
lean::inc(x_25);
lean::dec(x_16);
x_28 = lean::cnstr_get(x_25, 0);
x_30 = lean::cnstr_get(x_25, 1);
if (lean::is_exclusive(x_25)) {
 lean::cnstr_set(x_25, 0, lean::box(0));
 lean::cnstr_set(x_25, 1, lean::box(0));
 x_32 = x_25;
} else {
 lean::inc(x_28);
 lean::inc(x_30);
 lean::dec(x_25);
 x_32 = lean::box(0);
}
x_33 = lean::cnstr_get(x_8, 2);
lean::inc(x_33);
lean::dec(x_8);
lean::inc(x_2);
x_37 = l_Lean_Elaborator_toPexpr___main(x_33, x_1, x_2, x_30);
if (lean::obj_tag(x_37) == 0)
{
obj* x_43; obj* x_45; obj* x_46; 
lean::dec(x_10);
lean::dec(x_12);
lean::dec(x_2);
lean::dec(x_28);
lean::dec(x_32);
x_43 = lean::cnstr_get(x_37, 0);
if (lean::is_exclusive(x_37)) {
 x_45 = x_37;
} else {
 lean::inc(x_43);
 lean::dec(x_37);
 x_45 = lean::box(0);
}
if (lean::is_scalar(x_45)) {
 x_46 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_46 = x_45;
}
lean::cnstr_set(x_46, 0, x_43);
return x_46;
}
else
{
obj* x_47; obj* x_50; obj* x_52; obj* x_54; obj* x_55; 
x_47 = lean::cnstr_get(x_37, 0);
lean::inc(x_47);
lean::dec(x_37);
x_50 = lean::cnstr_get(x_47, 0);
x_52 = lean::cnstr_get(x_47, 1);
if (lean::is_exclusive(x_47)) {
 lean::cnstr_set(x_47, 0, lean::box(0));
 lean::cnstr_set(x_47, 1, lean::box(0));
 x_54 = x_47;
} else {
 lean::inc(x_50);
 lean::inc(x_52);
 lean::dec(x_47);
 x_54 = lean::box(0);
}
x_55 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__3(x_10, x_1, x_2, x_52);
if (lean::obj_tag(x_55) == 0)
{
obj* x_61; obj* x_63; obj* x_64; 
lean::dec(x_12);
lean::dec(x_28);
lean::dec(x_32);
lean::dec(x_50);
lean::dec(x_54);
x_61 = lean::cnstr_get(x_55, 0);
if (lean::is_exclusive(x_55)) {
 x_63 = x_55;
} else {
 lean::inc(x_61);
 lean::dec(x_55);
 x_63 = lean::box(0);
}
if (lean::is_scalar(x_63)) {
 x_64 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_64 = x_63;
}
lean::cnstr_set(x_64, 0, x_61);
return x_64;
}
else
{
obj* x_65; obj* x_67; obj* x_68; obj* x_70; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; 
x_65 = lean::cnstr_get(x_55, 0);
if (lean::is_exclusive(x_55)) {
 x_67 = x_55;
} else {
 lean::inc(x_65);
 lean::dec(x_55);
 x_67 = lean::box(0);
}
x_68 = lean::cnstr_get(x_65, 0);
x_70 = lean::cnstr_get(x_65, 1);
if (lean::is_exclusive(x_65)) {
 x_72 = x_65;
} else {
 lean::inc(x_68);
 lean::inc(x_70);
 lean::dec(x_65);
 x_72 = lean::box(0);
}
if (lean::is_scalar(x_72)) {
 x_73 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_73 = x_72;
}
lean::cnstr_set(x_73, 0, x_28);
lean::cnstr_set(x_73, 1, x_50);
x_74 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__3___closed__1;
if (lean::is_scalar(x_54)) {
 x_75 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_75 = x_54;
}
lean::cnstr_set(x_75, 0, x_74);
lean::cnstr_set(x_75, 1, x_73);
if (lean::is_scalar(x_12)) {
 x_76 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_76 = x_12;
}
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_68);
if (lean::is_scalar(x_32)) {
 x_77 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_77 = x_32;
}
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_70);
if (lean::is_scalar(x_67)) {
 x_78 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_78 = x_67;
}
lean::cnstr_set(x_78, 0, x_77);
return x_78;
}
}
}
}
}
}
obj* l_List_spanAux___main___at_Lean_Elaborator_toPexpr___main___spec__4(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; obj* x_3; 
x_2 = l_List_reverse___rarg(x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_0);
return x_3;
}
else
{
obj* x_4; obj* x_6; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_9; obj* x_11; obj* x_12; 
lean::dec(x_6);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 x_11 = x_0;
} else {
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_12 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_12 = x_11;
}
lean::cnstr_set(x_12, 0, x_4);
lean::cnstr_set(x_12, 1, x_1);
x_0 = x_9;
x_1 = x_12;
goto _start;
}
else
{
obj* x_16; obj* x_17; 
lean::dec(x_6);
lean::dec(x_4);
x_16 = l_List_reverse___rarg(x_1);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_0);
return x_17;
}
}
}
}
obj* l_List_spanAux___main___at_Lean_Elaborator_toPexpr___main___spec__5(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; obj* x_3; 
x_2 = l_List_reverse___rarg(x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_0);
return x_3;
}
else
{
obj* x_4; obj* x_6; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_10; obj* x_11; 
lean::dec(x_6);
lean::dec(x_4);
x_10 = l_List_reverse___rarg(x_1);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_0);
return x_11;
}
else
{
obj* x_12; obj* x_15; 
x_12 = lean::cnstr_get(x_6, 0);
lean::inc(x_12);
lean::dec(x_6);
x_15 = lean::cnstr_get(x_12, 1);
lean::inc(x_15);
lean::dec(x_12);
if (lean::obj_tag(x_15) == 0)
{
obj* x_19; obj* x_20; 
lean::dec(x_4);
x_19 = l_List_reverse___rarg(x_1);
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_0);
return x_20;
}
else
{
obj* x_22; obj* x_24; obj* x_25; 
lean::dec(x_15);
x_22 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 x_24 = x_0;
} else {
 lean::inc(x_22);
 lean::dec(x_0);
 x_24 = lean::box(0);
}
if (lean::is_scalar(x_24)) {
 x_25 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_25 = x_24;
}
lean::cnstr_set(x_25, 0, x_4);
lean::cnstr_set(x_25, 1, x_1);
x_0 = x_22;
x_1 = x_25;
goto _start;
}
}
}
}
}
obj* _init_l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("field");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("toPexpr: unreachable");
return x_0;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_3);
lean::dec(x_0);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_4);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_10, 0);
lean::inc(x_12);
lean::dec(x_10);
if (lean::obj_tag(x_12) == 0)
{
obj* x_15; obj* x_17; obj* x_18; obj* x_21; obj* x_24; 
x_15 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_17 = x_1;
} else {
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
x_18 = lean::cnstr_get(x_12, 0);
lean::inc(x_18);
lean::dec(x_12);
x_21 = lean::cnstr_get(x_18, 2);
lean::inc(x_21);
lean::inc(x_3);
x_24 = l_Lean_Elaborator_toPexpr___main(x_21, x_2, x_3, x_4);
if (lean::obj_tag(x_24) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_15);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_17);
lean::dec(x_18);
x_30 = lean::cnstr_get(x_24, 0);
if (lean::is_exclusive(x_24)) {
 x_32 = x_24;
} else {
 lean::inc(x_30);
 lean::dec(x_24);
 x_32 = lean::box(0);
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_37; obj* x_39; obj* x_42; 
x_34 = lean::cnstr_get(x_24, 0);
lean::inc(x_34);
lean::dec(x_24);
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
lean::dec(x_34);
x_42 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6(x_0, x_15, x_2, x_3, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_46; obj* x_48; obj* x_49; 
lean::dec(x_37);
lean::dec(x_17);
lean::dec(x_18);
x_46 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_48 = x_42;
} else {
 lean::inc(x_46);
 lean::dec(x_42);
 x_48 = lean::box(0);
}
if (lean::is_scalar(x_48)) {
 x_49 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_49 = x_48;
}
lean::cnstr_set(x_49, 0, x_46);
return x_49;
}
else
{
obj* x_50; obj* x_52; obj* x_53; obj* x_55; obj* x_57; obj* x_58; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; 
x_50 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_52 = x_42;
} else {
 lean::inc(x_50);
 lean::dec(x_42);
 x_52 = lean::box(0);
}
x_53 = lean::cnstr_get(x_50, 0);
x_55 = lean::cnstr_get(x_50, 1);
if (lean::is_exclusive(x_50)) {
 x_57 = x_50;
} else {
 lean::inc(x_53);
 lean::inc(x_55);
 lean::dec(x_50);
 x_57 = lean::box(0);
}
x_58 = lean::cnstr_get(x_18, 0);
lean::inc(x_58);
lean::dec(x_18);
x_61 = l_Lean_Elaborator_mangleIdent(x_58);
x_62 = lean::box(0);
x_63 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__1;
x_64 = l_Lean_KVMap_setName(x_62, x_63, x_61);
x_65 = lean_expr_mk_mdata(x_64, x_37);
if (lean::is_scalar(x_17)) {
 x_66 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_66 = x_17;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_53);
if (lean::is_scalar(x_57)) {
 x_67 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_67 = x_57;
}
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_55);
if (lean::is_scalar(x_52)) {
 x_68 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_68 = x_52;
}
lean::cnstr_set(x_68, 0, x_67);
return x_68;
}
}
}
else
{
obj* x_70; obj* x_72; obj* x_74; obj* x_75; obj* x_77; 
lean::dec(x_12);
x_70 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_72 = x_1;
} else {
 lean::inc(x_70);
 lean::dec(x_1);
 x_72 = lean::box(0);
}
lean::inc(x_0);
x_74 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_74, 0, x_0);
x_75 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__2;
lean::inc(x_3);
x_77 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_74, x_75, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_74);
if (lean::obj_tag(x_77) == 0)
{
obj* x_84; obj* x_86; obj* x_87; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_70);
lean::dec(x_72);
x_84 = lean::cnstr_get(x_77, 0);
if (lean::is_exclusive(x_77)) {
 x_86 = x_77;
} else {
 lean::inc(x_84);
 lean::dec(x_77);
 x_86 = lean::box(0);
}
if (lean::is_scalar(x_86)) {
 x_87 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_87 = x_86;
}
lean::cnstr_set(x_87, 0, x_84);
return x_87;
}
else
{
obj* x_88; obj* x_91; obj* x_93; obj* x_96; 
x_88 = lean::cnstr_get(x_77, 0);
lean::inc(x_88);
lean::dec(x_77);
x_91 = lean::cnstr_get(x_88, 0);
lean::inc(x_91);
x_93 = lean::cnstr_get(x_88, 1);
lean::inc(x_93);
lean::dec(x_88);
x_96 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6(x_0, x_70, x_2, x_3, x_93);
if (lean::obj_tag(x_96) == 0)
{
obj* x_99; obj* x_101; obj* x_102; 
lean::dec(x_72);
lean::dec(x_91);
x_99 = lean::cnstr_get(x_96, 0);
if (lean::is_exclusive(x_96)) {
 x_101 = x_96;
} else {
 lean::inc(x_99);
 lean::dec(x_96);
 x_101 = lean::box(0);
}
if (lean::is_scalar(x_101)) {
 x_102 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_102 = x_101;
}
lean::cnstr_set(x_102, 0, x_99);
return x_102;
}
else
{
obj* x_103; obj* x_105; obj* x_106; obj* x_108; obj* x_110; obj* x_111; obj* x_112; obj* x_113; 
x_103 = lean::cnstr_get(x_96, 0);
if (lean::is_exclusive(x_96)) {
 x_105 = x_96;
} else {
 lean::inc(x_103);
 lean::dec(x_96);
 x_105 = lean::box(0);
}
x_106 = lean::cnstr_get(x_103, 0);
x_108 = lean::cnstr_get(x_103, 1);
if (lean::is_exclusive(x_103)) {
 x_110 = x_103;
} else {
 lean::inc(x_106);
 lean::inc(x_108);
 lean::dec(x_103);
 x_110 = lean::box(0);
}
if (lean::is_scalar(x_72)) {
 x_111 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_111 = x_72;
}
lean::cnstr_set(x_111, 0, x_91);
lean::cnstr_set(x_111, 1, x_106);
if (lean::is_scalar(x_110)) {
 x_112 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_112 = x_110;
}
lean::cnstr_set(x_112, 0, x_111);
lean::cnstr_set(x_112, 1, x_108);
if (lean::is_scalar(x_105)) {
 x_113 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_113 = x_105;
}
lean::cnstr_set(x_113, 0, x_112);
return x_113;
}
}
}
}
}
}
obj* l_List_foldr___main___at_Lean_Elaborator_toPexpr___main___spec__7(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::inc(x_0);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_List_foldr___main___at_Lean_Elaborator_toPexpr___main___spec__7(x_0, x_5);
x_9 = lean_expr_mk_app(x_3, x_8);
return x_9;
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__8(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_3);
lean::dec(x_0);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_4);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_10, 0);
lean::inc(x_12);
lean::dec(x_10);
if (lean::obj_tag(x_12) == 0)
{
obj* x_16; obj* x_18; obj* x_20; obj* x_21; obj* x_23; 
lean::dec(x_12);
x_16 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_18 = x_1;
} else {
 lean::inc(x_16);
 lean::dec(x_1);
 x_18 = lean::box(0);
}
lean::inc(x_0);
x_20 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_20, 0, x_0);
x_21 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__2;
lean::inc(x_3);
x_23 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_20, x_21, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_20);
if (lean::obj_tag(x_23) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_16);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_18);
x_30 = lean::cnstr_get(x_23, 0);
if (lean::is_exclusive(x_23)) {
 x_32 = x_23;
} else {
 lean::inc(x_30);
 lean::dec(x_23);
 x_32 = lean::box(0);
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_37; obj* x_39; obj* x_42; 
x_34 = lean::cnstr_get(x_23, 0);
lean::inc(x_34);
lean::dec(x_23);
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
lean::dec(x_34);
x_42 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__8(x_0, x_16, x_2, x_3, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_45; obj* x_47; obj* x_48; 
lean::dec(x_37);
lean::dec(x_18);
x_45 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_47 = x_42;
} else {
 lean::inc(x_45);
 lean::dec(x_42);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_47)) {
 x_48 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_48 = x_47;
}
lean::cnstr_set(x_48, 0, x_45);
return x_48;
}
else
{
obj* x_49; obj* x_51; obj* x_52; obj* x_54; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
x_49 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_51 = x_42;
} else {
 lean::inc(x_49);
 lean::dec(x_42);
 x_51 = lean::box(0);
}
x_52 = lean::cnstr_get(x_49, 0);
x_54 = lean::cnstr_get(x_49, 1);
if (lean::is_exclusive(x_49)) {
 x_56 = x_49;
} else {
 lean::inc(x_52);
 lean::inc(x_54);
 lean::dec(x_49);
 x_56 = lean::box(0);
}
if (lean::is_scalar(x_18)) {
 x_57 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_57 = x_18;
}
lean::cnstr_set(x_57, 0, x_37);
lean::cnstr_set(x_57, 1, x_52);
if (lean::is_scalar(x_56)) {
 x_58 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_58 = x_56;
}
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_54);
if (lean::is_scalar(x_51)) {
 x_59 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_59 = x_51;
}
lean::cnstr_set(x_59, 0, x_58);
return x_59;
}
}
}
else
{
obj* x_60; obj* x_63; 
x_60 = lean::cnstr_get(x_12, 0);
lean::inc(x_60);
lean::dec(x_12);
x_63 = lean::cnstr_get(x_60, 1);
lean::inc(x_63);
lean::dec(x_60);
if (lean::obj_tag(x_63) == 0)
{
obj* x_66; obj* x_68; obj* x_70; obj* x_71; obj* x_73; 
x_66 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_68 = x_1;
} else {
 lean::inc(x_66);
 lean::dec(x_1);
 x_68 = lean::box(0);
}
lean::inc(x_0);
x_70 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_70, 0, x_0);
x_71 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__2;
lean::inc(x_3);
x_73 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_70, x_71, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_70);
if (lean::obj_tag(x_73) == 0)
{
obj* x_80; obj* x_82; obj* x_83; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_68);
lean::dec(x_66);
x_80 = lean::cnstr_get(x_73, 0);
if (lean::is_exclusive(x_73)) {
 x_82 = x_73;
} else {
 lean::inc(x_80);
 lean::dec(x_73);
 x_82 = lean::box(0);
}
if (lean::is_scalar(x_82)) {
 x_83 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_83 = x_82;
}
lean::cnstr_set(x_83, 0, x_80);
return x_83;
}
else
{
obj* x_84; obj* x_87; obj* x_89; obj* x_92; 
x_84 = lean::cnstr_get(x_73, 0);
lean::inc(x_84);
lean::dec(x_73);
x_87 = lean::cnstr_get(x_84, 0);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_84, 1);
lean::inc(x_89);
lean::dec(x_84);
x_92 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__8(x_0, x_66, x_2, x_3, x_89);
if (lean::obj_tag(x_92) == 0)
{
obj* x_95; obj* x_97; obj* x_98; 
lean::dec(x_68);
lean::dec(x_87);
x_95 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_97 = x_92;
} else {
 lean::inc(x_95);
 lean::dec(x_92);
 x_97 = lean::box(0);
}
if (lean::is_scalar(x_97)) {
 x_98 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_98 = x_97;
}
lean::cnstr_set(x_98, 0, x_95);
return x_98;
}
else
{
obj* x_99; obj* x_101; obj* x_102; obj* x_104; obj* x_106; obj* x_107; obj* x_108; obj* x_109; 
x_99 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_101 = x_92;
} else {
 lean::inc(x_99);
 lean::dec(x_92);
 x_101 = lean::box(0);
}
x_102 = lean::cnstr_get(x_99, 0);
x_104 = lean::cnstr_get(x_99, 1);
if (lean::is_exclusive(x_99)) {
 x_106 = x_99;
} else {
 lean::inc(x_102);
 lean::inc(x_104);
 lean::dec(x_99);
 x_106 = lean::box(0);
}
if (lean::is_scalar(x_68)) {
 x_107 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_107 = x_68;
}
lean::cnstr_set(x_107, 0, x_87);
lean::cnstr_set(x_107, 1, x_102);
if (lean::is_scalar(x_106)) {
 x_108 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_108 = x_106;
}
lean::cnstr_set(x_108, 0, x_107);
lean::cnstr_set(x_108, 1, x_104);
if (lean::is_scalar(x_101)) {
 x_109 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_109 = x_101;
}
lean::cnstr_set(x_109, 0, x_108);
return x_109;
}
}
}
else
{
obj* x_110; obj* x_112; obj* x_113; obj* x_117; 
x_110 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_112 = x_1;
} else {
 lean::inc(x_110);
 lean::dec(x_1);
 x_112 = lean::box(0);
}
x_113 = lean::cnstr_get(x_63, 0);
lean::inc(x_113);
lean::dec(x_63);
lean::inc(x_3);
x_117 = l_Lean_Elaborator_toPexpr___main(x_113, x_2, x_3, x_4);
if (lean::obj_tag(x_117) == 0)
{
obj* x_122; obj* x_124; obj* x_125; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_110);
lean::dec(x_112);
x_122 = lean::cnstr_get(x_117, 0);
if (lean::is_exclusive(x_117)) {
 x_124 = x_117;
} else {
 lean::inc(x_122);
 lean::dec(x_117);
 x_124 = lean::box(0);
}
if (lean::is_scalar(x_124)) {
 x_125 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_125 = x_124;
}
lean::cnstr_set(x_125, 0, x_122);
return x_125;
}
else
{
obj* x_126; obj* x_129; obj* x_131; obj* x_134; 
x_126 = lean::cnstr_get(x_117, 0);
lean::inc(x_126);
lean::dec(x_117);
x_129 = lean::cnstr_get(x_126, 0);
lean::inc(x_129);
x_131 = lean::cnstr_get(x_126, 1);
lean::inc(x_131);
lean::dec(x_126);
x_134 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__8(x_0, x_110, x_2, x_3, x_131);
if (lean::obj_tag(x_134) == 0)
{
obj* x_137; obj* x_139; obj* x_140; 
lean::dec(x_112);
lean::dec(x_129);
x_137 = lean::cnstr_get(x_134, 0);
if (lean::is_exclusive(x_134)) {
 x_139 = x_134;
} else {
 lean::inc(x_137);
 lean::dec(x_134);
 x_139 = lean::box(0);
}
if (lean::is_scalar(x_139)) {
 x_140 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_140 = x_139;
}
lean::cnstr_set(x_140, 0, x_137);
return x_140;
}
else
{
obj* x_141; obj* x_143; obj* x_144; obj* x_146; obj* x_148; obj* x_149; obj* x_150; obj* x_151; 
x_141 = lean::cnstr_get(x_134, 0);
if (lean::is_exclusive(x_134)) {
 x_143 = x_134;
} else {
 lean::inc(x_141);
 lean::dec(x_134);
 x_143 = lean::box(0);
}
x_144 = lean::cnstr_get(x_141, 0);
x_146 = lean::cnstr_get(x_141, 1);
if (lean::is_exclusive(x_141)) {
 x_148 = x_141;
} else {
 lean::inc(x_144);
 lean::inc(x_146);
 lean::dec(x_141);
 x_148 = lean::box(0);
}
if (lean::is_scalar(x_112)) {
 x_149 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_149 = x_112;
}
lean::cnstr_set(x_149, 0, x_129);
lean::cnstr_set(x_149, 1, x_144);
if (lean::is_scalar(x_148)) {
 x_150 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_150 = x_148;
}
lean::cnstr_set(x_150, 0, x_149);
lean::cnstr_set(x_150, 1, x_146);
if (lean::is_scalar(x_143)) {
 x_151 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_151 = x_143;
}
lean::cnstr_set(x_151, 0, x_150);
return x_151;
}
}
}
}
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__9(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_3);
lean::dec(x_0);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_4);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_10, 0);
lean::inc(x_12);
lean::dec(x_10);
if (lean::obj_tag(x_12) == 0)
{
obj* x_15; obj* x_17; obj* x_18; obj* x_21; obj* x_24; 
x_15 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_17 = x_1;
} else {
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
x_18 = lean::cnstr_get(x_12, 0);
lean::inc(x_18);
lean::dec(x_12);
x_21 = lean::cnstr_get(x_18, 2);
lean::inc(x_21);
lean::inc(x_3);
x_24 = l_Lean_Elaborator_toPexpr___main(x_21, x_2, x_3, x_4);
if (lean::obj_tag(x_24) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_15);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_17);
lean::dec(x_18);
x_30 = lean::cnstr_get(x_24, 0);
if (lean::is_exclusive(x_24)) {
 x_32 = x_24;
} else {
 lean::inc(x_30);
 lean::dec(x_24);
 x_32 = lean::box(0);
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_37; obj* x_39; obj* x_42; 
x_34 = lean::cnstr_get(x_24, 0);
lean::inc(x_34);
lean::dec(x_24);
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
lean::dec(x_34);
x_42 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__9(x_0, x_15, x_2, x_3, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_46; obj* x_48; obj* x_49; 
lean::dec(x_37);
lean::dec(x_17);
lean::dec(x_18);
x_46 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_48 = x_42;
} else {
 lean::inc(x_46);
 lean::dec(x_42);
 x_48 = lean::box(0);
}
if (lean::is_scalar(x_48)) {
 x_49 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_49 = x_48;
}
lean::cnstr_set(x_49, 0, x_46);
return x_49;
}
else
{
obj* x_50; obj* x_52; obj* x_53; obj* x_55; obj* x_57; obj* x_58; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; 
x_50 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_52 = x_42;
} else {
 lean::inc(x_50);
 lean::dec(x_42);
 x_52 = lean::box(0);
}
x_53 = lean::cnstr_get(x_50, 0);
x_55 = lean::cnstr_get(x_50, 1);
if (lean::is_exclusive(x_50)) {
 x_57 = x_50;
} else {
 lean::inc(x_53);
 lean::inc(x_55);
 lean::dec(x_50);
 x_57 = lean::box(0);
}
x_58 = lean::cnstr_get(x_18, 0);
lean::inc(x_58);
lean::dec(x_18);
x_61 = l_Lean_Elaborator_mangleIdent(x_58);
x_62 = lean::box(0);
x_63 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__1;
x_64 = l_Lean_KVMap_setName(x_62, x_63, x_61);
x_65 = lean_expr_mk_mdata(x_64, x_37);
if (lean::is_scalar(x_17)) {
 x_66 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_66 = x_17;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_53);
if (lean::is_scalar(x_57)) {
 x_67 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_67 = x_57;
}
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_55);
if (lean::is_scalar(x_52)) {
 x_68 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_68 = x_52;
}
lean::cnstr_set(x_68, 0, x_67);
return x_68;
}
}
}
else
{
obj* x_70; obj* x_72; obj* x_74; obj* x_75; obj* x_77; 
lean::dec(x_12);
x_70 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_72 = x_1;
} else {
 lean::inc(x_70);
 lean::dec(x_1);
 x_72 = lean::box(0);
}
lean::inc(x_0);
x_74 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_74, 0, x_0);
x_75 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__2;
lean::inc(x_3);
x_77 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_74, x_75, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_74);
if (lean::obj_tag(x_77) == 0)
{
obj* x_84; obj* x_86; obj* x_87; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_70);
lean::dec(x_72);
x_84 = lean::cnstr_get(x_77, 0);
if (lean::is_exclusive(x_77)) {
 x_86 = x_77;
} else {
 lean::inc(x_84);
 lean::dec(x_77);
 x_86 = lean::box(0);
}
if (lean::is_scalar(x_86)) {
 x_87 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_87 = x_86;
}
lean::cnstr_set(x_87, 0, x_84);
return x_87;
}
else
{
obj* x_88; obj* x_91; obj* x_93; obj* x_96; 
x_88 = lean::cnstr_get(x_77, 0);
lean::inc(x_88);
lean::dec(x_77);
x_91 = lean::cnstr_get(x_88, 0);
lean::inc(x_91);
x_93 = lean::cnstr_get(x_88, 1);
lean::inc(x_93);
lean::dec(x_88);
x_96 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__9(x_0, x_70, x_2, x_3, x_93);
if (lean::obj_tag(x_96) == 0)
{
obj* x_99; obj* x_101; obj* x_102; 
lean::dec(x_72);
lean::dec(x_91);
x_99 = lean::cnstr_get(x_96, 0);
if (lean::is_exclusive(x_96)) {
 x_101 = x_96;
} else {
 lean::inc(x_99);
 lean::dec(x_96);
 x_101 = lean::box(0);
}
if (lean::is_scalar(x_101)) {
 x_102 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_102 = x_101;
}
lean::cnstr_set(x_102, 0, x_99);
return x_102;
}
else
{
obj* x_103; obj* x_105; obj* x_106; obj* x_108; obj* x_110; obj* x_111; obj* x_112; obj* x_113; 
x_103 = lean::cnstr_get(x_96, 0);
if (lean::is_exclusive(x_96)) {
 x_105 = x_96;
} else {
 lean::inc(x_103);
 lean::dec(x_96);
 x_105 = lean::box(0);
}
x_106 = lean::cnstr_get(x_103, 0);
x_108 = lean::cnstr_get(x_103, 1);
if (lean::is_exclusive(x_103)) {
 x_110 = x_103;
} else {
 lean::inc(x_106);
 lean::inc(x_108);
 lean::dec(x_103);
 x_110 = lean::box(0);
}
if (lean::is_scalar(x_72)) {
 x_111 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_111 = x_72;
}
lean::cnstr_set(x_111, 0, x_91);
lean::cnstr_set(x_111, 1, x_106);
if (lean::is_scalar(x_110)) {
 x_112 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_112 = x_110;
}
lean::cnstr_set(x_112, 0, x_111);
lean::cnstr_set(x_112, 1, x_108);
if (lean::is_scalar(x_105)) {
 x_113 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_113 = x_105;
}
lean::cnstr_set(x_113, 0, x_112);
return x_113;
}
}
}
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__10(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_3);
lean::dec(x_0);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_4);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_10, 0);
lean::inc(x_12);
lean::dec(x_10);
if (lean::obj_tag(x_12) == 0)
{
obj* x_16; obj* x_18; obj* x_20; obj* x_21; obj* x_23; 
lean::dec(x_12);
x_16 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_18 = x_1;
} else {
 lean::inc(x_16);
 lean::dec(x_1);
 x_18 = lean::box(0);
}
lean::inc(x_0);
x_20 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_20, 0, x_0);
x_21 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__2;
lean::inc(x_3);
x_23 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_20, x_21, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_20);
if (lean::obj_tag(x_23) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_16);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_18);
x_30 = lean::cnstr_get(x_23, 0);
if (lean::is_exclusive(x_23)) {
 x_32 = x_23;
} else {
 lean::inc(x_30);
 lean::dec(x_23);
 x_32 = lean::box(0);
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_37; obj* x_39; obj* x_42; 
x_34 = lean::cnstr_get(x_23, 0);
lean::inc(x_34);
lean::dec(x_23);
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
lean::dec(x_34);
x_42 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__10(x_0, x_16, x_2, x_3, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_45; obj* x_47; obj* x_48; 
lean::dec(x_37);
lean::dec(x_18);
x_45 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_47 = x_42;
} else {
 lean::inc(x_45);
 lean::dec(x_42);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_47)) {
 x_48 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_48 = x_47;
}
lean::cnstr_set(x_48, 0, x_45);
return x_48;
}
else
{
obj* x_49; obj* x_51; obj* x_52; obj* x_54; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
x_49 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_51 = x_42;
} else {
 lean::inc(x_49);
 lean::dec(x_42);
 x_51 = lean::box(0);
}
x_52 = lean::cnstr_get(x_49, 0);
x_54 = lean::cnstr_get(x_49, 1);
if (lean::is_exclusive(x_49)) {
 x_56 = x_49;
} else {
 lean::inc(x_52);
 lean::inc(x_54);
 lean::dec(x_49);
 x_56 = lean::box(0);
}
if (lean::is_scalar(x_18)) {
 x_57 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_57 = x_18;
}
lean::cnstr_set(x_57, 0, x_37);
lean::cnstr_set(x_57, 1, x_52);
if (lean::is_scalar(x_56)) {
 x_58 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_58 = x_56;
}
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_54);
if (lean::is_scalar(x_51)) {
 x_59 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_59 = x_51;
}
lean::cnstr_set(x_59, 0, x_58);
return x_59;
}
}
}
else
{
obj* x_60; obj* x_63; 
x_60 = lean::cnstr_get(x_12, 0);
lean::inc(x_60);
lean::dec(x_12);
x_63 = lean::cnstr_get(x_60, 1);
lean::inc(x_63);
lean::dec(x_60);
if (lean::obj_tag(x_63) == 0)
{
obj* x_66; obj* x_68; obj* x_70; obj* x_71; obj* x_73; 
x_66 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_68 = x_1;
} else {
 lean::inc(x_66);
 lean::dec(x_1);
 x_68 = lean::box(0);
}
lean::inc(x_0);
x_70 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_70, 0, x_0);
x_71 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__2;
lean::inc(x_3);
x_73 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_70, x_71, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_70);
if (lean::obj_tag(x_73) == 0)
{
obj* x_80; obj* x_82; obj* x_83; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_68);
lean::dec(x_66);
x_80 = lean::cnstr_get(x_73, 0);
if (lean::is_exclusive(x_73)) {
 x_82 = x_73;
} else {
 lean::inc(x_80);
 lean::dec(x_73);
 x_82 = lean::box(0);
}
if (lean::is_scalar(x_82)) {
 x_83 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_83 = x_82;
}
lean::cnstr_set(x_83, 0, x_80);
return x_83;
}
else
{
obj* x_84; obj* x_87; obj* x_89; obj* x_92; 
x_84 = lean::cnstr_get(x_73, 0);
lean::inc(x_84);
lean::dec(x_73);
x_87 = lean::cnstr_get(x_84, 0);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_84, 1);
lean::inc(x_89);
lean::dec(x_84);
x_92 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__10(x_0, x_66, x_2, x_3, x_89);
if (lean::obj_tag(x_92) == 0)
{
obj* x_95; obj* x_97; obj* x_98; 
lean::dec(x_68);
lean::dec(x_87);
x_95 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_97 = x_92;
} else {
 lean::inc(x_95);
 lean::dec(x_92);
 x_97 = lean::box(0);
}
if (lean::is_scalar(x_97)) {
 x_98 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_98 = x_97;
}
lean::cnstr_set(x_98, 0, x_95);
return x_98;
}
else
{
obj* x_99; obj* x_101; obj* x_102; obj* x_104; obj* x_106; obj* x_107; obj* x_108; obj* x_109; 
x_99 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_101 = x_92;
} else {
 lean::inc(x_99);
 lean::dec(x_92);
 x_101 = lean::box(0);
}
x_102 = lean::cnstr_get(x_99, 0);
x_104 = lean::cnstr_get(x_99, 1);
if (lean::is_exclusive(x_99)) {
 x_106 = x_99;
} else {
 lean::inc(x_102);
 lean::inc(x_104);
 lean::dec(x_99);
 x_106 = lean::box(0);
}
if (lean::is_scalar(x_68)) {
 x_107 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_107 = x_68;
}
lean::cnstr_set(x_107, 0, x_87);
lean::cnstr_set(x_107, 1, x_102);
if (lean::is_scalar(x_106)) {
 x_108 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_108 = x_106;
}
lean::cnstr_set(x_108, 0, x_107);
lean::cnstr_set(x_108, 1, x_104);
if (lean::is_scalar(x_101)) {
 x_109 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_109 = x_101;
}
lean::cnstr_set(x_109, 0, x_108);
return x_109;
}
}
}
else
{
obj* x_110; obj* x_112; obj* x_113; obj* x_117; 
x_110 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_112 = x_1;
} else {
 lean::inc(x_110);
 lean::dec(x_1);
 x_112 = lean::box(0);
}
x_113 = lean::cnstr_get(x_63, 0);
lean::inc(x_113);
lean::dec(x_63);
lean::inc(x_3);
x_117 = l_Lean_Elaborator_toPexpr___main(x_113, x_2, x_3, x_4);
if (lean::obj_tag(x_117) == 0)
{
obj* x_122; obj* x_124; obj* x_125; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_110);
lean::dec(x_112);
x_122 = lean::cnstr_get(x_117, 0);
if (lean::is_exclusive(x_117)) {
 x_124 = x_117;
} else {
 lean::inc(x_122);
 lean::dec(x_117);
 x_124 = lean::box(0);
}
if (lean::is_scalar(x_124)) {
 x_125 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_125 = x_124;
}
lean::cnstr_set(x_125, 0, x_122);
return x_125;
}
else
{
obj* x_126; obj* x_129; obj* x_131; obj* x_134; 
x_126 = lean::cnstr_get(x_117, 0);
lean::inc(x_126);
lean::dec(x_117);
x_129 = lean::cnstr_get(x_126, 0);
lean::inc(x_129);
x_131 = lean::cnstr_get(x_126, 1);
lean::inc(x_131);
lean::dec(x_126);
x_134 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__10(x_0, x_110, x_2, x_3, x_131);
if (lean::obj_tag(x_134) == 0)
{
obj* x_137; obj* x_139; obj* x_140; 
lean::dec(x_112);
lean::dec(x_129);
x_137 = lean::cnstr_get(x_134, 0);
if (lean::is_exclusive(x_134)) {
 x_139 = x_134;
} else {
 lean::inc(x_137);
 lean::dec(x_134);
 x_139 = lean::box(0);
}
if (lean::is_scalar(x_139)) {
 x_140 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_140 = x_139;
}
lean::cnstr_set(x_140, 0, x_137);
return x_140;
}
else
{
obj* x_141; obj* x_143; obj* x_144; obj* x_146; obj* x_148; obj* x_149; obj* x_150; obj* x_151; 
x_141 = lean::cnstr_get(x_134, 0);
if (lean::is_exclusive(x_134)) {
 x_143 = x_134;
} else {
 lean::inc(x_141);
 lean::dec(x_134);
 x_143 = lean::box(0);
}
x_144 = lean::cnstr_get(x_141, 0);
x_146 = lean::cnstr_get(x_141, 1);
if (lean::is_exclusive(x_141)) {
 x_148 = x_141;
} else {
 lean::inc(x_144);
 lean::inc(x_146);
 lean::dec(x_141);
 x_148 = lean::box(0);
}
if (lean::is_scalar(x_112)) {
 x_149 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_149 = x_112;
}
lean::cnstr_set(x_149, 0, x_129);
lean::cnstr_set(x_149, 1, x_144);
if (lean::is_scalar(x_148)) {
 x_150 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_150 = x_148;
}
lean::cnstr_set(x_150, 0, x_149);
lean::cnstr_set(x_150, 1, x_146);
if (lean::is_scalar(x_143)) {
 x_151 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_151 = x_143;
}
lean::cnstr_set(x_151, 0, x_150);
return x_151;
}
}
}
}
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__11(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_3);
lean::dec(x_0);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_4);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_10, 0);
lean::inc(x_12);
lean::dec(x_10);
if (lean::obj_tag(x_12) == 0)
{
obj* x_15; obj* x_17; obj* x_18; obj* x_21; obj* x_24; 
x_15 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_17 = x_1;
} else {
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
x_18 = lean::cnstr_get(x_12, 0);
lean::inc(x_18);
lean::dec(x_12);
x_21 = lean::cnstr_get(x_18, 2);
lean::inc(x_21);
lean::inc(x_3);
x_24 = l_Lean_Elaborator_toPexpr___main(x_21, x_2, x_3, x_4);
if (lean::obj_tag(x_24) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_15);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_17);
lean::dec(x_18);
x_30 = lean::cnstr_get(x_24, 0);
if (lean::is_exclusive(x_24)) {
 x_32 = x_24;
} else {
 lean::inc(x_30);
 lean::dec(x_24);
 x_32 = lean::box(0);
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_37; obj* x_39; obj* x_42; 
x_34 = lean::cnstr_get(x_24, 0);
lean::inc(x_34);
lean::dec(x_24);
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
lean::dec(x_34);
x_42 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__11(x_0, x_15, x_2, x_3, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_46; obj* x_48; obj* x_49; 
lean::dec(x_37);
lean::dec(x_17);
lean::dec(x_18);
x_46 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_48 = x_42;
} else {
 lean::inc(x_46);
 lean::dec(x_42);
 x_48 = lean::box(0);
}
if (lean::is_scalar(x_48)) {
 x_49 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_49 = x_48;
}
lean::cnstr_set(x_49, 0, x_46);
return x_49;
}
else
{
obj* x_50; obj* x_52; obj* x_53; obj* x_55; obj* x_57; obj* x_58; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; 
x_50 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_52 = x_42;
} else {
 lean::inc(x_50);
 lean::dec(x_42);
 x_52 = lean::box(0);
}
x_53 = lean::cnstr_get(x_50, 0);
x_55 = lean::cnstr_get(x_50, 1);
if (lean::is_exclusive(x_50)) {
 x_57 = x_50;
} else {
 lean::inc(x_53);
 lean::inc(x_55);
 lean::dec(x_50);
 x_57 = lean::box(0);
}
x_58 = lean::cnstr_get(x_18, 0);
lean::inc(x_58);
lean::dec(x_18);
x_61 = l_Lean_Elaborator_mangleIdent(x_58);
x_62 = lean::box(0);
x_63 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__1;
x_64 = l_Lean_KVMap_setName(x_62, x_63, x_61);
x_65 = lean_expr_mk_mdata(x_64, x_37);
if (lean::is_scalar(x_17)) {
 x_66 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_66 = x_17;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_53);
if (lean::is_scalar(x_57)) {
 x_67 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_67 = x_57;
}
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_55);
if (lean::is_scalar(x_52)) {
 x_68 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_68 = x_52;
}
lean::cnstr_set(x_68, 0, x_67);
return x_68;
}
}
}
else
{
obj* x_70; obj* x_72; obj* x_74; obj* x_75; obj* x_77; 
lean::dec(x_12);
x_70 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_72 = x_1;
} else {
 lean::inc(x_70);
 lean::dec(x_1);
 x_72 = lean::box(0);
}
lean::inc(x_0);
x_74 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_74, 0, x_0);
x_75 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__2;
lean::inc(x_3);
x_77 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_74, x_75, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_74);
if (lean::obj_tag(x_77) == 0)
{
obj* x_84; obj* x_86; obj* x_87; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_70);
lean::dec(x_72);
x_84 = lean::cnstr_get(x_77, 0);
if (lean::is_exclusive(x_77)) {
 x_86 = x_77;
} else {
 lean::inc(x_84);
 lean::dec(x_77);
 x_86 = lean::box(0);
}
if (lean::is_scalar(x_86)) {
 x_87 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_87 = x_86;
}
lean::cnstr_set(x_87, 0, x_84);
return x_87;
}
else
{
obj* x_88; obj* x_91; obj* x_93; obj* x_96; 
x_88 = lean::cnstr_get(x_77, 0);
lean::inc(x_88);
lean::dec(x_77);
x_91 = lean::cnstr_get(x_88, 0);
lean::inc(x_91);
x_93 = lean::cnstr_get(x_88, 1);
lean::inc(x_93);
lean::dec(x_88);
x_96 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__11(x_0, x_70, x_2, x_3, x_93);
if (lean::obj_tag(x_96) == 0)
{
obj* x_99; obj* x_101; obj* x_102; 
lean::dec(x_72);
lean::dec(x_91);
x_99 = lean::cnstr_get(x_96, 0);
if (lean::is_exclusive(x_96)) {
 x_101 = x_96;
} else {
 lean::inc(x_99);
 lean::dec(x_96);
 x_101 = lean::box(0);
}
if (lean::is_scalar(x_101)) {
 x_102 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_102 = x_101;
}
lean::cnstr_set(x_102, 0, x_99);
return x_102;
}
else
{
obj* x_103; obj* x_105; obj* x_106; obj* x_108; obj* x_110; obj* x_111; obj* x_112; obj* x_113; 
x_103 = lean::cnstr_get(x_96, 0);
if (lean::is_exclusive(x_96)) {
 x_105 = x_96;
} else {
 lean::inc(x_103);
 lean::dec(x_96);
 x_105 = lean::box(0);
}
x_106 = lean::cnstr_get(x_103, 0);
x_108 = lean::cnstr_get(x_103, 1);
if (lean::is_exclusive(x_103)) {
 x_110 = x_103;
} else {
 lean::inc(x_106);
 lean::inc(x_108);
 lean::dec(x_103);
 x_110 = lean::box(0);
}
if (lean::is_scalar(x_72)) {
 x_111 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_111 = x_72;
}
lean::cnstr_set(x_111, 0, x_91);
lean::cnstr_set(x_111, 1, x_106);
if (lean::is_scalar(x_110)) {
 x_112 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_112 = x_110;
}
lean::cnstr_set(x_112, 0, x_111);
lean::cnstr_set(x_112, 1, x_108);
if (lean::is_scalar(x_105)) {
 x_113 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_113 = x_105;
}
lean::cnstr_set(x_113, 0, x_112);
return x_113;
}
}
}
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__12(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_3);
lean::dec(x_0);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_4);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_10, 0);
lean::inc(x_12);
lean::dec(x_10);
if (lean::obj_tag(x_12) == 0)
{
obj* x_16; obj* x_18; obj* x_20; obj* x_21; obj* x_23; 
lean::dec(x_12);
x_16 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_18 = x_1;
} else {
 lean::inc(x_16);
 lean::dec(x_1);
 x_18 = lean::box(0);
}
lean::inc(x_0);
x_20 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_20, 0, x_0);
x_21 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__2;
lean::inc(x_3);
x_23 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_20, x_21, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_20);
if (lean::obj_tag(x_23) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_16);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_18);
x_30 = lean::cnstr_get(x_23, 0);
if (lean::is_exclusive(x_23)) {
 x_32 = x_23;
} else {
 lean::inc(x_30);
 lean::dec(x_23);
 x_32 = lean::box(0);
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_37; obj* x_39; obj* x_42; 
x_34 = lean::cnstr_get(x_23, 0);
lean::inc(x_34);
lean::dec(x_23);
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
lean::dec(x_34);
x_42 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__12(x_0, x_16, x_2, x_3, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_45; obj* x_47; obj* x_48; 
lean::dec(x_37);
lean::dec(x_18);
x_45 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_47 = x_42;
} else {
 lean::inc(x_45);
 lean::dec(x_42);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_47)) {
 x_48 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_48 = x_47;
}
lean::cnstr_set(x_48, 0, x_45);
return x_48;
}
else
{
obj* x_49; obj* x_51; obj* x_52; obj* x_54; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
x_49 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_51 = x_42;
} else {
 lean::inc(x_49);
 lean::dec(x_42);
 x_51 = lean::box(0);
}
x_52 = lean::cnstr_get(x_49, 0);
x_54 = lean::cnstr_get(x_49, 1);
if (lean::is_exclusive(x_49)) {
 x_56 = x_49;
} else {
 lean::inc(x_52);
 lean::inc(x_54);
 lean::dec(x_49);
 x_56 = lean::box(0);
}
if (lean::is_scalar(x_18)) {
 x_57 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_57 = x_18;
}
lean::cnstr_set(x_57, 0, x_37);
lean::cnstr_set(x_57, 1, x_52);
if (lean::is_scalar(x_56)) {
 x_58 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_58 = x_56;
}
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_54);
if (lean::is_scalar(x_51)) {
 x_59 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_59 = x_51;
}
lean::cnstr_set(x_59, 0, x_58);
return x_59;
}
}
}
else
{
obj* x_60; obj* x_63; 
x_60 = lean::cnstr_get(x_12, 0);
lean::inc(x_60);
lean::dec(x_12);
x_63 = lean::cnstr_get(x_60, 1);
lean::inc(x_63);
lean::dec(x_60);
if (lean::obj_tag(x_63) == 0)
{
obj* x_66; obj* x_68; obj* x_70; obj* x_71; obj* x_73; 
x_66 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_68 = x_1;
} else {
 lean::inc(x_66);
 lean::dec(x_1);
 x_68 = lean::box(0);
}
lean::inc(x_0);
x_70 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_70, 0, x_0);
x_71 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__2;
lean::inc(x_3);
x_73 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_70, x_71, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_70);
if (lean::obj_tag(x_73) == 0)
{
obj* x_80; obj* x_82; obj* x_83; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_68);
lean::dec(x_66);
x_80 = lean::cnstr_get(x_73, 0);
if (lean::is_exclusive(x_73)) {
 x_82 = x_73;
} else {
 lean::inc(x_80);
 lean::dec(x_73);
 x_82 = lean::box(0);
}
if (lean::is_scalar(x_82)) {
 x_83 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_83 = x_82;
}
lean::cnstr_set(x_83, 0, x_80);
return x_83;
}
else
{
obj* x_84; obj* x_87; obj* x_89; obj* x_92; 
x_84 = lean::cnstr_get(x_73, 0);
lean::inc(x_84);
lean::dec(x_73);
x_87 = lean::cnstr_get(x_84, 0);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_84, 1);
lean::inc(x_89);
lean::dec(x_84);
x_92 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__12(x_0, x_66, x_2, x_3, x_89);
if (lean::obj_tag(x_92) == 0)
{
obj* x_95; obj* x_97; obj* x_98; 
lean::dec(x_68);
lean::dec(x_87);
x_95 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_97 = x_92;
} else {
 lean::inc(x_95);
 lean::dec(x_92);
 x_97 = lean::box(0);
}
if (lean::is_scalar(x_97)) {
 x_98 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_98 = x_97;
}
lean::cnstr_set(x_98, 0, x_95);
return x_98;
}
else
{
obj* x_99; obj* x_101; obj* x_102; obj* x_104; obj* x_106; obj* x_107; obj* x_108; obj* x_109; 
x_99 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_101 = x_92;
} else {
 lean::inc(x_99);
 lean::dec(x_92);
 x_101 = lean::box(0);
}
x_102 = lean::cnstr_get(x_99, 0);
x_104 = lean::cnstr_get(x_99, 1);
if (lean::is_exclusive(x_99)) {
 x_106 = x_99;
} else {
 lean::inc(x_102);
 lean::inc(x_104);
 lean::dec(x_99);
 x_106 = lean::box(0);
}
if (lean::is_scalar(x_68)) {
 x_107 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_107 = x_68;
}
lean::cnstr_set(x_107, 0, x_87);
lean::cnstr_set(x_107, 1, x_102);
if (lean::is_scalar(x_106)) {
 x_108 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_108 = x_106;
}
lean::cnstr_set(x_108, 0, x_107);
lean::cnstr_set(x_108, 1, x_104);
if (lean::is_scalar(x_101)) {
 x_109 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_109 = x_101;
}
lean::cnstr_set(x_109, 0, x_108);
return x_109;
}
}
}
else
{
obj* x_110; obj* x_112; obj* x_113; obj* x_117; 
x_110 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_112 = x_1;
} else {
 lean::inc(x_110);
 lean::dec(x_1);
 x_112 = lean::box(0);
}
x_113 = lean::cnstr_get(x_63, 0);
lean::inc(x_113);
lean::dec(x_63);
lean::inc(x_3);
x_117 = l_Lean_Elaborator_toPexpr___main(x_113, x_2, x_3, x_4);
if (lean::obj_tag(x_117) == 0)
{
obj* x_122; obj* x_124; obj* x_125; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_110);
lean::dec(x_112);
x_122 = lean::cnstr_get(x_117, 0);
if (lean::is_exclusive(x_117)) {
 x_124 = x_117;
} else {
 lean::inc(x_122);
 lean::dec(x_117);
 x_124 = lean::box(0);
}
if (lean::is_scalar(x_124)) {
 x_125 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_125 = x_124;
}
lean::cnstr_set(x_125, 0, x_122);
return x_125;
}
else
{
obj* x_126; obj* x_129; obj* x_131; obj* x_134; 
x_126 = lean::cnstr_get(x_117, 0);
lean::inc(x_126);
lean::dec(x_117);
x_129 = lean::cnstr_get(x_126, 0);
lean::inc(x_129);
x_131 = lean::cnstr_get(x_126, 1);
lean::inc(x_131);
lean::dec(x_126);
x_134 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__12(x_0, x_110, x_2, x_3, x_131);
if (lean::obj_tag(x_134) == 0)
{
obj* x_137; obj* x_139; obj* x_140; 
lean::dec(x_112);
lean::dec(x_129);
x_137 = lean::cnstr_get(x_134, 0);
if (lean::is_exclusive(x_134)) {
 x_139 = x_134;
} else {
 lean::inc(x_137);
 lean::dec(x_134);
 x_139 = lean::box(0);
}
if (lean::is_scalar(x_139)) {
 x_140 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_140 = x_139;
}
lean::cnstr_set(x_140, 0, x_137);
return x_140;
}
else
{
obj* x_141; obj* x_143; obj* x_144; obj* x_146; obj* x_148; obj* x_149; obj* x_150; obj* x_151; 
x_141 = lean::cnstr_get(x_134, 0);
if (lean::is_exclusive(x_134)) {
 x_143 = x_134;
} else {
 lean::inc(x_141);
 lean::dec(x_134);
 x_143 = lean::box(0);
}
x_144 = lean::cnstr_get(x_141, 0);
x_146 = lean::cnstr_get(x_141, 1);
if (lean::is_exclusive(x_141)) {
 x_148 = x_141;
} else {
 lean::inc(x_144);
 lean::inc(x_146);
 lean::dec(x_141);
 x_148 = lean::box(0);
}
if (lean::is_scalar(x_112)) {
 x_149 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_149 = x_112;
}
lean::cnstr_set(x_149, 0, x_129);
lean::cnstr_set(x_149, 1, x_144);
if (lean::is_scalar(x_148)) {
 x_150 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_150 = x_148;
}
lean::cnstr_set(x_150, 0, x_149);
lean::cnstr_set(x_150, 1, x_146);
if (lean::is_scalar(x_143)) {
 x_151 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_151 = x_143;
}
lean::cnstr_set(x_151, 0, x_150);
return x_151;
}
}
}
}
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__13(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_3);
lean::dec(x_0);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_4);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_10, 0);
lean::inc(x_12);
lean::dec(x_10);
if (lean::obj_tag(x_12) == 0)
{
obj* x_15; obj* x_17; obj* x_18; obj* x_21; obj* x_24; 
x_15 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_17 = x_1;
} else {
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
x_18 = lean::cnstr_get(x_12, 0);
lean::inc(x_18);
lean::dec(x_12);
x_21 = lean::cnstr_get(x_18, 2);
lean::inc(x_21);
lean::inc(x_3);
x_24 = l_Lean_Elaborator_toPexpr___main(x_21, x_2, x_3, x_4);
if (lean::obj_tag(x_24) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_15);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_17);
lean::dec(x_18);
x_30 = lean::cnstr_get(x_24, 0);
if (lean::is_exclusive(x_24)) {
 x_32 = x_24;
} else {
 lean::inc(x_30);
 lean::dec(x_24);
 x_32 = lean::box(0);
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_37; obj* x_39; obj* x_42; 
x_34 = lean::cnstr_get(x_24, 0);
lean::inc(x_34);
lean::dec(x_24);
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
lean::dec(x_34);
x_42 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__13(x_0, x_15, x_2, x_3, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_46; obj* x_48; obj* x_49; 
lean::dec(x_37);
lean::dec(x_17);
lean::dec(x_18);
x_46 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_48 = x_42;
} else {
 lean::inc(x_46);
 lean::dec(x_42);
 x_48 = lean::box(0);
}
if (lean::is_scalar(x_48)) {
 x_49 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_49 = x_48;
}
lean::cnstr_set(x_49, 0, x_46);
return x_49;
}
else
{
obj* x_50; obj* x_52; obj* x_53; obj* x_55; obj* x_57; obj* x_58; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; 
x_50 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_52 = x_42;
} else {
 lean::inc(x_50);
 lean::dec(x_42);
 x_52 = lean::box(0);
}
x_53 = lean::cnstr_get(x_50, 0);
x_55 = lean::cnstr_get(x_50, 1);
if (lean::is_exclusive(x_50)) {
 x_57 = x_50;
} else {
 lean::inc(x_53);
 lean::inc(x_55);
 lean::dec(x_50);
 x_57 = lean::box(0);
}
x_58 = lean::cnstr_get(x_18, 0);
lean::inc(x_58);
lean::dec(x_18);
x_61 = l_Lean_Elaborator_mangleIdent(x_58);
x_62 = lean::box(0);
x_63 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__1;
x_64 = l_Lean_KVMap_setName(x_62, x_63, x_61);
x_65 = lean_expr_mk_mdata(x_64, x_37);
if (lean::is_scalar(x_17)) {
 x_66 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_66 = x_17;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_53);
if (lean::is_scalar(x_57)) {
 x_67 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_67 = x_57;
}
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_55);
if (lean::is_scalar(x_52)) {
 x_68 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_68 = x_52;
}
lean::cnstr_set(x_68, 0, x_67);
return x_68;
}
}
}
else
{
obj* x_70; obj* x_72; obj* x_74; obj* x_75; obj* x_77; 
lean::dec(x_12);
x_70 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_72 = x_1;
} else {
 lean::inc(x_70);
 lean::dec(x_1);
 x_72 = lean::box(0);
}
lean::inc(x_0);
x_74 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_74, 0, x_0);
x_75 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__2;
lean::inc(x_3);
x_77 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_74, x_75, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_74);
if (lean::obj_tag(x_77) == 0)
{
obj* x_84; obj* x_86; obj* x_87; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_70);
lean::dec(x_72);
x_84 = lean::cnstr_get(x_77, 0);
if (lean::is_exclusive(x_77)) {
 x_86 = x_77;
} else {
 lean::inc(x_84);
 lean::dec(x_77);
 x_86 = lean::box(0);
}
if (lean::is_scalar(x_86)) {
 x_87 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_87 = x_86;
}
lean::cnstr_set(x_87, 0, x_84);
return x_87;
}
else
{
obj* x_88; obj* x_91; obj* x_93; obj* x_96; 
x_88 = lean::cnstr_get(x_77, 0);
lean::inc(x_88);
lean::dec(x_77);
x_91 = lean::cnstr_get(x_88, 0);
lean::inc(x_91);
x_93 = lean::cnstr_get(x_88, 1);
lean::inc(x_93);
lean::dec(x_88);
x_96 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__13(x_0, x_70, x_2, x_3, x_93);
if (lean::obj_tag(x_96) == 0)
{
obj* x_99; obj* x_101; obj* x_102; 
lean::dec(x_72);
lean::dec(x_91);
x_99 = lean::cnstr_get(x_96, 0);
if (lean::is_exclusive(x_96)) {
 x_101 = x_96;
} else {
 lean::inc(x_99);
 lean::dec(x_96);
 x_101 = lean::box(0);
}
if (lean::is_scalar(x_101)) {
 x_102 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_102 = x_101;
}
lean::cnstr_set(x_102, 0, x_99);
return x_102;
}
else
{
obj* x_103; obj* x_105; obj* x_106; obj* x_108; obj* x_110; obj* x_111; obj* x_112; obj* x_113; 
x_103 = lean::cnstr_get(x_96, 0);
if (lean::is_exclusive(x_96)) {
 x_105 = x_96;
} else {
 lean::inc(x_103);
 lean::dec(x_96);
 x_105 = lean::box(0);
}
x_106 = lean::cnstr_get(x_103, 0);
x_108 = lean::cnstr_get(x_103, 1);
if (lean::is_exclusive(x_103)) {
 x_110 = x_103;
} else {
 lean::inc(x_106);
 lean::inc(x_108);
 lean::dec(x_103);
 x_110 = lean::box(0);
}
if (lean::is_scalar(x_72)) {
 x_111 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_111 = x_72;
}
lean::cnstr_set(x_111, 0, x_91);
lean::cnstr_set(x_111, 1, x_106);
if (lean::is_scalar(x_110)) {
 x_112 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_112 = x_110;
}
lean::cnstr_set(x_112, 0, x_111);
lean::cnstr_set(x_112, 1, x_108);
if (lean::is_scalar(x_105)) {
 x_113 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_113 = x_105;
}
lean::cnstr_set(x_113, 0, x_112);
return x_113;
}
}
}
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__14(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_3);
lean::dec(x_0);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_4);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_10, 0);
lean::inc(x_12);
lean::dec(x_10);
if (lean::obj_tag(x_12) == 0)
{
obj* x_16; obj* x_18; obj* x_20; obj* x_21; obj* x_23; 
lean::dec(x_12);
x_16 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_18 = x_1;
} else {
 lean::inc(x_16);
 lean::dec(x_1);
 x_18 = lean::box(0);
}
lean::inc(x_0);
x_20 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_20, 0, x_0);
x_21 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__2;
lean::inc(x_3);
x_23 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_20, x_21, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_20);
if (lean::obj_tag(x_23) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_16);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_18);
x_30 = lean::cnstr_get(x_23, 0);
if (lean::is_exclusive(x_23)) {
 x_32 = x_23;
} else {
 lean::inc(x_30);
 lean::dec(x_23);
 x_32 = lean::box(0);
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_37; obj* x_39; obj* x_42; 
x_34 = lean::cnstr_get(x_23, 0);
lean::inc(x_34);
lean::dec(x_23);
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
lean::dec(x_34);
x_42 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__14(x_0, x_16, x_2, x_3, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_45; obj* x_47; obj* x_48; 
lean::dec(x_37);
lean::dec(x_18);
x_45 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_47 = x_42;
} else {
 lean::inc(x_45);
 lean::dec(x_42);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_47)) {
 x_48 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_48 = x_47;
}
lean::cnstr_set(x_48, 0, x_45);
return x_48;
}
else
{
obj* x_49; obj* x_51; obj* x_52; obj* x_54; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
x_49 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_51 = x_42;
} else {
 lean::inc(x_49);
 lean::dec(x_42);
 x_51 = lean::box(0);
}
x_52 = lean::cnstr_get(x_49, 0);
x_54 = lean::cnstr_get(x_49, 1);
if (lean::is_exclusive(x_49)) {
 x_56 = x_49;
} else {
 lean::inc(x_52);
 lean::inc(x_54);
 lean::dec(x_49);
 x_56 = lean::box(0);
}
if (lean::is_scalar(x_18)) {
 x_57 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_57 = x_18;
}
lean::cnstr_set(x_57, 0, x_37);
lean::cnstr_set(x_57, 1, x_52);
if (lean::is_scalar(x_56)) {
 x_58 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_58 = x_56;
}
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_54);
if (lean::is_scalar(x_51)) {
 x_59 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_59 = x_51;
}
lean::cnstr_set(x_59, 0, x_58);
return x_59;
}
}
}
else
{
obj* x_60; obj* x_63; 
x_60 = lean::cnstr_get(x_12, 0);
lean::inc(x_60);
lean::dec(x_12);
x_63 = lean::cnstr_get(x_60, 1);
lean::inc(x_63);
lean::dec(x_60);
if (lean::obj_tag(x_63) == 0)
{
obj* x_66; obj* x_68; obj* x_70; obj* x_71; obj* x_73; 
x_66 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_68 = x_1;
} else {
 lean::inc(x_66);
 lean::dec(x_1);
 x_68 = lean::box(0);
}
lean::inc(x_0);
x_70 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_70, 0, x_0);
x_71 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__2;
lean::inc(x_3);
x_73 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_70, x_71, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_70);
if (lean::obj_tag(x_73) == 0)
{
obj* x_80; obj* x_82; obj* x_83; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_68);
lean::dec(x_66);
x_80 = lean::cnstr_get(x_73, 0);
if (lean::is_exclusive(x_73)) {
 x_82 = x_73;
} else {
 lean::inc(x_80);
 lean::dec(x_73);
 x_82 = lean::box(0);
}
if (lean::is_scalar(x_82)) {
 x_83 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_83 = x_82;
}
lean::cnstr_set(x_83, 0, x_80);
return x_83;
}
else
{
obj* x_84; obj* x_87; obj* x_89; obj* x_92; 
x_84 = lean::cnstr_get(x_73, 0);
lean::inc(x_84);
lean::dec(x_73);
x_87 = lean::cnstr_get(x_84, 0);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_84, 1);
lean::inc(x_89);
lean::dec(x_84);
x_92 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__14(x_0, x_66, x_2, x_3, x_89);
if (lean::obj_tag(x_92) == 0)
{
obj* x_95; obj* x_97; obj* x_98; 
lean::dec(x_68);
lean::dec(x_87);
x_95 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_97 = x_92;
} else {
 lean::inc(x_95);
 lean::dec(x_92);
 x_97 = lean::box(0);
}
if (lean::is_scalar(x_97)) {
 x_98 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_98 = x_97;
}
lean::cnstr_set(x_98, 0, x_95);
return x_98;
}
else
{
obj* x_99; obj* x_101; obj* x_102; obj* x_104; obj* x_106; obj* x_107; obj* x_108; obj* x_109; 
x_99 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_101 = x_92;
} else {
 lean::inc(x_99);
 lean::dec(x_92);
 x_101 = lean::box(0);
}
x_102 = lean::cnstr_get(x_99, 0);
x_104 = lean::cnstr_get(x_99, 1);
if (lean::is_exclusive(x_99)) {
 x_106 = x_99;
} else {
 lean::inc(x_102);
 lean::inc(x_104);
 lean::dec(x_99);
 x_106 = lean::box(0);
}
if (lean::is_scalar(x_68)) {
 x_107 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_107 = x_68;
}
lean::cnstr_set(x_107, 0, x_87);
lean::cnstr_set(x_107, 1, x_102);
if (lean::is_scalar(x_106)) {
 x_108 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_108 = x_106;
}
lean::cnstr_set(x_108, 0, x_107);
lean::cnstr_set(x_108, 1, x_104);
if (lean::is_scalar(x_101)) {
 x_109 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_109 = x_101;
}
lean::cnstr_set(x_109, 0, x_108);
return x_109;
}
}
}
else
{
obj* x_110; obj* x_112; obj* x_113; obj* x_117; 
x_110 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_112 = x_1;
} else {
 lean::inc(x_110);
 lean::dec(x_1);
 x_112 = lean::box(0);
}
x_113 = lean::cnstr_get(x_63, 0);
lean::inc(x_113);
lean::dec(x_63);
lean::inc(x_3);
x_117 = l_Lean_Elaborator_toPexpr___main(x_113, x_2, x_3, x_4);
if (lean::obj_tag(x_117) == 0)
{
obj* x_122; obj* x_124; obj* x_125; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_110);
lean::dec(x_112);
x_122 = lean::cnstr_get(x_117, 0);
if (lean::is_exclusive(x_117)) {
 x_124 = x_117;
} else {
 lean::inc(x_122);
 lean::dec(x_117);
 x_124 = lean::box(0);
}
if (lean::is_scalar(x_124)) {
 x_125 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_125 = x_124;
}
lean::cnstr_set(x_125, 0, x_122);
return x_125;
}
else
{
obj* x_126; obj* x_129; obj* x_131; obj* x_134; 
x_126 = lean::cnstr_get(x_117, 0);
lean::inc(x_126);
lean::dec(x_117);
x_129 = lean::cnstr_get(x_126, 0);
lean::inc(x_129);
x_131 = lean::cnstr_get(x_126, 1);
lean::inc(x_131);
lean::dec(x_126);
x_134 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__14(x_0, x_110, x_2, x_3, x_131);
if (lean::obj_tag(x_134) == 0)
{
obj* x_137; obj* x_139; obj* x_140; 
lean::dec(x_112);
lean::dec(x_129);
x_137 = lean::cnstr_get(x_134, 0);
if (lean::is_exclusive(x_134)) {
 x_139 = x_134;
} else {
 lean::inc(x_137);
 lean::dec(x_134);
 x_139 = lean::box(0);
}
if (lean::is_scalar(x_139)) {
 x_140 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_140 = x_139;
}
lean::cnstr_set(x_140, 0, x_137);
return x_140;
}
else
{
obj* x_141; obj* x_143; obj* x_144; obj* x_146; obj* x_148; obj* x_149; obj* x_150; obj* x_151; 
x_141 = lean::cnstr_get(x_134, 0);
if (lean::is_exclusive(x_134)) {
 x_143 = x_134;
} else {
 lean::inc(x_141);
 lean::dec(x_134);
 x_143 = lean::box(0);
}
x_144 = lean::cnstr_get(x_141, 0);
x_146 = lean::cnstr_get(x_141, 1);
if (lean::is_exclusive(x_141)) {
 x_148 = x_141;
} else {
 lean::inc(x_144);
 lean::inc(x_146);
 lean::dec(x_141);
 x_148 = lean::box(0);
}
if (lean::is_scalar(x_112)) {
 x_149 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_149 = x_112;
}
lean::cnstr_set(x_149, 0, x_129);
lean::cnstr_set(x_149, 1, x_144);
if (lean::is_scalar(x_148)) {
 x_150 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_150 = x_148;
}
lean::cnstr_set(x_150, 0, x_149);
lean::cnstr_set(x_150, 1, x_146);
if (lean::is_scalar(x_143)) {
 x_151 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_151 = x_143;
}
lean::cnstr_set(x_151, 0, x_150);
return x_151;
}
}
}
}
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__15(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
x_10 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_12 = x_0;
} else {
 lean::inc(x_8);
 lean::inc(x_10);
 lean::dec(x_0);
 x_12 = lean::box(0);
}
lean::inc(x_2);
x_14 = l_Lean_Elaborator_toPexpr___main(x_8, x_1, x_2, x_3);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_10);
lean::dec(x_12);
lean::dec(x_2);
x_18 = lean::cnstr_get(x_14, 0);
if (lean::is_exclusive(x_14)) {
 x_20 = x_14;
} else {
 lean::inc(x_18);
 lean::dec(x_14);
 x_20 = lean::box(0);
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_25; obj* x_27; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
lean::dec(x_14);
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
lean::dec(x_22);
x_30 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__15(x_10, x_1, x_2, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_33; obj* x_35; obj* x_36; 
lean::dec(x_12);
lean::dec(x_25);
x_33 = lean::cnstr_get(x_30, 0);
if (lean::is_exclusive(x_30)) {
 x_35 = x_30;
} else {
 lean::inc(x_33);
 lean::dec(x_30);
 x_35 = lean::box(0);
}
if (lean::is_scalar(x_35)) {
 x_36 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_36 = x_35;
}
lean::cnstr_set(x_36, 0, x_33);
return x_36;
}
else
{
obj* x_37; obj* x_39; obj* x_40; obj* x_42; obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
x_37 = lean::cnstr_get(x_30, 0);
if (lean::is_exclusive(x_30)) {
 x_39 = x_30;
} else {
 lean::inc(x_37);
 lean::dec(x_30);
 x_39 = lean::box(0);
}
x_40 = lean::cnstr_get(x_37, 0);
x_42 = lean::cnstr_get(x_37, 1);
if (lean::is_exclusive(x_37)) {
 x_44 = x_37;
} else {
 lean::inc(x_40);
 lean::inc(x_42);
 lean::dec(x_37);
 x_44 = lean::box(0);
}
if (lean::is_scalar(x_12)) {
 x_45 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_45 = x_12;
}
lean::cnstr_set(x_45, 0, x_25);
lean::cnstr_set(x_45, 1, x_40);
if (lean::is_scalar(x_44)) {
 x_46 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_46 = x_44;
}
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_42);
if (lean::is_scalar(x_39)) {
 x_47 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_47 = x_39;
}
lean::cnstr_set(x_47, 0, x_46);
return x_47;
}
}
}
}
}
obj* l_List_foldl___main___at_Lean_Elaborator_toPexpr___main___spec__16(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_9; obj* x_12; obj* x_13; obj* x_14; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 1);
lean::inc(x_9);
lean::dec(x_2);
x_12 = lean::box(0);
x_13 = lean_name_mk_numeral(x_12, x_7);
x_14 = l_Lean_KVMap_setName(x_0, x_13, x_9);
x_0 = x_14;
x_1 = x_4;
goto _start;
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__17(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
x_10 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_12 = x_0;
} else {
 lean::inc(x_8);
 lean::inc(x_10);
 lean::dec(x_0);
 x_12 = lean::box(0);
}
lean::inc(x_2);
x_14 = l_Lean_Elaborator_toLevel___main(x_8, x_1, x_2, x_3);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_10);
lean::dec(x_12);
lean::dec(x_2);
x_18 = lean::cnstr_get(x_14, 0);
if (lean::is_exclusive(x_14)) {
 x_20 = x_14;
} else {
 lean::inc(x_18);
 lean::dec(x_14);
 x_20 = lean::box(0);
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_25; obj* x_27; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
lean::dec(x_14);
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
lean::dec(x_22);
x_30 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__17(x_10, x_1, x_2, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_33; obj* x_35; obj* x_36; 
lean::dec(x_12);
lean::dec(x_25);
x_33 = lean::cnstr_get(x_30, 0);
if (lean::is_exclusive(x_30)) {
 x_35 = x_30;
} else {
 lean::inc(x_33);
 lean::dec(x_30);
 x_35 = lean::box(0);
}
if (lean::is_scalar(x_35)) {
 x_36 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_36 = x_35;
}
lean::cnstr_set(x_36, 0, x_33);
return x_36;
}
else
{
obj* x_37; obj* x_39; obj* x_40; obj* x_42; obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
x_37 = lean::cnstr_get(x_30, 0);
if (lean::is_exclusive(x_30)) {
 x_39 = x_30;
} else {
 lean::inc(x_37);
 lean::dec(x_30);
 x_39 = lean::box(0);
}
x_40 = lean::cnstr_get(x_37, 0);
x_42 = lean::cnstr_get(x_37, 1);
if (lean::is_exclusive(x_37)) {
 x_44 = x_37;
} else {
 lean::inc(x_40);
 lean::inc(x_42);
 lean::dec(x_37);
 x_44 = lean::box(0);
}
if (lean::is_scalar(x_12)) {
 x_45 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_45 = x_12;
}
lean::cnstr_set(x_45, 0, x_25);
lean::cnstr_set(x_45, 1, x_40);
if (lean::is_scalar(x_44)) {
 x_46 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_46 = x_44;
}
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_42);
if (lean::is_scalar(x_39)) {
 x_47 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_47 = x_39;
}
lean::cnstr_set(x_47, 0, x_46);
return x_47;
}
}
}
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("toPexpr: unexpected: ");
return x_0;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("Term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("app");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("column");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("row");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__5() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("identUnivs");
x_6 = lean_name_mk_string(x_4, x_5);
return x_6;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("Term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("lambda");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__7() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("Term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("pi");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__8() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("Term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("sortApp");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__9() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("Term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("anonymousConstructor");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__10() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("Term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("hole");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__11() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("Term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("have");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__12() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("Term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("show");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__13() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("Term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("let");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__14() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("Term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("projection");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__15() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("Term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("explicit");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__16() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("Term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("inaccessible");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__17() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("Term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("borrowed");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__18() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("choice");
x_6 = lean_name_mk_string(x_4, x_5);
return x_6;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__19() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("Term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("structInst");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__20() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("Parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("Term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("match");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__21() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("toPexpr: unexpected Node: ");
return x_0;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__22() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("match");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__23() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("structure instance");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__24() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("catchall");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__25() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean_expr_mk_sort(x_0);
return x_1;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__26() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("struct");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__27() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unexpected item in structure instance notation");
return x_0;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__28() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed choice");
return x_0;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__29() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("choice");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__30() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_string("NOTAString");
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean_expr_mk_lit(x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__31() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("borrowed");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__32() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("innaccessible");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__33() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("@@");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__34() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("fieldNotation");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__35() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed let");
return x_0;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__36() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("this");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__37() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_nat_obj(0ul);
x_1 = lean_expr_mk_bvar(x_0);
return x_1;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__38() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("show");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__39() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("have");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__40() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = l_Lean_Elaborator_dummy;
x_2 = lean_expr_mk_mvar(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__41() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("anonymousConstructor");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__42() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = level_mk_succ(x_0);
x_2 = lean_expr_mk_sort(x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__43() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed pi");
return x_0;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__44() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed lambda");
return x_0;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__45() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("annotation");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("preresolved");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_Lean_KVMap_setName(x_0, x_3, x_5);
return x_6;
}
}
obj* _init_l_Lean_Elaborator_toPexpr___main___closed__46() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("annotation");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("preresolved");
x_4 = lean_name_mk_string(x_0, x_3);
x_5 = lean::box(0);
x_6 = l_Lean_KVMap_setName(x_5, x_2, x_4);
return x_6;
}
}
obj* l_Lean_Elaborator_toPexpr___main(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
switch (lean::obj_tag(x_0)) {
case 2:
{
obj* x_6; obj* x_8; obj* x_10; obj* x_13; obj* x_15; obj* x_17; uint8 x_18; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_6, 1);
lean::inc(x_10);
lean::dec(x_6);
x_17 = l_Lean_Elaborator_toPexpr___main___closed__5;
x_18 = lean_name_dec_eq(x_8, x_17);
if (x_18 == 0)
{
obj* x_19; uint8 x_20; 
x_19 = l_Lean_Elaborator_toPexpr___main___closed__2;
x_20 = lean_name_dec_eq(x_8, x_19);
if (x_20 == 0)
{
obj* x_21; uint8 x_22; 
x_21 = l_Lean_Elaborator_toPexpr___main___closed__6;
x_22 = lean_name_dec_eq(x_8, x_21);
if (x_22 == 0)
{
obj* x_23; uint8 x_24; 
x_23 = l_Lean_Elaborator_toPexpr___main___closed__7;
x_24 = lean_name_dec_eq(x_8, x_23);
if (x_24 == 0)
{
obj* x_25; uint8 x_26; 
x_25 = l_Lean_Parser_Term_sort_HasView_x_27___lambda__1___closed__4;
x_26 = lean_name_dec_eq(x_8, x_25);
if (x_26 == 0)
{
obj* x_27; uint8 x_28; 
x_27 = l_Lean_Elaborator_toPexpr___main___closed__8;
x_28 = lean_name_dec_eq(x_8, x_27);
if (x_28 == 0)
{
obj* x_29; uint8 x_30; 
x_29 = l_Lean_Elaborator_toPexpr___main___closed__9;
x_30 = lean_name_dec_eq(x_8, x_29);
if (x_30 == 0)
{
obj* x_31; uint8 x_32; 
x_31 = l_Lean_Elaborator_toPexpr___main___closed__10;
x_32 = lean_name_dec_eq(x_8, x_31);
if (x_32 == 0)
{
obj* x_33; uint8 x_34; 
x_33 = l_Lean_Elaborator_toPexpr___main___closed__11;
x_34 = lean_name_dec_eq(x_8, x_33);
if (x_34 == 0)
{
obj* x_35; uint8 x_36; 
x_35 = l_Lean_Elaborator_toPexpr___main___closed__12;
x_36 = lean_name_dec_eq(x_8, x_35);
if (x_36 == 0)
{
obj* x_37; uint8 x_38; 
x_37 = l_Lean_Elaborator_toPexpr___main___closed__13;
x_38 = lean_name_dec_eq(x_8, x_37);
if (x_38 == 0)
{
obj* x_39; uint8 x_40; 
x_39 = l_Lean_Elaborator_toPexpr___main___closed__14;
x_40 = lean_name_dec_eq(x_8, x_39);
if (x_40 == 0)
{
obj* x_41; uint8 x_42; 
x_41 = l_Lean_Elaborator_toPexpr___main___closed__15;
x_42 = lean_name_dec_eq(x_8, x_41);
if (x_42 == 0)
{
obj* x_43; uint8 x_44; 
x_43 = l_Lean_Elaborator_toPexpr___main___closed__16;
x_44 = lean_name_dec_eq(x_8, x_43);
if (x_44 == 0)
{
obj* x_45; uint8 x_46; 
x_45 = l_Lean_Elaborator_toPexpr___main___closed__17;
x_46 = lean_name_dec_eq(x_8, x_45);
if (x_46 == 0)
{
obj* x_47; uint8 x_48; 
x_47 = l_Lean_Parser_number_HasView_x_27___lambda__1___closed__6;
x_48 = lean_name_dec_eq(x_8, x_47);
if (x_48 == 0)
{
obj* x_49; uint8 x_50; 
x_49 = l_Lean_Parser_currLbp___rarg___lambda__3___closed__1;
x_50 = lean_name_dec_eq(x_8, x_49);
if (x_50 == 0)
{
obj* x_51; uint8 x_52; 
x_51 = l_Lean_Elaborator_toPexpr___main___closed__18;
x_52 = lean_name_dec_eq(x_8, x_51);
if (x_52 == 0)
{
obj* x_54; uint8 x_55; 
lean::dec(x_10);
x_54 = l_Lean_Elaborator_toPexpr___main___closed__19;
x_55 = lean_name_dec_eq(x_8, x_54);
if (x_55 == 0)
{
obj* x_56; uint8 x_57; 
x_56 = l_Lean_Elaborator_toPexpr___main___closed__20;
x_57 = lean_name_dec_eq(x_8, x_56);
if (x_57 == 0)
{
obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_66; 
lean::inc(x_0);
x_59 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_59, 0, x_0);
x_60 = l_Lean_Name_toString___closed__1;
x_61 = l_Lean_Name_toStringWithSep___main(x_60, x_8);
x_62 = l_Lean_Elaborator_toPexpr___main___closed__21;
x_63 = lean::string_append(x_62, x_61);
lean::dec(x_61);
lean::inc(x_2);
x_66 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_59, x_63, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_59);
if (lean::obj_tag(x_66) == 0)
{
obj* x_71; obj* x_73; obj* x_74; 
lean::dec(x_0);
lean::dec(x_2);
x_71 = lean::cnstr_get(x_66, 0);
if (lean::is_exclusive(x_66)) {
 x_73 = x_66;
} else {
 lean::inc(x_71);
 lean::dec(x_66);
 x_73 = lean::box(0);
}
if (lean::is_scalar(x_73)) {
 x_74 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_74 = x_73;
}
lean::cnstr_set(x_74, 0, x_71);
return x_74;
}
else
{
obj* x_75; obj* x_77; obj* x_78; obj* x_80; obj* x_82; obj* x_83; 
x_75 = lean::cnstr_get(x_66, 0);
if (lean::is_exclusive(x_66)) {
 lean::cnstr_set(x_66, 0, lean::box(0));
 x_77 = x_66;
} else {
 lean::inc(x_75);
 lean::dec(x_66);
 x_77 = lean::box(0);
}
x_78 = lean::cnstr_get(x_75, 0);
x_80 = lean::cnstr_get(x_75, 1);
if (lean::is_exclusive(x_75)) {
 lean::cnstr_set(x_75, 0, lean::box(0));
 lean::cnstr_set(x_75, 1, lean::box(0));
 x_82 = x_75;
} else {
 lean::inc(x_78);
 lean::inc(x_80);
 lean::dec(x_75);
 x_82 = lean::box(0);
}
x_83 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_83) == 0)
{
obj* x_86; obj* x_87; 
lean::dec(x_2);
if (lean::is_scalar(x_82)) {
 x_86 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_86 = x_82;
}
lean::cnstr_set(x_86, 0, x_78);
lean::cnstr_set(x_86, 1, x_80);
if (lean::is_scalar(x_77)) {
 x_87 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_87 = x_77;
}
lean::cnstr_set(x_87, 0, x_86);
return x_87;
}
else
{
obj* x_88; obj* x_91; obj* x_94; obj* x_97; obj* x_98; obj* x_100; obj* x_101; obj* x_102; obj* x_103; obj* x_106; obj* x_107; obj* x_108; obj* x_109; obj* x_110; 
x_88 = lean::cnstr_get(x_83, 0);
lean::inc(x_88);
lean::dec(x_83);
x_91 = lean::cnstr_get(x_2, 0);
lean::inc(x_91);
lean::dec(x_2);
x_94 = lean::cnstr_get(x_91, 2);
lean::inc(x_94);
lean::dec(x_91);
x_97 = l_Lean_FileMap_toPosition(x_94, x_88);
x_98 = lean::cnstr_get(x_97, 1);
lean::inc(x_98);
x_100 = lean::box(0);
x_101 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_102 = l_Lean_KVMap_setNat(x_100, x_101, x_98);
x_103 = lean::cnstr_get(x_97, 0);
lean::inc(x_103);
lean::dec(x_97);
x_106 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_107 = l_Lean_KVMap_setNat(x_102, x_106, x_103);
x_108 = lean_expr_mk_mdata(x_107, x_78);
if (lean::is_scalar(x_82)) {
 x_109 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_109 = x_82;
}
lean::cnstr_set(x_109, 0, x_108);
lean::cnstr_set(x_109, 1, x_80);
if (lean::is_scalar(x_77)) {
 x_110 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_110 = x_77;
}
lean::cnstr_set(x_110, 0, x_109);
return x_110;
}
}
}
else
{
obj* x_111; obj* x_112; obj* x_116; obj* x_117; obj* x_119; obj* x_121; 
x_111 = l_Lean_Parser_Term_match_HasView;
x_112 = lean::cnstr_get(x_111, 0);
lean::inc(x_112);
lean::dec(x_111);
lean::inc(x_0);
x_116 = lean::apply_1(x_112, x_0);
x_117 = lean::cnstr_get(x_116, 5);
lean::inc(x_117);
x_119 = l_List_map___main___at_Lean_Elaborator_toPexpr___main___spec__2(x_117);
lean::inc(x_2);
x_121 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__3(x_119, x_1, x_2, x_3);
if (lean::obj_tag(x_121) == 0)
{
obj* x_123; obj* x_125; obj* x_126; 
lean::dec(x_116);
x_123 = lean::cnstr_get(x_121, 0);
if (lean::is_exclusive(x_121)) {
 x_125 = x_121;
} else {
 lean::inc(x_123);
 lean::dec(x_121);
 x_125 = lean::box(0);
}
if (lean::is_scalar(x_125)) {
 x_126 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_126 = x_125;
}
lean::cnstr_set(x_126, 0, x_123);
x_13 = x_126;
goto lbl_14;
}
else
{
obj* x_127; obj* x_130; obj* x_132; obj* x_135; obj* x_137; obj* x_140; 
x_127 = lean::cnstr_get(x_121, 0);
lean::inc(x_127);
lean::dec(x_121);
x_130 = lean::cnstr_get(x_127, 0);
lean::inc(x_130);
x_132 = lean::cnstr_get(x_127, 1);
lean::inc(x_132);
lean::dec(x_127);
x_135 = lean::cnstr_get(x_116, 2);
lean::inc(x_135);
x_137 = l_Lean_Expander_getOptType___main(x_135);
lean::dec(x_135);
lean::inc(x_2);
x_140 = l_Lean_Elaborator_toPexpr___main(x_137, x_1, x_2, x_132);
if (lean::obj_tag(x_140) == 0)
{
obj* x_143; obj* x_145; obj* x_146; 
lean::dec(x_116);
lean::dec(x_130);
x_143 = lean::cnstr_get(x_140, 0);
if (lean::is_exclusive(x_140)) {
 x_145 = x_140;
} else {
 lean::inc(x_143);
 lean::dec(x_140);
 x_145 = lean::box(0);
}
if (lean::is_scalar(x_145)) {
 x_146 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_146 = x_145;
}
lean::cnstr_set(x_146, 0, x_143);
x_13 = x_146;
goto lbl_14;
}
else
{
obj* x_147; obj* x_150; obj* x_152; obj* x_155; 
x_147 = lean::cnstr_get(x_140, 0);
lean::inc(x_147);
lean::dec(x_140);
x_150 = lean::cnstr_get(x_147, 0);
lean::inc(x_150);
x_152 = lean::cnstr_get(x_147, 1);
lean::inc(x_152);
lean::dec(x_147);
x_155 = l_Lean_Elaborator_mkEqns(x_150, x_130);
switch (lean::obj_tag(x_155)) {
case 10:
{
obj* x_156; obj* x_158; obj* x_161; obj* x_165; 
x_156 = lean::cnstr_get(x_155, 0);
lean::inc(x_156);
x_158 = lean::cnstr_get(x_155, 1);
lean::inc(x_158);
lean::dec(x_155);
x_161 = lean::cnstr_get(x_116, 1);
lean::inc(x_161);
lean::dec(x_116);
lean::inc(x_2);
x_165 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__1(x_161, x_1, x_2, x_152);
if (lean::obj_tag(x_165) == 0)
{
obj* x_168; obj* x_170; obj* x_171; 
lean::dec(x_158);
lean::dec(x_156);
x_168 = lean::cnstr_get(x_165, 0);
if (lean::is_exclusive(x_165)) {
 x_170 = x_165;
} else {
 lean::inc(x_168);
 lean::dec(x_165);
 x_170 = lean::box(0);
}
if (lean::is_scalar(x_170)) {
 x_171 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_171 = x_170;
}
lean::cnstr_set(x_171, 0, x_168);
x_13 = x_171;
goto lbl_14;
}
else
{
obj* x_172; obj* x_174; obj* x_175; obj* x_177; obj* x_179; obj* x_180; uint8 x_181; obj* x_182; obj* x_183; obj* x_184; obj* x_185; obj* x_186; 
x_172 = lean::cnstr_get(x_165, 0);
if (lean::is_exclusive(x_165)) {
 x_174 = x_165;
} else {
 lean::inc(x_172);
 lean::dec(x_165);
 x_174 = lean::box(0);
}
x_175 = lean::cnstr_get(x_172, 0);
x_177 = lean::cnstr_get(x_172, 1);
if (lean::is_exclusive(x_172)) {
 x_179 = x_172;
} else {
 lean::inc(x_175);
 lean::inc(x_177);
 lean::dec(x_172);
 x_179 = lean::box(0);
}
x_180 = l_Lean_Elaborator_toPexpr___main___closed__22;
x_181 = 1;
x_182 = l_Lean_KVMap_setBool(x_156, x_180, x_181);
x_183 = lean_expr_mk_mdata(x_182, x_158);
x_184 = l_List_foldl___main___at_Lean_Expr_mkApp___spec__1(x_183, x_175);
if (lean::is_scalar(x_179)) {
 x_185 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_185 = x_179;
}
lean::cnstr_set(x_185, 0, x_184);
lean::cnstr_set(x_185, 1, x_177);
if (lean::is_scalar(x_174)) {
 x_186 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_186 = x_174;
}
lean::cnstr_set(x_186, 0, x_185);
x_13 = x_186;
goto lbl_14;
}
}
default:
{
obj* x_190; obj* x_191; obj* x_193; 
lean::dec(x_155);
lean::dec(x_116);
lean::inc(x_0);
x_190 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_190, 0, x_0);
x_191 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__2;
lean::inc(x_2);
x_193 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_190, x_191, x_1, x_2, x_152);
lean::dec(x_152);
lean::dec(x_190);
x_13 = x_193;
goto lbl_14;
}
}
}
}
}
}
else
{
obj* x_196; obj* x_197; obj* x_201; obj* x_202; obj* x_204; obj* x_205; obj* x_206; obj* x_208; obj* x_211; obj* x_212; 
x_196 = l_Lean_Parser_Term_structInst_HasView;
x_197 = lean::cnstr_get(x_196, 0);
lean::inc(x_197);
lean::dec(x_196);
lean::inc(x_0);
x_201 = lean::apply_1(x_197, x_0);
x_202 = lean::cnstr_get(x_201, 3);
lean::inc(x_202);
x_204 = lean::box(0);
x_205 = l_List_spanAux___main___at_Lean_Elaborator_toPexpr___main___spec__4(x_202, x_204);
x_206 = lean::cnstr_get(x_205, 0);
lean::inc(x_206);
x_208 = lean::cnstr_get(x_205, 1);
lean::inc(x_208);
lean::dec(x_205);
x_211 = l_List_spanAux___main___at_Lean_Elaborator_toPexpr___main___spec__5(x_208, x_204);
x_212 = lean::cnstr_get(x_211, 1);
lean::inc(x_212);
if (lean::obj_tag(x_212) == 0)
{
obj* x_214; obj* x_219; 
x_214 = lean::cnstr_get(x_211, 0);
lean::inc(x_214);
lean::dec(x_211);
lean::inc(x_2);
lean::inc(x_0);
x_219 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6(x_0, x_206, x_1, x_2, x_3);
if (lean::obj_tag(x_219) == 0)
{
obj* x_225; obj* x_227; obj* x_228; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_214);
lean::dec(x_201);
x_225 = lean::cnstr_get(x_219, 0);
if (lean::is_exclusive(x_219)) {
 x_227 = x_219;
} else {
 lean::inc(x_225);
 lean::dec(x_219);
 x_227 = lean::box(0);
}
if (lean::is_scalar(x_227)) {
 x_228 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_228 = x_227;
}
lean::cnstr_set(x_228, 0, x_225);
return x_228;
}
else
{
obj* x_229; obj* x_232; obj* x_234; obj* x_237; obj* x_241; 
x_229 = lean::cnstr_get(x_219, 0);
lean::inc(x_229);
lean::dec(x_219);
x_232 = lean::cnstr_get(x_229, 0);
lean::inc(x_232);
x_234 = lean::cnstr_get(x_229, 1);
lean::inc(x_234);
lean::dec(x_229);
lean::inc(x_2);
lean::inc(x_0);
x_241 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__8(x_0, x_214, x_1, x_2, x_234);
if (lean::obj_tag(x_241) == 0)
{
obj* x_247; obj* x_249; obj* x_250; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_232);
lean::dec(x_201);
x_247 = lean::cnstr_get(x_241, 0);
if (lean::is_exclusive(x_241)) {
 x_249 = x_241;
} else {
 lean::inc(x_247);
 lean::dec(x_241);
 x_249 = lean::box(0);
}
if (lean::is_scalar(x_249)) {
 x_250 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_250 = x_249;
}
lean::cnstr_set(x_250, 0, x_247);
return x_250;
}
else
{
obj* x_251; obj* x_254; 
x_251 = lean::cnstr_get(x_241, 0);
lean::inc(x_251);
lean::dec(x_241);
x_254 = lean::cnstr_get(x_201, 2);
lean::inc(x_254);
if (lean::obj_tag(x_254) == 0)
{
obj* x_256; obj* x_258; obj* x_260; obj* x_261; 
x_256 = lean::cnstr_get(x_251, 0);
x_258 = lean::cnstr_get(x_251, 1);
if (lean::is_exclusive(x_251)) {
 x_260 = x_251;
} else {
 lean::inc(x_256);
 lean::inc(x_258);
 lean::dec(x_251);
 x_260 = lean::box(0);
}
if (lean::is_scalar(x_260)) {
 x_261 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_261 = x_260;
}
lean::cnstr_set(x_261, 0, x_256);
lean::cnstr_set(x_261, 1, x_258);
x_237 = x_261;
goto lbl_238;
}
else
{
obj* x_262; obj* x_264; obj* x_267; obj* x_270; obj* x_274; 
x_262 = lean::cnstr_get(x_251, 0);
lean::inc(x_262);
x_264 = lean::cnstr_get(x_251, 1);
lean::inc(x_264);
lean::dec(x_251);
x_267 = lean::cnstr_get(x_254, 0);
lean::inc(x_267);
lean::dec(x_254);
x_270 = lean::cnstr_get(x_267, 0);
lean::inc(x_270);
lean::dec(x_267);
lean::inc(x_2);
x_274 = l_Lean_Elaborator_toPexpr___main(x_270, x_1, x_2, x_264);
if (lean::obj_tag(x_274) == 0)
{
obj* x_281; obj* x_283; obj* x_284; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_232);
lean::dec(x_262);
lean::dec(x_201);
x_281 = lean::cnstr_get(x_274, 0);
if (lean::is_exclusive(x_274)) {
 x_283 = x_274;
} else {
 lean::inc(x_281);
 lean::dec(x_274);
 x_283 = lean::box(0);
}
if (lean::is_scalar(x_283)) {
 x_284 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_284 = x_283;
}
lean::cnstr_set(x_284, 0, x_281);
return x_284;
}
else
{
obj* x_285; obj* x_288; obj* x_290; obj* x_292; obj* x_293; obj* x_294; obj* x_295; 
x_285 = lean::cnstr_get(x_274, 0);
lean::inc(x_285);
lean::dec(x_274);
x_288 = lean::cnstr_get(x_285, 0);
x_290 = lean::cnstr_get(x_285, 1);
if (lean::is_exclusive(x_285)) {
 x_292 = x_285;
} else {
 lean::inc(x_288);
 lean::inc(x_290);
 lean::dec(x_285);
 x_292 = lean::box(0);
}
x_293 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_293, 0, x_288);
lean::cnstr_set(x_293, 1, x_204);
x_294 = l_List_append___rarg(x_262, x_293);
if (lean::is_scalar(x_292)) {
 x_295 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_295 = x_292;
}
lean::cnstr_set(x_295, 0, x_294);
lean::cnstr_set(x_295, 1, x_290);
x_237 = x_295;
goto lbl_238;
}
}
}
lbl_238:
{
obj* x_296; obj* x_298; obj* x_300; obj* x_301; obj* x_302; obj* x_303; obj* x_304; obj* x_305; uint8 x_306; obj* x_307; obj* x_308; obj* x_311; obj* x_312; obj* x_313; 
x_296 = lean::cnstr_get(x_237, 0);
x_298 = lean::cnstr_get(x_237, 1);
if (lean::is_exclusive(x_237)) {
 lean::cnstr_set(x_237, 0, lean::box(0));
 lean::cnstr_set(x_237, 1, lean::box(0));
 x_300 = x_237;
} else {
 lean::inc(x_296);
 lean::inc(x_298);
 lean::dec(x_237);
 x_300 = lean::box(0);
}
x_301 = lean::mk_nat_obj(0ul);
x_302 = l_List_lengthAux___main___rarg(x_232, x_301);
x_303 = l_Lean_Elaborator_toPexpr___main___closed__23;
x_304 = l_Lean_KVMap_setNat(x_204, x_303, x_302);
x_305 = l_Lean_Elaborator_toPexpr___main___closed__24;
x_306 = 0;
x_307 = l_Lean_KVMap_setBool(x_304, x_305, x_306);
x_308 = lean::cnstr_get(x_201, 1);
lean::inc(x_308);
lean::dec(x_201);
x_311 = l_List_append___rarg(x_232, x_296);
x_312 = l_Lean_Elaborator_toPexpr___main___closed__25;
x_313 = l_List_foldr___main___at_Lean_Elaborator_toPexpr___main___spec__7(x_312, x_311);
if (lean::obj_tag(x_308) == 0)
{
obj* x_314; obj* x_315; obj* x_316; obj* x_317; obj* x_318; 
x_314 = l_Lean_Elaborator_toPexpr___main___closed__26;
x_315 = lean::box(0);
x_316 = l_Lean_KVMap_setName(x_307, x_314, x_315);
x_317 = lean_expr_mk_mdata(x_316, x_313);
if (lean::is_scalar(x_300)) {
 x_318 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_318 = x_300;
}
lean::cnstr_set(x_318, 0, x_317);
lean::cnstr_set(x_318, 1, x_298);
x_15 = x_318;
goto lbl_16;
}
else
{
obj* x_319; obj* x_322; obj* x_325; obj* x_326; obj* x_327; obj* x_328; obj* x_329; 
x_319 = lean::cnstr_get(x_308, 0);
lean::inc(x_319);
lean::dec(x_308);
x_322 = lean::cnstr_get(x_319, 0);
lean::inc(x_322);
lean::dec(x_319);
x_325 = l_Lean_Elaborator_mangleIdent(x_322);
x_326 = l_Lean_Elaborator_toPexpr___main___closed__26;
x_327 = l_Lean_KVMap_setName(x_307, x_326, x_325);
x_328 = lean_expr_mk_mdata(x_327, x_313);
if (lean::is_scalar(x_300)) {
 x_329 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_329 = x_300;
}
lean::cnstr_set(x_329, 0, x_328);
lean::cnstr_set(x_329, 1, x_298);
x_15 = x_329;
goto lbl_16;
}
}
}
}
else
{
obj* x_330; obj* x_332; 
x_330 = lean::cnstr_get(x_212, 0);
lean::inc(x_330);
x_332 = lean::cnstr_get(x_330, 0);
lean::inc(x_332);
lean::dec(x_330);
if (lean::obj_tag(x_332) == 0)
{
obj* x_335; obj* x_336; obj* x_339; obj* x_340; obj* x_343; obj* x_344; obj* x_345; obj* x_347; 
if (lean::is_exclusive(x_212)) {
 lean::cnstr_release(x_212, 0);
 lean::cnstr_release(x_212, 1);
 x_335 = x_212;
} else {
 lean::dec(x_212);
 x_335 = lean::box(0);
}
x_336 = lean::cnstr_get(x_211, 0);
lean::inc(x_336);
lean::dec(x_211);
x_339 = l_Lean_Parser_Term_structInstItem_HasView;
x_340 = lean::cnstr_get(x_339, 1);
lean::inc(x_340);
lean::dec(x_339);
x_343 = lean::apply_1(x_340, x_332);
x_344 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_344, 0, x_343);
x_345 = l_Lean_Elaborator_toPexpr___main___closed__27;
lean::inc(x_2);
x_347 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_344, x_345, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_344);
if (lean::obj_tag(x_347) == 0)
{
obj* x_357; obj* x_359; obj* x_360; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_335);
lean::dec(x_336);
lean::dec(x_206);
lean::dec(x_201);
x_357 = lean::cnstr_get(x_347, 0);
if (lean::is_exclusive(x_347)) {
 x_359 = x_347;
} else {
 lean::inc(x_357);
 lean::dec(x_347);
 x_359 = lean::box(0);
}
if (lean::is_scalar(x_359)) {
 x_360 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_360 = x_359;
}
lean::cnstr_set(x_360, 0, x_357);
return x_360;
}
else
{
obj* x_361; obj* x_364; obj* x_366; obj* x_371; 
x_361 = lean::cnstr_get(x_347, 0);
lean::inc(x_361);
lean::dec(x_347);
x_364 = lean::cnstr_get(x_361, 0);
lean::inc(x_364);
x_366 = lean::cnstr_get(x_361, 1);
lean::inc(x_366);
lean::dec(x_361);
lean::inc(x_2);
lean::inc(x_0);
x_371 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__9(x_0, x_206, x_1, x_2, x_366);
if (lean::obj_tag(x_371) == 0)
{
obj* x_379; obj* x_381; obj* x_382; 
lean::dec(x_364);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_335);
lean::dec(x_336);
lean::dec(x_201);
x_379 = lean::cnstr_get(x_371, 0);
if (lean::is_exclusive(x_371)) {
 x_381 = x_371;
} else {
 lean::inc(x_379);
 lean::dec(x_371);
 x_381 = lean::box(0);
}
if (lean::is_scalar(x_381)) {
 x_382 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_382 = x_381;
}
lean::cnstr_set(x_382, 0, x_379);
return x_382;
}
else
{
obj* x_383; obj* x_386; obj* x_388; obj* x_391; obj* x_395; 
x_383 = lean::cnstr_get(x_371, 0);
lean::inc(x_383);
lean::dec(x_371);
x_386 = lean::cnstr_get(x_383, 0);
lean::inc(x_386);
x_388 = lean::cnstr_get(x_383, 1);
lean::inc(x_388);
lean::dec(x_383);
lean::inc(x_2);
lean::inc(x_0);
x_395 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__10(x_0, x_336, x_1, x_2, x_388);
if (lean::obj_tag(x_395) == 0)
{
obj* x_403; obj* x_405; obj* x_406; 
lean::dec(x_364);
lean::dec(x_8);
lean::dec(x_386);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_335);
lean::dec(x_201);
x_403 = lean::cnstr_get(x_395, 0);
if (lean::is_exclusive(x_395)) {
 x_405 = x_395;
} else {
 lean::inc(x_403);
 lean::dec(x_395);
 x_405 = lean::box(0);
}
if (lean::is_scalar(x_405)) {
 x_406 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_406 = x_405;
}
lean::cnstr_set(x_406, 0, x_403);
return x_406;
}
else
{
obj* x_407; obj* x_410; 
x_407 = lean::cnstr_get(x_395, 0);
lean::inc(x_407);
lean::dec(x_395);
x_410 = lean::cnstr_get(x_201, 2);
lean::inc(x_410);
if (lean::obj_tag(x_410) == 0)
{
obj* x_413; obj* x_415; obj* x_417; obj* x_418; 
lean::dec(x_335);
x_413 = lean::cnstr_get(x_407, 0);
x_415 = lean::cnstr_get(x_407, 1);
if (lean::is_exclusive(x_407)) {
 x_417 = x_407;
} else {
 lean::inc(x_413);
 lean::inc(x_415);
 lean::dec(x_407);
 x_417 = lean::box(0);
}
if (lean::is_scalar(x_417)) {
 x_418 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_418 = x_417;
}
lean::cnstr_set(x_418, 0, x_413);
lean::cnstr_set(x_418, 1, x_415);
x_391 = x_418;
goto lbl_392;
}
else
{
obj* x_419; obj* x_421; obj* x_424; obj* x_427; obj* x_431; 
x_419 = lean::cnstr_get(x_407, 0);
lean::inc(x_419);
x_421 = lean::cnstr_get(x_407, 1);
lean::inc(x_421);
lean::dec(x_407);
x_424 = lean::cnstr_get(x_410, 0);
lean::inc(x_424);
lean::dec(x_410);
x_427 = lean::cnstr_get(x_424, 0);
lean::inc(x_427);
lean::dec(x_424);
lean::inc(x_2);
x_431 = l_Lean_Elaborator_toPexpr___main(x_427, x_1, x_2, x_421);
if (lean::obj_tag(x_431) == 0)
{
obj* x_440; obj* x_442; obj* x_443; 
lean::dec(x_364);
lean::dec(x_8);
lean::dec(x_386);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_335);
lean::dec(x_419);
lean::dec(x_201);
x_440 = lean::cnstr_get(x_431, 0);
if (lean::is_exclusive(x_431)) {
 x_442 = x_431;
} else {
 lean::inc(x_440);
 lean::dec(x_431);
 x_442 = lean::box(0);
}
if (lean::is_scalar(x_442)) {
 x_443 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_443 = x_442;
}
lean::cnstr_set(x_443, 0, x_440);
return x_443;
}
else
{
obj* x_444; obj* x_447; obj* x_449; obj* x_451; obj* x_452; obj* x_453; obj* x_454; 
x_444 = lean::cnstr_get(x_431, 0);
lean::inc(x_444);
lean::dec(x_431);
x_447 = lean::cnstr_get(x_444, 0);
x_449 = lean::cnstr_get(x_444, 1);
if (lean::is_exclusive(x_444)) {
 x_451 = x_444;
} else {
 lean::inc(x_447);
 lean::inc(x_449);
 lean::dec(x_444);
 x_451 = lean::box(0);
}
if (lean::is_scalar(x_335)) {
 x_452 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_452 = x_335;
}
lean::cnstr_set(x_452, 0, x_447);
lean::cnstr_set(x_452, 1, x_204);
x_453 = l_List_append___rarg(x_419, x_452);
if (lean::is_scalar(x_451)) {
 x_454 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_454 = x_451;
}
lean::cnstr_set(x_454, 0, x_453);
lean::cnstr_set(x_454, 1, x_449);
x_391 = x_454;
goto lbl_392;
}
}
}
lbl_392:
{
obj* x_455; obj* x_457; obj* x_459; obj* x_460; obj* x_461; obj* x_462; obj* x_463; obj* x_464; uint8 x_465; obj* x_466; obj* x_467; obj* x_470; obj* x_471; obj* x_472; 
x_455 = lean::cnstr_get(x_391, 0);
x_457 = lean::cnstr_get(x_391, 1);
if (lean::is_exclusive(x_391)) {
 lean::cnstr_set(x_391, 0, lean::box(0));
 lean::cnstr_set(x_391, 1, lean::box(0));
 x_459 = x_391;
} else {
 lean::inc(x_455);
 lean::inc(x_457);
 lean::dec(x_391);
 x_459 = lean::box(0);
}
x_460 = lean::mk_nat_obj(0ul);
x_461 = l_List_lengthAux___main___rarg(x_386, x_460);
x_462 = l_Lean_Elaborator_toPexpr___main___closed__23;
x_463 = l_Lean_KVMap_setNat(x_204, x_462, x_461);
x_464 = l_Lean_Elaborator_toPexpr___main___closed__24;
x_465 = lean::unbox(x_364);
x_466 = l_Lean_KVMap_setBool(x_463, x_464, x_465);
x_467 = lean::cnstr_get(x_201, 1);
lean::inc(x_467);
lean::dec(x_201);
x_470 = l_List_append___rarg(x_386, x_455);
x_471 = l_Lean_Elaborator_toPexpr___main___closed__25;
x_472 = l_List_foldr___main___at_Lean_Elaborator_toPexpr___main___spec__7(x_471, x_470);
if (lean::obj_tag(x_467) == 0)
{
obj* x_473; obj* x_474; obj* x_475; obj* x_476; obj* x_477; 
x_473 = l_Lean_Elaborator_toPexpr___main___closed__26;
x_474 = lean::box(0);
x_475 = l_Lean_KVMap_setName(x_466, x_473, x_474);
x_476 = lean_expr_mk_mdata(x_475, x_472);
if (lean::is_scalar(x_459)) {
 x_477 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_477 = x_459;
}
lean::cnstr_set(x_477, 0, x_476);
lean::cnstr_set(x_477, 1, x_457);
x_15 = x_477;
goto lbl_16;
}
else
{
obj* x_478; obj* x_481; obj* x_484; obj* x_485; obj* x_486; obj* x_487; obj* x_488; 
x_478 = lean::cnstr_get(x_467, 0);
lean::inc(x_478);
lean::dec(x_467);
x_481 = lean::cnstr_get(x_478, 0);
lean::inc(x_481);
lean::dec(x_478);
x_484 = l_Lean_Elaborator_mangleIdent(x_481);
x_485 = l_Lean_Elaborator_toPexpr___main___closed__26;
x_486 = l_Lean_KVMap_setName(x_466, x_485, x_484);
x_487 = lean_expr_mk_mdata(x_486, x_472);
if (lean::is_scalar(x_459)) {
 x_488 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_488 = x_459;
}
lean::cnstr_set(x_488, 0, x_487);
lean::cnstr_set(x_488, 1, x_457);
x_15 = x_488;
goto lbl_16;
}
}
}
}
}
else
{
obj* x_489; obj* x_491; 
x_489 = lean::cnstr_get(x_212, 1);
if (lean::is_exclusive(x_212)) {
 lean::cnstr_release(x_212, 0);
 lean::cnstr_set(x_212, 1, lean::box(0));
 x_491 = x_212;
} else {
 lean::inc(x_489);
 lean::dec(x_212);
 x_491 = lean::box(0);
}
if (lean::obj_tag(x_489) == 0)
{
obj* x_493; obj* x_498; 
lean::dec(x_332);
x_493 = lean::cnstr_get(x_211, 0);
lean::inc(x_493);
lean::dec(x_211);
lean::inc(x_2);
lean::inc(x_0);
x_498 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__11(x_0, x_206, x_1, x_2, x_3);
if (lean::obj_tag(x_498) == 0)
{
obj* x_505; obj* x_507; obj* x_508; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_493);
lean::dec(x_491);
lean::dec(x_201);
x_505 = lean::cnstr_get(x_498, 0);
if (lean::is_exclusive(x_498)) {
 x_507 = x_498;
} else {
 lean::inc(x_505);
 lean::dec(x_498);
 x_507 = lean::box(0);
}
if (lean::is_scalar(x_507)) {
 x_508 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_508 = x_507;
}
lean::cnstr_set(x_508, 0, x_505);
return x_508;
}
else
{
obj* x_509; obj* x_512; obj* x_514; obj* x_517; obj* x_521; 
x_509 = lean::cnstr_get(x_498, 0);
lean::inc(x_509);
lean::dec(x_498);
x_512 = lean::cnstr_get(x_509, 0);
lean::inc(x_512);
x_514 = lean::cnstr_get(x_509, 1);
lean::inc(x_514);
lean::dec(x_509);
lean::inc(x_2);
lean::inc(x_0);
x_521 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__12(x_0, x_493, x_1, x_2, x_514);
if (lean::obj_tag(x_521) == 0)
{
obj* x_528; obj* x_530; obj* x_531; 
lean::dec(x_512);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_491);
lean::dec(x_201);
x_528 = lean::cnstr_get(x_521, 0);
if (lean::is_exclusive(x_521)) {
 x_530 = x_521;
} else {
 lean::inc(x_528);
 lean::dec(x_521);
 x_530 = lean::box(0);
}
if (lean::is_scalar(x_530)) {
 x_531 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_531 = x_530;
}
lean::cnstr_set(x_531, 0, x_528);
return x_531;
}
else
{
obj* x_532; obj* x_535; 
x_532 = lean::cnstr_get(x_521, 0);
lean::inc(x_532);
lean::dec(x_521);
x_535 = lean::cnstr_get(x_201, 2);
lean::inc(x_535);
if (lean::obj_tag(x_535) == 0)
{
obj* x_538; obj* x_540; obj* x_542; obj* x_543; 
lean::dec(x_491);
x_538 = lean::cnstr_get(x_532, 0);
x_540 = lean::cnstr_get(x_532, 1);
if (lean::is_exclusive(x_532)) {
 x_542 = x_532;
} else {
 lean::inc(x_538);
 lean::inc(x_540);
 lean::dec(x_532);
 x_542 = lean::box(0);
}
if (lean::is_scalar(x_542)) {
 x_543 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_543 = x_542;
}
lean::cnstr_set(x_543, 0, x_538);
lean::cnstr_set(x_543, 1, x_540);
x_517 = x_543;
goto lbl_518;
}
else
{
obj* x_544; obj* x_546; obj* x_549; obj* x_552; obj* x_556; 
x_544 = lean::cnstr_get(x_532, 0);
lean::inc(x_544);
x_546 = lean::cnstr_get(x_532, 1);
lean::inc(x_546);
lean::dec(x_532);
x_549 = lean::cnstr_get(x_535, 0);
lean::inc(x_549);
lean::dec(x_535);
x_552 = lean::cnstr_get(x_549, 0);
lean::inc(x_552);
lean::dec(x_549);
lean::inc(x_2);
x_556 = l_Lean_Elaborator_toPexpr___main(x_552, x_1, x_2, x_546);
if (lean::obj_tag(x_556) == 0)
{
obj* x_564; obj* x_566; obj* x_567; 
lean::dec(x_512);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_491);
lean::dec(x_544);
lean::dec(x_201);
x_564 = lean::cnstr_get(x_556, 0);
if (lean::is_exclusive(x_556)) {
 x_566 = x_556;
} else {
 lean::inc(x_564);
 lean::dec(x_556);
 x_566 = lean::box(0);
}
if (lean::is_scalar(x_566)) {
 x_567 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_567 = x_566;
}
lean::cnstr_set(x_567, 0, x_564);
return x_567;
}
else
{
obj* x_568; obj* x_571; obj* x_573; obj* x_575; obj* x_576; obj* x_577; obj* x_578; 
x_568 = lean::cnstr_get(x_556, 0);
lean::inc(x_568);
lean::dec(x_556);
x_571 = lean::cnstr_get(x_568, 0);
x_573 = lean::cnstr_get(x_568, 1);
if (lean::is_exclusive(x_568)) {
 x_575 = x_568;
} else {
 lean::inc(x_571);
 lean::inc(x_573);
 lean::dec(x_568);
 x_575 = lean::box(0);
}
if (lean::is_scalar(x_491)) {
 x_576 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_576 = x_491;
}
lean::cnstr_set(x_576, 0, x_571);
lean::cnstr_set(x_576, 1, x_204);
x_577 = l_List_append___rarg(x_544, x_576);
if (lean::is_scalar(x_575)) {
 x_578 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_578 = x_575;
}
lean::cnstr_set(x_578, 0, x_577);
lean::cnstr_set(x_578, 1, x_573);
x_517 = x_578;
goto lbl_518;
}
}
}
lbl_518:
{
obj* x_579; obj* x_581; obj* x_583; obj* x_584; obj* x_585; obj* x_586; obj* x_587; obj* x_588; uint8 x_589; obj* x_590; obj* x_591; obj* x_594; obj* x_595; obj* x_596; 
x_579 = lean::cnstr_get(x_517, 0);
x_581 = lean::cnstr_get(x_517, 1);
if (lean::is_exclusive(x_517)) {
 lean::cnstr_set(x_517, 0, lean::box(0));
 lean::cnstr_set(x_517, 1, lean::box(0));
 x_583 = x_517;
} else {
 lean::inc(x_579);
 lean::inc(x_581);
 lean::dec(x_517);
 x_583 = lean::box(0);
}
x_584 = lean::mk_nat_obj(0ul);
x_585 = l_List_lengthAux___main___rarg(x_512, x_584);
x_586 = l_Lean_Elaborator_toPexpr___main___closed__23;
x_587 = l_Lean_KVMap_setNat(x_204, x_586, x_585);
x_588 = l_Lean_Elaborator_toPexpr___main___closed__24;
x_589 = 1;
x_590 = l_Lean_KVMap_setBool(x_587, x_588, x_589);
x_591 = lean::cnstr_get(x_201, 1);
lean::inc(x_591);
lean::dec(x_201);
x_594 = l_List_append___rarg(x_512, x_579);
x_595 = l_Lean_Elaborator_toPexpr___main___closed__25;
x_596 = l_List_foldr___main___at_Lean_Elaborator_toPexpr___main___spec__7(x_595, x_594);
if (lean::obj_tag(x_591) == 0)
{
obj* x_597; obj* x_598; obj* x_599; obj* x_600; obj* x_601; 
x_597 = l_Lean_Elaborator_toPexpr___main___closed__26;
x_598 = lean::box(0);
x_599 = l_Lean_KVMap_setName(x_590, x_597, x_598);
x_600 = lean_expr_mk_mdata(x_599, x_596);
if (lean::is_scalar(x_583)) {
 x_601 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_601 = x_583;
}
lean::cnstr_set(x_601, 0, x_600);
lean::cnstr_set(x_601, 1, x_581);
x_15 = x_601;
goto lbl_16;
}
else
{
obj* x_602; obj* x_605; obj* x_608; obj* x_609; obj* x_610; obj* x_611; obj* x_612; 
x_602 = lean::cnstr_get(x_591, 0);
lean::inc(x_602);
lean::dec(x_591);
x_605 = lean::cnstr_get(x_602, 0);
lean::inc(x_605);
lean::dec(x_602);
x_608 = l_Lean_Elaborator_mangleIdent(x_605);
x_609 = l_Lean_Elaborator_toPexpr___main___closed__26;
x_610 = l_Lean_KVMap_setName(x_590, x_609, x_608);
x_611 = lean_expr_mk_mdata(x_610, x_596);
if (lean::is_scalar(x_583)) {
 x_612 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_612 = x_583;
}
lean::cnstr_set(x_612, 0, x_611);
lean::cnstr_set(x_612, 1, x_581);
x_15 = x_612;
goto lbl_16;
}
}
}
}
else
{
obj* x_614; obj* x_615; obj* x_618; obj* x_619; obj* x_622; obj* x_623; obj* x_624; obj* x_626; 
lean::dec(x_491);
if (lean::is_exclusive(x_489)) {
 lean::cnstr_release(x_489, 0);
 lean::cnstr_release(x_489, 1);
 x_614 = x_489;
} else {
 lean::dec(x_489);
 x_614 = lean::box(0);
}
x_615 = lean::cnstr_get(x_211, 0);
lean::inc(x_615);
lean::dec(x_211);
x_618 = l_Lean_Parser_Term_structInstItem_HasView;
x_619 = lean::cnstr_get(x_618, 1);
lean::inc(x_619);
lean::dec(x_618);
x_622 = lean::apply_1(x_619, x_332);
x_623 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_623, 0, x_622);
x_624 = l_Lean_Elaborator_toPexpr___main___closed__27;
lean::inc(x_2);
x_626 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_623, x_624, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_623);
if (lean::obj_tag(x_626) == 0)
{
obj* x_636; obj* x_638; obj* x_639; 
lean::dec(x_8);
lean::dec(x_614);
lean::dec(x_0);
lean::dec(x_615);
lean::dec(x_2);
lean::dec(x_206);
lean::dec(x_201);
x_636 = lean::cnstr_get(x_626, 0);
if (lean::is_exclusive(x_626)) {
 x_638 = x_626;
} else {
 lean::inc(x_636);
 lean::dec(x_626);
 x_638 = lean::box(0);
}
if (lean::is_scalar(x_638)) {
 x_639 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_639 = x_638;
}
lean::cnstr_set(x_639, 0, x_636);
return x_639;
}
else
{
obj* x_640; obj* x_643; obj* x_645; obj* x_650; 
x_640 = lean::cnstr_get(x_626, 0);
lean::inc(x_640);
lean::dec(x_626);
x_643 = lean::cnstr_get(x_640, 0);
lean::inc(x_643);
x_645 = lean::cnstr_get(x_640, 1);
lean::inc(x_645);
lean::dec(x_640);
lean::inc(x_2);
lean::inc(x_0);
x_650 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__13(x_0, x_206, x_1, x_2, x_645);
if (lean::obj_tag(x_650) == 0)
{
obj* x_658; obj* x_660; obj* x_661; 
lean::dec(x_8);
lean::dec(x_614);
lean::dec(x_0);
lean::dec(x_615);
lean::dec(x_2);
lean::dec(x_643);
lean::dec(x_201);
x_658 = lean::cnstr_get(x_650, 0);
if (lean::is_exclusive(x_650)) {
 x_660 = x_650;
} else {
 lean::inc(x_658);
 lean::dec(x_650);
 x_660 = lean::box(0);
}
if (lean::is_scalar(x_660)) {
 x_661 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_661 = x_660;
}
lean::cnstr_set(x_661, 0, x_658);
return x_661;
}
else
{
obj* x_662; obj* x_665; obj* x_667; obj* x_670; obj* x_674; 
x_662 = lean::cnstr_get(x_650, 0);
lean::inc(x_662);
lean::dec(x_650);
x_665 = lean::cnstr_get(x_662, 0);
lean::inc(x_665);
x_667 = lean::cnstr_get(x_662, 1);
lean::inc(x_667);
lean::dec(x_662);
lean::inc(x_2);
lean::inc(x_0);
x_674 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__14(x_0, x_615, x_1, x_2, x_667);
if (lean::obj_tag(x_674) == 0)
{
obj* x_682; obj* x_684; obj* x_685; 
lean::dec(x_8);
lean::dec(x_614);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_643);
lean::dec(x_665);
lean::dec(x_201);
x_682 = lean::cnstr_get(x_674, 0);
if (lean::is_exclusive(x_674)) {
 x_684 = x_674;
} else {
 lean::inc(x_682);
 lean::dec(x_674);
 x_684 = lean::box(0);
}
if (lean::is_scalar(x_684)) {
 x_685 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_685 = x_684;
}
lean::cnstr_set(x_685, 0, x_682);
return x_685;
}
else
{
obj* x_686; obj* x_689; 
x_686 = lean::cnstr_get(x_674, 0);
lean::inc(x_686);
lean::dec(x_674);
x_689 = lean::cnstr_get(x_201, 2);
lean::inc(x_689);
if (lean::obj_tag(x_689) == 0)
{
obj* x_692; obj* x_694; obj* x_696; obj* x_697; 
lean::dec(x_614);
x_692 = lean::cnstr_get(x_686, 0);
x_694 = lean::cnstr_get(x_686, 1);
if (lean::is_exclusive(x_686)) {
 x_696 = x_686;
} else {
 lean::inc(x_692);
 lean::inc(x_694);
 lean::dec(x_686);
 x_696 = lean::box(0);
}
if (lean::is_scalar(x_696)) {
 x_697 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_697 = x_696;
}
lean::cnstr_set(x_697, 0, x_692);
lean::cnstr_set(x_697, 1, x_694);
x_670 = x_697;
goto lbl_671;
}
else
{
obj* x_698; obj* x_700; obj* x_703; obj* x_706; obj* x_710; 
x_698 = lean::cnstr_get(x_686, 0);
lean::inc(x_698);
x_700 = lean::cnstr_get(x_686, 1);
lean::inc(x_700);
lean::dec(x_686);
x_703 = lean::cnstr_get(x_689, 0);
lean::inc(x_703);
lean::dec(x_689);
x_706 = lean::cnstr_get(x_703, 0);
lean::inc(x_706);
lean::dec(x_703);
lean::inc(x_2);
x_710 = l_Lean_Elaborator_toPexpr___main(x_706, x_1, x_2, x_700);
if (lean::obj_tag(x_710) == 0)
{
obj* x_719; obj* x_721; obj* x_722; 
lean::dec(x_8);
lean::dec(x_614);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_643);
lean::dec(x_665);
lean::dec(x_698);
lean::dec(x_201);
x_719 = lean::cnstr_get(x_710, 0);
if (lean::is_exclusive(x_710)) {
 x_721 = x_710;
} else {
 lean::inc(x_719);
 lean::dec(x_710);
 x_721 = lean::box(0);
}
if (lean::is_scalar(x_721)) {
 x_722 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_722 = x_721;
}
lean::cnstr_set(x_722, 0, x_719);
return x_722;
}
else
{
obj* x_723; obj* x_726; obj* x_728; obj* x_730; obj* x_731; obj* x_732; obj* x_733; 
x_723 = lean::cnstr_get(x_710, 0);
lean::inc(x_723);
lean::dec(x_710);
x_726 = lean::cnstr_get(x_723, 0);
x_728 = lean::cnstr_get(x_723, 1);
if (lean::is_exclusive(x_723)) {
 x_730 = x_723;
} else {
 lean::inc(x_726);
 lean::inc(x_728);
 lean::dec(x_723);
 x_730 = lean::box(0);
}
if (lean::is_scalar(x_614)) {
 x_731 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_731 = x_614;
}
lean::cnstr_set(x_731, 0, x_726);
lean::cnstr_set(x_731, 1, x_204);
x_732 = l_List_append___rarg(x_698, x_731);
if (lean::is_scalar(x_730)) {
 x_733 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_733 = x_730;
}
lean::cnstr_set(x_733, 0, x_732);
lean::cnstr_set(x_733, 1, x_728);
x_670 = x_733;
goto lbl_671;
}
}
}
lbl_671:
{
obj* x_734; obj* x_736; obj* x_738; obj* x_739; obj* x_740; obj* x_741; obj* x_742; obj* x_743; uint8 x_744; obj* x_745; obj* x_746; obj* x_749; obj* x_750; obj* x_751; 
x_734 = lean::cnstr_get(x_670, 0);
x_736 = lean::cnstr_get(x_670, 1);
if (lean::is_exclusive(x_670)) {
 lean::cnstr_set(x_670, 0, lean::box(0));
 lean::cnstr_set(x_670, 1, lean::box(0));
 x_738 = x_670;
} else {
 lean::inc(x_734);
 lean::inc(x_736);
 lean::dec(x_670);
 x_738 = lean::box(0);
}
x_739 = lean::mk_nat_obj(0ul);
x_740 = l_List_lengthAux___main___rarg(x_665, x_739);
x_741 = l_Lean_Elaborator_toPexpr___main___closed__23;
x_742 = l_Lean_KVMap_setNat(x_204, x_741, x_740);
x_743 = l_Lean_Elaborator_toPexpr___main___closed__24;
x_744 = lean::unbox(x_643);
x_745 = l_Lean_KVMap_setBool(x_742, x_743, x_744);
x_746 = lean::cnstr_get(x_201, 1);
lean::inc(x_746);
lean::dec(x_201);
x_749 = l_List_append___rarg(x_665, x_734);
x_750 = l_Lean_Elaborator_toPexpr___main___closed__25;
x_751 = l_List_foldr___main___at_Lean_Elaborator_toPexpr___main___spec__7(x_750, x_749);
if (lean::obj_tag(x_746) == 0)
{
obj* x_752; obj* x_753; obj* x_754; obj* x_755; obj* x_756; 
x_752 = l_Lean_Elaborator_toPexpr___main___closed__26;
x_753 = lean::box(0);
x_754 = l_Lean_KVMap_setName(x_745, x_752, x_753);
x_755 = lean_expr_mk_mdata(x_754, x_751);
if (lean::is_scalar(x_738)) {
 x_756 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_756 = x_738;
}
lean::cnstr_set(x_756, 0, x_755);
lean::cnstr_set(x_756, 1, x_736);
x_15 = x_756;
goto lbl_16;
}
else
{
obj* x_757; obj* x_760; obj* x_763; obj* x_764; obj* x_765; obj* x_766; obj* x_767; 
x_757 = lean::cnstr_get(x_746, 0);
lean::inc(x_757);
lean::dec(x_746);
x_760 = lean::cnstr_get(x_757, 0);
lean::inc(x_760);
lean::dec(x_757);
x_763 = l_Lean_Elaborator_mangleIdent(x_760);
x_764 = l_Lean_Elaborator_toPexpr___main___closed__26;
x_765 = l_Lean_KVMap_setName(x_745, x_764, x_763);
x_766 = lean_expr_mk_mdata(x_765, x_751);
if (lean::is_scalar(x_738)) {
 x_767 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_767 = x_738;
}
lean::cnstr_set(x_767, 0, x_766);
lean::cnstr_set(x_767, 1, x_736);
x_15 = x_767;
goto lbl_16;
}
}
}
}
}
}
}
}
}
else
{
obj* x_770; 
lean::inc(x_2);
lean::inc(x_10);
x_770 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__15(x_10, x_1, x_2, x_3);
if (lean::obj_tag(x_770) == 0)
{
obj* x_775; obj* x_777; obj* x_778; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_10);
lean::dec(x_2);
x_775 = lean::cnstr_get(x_770, 0);
if (lean::is_exclusive(x_770)) {
 x_777 = x_770;
} else {
 lean::inc(x_775);
 lean::dec(x_770);
 x_777 = lean::box(0);
}
if (lean::is_scalar(x_777)) {
 x_778 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_778 = x_777;
}
lean::cnstr_set(x_778, 0, x_775);
return x_778;
}
else
{
obj* x_779; obj* x_782; obj* x_784; obj* x_786; obj* x_787; 
x_779 = lean::cnstr_get(x_770, 0);
lean::inc(x_779);
lean::dec(x_770);
x_782 = lean::cnstr_get(x_779, 0);
x_784 = lean::cnstr_get(x_779, 1);
if (lean::is_exclusive(x_779)) {
 lean::cnstr_set(x_779, 0, lean::box(0));
 lean::cnstr_set(x_779, 1, lean::box(0));
 x_786 = x_779;
} else {
 lean::inc(x_782);
 lean::inc(x_784);
 lean::dec(x_779);
 x_786 = lean::box(0);
}
x_787 = l_List_reverse___rarg(x_782);
if (lean::obj_tag(x_787) == 0)
{
obj* x_791; obj* x_792; obj* x_794; 
lean::dec(x_786);
lean::dec(x_10);
lean::inc(x_0);
x_791 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_791, 0, x_0);
x_792 = l_Lean_Elaborator_toPexpr___main___closed__28;
lean::inc(x_2);
x_794 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_791, x_792, x_1, x_2, x_784);
lean::dec(x_784);
lean::dec(x_791);
if (lean::obj_tag(x_794) == 0)
{
obj* x_800; obj* x_802; obj* x_803; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
x_800 = lean::cnstr_get(x_794, 0);
if (lean::is_exclusive(x_794)) {
 x_802 = x_794;
} else {
 lean::inc(x_800);
 lean::dec(x_794);
 x_802 = lean::box(0);
}
if (lean::is_scalar(x_802)) {
 x_803 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_803 = x_802;
}
lean::cnstr_set(x_803, 0, x_800);
return x_803;
}
else
{
obj* x_804; 
x_804 = lean::cnstr_get(x_794, 0);
lean::inc(x_804);
lean::dec(x_794);
x_15 = x_804;
goto lbl_16;
}
}
else
{
obj* x_807; obj* x_809; obj* x_812; obj* x_813; obj* x_815; obj* x_816; obj* x_817; obj* x_818; obj* x_819; obj* x_821; obj* x_822; 
x_807 = lean::cnstr_get(x_787, 0);
lean::inc(x_807);
x_809 = lean::cnstr_get(x_787, 1);
lean::inc(x_809);
lean::dec(x_787);
x_812 = lean::mk_nat_obj(0ul);
x_813 = l_List_lengthAux___main___rarg(x_10, x_812);
lean::dec(x_10);
x_815 = lean::box(0);
x_816 = l_Lean_Elaborator_toPexpr___main___closed__29;
x_817 = l_Lean_KVMap_setNat(x_815, x_816, x_813);
x_818 = l_List_reverse___rarg(x_809);
x_819 = l_List_foldr___main___at_Lean_Elaborator_toPexpr___main___spec__7(x_807, x_818);
lean::dec(x_807);
x_821 = lean_expr_mk_mdata(x_817, x_819);
if (lean::is_scalar(x_786)) {
 x_822 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_822 = x_786;
}
lean::cnstr_set(x_822, 0, x_821);
lean::cnstr_set(x_822, 1, x_784);
x_15 = x_822;
goto lbl_16;
}
}
}
}
else
{
obj* x_825; obj* x_826; obj* x_830; obj* x_831; 
lean::dec(x_8);
lean::dec(x_10);
x_825 = l_Lean_Parser_stringLit_HasView;
x_826 = lean::cnstr_get(x_825, 0);
lean::inc(x_826);
lean::dec(x_825);
lean::inc(x_0);
x_830 = lean::apply_1(x_826, x_0);
x_831 = l_Lean_Parser_stringLit_View_value(x_830);
if (lean::obj_tag(x_831) == 0)
{
obj* x_832; 
x_832 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_832) == 0)
{
obj* x_835; obj* x_836; obj* x_837; 
lean::dec(x_2);
x_835 = l_Lean_Elaborator_toPexpr___main___closed__30;
x_836 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_836, 0, x_835);
lean::cnstr_set(x_836, 1, x_3);
x_837 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_837, 0, x_836);
return x_837;
}
else
{
obj* x_838; obj* x_841; obj* x_844; obj* x_847; obj* x_848; obj* x_850; obj* x_851; obj* x_852; obj* x_853; obj* x_856; obj* x_857; obj* x_858; obj* x_859; obj* x_860; obj* x_861; 
x_838 = lean::cnstr_get(x_832, 0);
lean::inc(x_838);
lean::dec(x_832);
x_841 = lean::cnstr_get(x_2, 0);
lean::inc(x_841);
lean::dec(x_2);
x_844 = lean::cnstr_get(x_841, 2);
lean::inc(x_844);
lean::dec(x_841);
x_847 = l_Lean_FileMap_toPosition(x_844, x_838);
x_848 = lean::cnstr_get(x_847, 1);
lean::inc(x_848);
x_850 = lean::box(0);
x_851 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_852 = l_Lean_KVMap_setNat(x_850, x_851, x_848);
x_853 = lean::cnstr_get(x_847, 0);
lean::inc(x_853);
lean::dec(x_847);
x_856 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_857 = l_Lean_KVMap_setNat(x_852, x_856, x_853);
x_858 = l_Lean_Elaborator_toPexpr___main___closed__30;
x_859 = lean_expr_mk_mdata(x_857, x_858);
x_860 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_860, 0, x_859);
lean::cnstr_set(x_860, 1, x_3);
x_861 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_861, 0, x_860);
return x_861;
}
}
else
{
obj* x_862; obj* x_865; obj* x_866; obj* x_867; 
x_862 = lean::cnstr_get(x_831, 0);
lean::inc(x_862);
lean::dec(x_831);
x_865 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_865, 0, x_862);
x_866 = lean_expr_mk_lit(x_865);
x_867 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_867) == 0)
{
obj* x_870; obj* x_871; 
lean::dec(x_2);
x_870 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_870, 0, x_866);
lean::cnstr_set(x_870, 1, x_3);
x_871 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_871, 0, x_870);
return x_871;
}
else
{
obj* x_872; obj* x_875; obj* x_878; obj* x_881; obj* x_882; obj* x_884; obj* x_885; obj* x_886; obj* x_887; obj* x_890; obj* x_891; obj* x_892; obj* x_893; obj* x_894; 
x_872 = lean::cnstr_get(x_867, 0);
lean::inc(x_872);
lean::dec(x_867);
x_875 = lean::cnstr_get(x_2, 0);
lean::inc(x_875);
lean::dec(x_2);
x_878 = lean::cnstr_get(x_875, 2);
lean::inc(x_878);
lean::dec(x_875);
x_881 = l_Lean_FileMap_toPosition(x_878, x_872);
x_882 = lean::cnstr_get(x_881, 1);
lean::inc(x_882);
x_884 = lean::box(0);
x_885 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_886 = l_Lean_KVMap_setNat(x_884, x_885, x_882);
x_887 = lean::cnstr_get(x_881, 0);
lean::inc(x_887);
lean::dec(x_881);
x_890 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_891 = l_Lean_KVMap_setNat(x_886, x_890, x_887);
x_892 = lean_expr_mk_mdata(x_891, x_866);
x_893 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_893, 0, x_892);
lean::cnstr_set(x_893, 1, x_3);
x_894 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_894, 0, x_893);
return x_894;
}
}
}
}
else
{
obj* x_897; obj* x_898; obj* x_902; obj* x_903; obj* x_904; obj* x_905; obj* x_906; 
lean::dec(x_8);
lean::dec(x_10);
x_897 = l_Lean_Parser_number_HasView;
x_898 = lean::cnstr_get(x_897, 0);
lean::inc(x_898);
lean::dec(x_897);
lean::inc(x_0);
x_902 = lean::apply_1(x_898, x_0);
x_903 = l_Lean_Parser_number_View_toNat___main(x_902);
x_904 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_904, 0, x_903);
x_905 = lean_expr_mk_lit(x_904);
x_906 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_906) == 0)
{
obj* x_909; obj* x_910; 
lean::dec(x_2);
x_909 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_909, 0, x_905);
lean::cnstr_set(x_909, 1, x_3);
x_910 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_910, 0, x_909);
return x_910;
}
else
{
obj* x_911; obj* x_914; obj* x_917; obj* x_920; obj* x_921; obj* x_923; obj* x_924; obj* x_925; obj* x_926; obj* x_929; obj* x_930; obj* x_931; obj* x_932; obj* x_933; 
x_911 = lean::cnstr_get(x_906, 0);
lean::inc(x_911);
lean::dec(x_906);
x_914 = lean::cnstr_get(x_2, 0);
lean::inc(x_914);
lean::dec(x_2);
x_917 = lean::cnstr_get(x_914, 2);
lean::inc(x_917);
lean::dec(x_914);
x_920 = l_Lean_FileMap_toPosition(x_917, x_911);
x_921 = lean::cnstr_get(x_920, 1);
lean::inc(x_921);
x_923 = lean::box(0);
x_924 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_925 = l_Lean_KVMap_setNat(x_923, x_924, x_921);
x_926 = lean::cnstr_get(x_920, 0);
lean::inc(x_926);
lean::dec(x_920);
x_929 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_930 = l_Lean_KVMap_setNat(x_925, x_929, x_926);
x_931 = lean_expr_mk_mdata(x_930, x_905);
x_932 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_932, 0, x_931);
lean::cnstr_set(x_932, 1, x_3);
x_933 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_933, 0, x_932);
return x_933;
}
}
}
else
{
obj* x_936; obj* x_937; obj* x_941; obj* x_942; obj* x_946; 
lean::dec(x_8);
lean::dec(x_10);
x_936 = l_Lean_Parser_Term_borrowed_HasView;
x_937 = lean::cnstr_get(x_936, 0);
lean::inc(x_937);
lean::dec(x_936);
lean::inc(x_0);
x_941 = lean::apply_1(x_937, x_0);
x_942 = lean::cnstr_get(x_941, 1);
lean::inc(x_942);
lean::dec(x_941);
lean::inc(x_2);
x_946 = l_Lean_Elaborator_toPexpr___main(x_942, x_1, x_2, x_3);
if (lean::obj_tag(x_946) == 0)
{
obj* x_949; obj* x_951; obj* x_952; 
lean::dec(x_0);
lean::dec(x_2);
x_949 = lean::cnstr_get(x_946, 0);
if (lean::is_exclusive(x_946)) {
 x_951 = x_946;
} else {
 lean::inc(x_949);
 lean::dec(x_946);
 x_951 = lean::box(0);
}
if (lean::is_scalar(x_951)) {
 x_952 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_952 = x_951;
}
lean::cnstr_set(x_952, 0, x_949);
return x_952;
}
else
{
obj* x_953; obj* x_955; obj* x_956; obj* x_958; obj* x_960; obj* x_961; obj* x_962; obj* x_963; 
x_953 = lean::cnstr_get(x_946, 0);
if (lean::is_exclusive(x_946)) {
 lean::cnstr_set(x_946, 0, lean::box(0));
 x_955 = x_946;
} else {
 lean::inc(x_953);
 lean::dec(x_946);
 x_955 = lean::box(0);
}
x_956 = lean::cnstr_get(x_953, 0);
x_958 = lean::cnstr_get(x_953, 1);
if (lean::is_exclusive(x_953)) {
 lean::cnstr_set(x_953, 0, lean::box(0));
 lean::cnstr_set(x_953, 1, lean::box(0));
 x_960 = x_953;
} else {
 lean::inc(x_956);
 lean::inc(x_958);
 lean::dec(x_953);
 x_960 = lean::box(0);
}
x_961 = l_Lean_Elaborator_toPexpr___main___closed__31;
x_962 = l_Lean_Elaborator_Expr_mkAnnotation(x_961, x_956);
x_963 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_963) == 0)
{
obj* x_966; obj* x_967; 
lean::dec(x_2);
if (lean::is_scalar(x_960)) {
 x_966 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_966 = x_960;
}
lean::cnstr_set(x_966, 0, x_962);
lean::cnstr_set(x_966, 1, x_958);
if (lean::is_scalar(x_955)) {
 x_967 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_967 = x_955;
}
lean::cnstr_set(x_967, 0, x_966);
return x_967;
}
else
{
obj* x_968; obj* x_971; obj* x_974; obj* x_977; obj* x_978; obj* x_980; obj* x_981; obj* x_982; obj* x_983; obj* x_986; obj* x_987; obj* x_988; obj* x_989; obj* x_990; 
x_968 = lean::cnstr_get(x_963, 0);
lean::inc(x_968);
lean::dec(x_963);
x_971 = lean::cnstr_get(x_2, 0);
lean::inc(x_971);
lean::dec(x_2);
x_974 = lean::cnstr_get(x_971, 2);
lean::inc(x_974);
lean::dec(x_971);
x_977 = l_Lean_FileMap_toPosition(x_974, x_968);
x_978 = lean::cnstr_get(x_977, 1);
lean::inc(x_978);
x_980 = lean::box(0);
x_981 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_982 = l_Lean_KVMap_setNat(x_980, x_981, x_978);
x_983 = lean::cnstr_get(x_977, 0);
lean::inc(x_983);
lean::dec(x_977);
x_986 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_987 = l_Lean_KVMap_setNat(x_982, x_986, x_983);
x_988 = lean_expr_mk_mdata(x_987, x_962);
if (lean::is_scalar(x_960)) {
 x_989 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_989 = x_960;
}
lean::cnstr_set(x_989, 0, x_988);
lean::cnstr_set(x_989, 1, x_958);
if (lean::is_scalar(x_955)) {
 x_990 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_990 = x_955;
}
lean::cnstr_set(x_990, 0, x_989);
return x_990;
}
}
}
}
else
{
obj* x_993; obj* x_994; obj* x_998; obj* x_999; obj* x_1003; 
lean::dec(x_8);
lean::dec(x_10);
x_993 = l_Lean_Parser_Term_inaccessible_HasView;
x_994 = lean::cnstr_get(x_993, 0);
lean::inc(x_994);
lean::dec(x_993);
lean::inc(x_0);
x_998 = lean::apply_1(x_994, x_0);
x_999 = lean::cnstr_get(x_998, 1);
lean::inc(x_999);
lean::dec(x_998);
lean::inc(x_2);
x_1003 = l_Lean_Elaborator_toPexpr___main(x_999, x_1, x_2, x_3);
if (lean::obj_tag(x_1003) == 0)
{
obj* x_1006; obj* x_1008; obj* x_1009; 
lean::dec(x_0);
lean::dec(x_2);
x_1006 = lean::cnstr_get(x_1003, 0);
if (lean::is_exclusive(x_1003)) {
 x_1008 = x_1003;
} else {
 lean::inc(x_1006);
 lean::dec(x_1003);
 x_1008 = lean::box(0);
}
if (lean::is_scalar(x_1008)) {
 x_1009 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1009 = x_1008;
}
lean::cnstr_set(x_1009, 0, x_1006);
return x_1009;
}
else
{
obj* x_1010; obj* x_1012; obj* x_1013; obj* x_1015; obj* x_1017; obj* x_1018; obj* x_1019; obj* x_1020; 
x_1010 = lean::cnstr_get(x_1003, 0);
if (lean::is_exclusive(x_1003)) {
 lean::cnstr_set(x_1003, 0, lean::box(0));
 x_1012 = x_1003;
} else {
 lean::inc(x_1010);
 lean::dec(x_1003);
 x_1012 = lean::box(0);
}
x_1013 = lean::cnstr_get(x_1010, 0);
x_1015 = lean::cnstr_get(x_1010, 1);
if (lean::is_exclusive(x_1010)) {
 lean::cnstr_set(x_1010, 0, lean::box(0));
 lean::cnstr_set(x_1010, 1, lean::box(0));
 x_1017 = x_1010;
} else {
 lean::inc(x_1013);
 lean::inc(x_1015);
 lean::dec(x_1010);
 x_1017 = lean::box(0);
}
x_1018 = l_Lean_Elaborator_toPexpr___main___closed__32;
x_1019 = l_Lean_Elaborator_Expr_mkAnnotation(x_1018, x_1013);
x_1020 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_1020) == 0)
{
obj* x_1023; obj* x_1024; 
lean::dec(x_2);
if (lean::is_scalar(x_1017)) {
 x_1023 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1023 = x_1017;
}
lean::cnstr_set(x_1023, 0, x_1019);
lean::cnstr_set(x_1023, 1, x_1015);
if (lean::is_scalar(x_1012)) {
 x_1024 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1024 = x_1012;
}
lean::cnstr_set(x_1024, 0, x_1023);
return x_1024;
}
else
{
obj* x_1025; obj* x_1028; obj* x_1031; obj* x_1034; obj* x_1035; obj* x_1037; obj* x_1038; obj* x_1039; obj* x_1040; obj* x_1043; obj* x_1044; obj* x_1045; obj* x_1046; obj* x_1047; 
x_1025 = lean::cnstr_get(x_1020, 0);
lean::inc(x_1025);
lean::dec(x_1020);
x_1028 = lean::cnstr_get(x_2, 0);
lean::inc(x_1028);
lean::dec(x_2);
x_1031 = lean::cnstr_get(x_1028, 2);
lean::inc(x_1031);
lean::dec(x_1028);
x_1034 = l_Lean_FileMap_toPosition(x_1031, x_1025);
x_1035 = lean::cnstr_get(x_1034, 1);
lean::inc(x_1035);
x_1037 = lean::box(0);
x_1038 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_1039 = l_Lean_KVMap_setNat(x_1037, x_1038, x_1035);
x_1040 = lean::cnstr_get(x_1034, 0);
lean::inc(x_1040);
lean::dec(x_1034);
x_1043 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_1044 = l_Lean_KVMap_setNat(x_1039, x_1043, x_1040);
x_1045 = lean_expr_mk_mdata(x_1044, x_1019);
if (lean::is_scalar(x_1017)) {
 x_1046 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1046 = x_1017;
}
lean::cnstr_set(x_1046, 0, x_1045);
lean::cnstr_set(x_1046, 1, x_1015);
if (lean::is_scalar(x_1012)) {
 x_1047 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1047 = x_1012;
}
lean::cnstr_set(x_1047, 0, x_1046);
return x_1047;
}
}
}
}
else
{
obj* x_1050; obj* x_1051; obj* x_1055; obj* x_1056; obj* x_1058; obj* x_1059; obj* x_1062; obj* x_1065; 
lean::dec(x_8);
lean::dec(x_10);
x_1050 = l_Lean_Parser_Term_explicit_HasView;
x_1051 = lean::cnstr_get(x_1050, 0);
lean::inc(x_1051);
lean::dec(x_1050);
lean::inc(x_0);
x_1055 = lean::apply_1(x_1051, x_0);
x_1056 = lean::cnstr_get(x_1055, 0);
lean::inc(x_1056);
x_1058 = l_Lean_Parser_identUnivs_HasView;
x_1059 = lean::cnstr_get(x_1058, 1);
lean::inc(x_1059);
lean::dec(x_1058);
x_1062 = lean::cnstr_get(x_1055, 1);
lean::inc(x_1062);
lean::dec(x_1055);
x_1065 = lean::apply_1(x_1059, x_1062);
if (lean::obj_tag(x_1056) == 0)
{
obj* x_1068; 
lean::dec(x_1056);
lean::inc(x_2);
x_1068 = l_Lean_Elaborator_toPexpr___main(x_1065, x_1, x_2, x_3);
if (lean::obj_tag(x_1068) == 0)
{
obj* x_1071; obj* x_1073; obj* x_1074; 
lean::dec(x_0);
lean::dec(x_2);
x_1071 = lean::cnstr_get(x_1068, 0);
if (lean::is_exclusive(x_1068)) {
 x_1073 = x_1068;
} else {
 lean::inc(x_1071);
 lean::dec(x_1068);
 x_1073 = lean::box(0);
}
if (lean::is_scalar(x_1073)) {
 x_1074 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1074 = x_1073;
}
lean::cnstr_set(x_1074, 0, x_1071);
return x_1074;
}
else
{
obj* x_1075; obj* x_1077; obj* x_1078; obj* x_1080; obj* x_1082; obj* x_1083; obj* x_1084; obj* x_1085; 
x_1075 = lean::cnstr_get(x_1068, 0);
if (lean::is_exclusive(x_1068)) {
 lean::cnstr_set(x_1068, 0, lean::box(0));
 x_1077 = x_1068;
} else {
 lean::inc(x_1075);
 lean::dec(x_1068);
 x_1077 = lean::box(0);
}
x_1078 = lean::cnstr_get(x_1075, 0);
x_1080 = lean::cnstr_get(x_1075, 1);
if (lean::is_exclusive(x_1075)) {
 lean::cnstr_set(x_1075, 0, lean::box(0));
 lean::cnstr_set(x_1075, 1, lean::box(0));
 x_1082 = x_1075;
} else {
 lean::inc(x_1078);
 lean::inc(x_1080);
 lean::dec(x_1075);
 x_1082 = lean::box(0);
}
x_1083 = l_List_map___main___at_Lean_Elaborator_mkEqns___spec__1___closed__1;
x_1084 = l_Lean_Elaborator_Expr_mkAnnotation(x_1083, x_1078);
x_1085 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_1085) == 0)
{
obj* x_1088; obj* x_1089; 
lean::dec(x_2);
if (lean::is_scalar(x_1082)) {
 x_1088 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1088 = x_1082;
}
lean::cnstr_set(x_1088, 0, x_1084);
lean::cnstr_set(x_1088, 1, x_1080);
if (lean::is_scalar(x_1077)) {
 x_1089 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1089 = x_1077;
}
lean::cnstr_set(x_1089, 0, x_1088);
return x_1089;
}
else
{
obj* x_1090; obj* x_1093; obj* x_1096; obj* x_1099; obj* x_1100; obj* x_1102; obj* x_1103; obj* x_1104; obj* x_1105; obj* x_1108; obj* x_1109; obj* x_1110; obj* x_1111; obj* x_1112; 
x_1090 = lean::cnstr_get(x_1085, 0);
lean::inc(x_1090);
lean::dec(x_1085);
x_1093 = lean::cnstr_get(x_2, 0);
lean::inc(x_1093);
lean::dec(x_2);
x_1096 = lean::cnstr_get(x_1093, 2);
lean::inc(x_1096);
lean::dec(x_1093);
x_1099 = l_Lean_FileMap_toPosition(x_1096, x_1090);
x_1100 = lean::cnstr_get(x_1099, 1);
lean::inc(x_1100);
x_1102 = lean::box(0);
x_1103 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_1104 = l_Lean_KVMap_setNat(x_1102, x_1103, x_1100);
x_1105 = lean::cnstr_get(x_1099, 0);
lean::inc(x_1105);
lean::dec(x_1099);
x_1108 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_1109 = l_Lean_KVMap_setNat(x_1104, x_1108, x_1105);
x_1110 = lean_expr_mk_mdata(x_1109, x_1084);
if (lean::is_scalar(x_1082)) {
 x_1111 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1111 = x_1082;
}
lean::cnstr_set(x_1111, 0, x_1110);
lean::cnstr_set(x_1111, 1, x_1080);
if (lean::is_scalar(x_1077)) {
 x_1112 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1112 = x_1077;
}
lean::cnstr_set(x_1112, 0, x_1111);
return x_1112;
}
}
}
else
{
obj* x_1115; 
lean::dec(x_1056);
lean::inc(x_2);
x_1115 = l_Lean_Elaborator_toPexpr___main(x_1065, x_1, x_2, x_3);
if (lean::obj_tag(x_1115) == 0)
{
obj* x_1118; obj* x_1120; obj* x_1121; 
lean::dec(x_0);
lean::dec(x_2);
x_1118 = lean::cnstr_get(x_1115, 0);
if (lean::is_exclusive(x_1115)) {
 x_1120 = x_1115;
} else {
 lean::inc(x_1118);
 lean::dec(x_1115);
 x_1120 = lean::box(0);
}
if (lean::is_scalar(x_1120)) {
 x_1121 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1121 = x_1120;
}
lean::cnstr_set(x_1121, 0, x_1118);
return x_1121;
}
else
{
obj* x_1122; obj* x_1124; obj* x_1125; obj* x_1127; obj* x_1129; obj* x_1130; obj* x_1131; obj* x_1132; 
x_1122 = lean::cnstr_get(x_1115, 0);
if (lean::is_exclusive(x_1115)) {
 lean::cnstr_set(x_1115, 0, lean::box(0));
 x_1124 = x_1115;
} else {
 lean::inc(x_1122);
 lean::dec(x_1115);
 x_1124 = lean::box(0);
}
x_1125 = lean::cnstr_get(x_1122, 0);
x_1127 = lean::cnstr_get(x_1122, 1);
if (lean::is_exclusive(x_1122)) {
 lean::cnstr_set(x_1122, 0, lean::box(0));
 lean::cnstr_set(x_1122, 1, lean::box(0));
 x_1129 = x_1122;
} else {
 lean::inc(x_1125);
 lean::inc(x_1127);
 lean::dec(x_1122);
 x_1129 = lean::box(0);
}
x_1130 = l_Lean_Elaborator_toPexpr___main___closed__33;
x_1131 = l_Lean_Elaborator_Expr_mkAnnotation(x_1130, x_1125);
x_1132 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_1132) == 0)
{
obj* x_1135; obj* x_1136; 
lean::dec(x_2);
if (lean::is_scalar(x_1129)) {
 x_1135 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1135 = x_1129;
}
lean::cnstr_set(x_1135, 0, x_1131);
lean::cnstr_set(x_1135, 1, x_1127);
if (lean::is_scalar(x_1124)) {
 x_1136 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1136 = x_1124;
}
lean::cnstr_set(x_1136, 0, x_1135);
return x_1136;
}
else
{
obj* x_1137; obj* x_1140; obj* x_1143; obj* x_1146; obj* x_1147; obj* x_1149; obj* x_1150; obj* x_1151; obj* x_1152; obj* x_1155; obj* x_1156; obj* x_1157; obj* x_1158; obj* x_1159; 
x_1137 = lean::cnstr_get(x_1132, 0);
lean::inc(x_1137);
lean::dec(x_1132);
x_1140 = lean::cnstr_get(x_2, 0);
lean::inc(x_1140);
lean::dec(x_2);
x_1143 = lean::cnstr_get(x_1140, 2);
lean::inc(x_1143);
lean::dec(x_1140);
x_1146 = l_Lean_FileMap_toPosition(x_1143, x_1137);
x_1147 = lean::cnstr_get(x_1146, 1);
lean::inc(x_1147);
x_1149 = lean::box(0);
x_1150 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_1151 = l_Lean_KVMap_setNat(x_1149, x_1150, x_1147);
x_1152 = lean::cnstr_get(x_1146, 0);
lean::inc(x_1152);
lean::dec(x_1146);
x_1155 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_1156 = l_Lean_KVMap_setNat(x_1151, x_1155, x_1152);
x_1157 = lean_expr_mk_mdata(x_1156, x_1131);
if (lean::is_scalar(x_1129)) {
 x_1158 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1158 = x_1129;
}
lean::cnstr_set(x_1158, 0, x_1157);
lean::cnstr_set(x_1158, 1, x_1127);
if (lean::is_scalar(x_1124)) {
 x_1159 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1159 = x_1124;
}
lean::cnstr_set(x_1159, 0, x_1158);
return x_1159;
}
}
}
}
}
else
{
obj* x_1162; obj* x_1163; obj* x_1167; obj* x_1168; 
lean::dec(x_8);
lean::dec(x_10);
x_1162 = l_Lean_Parser_Term_projection_HasView;
x_1163 = lean::cnstr_get(x_1162, 0);
lean::inc(x_1163);
lean::dec(x_1162);
lean::inc(x_0);
x_1167 = lean::apply_1(x_1163, x_0);
x_1168 = lean::cnstr_get(x_1167, 2);
lean::inc(x_1168);
if (lean::obj_tag(x_1168) == 0)
{
obj* x_1170; obj* x_1173; obj* x_1177; 
x_1170 = lean::cnstr_get(x_1167, 0);
lean::inc(x_1170);
lean::dec(x_1167);
x_1173 = lean::cnstr_get(x_1168, 0);
lean::inc(x_1173);
lean::dec(x_1168);
lean::inc(x_2);
x_1177 = l_Lean_Elaborator_toPexpr___main(x_1170, x_1, x_2, x_3);
if (lean::obj_tag(x_1177) == 0)
{
obj* x_1181; obj* x_1183; obj* x_1184; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_1173);
x_1181 = lean::cnstr_get(x_1177, 0);
if (lean::is_exclusive(x_1177)) {
 x_1183 = x_1177;
} else {
 lean::inc(x_1181);
 lean::dec(x_1177);
 x_1183 = lean::box(0);
}
if (lean::is_scalar(x_1183)) {
 x_1184 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1184 = x_1183;
}
lean::cnstr_set(x_1184, 0, x_1181);
return x_1184;
}
else
{
obj* x_1185; obj* x_1187; obj* x_1188; obj* x_1190; obj* x_1192; obj* x_1193; obj* x_1196; obj* x_1197; obj* x_1198; obj* x_1199; obj* x_1200; obj* x_1201; 
x_1185 = lean::cnstr_get(x_1177, 0);
if (lean::is_exclusive(x_1177)) {
 lean::cnstr_set(x_1177, 0, lean::box(0));
 x_1187 = x_1177;
} else {
 lean::inc(x_1185);
 lean::dec(x_1177);
 x_1187 = lean::box(0);
}
x_1188 = lean::cnstr_get(x_1185, 0);
x_1190 = lean::cnstr_get(x_1185, 1);
if (lean::is_exclusive(x_1185)) {
 lean::cnstr_set(x_1185, 0, lean::box(0));
 lean::cnstr_set(x_1185, 1, lean::box(0));
 x_1192 = x_1185;
} else {
 lean::inc(x_1188);
 lean::inc(x_1190);
 lean::dec(x_1185);
 x_1192 = lean::box(0);
}
x_1193 = lean::cnstr_get(x_1173, 2);
lean::inc(x_1193);
lean::dec(x_1173);
x_1196 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1196, 0, x_1193);
x_1197 = lean::box(0);
x_1198 = l_Lean_Elaborator_toPexpr___main___closed__34;
x_1199 = l_Lean_KVMap_insertCore___main(x_1197, x_1198, x_1196);
x_1200 = lean_expr_mk_mdata(x_1199, x_1188);
x_1201 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_1201) == 0)
{
obj* x_1204; obj* x_1205; 
lean::dec(x_2);
if (lean::is_scalar(x_1192)) {
 x_1204 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1204 = x_1192;
}
lean::cnstr_set(x_1204, 0, x_1200);
lean::cnstr_set(x_1204, 1, x_1190);
if (lean::is_scalar(x_1187)) {
 x_1205 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1205 = x_1187;
}
lean::cnstr_set(x_1205, 0, x_1204);
return x_1205;
}
else
{
obj* x_1206; obj* x_1209; obj* x_1212; obj* x_1215; obj* x_1216; obj* x_1218; obj* x_1219; obj* x_1220; obj* x_1223; obj* x_1224; obj* x_1225; obj* x_1226; obj* x_1227; 
x_1206 = lean::cnstr_get(x_1201, 0);
lean::inc(x_1206);
lean::dec(x_1201);
x_1209 = lean::cnstr_get(x_2, 0);
lean::inc(x_1209);
lean::dec(x_2);
x_1212 = lean::cnstr_get(x_1209, 2);
lean::inc(x_1212);
lean::dec(x_1209);
x_1215 = l_Lean_FileMap_toPosition(x_1212, x_1206);
x_1216 = lean::cnstr_get(x_1215, 1);
lean::inc(x_1216);
x_1218 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_1219 = l_Lean_KVMap_setNat(x_1197, x_1218, x_1216);
x_1220 = lean::cnstr_get(x_1215, 0);
lean::inc(x_1220);
lean::dec(x_1215);
x_1223 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_1224 = l_Lean_KVMap_setNat(x_1219, x_1223, x_1220);
x_1225 = lean_expr_mk_mdata(x_1224, x_1200);
if (lean::is_scalar(x_1192)) {
 x_1226 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1226 = x_1192;
}
lean::cnstr_set(x_1226, 0, x_1225);
lean::cnstr_set(x_1226, 1, x_1190);
if (lean::is_scalar(x_1187)) {
 x_1227 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1227 = x_1187;
}
lean::cnstr_set(x_1227, 0, x_1226);
return x_1227;
}
}
}
else
{
obj* x_1228; obj* x_1231; obj* x_1235; 
x_1228 = lean::cnstr_get(x_1167, 0);
lean::inc(x_1228);
lean::dec(x_1167);
x_1231 = lean::cnstr_get(x_1168, 0);
lean::inc(x_1231);
lean::dec(x_1168);
lean::inc(x_2);
x_1235 = l_Lean_Elaborator_toPexpr___main(x_1228, x_1, x_2, x_3);
if (lean::obj_tag(x_1235) == 0)
{
obj* x_1239; obj* x_1241; obj* x_1242; 
lean::dec(x_1231);
lean::dec(x_0);
lean::dec(x_2);
x_1239 = lean::cnstr_get(x_1235, 0);
if (lean::is_exclusive(x_1235)) {
 x_1241 = x_1235;
} else {
 lean::inc(x_1239);
 lean::dec(x_1235);
 x_1241 = lean::box(0);
}
if (lean::is_scalar(x_1241)) {
 x_1242 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1242 = x_1241;
}
lean::cnstr_set(x_1242, 0, x_1239);
return x_1242;
}
else
{
obj* x_1243; obj* x_1245; obj* x_1246; obj* x_1248; obj* x_1250; obj* x_1251; obj* x_1252; obj* x_1253; obj* x_1254; obj* x_1255; obj* x_1256; obj* x_1257; 
x_1243 = lean::cnstr_get(x_1235, 0);
if (lean::is_exclusive(x_1235)) {
 lean::cnstr_set(x_1235, 0, lean::box(0));
 x_1245 = x_1235;
} else {
 lean::inc(x_1243);
 lean::dec(x_1235);
 x_1245 = lean::box(0);
}
x_1246 = lean::cnstr_get(x_1243, 0);
x_1248 = lean::cnstr_get(x_1243, 1);
if (lean::is_exclusive(x_1243)) {
 lean::cnstr_set(x_1243, 0, lean::box(0));
 lean::cnstr_set(x_1243, 1, lean::box(0));
 x_1250 = x_1243;
} else {
 lean::inc(x_1246);
 lean::inc(x_1248);
 lean::dec(x_1243);
 x_1250 = lean::box(0);
}
x_1251 = l_Lean_Parser_number_View_toNat___main(x_1231);
x_1252 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_1252, 0, x_1251);
x_1253 = lean::box(0);
x_1254 = l_Lean_Elaborator_toPexpr___main___closed__34;
x_1255 = l_Lean_KVMap_insertCore___main(x_1253, x_1254, x_1252);
x_1256 = lean_expr_mk_mdata(x_1255, x_1246);
x_1257 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_1257) == 0)
{
obj* x_1260; obj* x_1261; 
lean::dec(x_2);
if (lean::is_scalar(x_1250)) {
 x_1260 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1260 = x_1250;
}
lean::cnstr_set(x_1260, 0, x_1256);
lean::cnstr_set(x_1260, 1, x_1248);
if (lean::is_scalar(x_1245)) {
 x_1261 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1261 = x_1245;
}
lean::cnstr_set(x_1261, 0, x_1260);
return x_1261;
}
else
{
obj* x_1262; obj* x_1265; obj* x_1268; obj* x_1271; obj* x_1272; obj* x_1274; obj* x_1275; obj* x_1276; obj* x_1279; obj* x_1280; obj* x_1281; obj* x_1282; obj* x_1283; 
x_1262 = lean::cnstr_get(x_1257, 0);
lean::inc(x_1262);
lean::dec(x_1257);
x_1265 = lean::cnstr_get(x_2, 0);
lean::inc(x_1265);
lean::dec(x_2);
x_1268 = lean::cnstr_get(x_1265, 2);
lean::inc(x_1268);
lean::dec(x_1265);
x_1271 = l_Lean_FileMap_toPosition(x_1268, x_1262);
x_1272 = lean::cnstr_get(x_1271, 1);
lean::inc(x_1272);
x_1274 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_1275 = l_Lean_KVMap_setNat(x_1253, x_1274, x_1272);
x_1276 = lean::cnstr_get(x_1271, 0);
lean::inc(x_1276);
lean::dec(x_1271);
x_1279 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_1280 = l_Lean_KVMap_setNat(x_1275, x_1279, x_1276);
x_1281 = lean_expr_mk_mdata(x_1280, x_1256);
if (lean::is_scalar(x_1250)) {
 x_1282 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1282 = x_1250;
}
lean::cnstr_set(x_1282, 0, x_1281);
lean::cnstr_set(x_1282, 1, x_1248);
if (lean::is_scalar(x_1245)) {
 x_1283 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1283 = x_1245;
}
lean::cnstr_set(x_1283, 0, x_1282);
return x_1283;
}
}
}
}
}
else
{
obj* x_1285; obj* x_1286; obj* x_1290; obj* x_1291; 
lean::dec(x_10);
x_1285 = l_Lean_Parser_Term_let_HasView;
x_1286 = lean::cnstr_get(x_1285, 0);
lean::inc(x_1286);
lean::dec(x_1285);
lean::inc(x_0);
x_1290 = lean::apply_1(x_1286, x_0);
x_1291 = lean::cnstr_get(x_1290, 1);
lean::inc(x_1291);
if (lean::obj_tag(x_1291) == 0)
{
obj* x_1293; obj* x_1296; 
x_1293 = lean::cnstr_get(x_1291, 0);
lean::inc(x_1293);
lean::dec(x_1291);
x_1296 = lean::cnstr_get(x_1293, 1);
lean::inc(x_1296);
if (lean::obj_tag(x_1296) == 0)
{
obj* x_1298; 
x_1298 = lean::cnstr_get(x_1293, 2);
lean::inc(x_1298);
if (lean::obj_tag(x_1298) == 0)
{
obj* x_1303; obj* x_1304; obj* x_1306; 
lean::dec(x_1290);
lean::dec(x_1293);
lean::inc(x_0);
x_1303 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1303, 0, x_0);
x_1304 = l_Lean_Elaborator_toPexpr___main___closed__35;
lean::inc(x_2);
x_1306 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_1303, x_1304, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_1303);
if (lean::obj_tag(x_1306) == 0)
{
obj* x_1312; obj* x_1314; obj* x_1315; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
x_1312 = lean::cnstr_get(x_1306, 0);
if (lean::is_exclusive(x_1306)) {
 x_1314 = x_1306;
} else {
 lean::inc(x_1312);
 lean::dec(x_1306);
 x_1314 = lean::box(0);
}
if (lean::is_scalar(x_1314)) {
 x_1315 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1315 = x_1314;
}
lean::cnstr_set(x_1315, 0, x_1312);
return x_1315;
}
else
{
obj* x_1316; 
x_1316 = lean::cnstr_get(x_1306, 0);
lean::inc(x_1316);
lean::dec(x_1306);
x_15 = x_1316;
goto lbl_16;
}
}
else
{
obj* x_1319; obj* x_1322; obj* x_1325; obj* x_1329; 
x_1319 = lean::cnstr_get(x_1293, 0);
lean::inc(x_1319);
lean::dec(x_1293);
x_1322 = lean::cnstr_get(x_1298, 0);
lean::inc(x_1322);
lean::dec(x_1298);
x_1325 = lean::cnstr_get(x_1322, 1);
lean::inc(x_1325);
lean::dec(x_1322);
lean::inc(x_2);
x_1329 = l_Lean_Elaborator_toPexpr___main(x_1325, x_1, x_2, x_3);
if (lean::obj_tag(x_1329) == 0)
{
obj* x_1335; obj* x_1337; obj* x_1338; 
lean::dec(x_1290);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_1319);
x_1335 = lean::cnstr_get(x_1329, 0);
if (lean::is_exclusive(x_1329)) {
 x_1337 = x_1329;
} else {
 lean::inc(x_1335);
 lean::dec(x_1329);
 x_1337 = lean::box(0);
}
if (lean::is_scalar(x_1337)) {
 x_1338 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1338 = x_1337;
}
lean::cnstr_set(x_1338, 0, x_1335);
return x_1338;
}
else
{
obj* x_1339; obj* x_1342; obj* x_1344; obj* x_1347; obj* x_1350; 
x_1339 = lean::cnstr_get(x_1329, 0);
lean::inc(x_1339);
lean::dec(x_1329);
x_1342 = lean::cnstr_get(x_1339, 0);
lean::inc(x_1342);
x_1344 = lean::cnstr_get(x_1339, 1);
lean::inc(x_1344);
lean::dec(x_1339);
x_1347 = lean::cnstr_get(x_1290, 3);
lean::inc(x_1347);
lean::inc(x_2);
x_1350 = l_Lean_Elaborator_toPexpr___main(x_1347, x_1, x_2, x_1344);
if (lean::obj_tag(x_1350) == 0)
{
obj* x_1357; obj* x_1359; obj* x_1360; 
lean::dec(x_1290);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_1319);
lean::dec(x_1342);
x_1357 = lean::cnstr_get(x_1350, 0);
if (lean::is_exclusive(x_1350)) {
 x_1359 = x_1350;
} else {
 lean::inc(x_1357);
 lean::dec(x_1350);
 x_1359 = lean::box(0);
}
if (lean::is_scalar(x_1359)) {
 x_1360 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1360 = x_1359;
}
lean::cnstr_set(x_1360, 0, x_1357);
return x_1360;
}
else
{
obj* x_1361; obj* x_1364; obj* x_1366; obj* x_1369; obj* x_1373; 
x_1361 = lean::cnstr_get(x_1350, 0);
lean::inc(x_1361);
lean::dec(x_1350);
x_1364 = lean::cnstr_get(x_1361, 0);
lean::inc(x_1364);
x_1366 = lean::cnstr_get(x_1361, 1);
lean::inc(x_1366);
lean::dec(x_1361);
x_1369 = lean::cnstr_get(x_1290, 5);
lean::inc(x_1369);
lean::dec(x_1290);
lean::inc(x_2);
x_1373 = l_Lean_Elaborator_toPexpr___main(x_1369, x_1, x_2, x_1366);
if (lean::obj_tag(x_1373) == 0)
{
obj* x_1380; obj* x_1382; obj* x_1383; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_1319);
lean::dec(x_1364);
lean::dec(x_1342);
x_1380 = lean::cnstr_get(x_1373, 0);
if (lean::is_exclusive(x_1373)) {
 x_1382 = x_1373;
} else {
 lean::inc(x_1380);
 lean::dec(x_1373);
 x_1382 = lean::box(0);
}
if (lean::is_scalar(x_1382)) {
 x_1383 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1383 = x_1382;
}
lean::cnstr_set(x_1383, 0, x_1380);
return x_1383;
}
else
{
obj* x_1384; obj* x_1387; obj* x_1389; obj* x_1391; obj* x_1392; obj* x_1393; obj* x_1394; 
x_1384 = lean::cnstr_get(x_1373, 0);
lean::inc(x_1384);
lean::dec(x_1373);
x_1387 = lean::cnstr_get(x_1384, 0);
x_1389 = lean::cnstr_get(x_1384, 1);
if (lean::is_exclusive(x_1384)) {
 x_1391 = x_1384;
} else {
 lean::inc(x_1387);
 lean::inc(x_1389);
 lean::dec(x_1384);
 x_1391 = lean::box(0);
}
x_1392 = l_Lean_Elaborator_mangleIdent(x_1319);
x_1393 = lean_expr_mk_let(x_1392, x_1342, x_1364, x_1387);
if (lean::is_scalar(x_1391)) {
 x_1394 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1394 = x_1391;
}
lean::cnstr_set(x_1394, 0, x_1393);
lean::cnstr_set(x_1394, 1, x_1389);
x_15 = x_1394;
goto lbl_16;
}
}
}
}
}
else
{
obj* x_1399; obj* x_1400; obj* x_1402; 
lean::dec(x_1290);
lean::dec(x_1293);
lean::dec(x_1296);
lean::inc(x_0);
x_1399 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1399, 0, x_0);
x_1400 = l_Lean_Elaborator_toPexpr___main___closed__35;
lean::inc(x_2);
x_1402 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_1399, x_1400, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_1399);
if (lean::obj_tag(x_1402) == 0)
{
obj* x_1408; obj* x_1410; obj* x_1411; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
x_1408 = lean::cnstr_get(x_1402, 0);
if (lean::is_exclusive(x_1402)) {
 x_1410 = x_1402;
} else {
 lean::inc(x_1408);
 lean::dec(x_1402);
 x_1410 = lean::box(0);
}
if (lean::is_scalar(x_1410)) {
 x_1411 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1411 = x_1410;
}
lean::cnstr_set(x_1411, 0, x_1408);
return x_1411;
}
else
{
obj* x_1412; 
x_1412 = lean::cnstr_get(x_1402, 0);
lean::inc(x_1412);
lean::dec(x_1402);
x_15 = x_1412;
goto lbl_16;
}
}
}
else
{
obj* x_1418; obj* x_1419; obj* x_1421; 
lean::dec(x_1291);
lean::dec(x_1290);
lean::inc(x_0);
x_1418 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1418, 0, x_0);
x_1419 = l_Lean_Elaborator_toPexpr___main___closed__35;
lean::inc(x_2);
x_1421 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_1418, x_1419, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_1418);
if (lean::obj_tag(x_1421) == 0)
{
obj* x_1427; obj* x_1429; obj* x_1430; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
x_1427 = lean::cnstr_get(x_1421, 0);
if (lean::is_exclusive(x_1421)) {
 x_1429 = x_1421;
} else {
 lean::inc(x_1427);
 lean::dec(x_1421);
 x_1429 = lean::box(0);
}
if (lean::is_scalar(x_1429)) {
 x_1430 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1430 = x_1429;
}
lean::cnstr_set(x_1430, 0, x_1427);
return x_1430;
}
else
{
obj* x_1431; 
x_1431 = lean::cnstr_get(x_1421, 0);
lean::inc(x_1431);
lean::dec(x_1421);
x_15 = x_1431;
goto lbl_16;
}
}
}
}
else
{
obj* x_1436; obj* x_1437; obj* x_1441; obj* x_1442; obj* x_1445; 
lean::dec(x_8);
lean::dec(x_10);
x_1436 = l_Lean_Parser_Term_show_HasView;
x_1437 = lean::cnstr_get(x_1436, 0);
lean::inc(x_1437);
lean::dec(x_1436);
lean::inc(x_0);
x_1441 = lean::apply_1(x_1437, x_0);
x_1442 = lean::cnstr_get(x_1441, 1);
lean::inc(x_1442);
lean::inc(x_2);
x_1445 = l_Lean_Elaborator_toPexpr___main(x_1442, x_1, x_2, x_3);
if (lean::obj_tag(x_1445) == 0)
{
obj* x_1449; obj* x_1451; obj* x_1452; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_1441);
x_1449 = lean::cnstr_get(x_1445, 0);
if (lean::is_exclusive(x_1445)) {
 x_1451 = x_1445;
} else {
 lean::inc(x_1449);
 lean::dec(x_1445);
 x_1451 = lean::box(0);
}
if (lean::is_scalar(x_1451)) {
 x_1452 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1452 = x_1451;
}
lean::cnstr_set(x_1452, 0, x_1449);
return x_1452;
}
else
{
obj* x_1453; obj* x_1456; obj* x_1458; obj* x_1461; obj* x_1464; obj* x_1468; 
x_1453 = lean::cnstr_get(x_1445, 0);
lean::inc(x_1453);
lean::dec(x_1445);
x_1456 = lean::cnstr_get(x_1453, 0);
lean::inc(x_1456);
x_1458 = lean::cnstr_get(x_1453, 1);
lean::inc(x_1458);
lean::dec(x_1453);
x_1461 = lean::cnstr_get(x_1441, 3);
lean::inc(x_1461);
lean::dec(x_1441);
x_1464 = lean::cnstr_get(x_1461, 1);
lean::inc(x_1464);
lean::dec(x_1461);
lean::inc(x_2);
x_1468 = l_Lean_Elaborator_toPexpr___main(x_1464, x_1, x_2, x_1458);
if (lean::obj_tag(x_1468) == 0)
{
obj* x_1472; obj* x_1474; obj* x_1475; 
lean::dec(x_1456);
lean::dec(x_0);
lean::dec(x_2);
x_1472 = lean::cnstr_get(x_1468, 0);
if (lean::is_exclusive(x_1468)) {
 x_1474 = x_1468;
} else {
 lean::inc(x_1472);
 lean::dec(x_1468);
 x_1474 = lean::box(0);
}
if (lean::is_scalar(x_1474)) {
 x_1475 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1475 = x_1474;
}
lean::cnstr_set(x_1475, 0, x_1472);
return x_1475;
}
else
{
obj* x_1476; obj* x_1478; obj* x_1479; obj* x_1481; obj* x_1483; obj* x_1484; uint8 x_1485; obj* x_1486; obj* x_1487; obj* x_1488; obj* x_1489; obj* x_1490; obj* x_1491; 
x_1476 = lean::cnstr_get(x_1468, 0);
if (lean::is_exclusive(x_1468)) {
 lean::cnstr_set(x_1468, 0, lean::box(0));
 x_1478 = x_1468;
} else {
 lean::inc(x_1476);
 lean::dec(x_1468);
 x_1478 = lean::box(0);
}
x_1479 = lean::cnstr_get(x_1476, 0);
x_1481 = lean::cnstr_get(x_1476, 1);
if (lean::is_exclusive(x_1476)) {
 lean::cnstr_set(x_1476, 0, lean::box(0));
 lean::cnstr_set(x_1476, 1, lean::box(0));
 x_1483 = x_1476;
} else {
 lean::inc(x_1479);
 lean::inc(x_1481);
 lean::dec(x_1476);
 x_1483 = lean::box(0);
}
x_1484 = l_Lean_Elaborator_toPexpr___main___closed__36;
x_1485 = 0;
x_1486 = l_Lean_Elaborator_toPexpr___main___closed__37;
x_1487 = lean_expr_mk_lambda(x_1484, x_1485, x_1456, x_1486);
x_1488 = lean_expr_mk_app(x_1487, x_1479);
x_1489 = l_Lean_Elaborator_toPexpr___main___closed__38;
x_1490 = l_Lean_Elaborator_Expr_mkAnnotation(x_1489, x_1488);
x_1491 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_1491) == 0)
{
obj* x_1494; obj* x_1495; 
lean::dec(x_2);
if (lean::is_scalar(x_1483)) {
 x_1494 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1494 = x_1483;
}
lean::cnstr_set(x_1494, 0, x_1490);
lean::cnstr_set(x_1494, 1, x_1481);
if (lean::is_scalar(x_1478)) {
 x_1495 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1495 = x_1478;
}
lean::cnstr_set(x_1495, 0, x_1494);
return x_1495;
}
else
{
obj* x_1496; obj* x_1499; obj* x_1502; obj* x_1505; obj* x_1506; obj* x_1508; obj* x_1509; obj* x_1510; obj* x_1511; obj* x_1514; obj* x_1515; obj* x_1516; obj* x_1517; obj* x_1518; 
x_1496 = lean::cnstr_get(x_1491, 0);
lean::inc(x_1496);
lean::dec(x_1491);
x_1499 = lean::cnstr_get(x_2, 0);
lean::inc(x_1499);
lean::dec(x_2);
x_1502 = lean::cnstr_get(x_1499, 2);
lean::inc(x_1502);
lean::dec(x_1499);
x_1505 = l_Lean_FileMap_toPosition(x_1502, x_1496);
x_1506 = lean::cnstr_get(x_1505, 1);
lean::inc(x_1506);
x_1508 = lean::box(0);
x_1509 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_1510 = l_Lean_KVMap_setNat(x_1508, x_1509, x_1506);
x_1511 = lean::cnstr_get(x_1505, 0);
lean::inc(x_1511);
lean::dec(x_1505);
x_1514 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_1515 = l_Lean_KVMap_setNat(x_1510, x_1514, x_1511);
x_1516 = lean_expr_mk_mdata(x_1515, x_1490);
if (lean::is_scalar(x_1483)) {
 x_1517 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1517 = x_1483;
}
lean::cnstr_set(x_1517, 0, x_1516);
lean::cnstr_set(x_1517, 1, x_1481);
if (lean::is_scalar(x_1478)) {
 x_1518 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1518 = x_1478;
}
lean::cnstr_set(x_1518, 0, x_1517);
return x_1518;
}
}
}
}
}
else
{
obj* x_1520; obj* x_1521; obj* x_1525; obj* x_1526; 
lean::dec(x_10);
x_1520 = l_Lean_Parser_Term_have_HasView;
x_1521 = lean::cnstr_get(x_1520, 0);
lean::inc(x_1521);
lean::dec(x_1520);
lean::inc(x_0);
x_1525 = lean::apply_1(x_1521, x_0);
x_1526 = lean::cnstr_get(x_1525, 1);
lean::inc(x_1526);
if (lean::obj_tag(x_1526) == 0)
{
obj* x_1528; obj* x_1530; obj* x_1533; 
x_1528 = lean::cnstr_get(x_1525, 2);
lean::inc(x_1528);
x_1530 = lean::cnstr_get(x_1525, 5);
lean::inc(x_1530);
lean::inc(x_2);
x_1533 = l_Lean_Elaborator_toPexpr___main(x_1528, x_1, x_2, x_3);
if (lean::obj_tag(x_1533) == 0)
{
obj* x_1539; obj* x_1541; obj* x_1542; 
lean::dec(x_1525);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_1530);
x_1539 = lean::cnstr_get(x_1533, 0);
if (lean::is_exclusive(x_1533)) {
 x_1541 = x_1533;
} else {
 lean::inc(x_1539);
 lean::dec(x_1533);
 x_1541 = lean::box(0);
}
if (lean::is_scalar(x_1541)) {
 x_1542 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1542 = x_1541;
}
lean::cnstr_set(x_1542, 0, x_1539);
return x_1542;
}
else
{
obj* x_1543; obj* x_1546; obj* x_1548; obj* x_1552; 
x_1543 = lean::cnstr_get(x_1533, 0);
lean::inc(x_1543);
lean::dec(x_1533);
x_1546 = lean::cnstr_get(x_1543, 0);
lean::inc(x_1546);
x_1548 = lean::cnstr_get(x_1543, 1);
lean::inc(x_1548);
lean::dec(x_1543);
lean::inc(x_2);
x_1552 = l_Lean_Elaborator_toPexpr___main(x_1530, x_1, x_2, x_1548);
if (lean::obj_tag(x_1552) == 0)
{
obj* x_1558; obj* x_1560; obj* x_1561; 
lean::dec(x_1525);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_1546);
lean::dec(x_2);
x_1558 = lean::cnstr_get(x_1552, 0);
if (lean::is_exclusive(x_1552)) {
 x_1560 = x_1552;
} else {
 lean::inc(x_1558);
 lean::dec(x_1552);
 x_1560 = lean::box(0);
}
if (lean::is_scalar(x_1560)) {
 x_1561 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1561 = x_1560;
}
lean::cnstr_set(x_1561, 0, x_1558);
return x_1561;
}
else
{
obj* x_1562; obj* x_1565; obj* x_1567; obj* x_1570; uint8 x_1571; obj* x_1572; obj* x_1573; 
x_1562 = lean::cnstr_get(x_1552, 0);
lean::inc(x_1562);
lean::dec(x_1552);
x_1565 = lean::cnstr_get(x_1562, 0);
lean::inc(x_1565);
x_1567 = lean::cnstr_get(x_1562, 1);
lean::inc(x_1567);
lean::dec(x_1562);
x_1570 = l_Lean_Elaborator_toPexpr___main___closed__36;
x_1571 = 0;
x_1572 = lean_expr_mk_lambda(x_1570, x_1571, x_1546, x_1565);
x_1573 = lean::cnstr_get(x_1525, 3);
lean::inc(x_1573);
lean::dec(x_1525);
if (lean::obj_tag(x_1573) == 0)
{
obj* x_1576; obj* x_1579; obj* x_1583; 
x_1576 = lean::cnstr_get(x_1573, 0);
lean::inc(x_1576);
lean::dec(x_1573);
x_1579 = lean::cnstr_get(x_1576, 1);
lean::inc(x_1579);
lean::dec(x_1576);
lean::inc(x_2);
x_1583 = l_Lean_Elaborator_toPexpr___main(x_1579, x_1, x_2, x_1567);
if (lean::obj_tag(x_1583) == 0)
{
obj* x_1588; obj* x_1590; obj* x_1591; 
lean::dec(x_1572);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
x_1588 = lean::cnstr_get(x_1583, 0);
if (lean::is_exclusive(x_1583)) {
 x_1590 = x_1583;
} else {
 lean::inc(x_1588);
 lean::dec(x_1583);
 x_1590 = lean::box(0);
}
if (lean::is_scalar(x_1590)) {
 x_1591 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1591 = x_1590;
}
lean::cnstr_set(x_1591, 0, x_1588);
return x_1591;
}
else
{
obj* x_1592; obj* x_1595; obj* x_1597; obj* x_1599; obj* x_1600; obj* x_1601; obj* x_1602; obj* x_1603; 
x_1592 = lean::cnstr_get(x_1583, 0);
lean::inc(x_1592);
lean::dec(x_1583);
x_1595 = lean::cnstr_get(x_1592, 0);
x_1597 = lean::cnstr_get(x_1592, 1);
if (lean::is_exclusive(x_1592)) {
 x_1599 = x_1592;
} else {
 lean::inc(x_1595);
 lean::inc(x_1597);
 lean::dec(x_1592);
 x_1599 = lean::box(0);
}
x_1600 = l_Lean_Elaborator_toPexpr___main___closed__39;
x_1601 = l_Lean_Elaborator_Expr_mkAnnotation(x_1600, x_1572);
x_1602 = lean_expr_mk_app(x_1601, x_1595);
if (lean::is_scalar(x_1599)) {
 x_1603 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1603 = x_1599;
}
lean::cnstr_set(x_1603, 0, x_1602);
lean::cnstr_set(x_1603, 1, x_1597);
x_15 = x_1603;
goto lbl_16;
}
}
else
{
obj* x_1604; obj* x_1607; obj* x_1610; obj* x_1614; 
x_1604 = lean::cnstr_get(x_1573, 0);
lean::inc(x_1604);
lean::dec(x_1573);
x_1607 = lean::cnstr_get(x_1604, 1);
lean::inc(x_1607);
lean::dec(x_1604);
x_1610 = lean::cnstr_get(x_1607, 1);
lean::inc(x_1610);
lean::dec(x_1607);
lean::inc(x_2);
x_1614 = l_Lean_Elaborator_toPexpr___main(x_1610, x_1, x_2, x_1567);
if (lean::obj_tag(x_1614) == 0)
{
obj* x_1619; obj* x_1621; obj* x_1622; 
lean::dec(x_1572);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
x_1619 = lean::cnstr_get(x_1614, 0);
if (lean::is_exclusive(x_1614)) {
 x_1621 = x_1614;
} else {
 lean::inc(x_1619);
 lean::dec(x_1614);
 x_1621 = lean::box(0);
}
if (lean::is_scalar(x_1621)) {
 x_1622 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1622 = x_1621;
}
lean::cnstr_set(x_1622, 0, x_1619);
return x_1622;
}
else
{
obj* x_1623; obj* x_1626; obj* x_1628; obj* x_1630; obj* x_1631; obj* x_1632; obj* x_1633; obj* x_1634; 
x_1623 = lean::cnstr_get(x_1614, 0);
lean::inc(x_1623);
lean::dec(x_1614);
x_1626 = lean::cnstr_get(x_1623, 0);
x_1628 = lean::cnstr_get(x_1623, 1);
if (lean::is_exclusive(x_1623)) {
 x_1630 = x_1623;
} else {
 lean::inc(x_1626);
 lean::inc(x_1628);
 lean::dec(x_1623);
 x_1630 = lean::box(0);
}
x_1631 = l_Lean_Elaborator_toPexpr___main___closed__39;
x_1632 = l_Lean_Elaborator_Expr_mkAnnotation(x_1631, x_1572);
x_1633 = lean_expr_mk_app(x_1632, x_1626);
if (lean::is_scalar(x_1630)) {
 x_1634 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1634 = x_1630;
}
lean::cnstr_set(x_1634, 0, x_1633);
lean::cnstr_set(x_1634, 1, x_1628);
x_15 = x_1634;
goto lbl_16;
}
}
}
}
}
else
{
obj* x_1635; obj* x_1637; obj* x_1639; obj* x_1643; 
x_1635 = lean::cnstr_get(x_1525, 2);
lean::inc(x_1635);
x_1637 = lean::cnstr_get(x_1525, 5);
lean::inc(x_1637);
x_1639 = lean::cnstr_get(x_1526, 0);
lean::inc(x_1639);
lean::dec(x_1526);
lean::inc(x_2);
x_1643 = l_Lean_Elaborator_toPexpr___main(x_1635, x_1, x_2, x_3);
if (lean::obj_tag(x_1643) == 0)
{
obj* x_1650; obj* x_1652; obj* x_1653; 
lean::dec(x_1525);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_1637);
lean::dec(x_1639);
x_1650 = lean::cnstr_get(x_1643, 0);
if (lean::is_exclusive(x_1643)) {
 x_1652 = x_1643;
} else {
 lean::inc(x_1650);
 lean::dec(x_1643);
 x_1652 = lean::box(0);
}
if (lean::is_scalar(x_1652)) {
 x_1653 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1653 = x_1652;
}
lean::cnstr_set(x_1653, 0, x_1650);
return x_1653;
}
else
{
obj* x_1654; obj* x_1657; obj* x_1659; obj* x_1663; 
x_1654 = lean::cnstr_get(x_1643, 0);
lean::inc(x_1654);
lean::dec(x_1643);
x_1657 = lean::cnstr_get(x_1654, 0);
lean::inc(x_1657);
x_1659 = lean::cnstr_get(x_1654, 1);
lean::inc(x_1659);
lean::dec(x_1654);
lean::inc(x_2);
x_1663 = l_Lean_Elaborator_toPexpr___main(x_1637, x_1, x_2, x_1659);
if (lean::obj_tag(x_1663) == 0)
{
obj* x_1670; obj* x_1672; obj* x_1673; 
lean::dec(x_1525);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_1639);
lean::dec(x_1657);
x_1670 = lean::cnstr_get(x_1663, 0);
if (lean::is_exclusive(x_1663)) {
 x_1672 = x_1663;
} else {
 lean::inc(x_1670);
 lean::dec(x_1663);
 x_1672 = lean::box(0);
}
if (lean::is_scalar(x_1672)) {
 x_1673 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1673 = x_1672;
}
lean::cnstr_set(x_1673, 0, x_1670);
return x_1673;
}
else
{
obj* x_1674; obj* x_1677; obj* x_1679; obj* x_1682; obj* x_1685; uint8 x_1686; obj* x_1687; obj* x_1688; 
x_1674 = lean::cnstr_get(x_1663, 0);
lean::inc(x_1674);
lean::dec(x_1663);
x_1677 = lean::cnstr_get(x_1674, 0);
lean::inc(x_1677);
x_1679 = lean::cnstr_get(x_1674, 1);
lean::inc(x_1679);
lean::dec(x_1674);
x_1682 = lean::cnstr_get(x_1639, 0);
lean::inc(x_1682);
lean::dec(x_1639);
x_1685 = l_Lean_Elaborator_mangleIdent(x_1682);
x_1686 = 0;
x_1687 = lean_expr_mk_lambda(x_1685, x_1686, x_1657, x_1677);
x_1688 = lean::cnstr_get(x_1525, 3);
lean::inc(x_1688);
lean::dec(x_1525);
if (lean::obj_tag(x_1688) == 0)
{
obj* x_1691; obj* x_1694; obj* x_1698; 
x_1691 = lean::cnstr_get(x_1688, 0);
lean::inc(x_1691);
lean::dec(x_1688);
x_1694 = lean::cnstr_get(x_1691, 1);
lean::inc(x_1694);
lean::dec(x_1691);
lean::inc(x_2);
x_1698 = l_Lean_Elaborator_toPexpr___main(x_1694, x_1, x_2, x_1679);
if (lean::obj_tag(x_1698) == 0)
{
obj* x_1703; obj* x_1705; obj* x_1706; 
lean::dec(x_1687);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
x_1703 = lean::cnstr_get(x_1698, 0);
if (lean::is_exclusive(x_1698)) {
 x_1705 = x_1698;
} else {
 lean::inc(x_1703);
 lean::dec(x_1698);
 x_1705 = lean::box(0);
}
if (lean::is_scalar(x_1705)) {
 x_1706 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1706 = x_1705;
}
lean::cnstr_set(x_1706, 0, x_1703);
return x_1706;
}
else
{
obj* x_1707; obj* x_1710; obj* x_1712; obj* x_1714; obj* x_1715; obj* x_1716; obj* x_1717; obj* x_1718; 
x_1707 = lean::cnstr_get(x_1698, 0);
lean::inc(x_1707);
lean::dec(x_1698);
x_1710 = lean::cnstr_get(x_1707, 0);
x_1712 = lean::cnstr_get(x_1707, 1);
if (lean::is_exclusive(x_1707)) {
 x_1714 = x_1707;
} else {
 lean::inc(x_1710);
 lean::inc(x_1712);
 lean::dec(x_1707);
 x_1714 = lean::box(0);
}
x_1715 = l_Lean_Elaborator_toPexpr___main___closed__39;
x_1716 = l_Lean_Elaborator_Expr_mkAnnotation(x_1715, x_1687);
x_1717 = lean_expr_mk_app(x_1716, x_1710);
if (lean::is_scalar(x_1714)) {
 x_1718 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1718 = x_1714;
}
lean::cnstr_set(x_1718, 0, x_1717);
lean::cnstr_set(x_1718, 1, x_1712);
x_15 = x_1718;
goto lbl_16;
}
}
else
{
obj* x_1719; obj* x_1722; obj* x_1725; obj* x_1729; 
x_1719 = lean::cnstr_get(x_1688, 0);
lean::inc(x_1719);
lean::dec(x_1688);
x_1722 = lean::cnstr_get(x_1719, 1);
lean::inc(x_1722);
lean::dec(x_1719);
x_1725 = lean::cnstr_get(x_1722, 1);
lean::inc(x_1725);
lean::dec(x_1722);
lean::inc(x_2);
x_1729 = l_Lean_Elaborator_toPexpr___main(x_1725, x_1, x_2, x_1679);
if (lean::obj_tag(x_1729) == 0)
{
obj* x_1734; obj* x_1736; obj* x_1737; 
lean::dec(x_1687);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
x_1734 = lean::cnstr_get(x_1729, 0);
if (lean::is_exclusive(x_1729)) {
 x_1736 = x_1729;
} else {
 lean::inc(x_1734);
 lean::dec(x_1729);
 x_1736 = lean::box(0);
}
if (lean::is_scalar(x_1736)) {
 x_1737 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1737 = x_1736;
}
lean::cnstr_set(x_1737, 0, x_1734);
return x_1737;
}
else
{
obj* x_1738; obj* x_1741; obj* x_1743; obj* x_1745; obj* x_1746; obj* x_1747; obj* x_1748; obj* x_1749; 
x_1738 = lean::cnstr_get(x_1729, 0);
lean::inc(x_1738);
lean::dec(x_1729);
x_1741 = lean::cnstr_get(x_1738, 0);
x_1743 = lean::cnstr_get(x_1738, 1);
if (lean::is_exclusive(x_1738)) {
 x_1745 = x_1738;
} else {
 lean::inc(x_1741);
 lean::inc(x_1743);
 lean::dec(x_1738);
 x_1745 = lean::box(0);
}
x_1746 = l_Lean_Elaborator_toPexpr___main___closed__39;
x_1747 = l_Lean_Elaborator_Expr_mkAnnotation(x_1746, x_1687);
x_1748 = lean_expr_mk_app(x_1747, x_1741);
if (lean::is_scalar(x_1745)) {
 x_1749 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1749 = x_1745;
}
lean::cnstr_set(x_1749, 0, x_1748);
lean::cnstr_set(x_1749, 1, x_1743);
x_15 = x_1749;
goto lbl_16;
}
}
}
}
}
}
}
else
{
obj* x_1752; 
lean::dec(x_8);
lean::dec(x_10);
x_1752 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_1752) == 0)
{
obj* x_1755; obj* x_1756; obj* x_1757; 
lean::dec(x_2);
x_1755 = l_Lean_Elaborator_toPexpr___main___closed__40;
x_1756 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1756, 0, x_1755);
lean::cnstr_set(x_1756, 1, x_3);
x_1757 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1757, 0, x_1756);
return x_1757;
}
else
{
obj* x_1758; obj* x_1761; obj* x_1764; obj* x_1767; obj* x_1768; obj* x_1770; obj* x_1771; obj* x_1772; obj* x_1773; obj* x_1776; obj* x_1777; obj* x_1778; obj* x_1779; obj* x_1780; obj* x_1781; 
x_1758 = lean::cnstr_get(x_1752, 0);
lean::inc(x_1758);
lean::dec(x_1752);
x_1761 = lean::cnstr_get(x_2, 0);
lean::inc(x_1761);
lean::dec(x_2);
x_1764 = lean::cnstr_get(x_1761, 2);
lean::inc(x_1764);
lean::dec(x_1761);
x_1767 = l_Lean_FileMap_toPosition(x_1764, x_1758);
x_1768 = lean::cnstr_get(x_1767, 1);
lean::inc(x_1768);
x_1770 = lean::box(0);
x_1771 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_1772 = l_Lean_KVMap_setNat(x_1770, x_1771, x_1768);
x_1773 = lean::cnstr_get(x_1767, 0);
lean::inc(x_1773);
lean::dec(x_1767);
x_1776 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_1777 = l_Lean_KVMap_setNat(x_1772, x_1776, x_1773);
x_1778 = l_Lean_Elaborator_toPexpr___main___closed__40;
x_1779 = lean_expr_mk_mdata(x_1777, x_1778);
x_1780 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1780, 0, x_1779);
lean::cnstr_set(x_1780, 1, x_3);
x_1781 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1781, 0, x_1780);
return x_1781;
}
}
}
else
{
obj* x_1784; obj* x_1785; obj* x_1789; obj* x_1790; obj* x_1793; obj* x_1794; obj* x_1795; obj* x_1797; 
lean::dec(x_8);
lean::dec(x_10);
x_1784 = l_Lean_Parser_Term_anonymousConstructor_HasView;
x_1785 = lean::cnstr_get(x_1784, 0);
lean::inc(x_1785);
lean::dec(x_1784);
lean::inc(x_0);
x_1789 = lean::apply_1(x_1785, x_0);
x_1790 = lean::cnstr_get(x_1789, 1);
lean::inc(x_1790);
lean::dec(x_1789);
x_1793 = l_List_map___main___at_Lean_Expander_paren_transform___spec__1(x_1790);
x_1794 = l_Lean_Expander_getOptType___main___closed__1;
x_1795 = l_List_foldl___main___at_Lean_Parser_Term_mkApp___spec__1(x_1794, x_1793);
lean::inc(x_2);
x_1797 = l_Lean_Elaborator_toPexpr___main(x_1795, x_1, x_2, x_3);
if (lean::obj_tag(x_1797) == 0)
{
obj* x_1800; obj* x_1802; obj* x_1803; 
lean::dec(x_0);
lean::dec(x_2);
x_1800 = lean::cnstr_get(x_1797, 0);
if (lean::is_exclusive(x_1797)) {
 x_1802 = x_1797;
} else {
 lean::inc(x_1800);
 lean::dec(x_1797);
 x_1802 = lean::box(0);
}
if (lean::is_scalar(x_1802)) {
 x_1803 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1803 = x_1802;
}
lean::cnstr_set(x_1803, 0, x_1800);
return x_1803;
}
else
{
obj* x_1804; obj* x_1806; obj* x_1807; obj* x_1809; obj* x_1811; obj* x_1812; obj* x_1813; obj* x_1814; 
x_1804 = lean::cnstr_get(x_1797, 0);
if (lean::is_exclusive(x_1797)) {
 lean::cnstr_set(x_1797, 0, lean::box(0));
 x_1806 = x_1797;
} else {
 lean::inc(x_1804);
 lean::dec(x_1797);
 x_1806 = lean::box(0);
}
x_1807 = lean::cnstr_get(x_1804, 0);
x_1809 = lean::cnstr_get(x_1804, 1);
if (lean::is_exclusive(x_1804)) {
 lean::cnstr_set(x_1804, 0, lean::box(0));
 lean::cnstr_set(x_1804, 1, lean::box(0));
 x_1811 = x_1804;
} else {
 lean::inc(x_1807);
 lean::inc(x_1809);
 lean::dec(x_1804);
 x_1811 = lean::box(0);
}
x_1812 = l_Lean_Elaborator_toPexpr___main___closed__41;
x_1813 = l_Lean_Elaborator_Expr_mkAnnotation(x_1812, x_1807);
x_1814 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_1814) == 0)
{
obj* x_1817; obj* x_1818; 
lean::dec(x_2);
if (lean::is_scalar(x_1811)) {
 x_1817 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1817 = x_1811;
}
lean::cnstr_set(x_1817, 0, x_1813);
lean::cnstr_set(x_1817, 1, x_1809);
if (lean::is_scalar(x_1806)) {
 x_1818 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1818 = x_1806;
}
lean::cnstr_set(x_1818, 0, x_1817);
return x_1818;
}
else
{
obj* x_1819; obj* x_1822; obj* x_1825; obj* x_1828; obj* x_1829; obj* x_1831; obj* x_1832; obj* x_1833; obj* x_1834; obj* x_1837; obj* x_1838; obj* x_1839; obj* x_1840; obj* x_1841; 
x_1819 = lean::cnstr_get(x_1814, 0);
lean::inc(x_1819);
lean::dec(x_1814);
x_1822 = lean::cnstr_get(x_2, 0);
lean::inc(x_1822);
lean::dec(x_2);
x_1825 = lean::cnstr_get(x_1822, 2);
lean::inc(x_1825);
lean::dec(x_1822);
x_1828 = l_Lean_FileMap_toPosition(x_1825, x_1819);
x_1829 = lean::cnstr_get(x_1828, 1);
lean::inc(x_1829);
x_1831 = lean::box(0);
x_1832 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_1833 = l_Lean_KVMap_setNat(x_1831, x_1832, x_1829);
x_1834 = lean::cnstr_get(x_1828, 0);
lean::inc(x_1834);
lean::dec(x_1828);
x_1837 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_1838 = l_Lean_KVMap_setNat(x_1833, x_1837, x_1834);
x_1839 = lean_expr_mk_mdata(x_1838, x_1813);
if (lean::is_scalar(x_1811)) {
 x_1840 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1840 = x_1811;
}
lean::cnstr_set(x_1840, 0, x_1839);
lean::cnstr_set(x_1840, 1, x_1809);
if (lean::is_scalar(x_1806)) {
 x_1841 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1841 = x_1806;
}
lean::cnstr_set(x_1841, 0, x_1840);
return x_1841;
}
}
}
}
else
{
obj* x_1844; obj* x_1845; obj* x_1849; obj* x_1850; obj* x_1851; obj* x_1854; obj* x_1856; 
lean::dec(x_8);
lean::dec(x_10);
x_1844 = l_Lean_Parser_Term_sortApp_HasView;
x_1845 = lean::cnstr_get(x_1844, 0);
lean::inc(x_1845);
lean::dec(x_1844);
lean::inc(x_0);
x_1849 = lean::apply_1(x_1845, x_0);
x_1850 = l_Lean_Parser_Term_sort_HasView;
x_1851 = lean::cnstr_get(x_1850, 0);
lean::inc(x_1851);
lean::dec(x_1850);
x_1854 = lean::cnstr_get(x_1849, 0);
lean::inc(x_1854);
x_1856 = lean::apply_1(x_1851, x_1854);
if (lean::obj_tag(x_1856) == 0)
{
obj* x_1858; obj* x_1862; 
lean::dec(x_1856);
x_1858 = lean::cnstr_get(x_1849, 1);
lean::inc(x_1858);
lean::dec(x_1849);
lean::inc(x_2);
x_1862 = l_Lean_Elaborator_toLevel___main(x_1858, x_1, x_2, x_3);
if (lean::obj_tag(x_1862) == 0)
{
obj* x_1865; obj* x_1867; obj* x_1868; 
lean::dec(x_0);
lean::dec(x_2);
x_1865 = lean::cnstr_get(x_1862, 0);
if (lean::is_exclusive(x_1862)) {
 x_1867 = x_1862;
} else {
 lean::inc(x_1865);
 lean::dec(x_1862);
 x_1867 = lean::box(0);
}
if (lean::is_scalar(x_1867)) {
 x_1868 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1868 = x_1867;
}
lean::cnstr_set(x_1868, 0, x_1865);
return x_1868;
}
else
{
obj* x_1869; obj* x_1871; obj* x_1872; obj* x_1874; obj* x_1876; obj* x_1877; obj* x_1878; 
x_1869 = lean::cnstr_get(x_1862, 0);
if (lean::is_exclusive(x_1862)) {
 lean::cnstr_set(x_1862, 0, lean::box(0));
 x_1871 = x_1862;
} else {
 lean::inc(x_1869);
 lean::dec(x_1862);
 x_1871 = lean::box(0);
}
x_1872 = lean::cnstr_get(x_1869, 0);
x_1874 = lean::cnstr_get(x_1869, 1);
if (lean::is_exclusive(x_1869)) {
 lean::cnstr_set(x_1869, 0, lean::box(0));
 lean::cnstr_set(x_1869, 1, lean::box(0));
 x_1876 = x_1869;
} else {
 lean::inc(x_1872);
 lean::inc(x_1874);
 lean::dec(x_1869);
 x_1876 = lean::box(0);
}
x_1877 = lean_expr_mk_sort(x_1872);
x_1878 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_1878) == 0)
{
obj* x_1881; obj* x_1882; 
lean::dec(x_2);
if (lean::is_scalar(x_1876)) {
 x_1881 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1881 = x_1876;
}
lean::cnstr_set(x_1881, 0, x_1877);
lean::cnstr_set(x_1881, 1, x_1874);
if (lean::is_scalar(x_1871)) {
 x_1882 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1882 = x_1871;
}
lean::cnstr_set(x_1882, 0, x_1881);
return x_1882;
}
else
{
obj* x_1883; obj* x_1886; obj* x_1889; obj* x_1892; obj* x_1893; obj* x_1895; obj* x_1896; obj* x_1897; obj* x_1898; obj* x_1901; obj* x_1902; obj* x_1903; obj* x_1904; obj* x_1905; 
x_1883 = lean::cnstr_get(x_1878, 0);
lean::inc(x_1883);
lean::dec(x_1878);
x_1886 = lean::cnstr_get(x_2, 0);
lean::inc(x_1886);
lean::dec(x_2);
x_1889 = lean::cnstr_get(x_1886, 2);
lean::inc(x_1889);
lean::dec(x_1886);
x_1892 = l_Lean_FileMap_toPosition(x_1889, x_1883);
x_1893 = lean::cnstr_get(x_1892, 1);
lean::inc(x_1893);
x_1895 = lean::box(0);
x_1896 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_1897 = l_Lean_KVMap_setNat(x_1895, x_1896, x_1893);
x_1898 = lean::cnstr_get(x_1892, 0);
lean::inc(x_1898);
lean::dec(x_1892);
x_1901 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_1902 = l_Lean_KVMap_setNat(x_1897, x_1901, x_1898);
x_1903 = lean_expr_mk_mdata(x_1902, x_1877);
if (lean::is_scalar(x_1876)) {
 x_1904 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1904 = x_1876;
}
lean::cnstr_set(x_1904, 0, x_1903);
lean::cnstr_set(x_1904, 1, x_1874);
if (lean::is_scalar(x_1871)) {
 x_1905 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1905 = x_1871;
}
lean::cnstr_set(x_1905, 0, x_1904);
return x_1905;
}
}
}
else
{
obj* x_1907; obj* x_1911; 
lean::dec(x_1856);
x_1907 = lean::cnstr_get(x_1849, 1);
lean::inc(x_1907);
lean::dec(x_1849);
lean::inc(x_2);
x_1911 = l_Lean_Elaborator_toLevel___main(x_1907, x_1, x_2, x_3);
if (lean::obj_tag(x_1911) == 0)
{
obj* x_1914; obj* x_1916; obj* x_1917; 
lean::dec(x_0);
lean::dec(x_2);
x_1914 = lean::cnstr_get(x_1911, 0);
if (lean::is_exclusive(x_1911)) {
 x_1916 = x_1911;
} else {
 lean::inc(x_1914);
 lean::dec(x_1911);
 x_1916 = lean::box(0);
}
if (lean::is_scalar(x_1916)) {
 x_1917 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1917 = x_1916;
}
lean::cnstr_set(x_1917, 0, x_1914);
return x_1917;
}
else
{
obj* x_1918; obj* x_1920; obj* x_1921; obj* x_1923; obj* x_1925; obj* x_1926; obj* x_1927; obj* x_1928; 
x_1918 = lean::cnstr_get(x_1911, 0);
if (lean::is_exclusive(x_1911)) {
 lean::cnstr_set(x_1911, 0, lean::box(0));
 x_1920 = x_1911;
} else {
 lean::inc(x_1918);
 lean::dec(x_1911);
 x_1920 = lean::box(0);
}
x_1921 = lean::cnstr_get(x_1918, 0);
x_1923 = lean::cnstr_get(x_1918, 1);
if (lean::is_exclusive(x_1918)) {
 lean::cnstr_set(x_1918, 0, lean::box(0));
 lean::cnstr_set(x_1918, 1, lean::box(0));
 x_1925 = x_1918;
} else {
 lean::inc(x_1921);
 lean::inc(x_1923);
 lean::dec(x_1918);
 x_1925 = lean::box(0);
}
x_1926 = level_mk_succ(x_1921);
x_1927 = lean_expr_mk_sort(x_1926);
x_1928 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_1928) == 0)
{
obj* x_1931; obj* x_1932; 
lean::dec(x_2);
if (lean::is_scalar(x_1925)) {
 x_1931 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1931 = x_1925;
}
lean::cnstr_set(x_1931, 0, x_1927);
lean::cnstr_set(x_1931, 1, x_1923);
if (lean::is_scalar(x_1920)) {
 x_1932 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1932 = x_1920;
}
lean::cnstr_set(x_1932, 0, x_1931);
return x_1932;
}
else
{
obj* x_1933; obj* x_1936; obj* x_1939; obj* x_1942; obj* x_1943; obj* x_1945; obj* x_1946; obj* x_1947; obj* x_1948; obj* x_1951; obj* x_1952; obj* x_1953; obj* x_1954; obj* x_1955; 
x_1933 = lean::cnstr_get(x_1928, 0);
lean::inc(x_1933);
lean::dec(x_1928);
x_1936 = lean::cnstr_get(x_2, 0);
lean::inc(x_1936);
lean::dec(x_2);
x_1939 = lean::cnstr_get(x_1936, 2);
lean::inc(x_1939);
lean::dec(x_1936);
x_1942 = l_Lean_FileMap_toPosition(x_1939, x_1933);
x_1943 = lean::cnstr_get(x_1942, 1);
lean::inc(x_1943);
x_1945 = lean::box(0);
x_1946 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_1947 = l_Lean_KVMap_setNat(x_1945, x_1946, x_1943);
x_1948 = lean::cnstr_get(x_1942, 0);
lean::inc(x_1948);
lean::dec(x_1942);
x_1951 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_1952 = l_Lean_KVMap_setNat(x_1947, x_1951, x_1948);
x_1953 = lean_expr_mk_mdata(x_1952, x_1927);
if (lean::is_scalar(x_1925)) {
 x_1954 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1954 = x_1925;
}
lean::cnstr_set(x_1954, 0, x_1953);
lean::cnstr_set(x_1954, 1, x_1923);
if (lean::is_scalar(x_1920)) {
 x_1955 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1955 = x_1920;
}
lean::cnstr_set(x_1955, 0, x_1954);
return x_1955;
}
}
}
}
}
else
{
obj* x_1958; obj* x_1959; obj* x_1963; 
lean::dec(x_8);
lean::dec(x_10);
x_1958 = l_Lean_Parser_Term_sort_HasView;
x_1959 = lean::cnstr_get(x_1958, 0);
lean::inc(x_1959);
lean::dec(x_1958);
lean::inc(x_0);
x_1963 = lean::apply_1(x_1959, x_0);
if (lean::obj_tag(x_1963) == 0)
{
obj* x_1965; 
lean::dec(x_1963);
x_1965 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_1965) == 0)
{
obj* x_1968; obj* x_1969; obj* x_1970; 
lean::dec(x_2);
x_1968 = l_Lean_Elaborator_toPexpr___main___closed__25;
x_1969 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1969, 0, x_1968);
lean::cnstr_set(x_1969, 1, x_3);
x_1970 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1970, 0, x_1969);
return x_1970;
}
else
{
obj* x_1971; obj* x_1974; obj* x_1977; obj* x_1980; obj* x_1981; obj* x_1983; obj* x_1984; obj* x_1985; obj* x_1986; obj* x_1989; obj* x_1990; obj* x_1991; obj* x_1992; obj* x_1993; obj* x_1994; 
x_1971 = lean::cnstr_get(x_1965, 0);
lean::inc(x_1971);
lean::dec(x_1965);
x_1974 = lean::cnstr_get(x_2, 0);
lean::inc(x_1974);
lean::dec(x_2);
x_1977 = lean::cnstr_get(x_1974, 2);
lean::inc(x_1977);
lean::dec(x_1974);
x_1980 = l_Lean_FileMap_toPosition(x_1977, x_1971);
x_1981 = lean::cnstr_get(x_1980, 1);
lean::inc(x_1981);
x_1983 = lean::box(0);
x_1984 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_1985 = l_Lean_KVMap_setNat(x_1983, x_1984, x_1981);
x_1986 = lean::cnstr_get(x_1980, 0);
lean::inc(x_1986);
lean::dec(x_1980);
x_1989 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_1990 = l_Lean_KVMap_setNat(x_1985, x_1989, x_1986);
x_1991 = l_Lean_Elaborator_toPexpr___main___closed__25;
x_1992 = lean_expr_mk_mdata(x_1990, x_1991);
x_1993 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1993, 0, x_1992);
lean::cnstr_set(x_1993, 1, x_3);
x_1994 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1994, 0, x_1993);
return x_1994;
}
}
else
{
obj* x_1996; 
lean::dec(x_1963);
x_1996 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_1996) == 0)
{
obj* x_1999; obj* x_2000; obj* x_2001; 
lean::dec(x_2);
x_1999 = l_Lean_Elaborator_toPexpr___main___closed__42;
x_2000 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2000, 0, x_1999);
lean::cnstr_set(x_2000, 1, x_3);
x_2001 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2001, 0, x_2000);
return x_2001;
}
else
{
obj* x_2002; obj* x_2005; obj* x_2008; obj* x_2011; obj* x_2012; obj* x_2014; obj* x_2015; obj* x_2016; obj* x_2017; obj* x_2020; obj* x_2021; obj* x_2022; obj* x_2023; obj* x_2024; obj* x_2025; 
x_2002 = lean::cnstr_get(x_1996, 0);
lean::inc(x_2002);
lean::dec(x_1996);
x_2005 = lean::cnstr_get(x_2, 0);
lean::inc(x_2005);
lean::dec(x_2);
x_2008 = lean::cnstr_get(x_2005, 2);
lean::inc(x_2008);
lean::dec(x_2005);
x_2011 = l_Lean_FileMap_toPosition(x_2008, x_2002);
x_2012 = lean::cnstr_get(x_2011, 1);
lean::inc(x_2012);
x_2014 = lean::box(0);
x_2015 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_2016 = l_Lean_KVMap_setNat(x_2014, x_2015, x_2012);
x_2017 = lean::cnstr_get(x_2011, 0);
lean::inc(x_2017);
lean::dec(x_2011);
x_2020 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_2021 = l_Lean_KVMap_setNat(x_2016, x_2020, x_2017);
x_2022 = l_Lean_Elaborator_toPexpr___main___closed__42;
x_2023 = lean_expr_mk_mdata(x_2021, x_2022);
x_2024 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2024, 0, x_2023);
lean::cnstr_set(x_2024, 1, x_3);
x_2025 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2025, 0, x_2024);
return x_2025;
}
}
}
}
else
{
obj* x_2027; obj* x_2028; obj* x_2032; obj* x_2033; 
lean::dec(x_10);
x_2027 = l_Lean_Parser_Term_pi_HasView;
x_2028 = lean::cnstr_get(x_2027, 0);
lean::inc(x_2028);
lean::dec(x_2027);
lean::inc(x_0);
x_2032 = lean::apply_1(x_2028, x_0);
x_2033 = lean::cnstr_get(x_2032, 1);
lean::inc(x_2033);
if (lean::obj_tag(x_2033) == 0)
{
obj* x_2038; obj* x_2039; obj* x_2041; 
lean::dec(x_2032);
lean::dec(x_2033);
lean::inc(x_0);
x_2038 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2038, 0, x_0);
x_2039 = l_Lean_Elaborator_toPexpr___main___closed__43;
lean::inc(x_2);
x_2041 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_2038, x_2039, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2038);
if (lean::obj_tag(x_2041) == 0)
{
obj* x_2047; obj* x_2049; obj* x_2050; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
x_2047 = lean::cnstr_get(x_2041, 0);
if (lean::is_exclusive(x_2041)) {
 x_2049 = x_2041;
} else {
 lean::inc(x_2047);
 lean::dec(x_2041);
 x_2049 = lean::box(0);
}
if (lean::is_scalar(x_2049)) {
 x_2050 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2050 = x_2049;
}
lean::cnstr_set(x_2050, 0, x_2047);
return x_2050;
}
else
{
obj* x_2051; 
x_2051 = lean::cnstr_get(x_2041, 0);
lean::inc(x_2051);
lean::dec(x_2041);
x_15 = x_2051;
goto lbl_16;
}
}
else
{
obj* x_2054; obj* x_2057; obj* x_2058; obj* x_2060; obj* x_2063; obj* x_2065; obj* x_2069; 
x_2054 = lean::cnstr_get(x_2033, 0);
lean::inc(x_2054);
lean::dec(x_2033);
x_2057 = l_Lean_Parser_Term_simpleBinder_View_toBinderInfo___main(x_2054);
x_2058 = lean::cnstr_get(x_2057, 1);
lean::inc(x_2058);
x_2060 = lean::cnstr_get(x_2057, 0);
lean::inc(x_2060);
lean::dec(x_2057);
x_2063 = lean::cnstr_get(x_2058, 0);
lean::inc(x_2063);
x_2065 = lean::cnstr_get(x_2058, 1);
lean::inc(x_2065);
lean::dec(x_2058);
lean::inc(x_2);
x_2069 = l_Lean_Elaborator_toPexpr___main(x_2065, x_1, x_2, x_3);
if (lean::obj_tag(x_2069) == 0)
{
obj* x_2076; obj* x_2078; obj* x_2079; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_2032);
lean::dec(x_2063);
lean::dec(x_2060);
x_2076 = lean::cnstr_get(x_2069, 0);
if (lean::is_exclusive(x_2069)) {
 x_2078 = x_2069;
} else {
 lean::inc(x_2076);
 lean::dec(x_2069);
 x_2078 = lean::box(0);
}
if (lean::is_scalar(x_2078)) {
 x_2079 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2079 = x_2078;
}
lean::cnstr_set(x_2079, 0, x_2076);
return x_2079;
}
else
{
obj* x_2080; obj* x_2083; obj* x_2085; obj* x_2088; obj* x_2092; 
x_2080 = lean::cnstr_get(x_2069, 0);
lean::inc(x_2080);
lean::dec(x_2069);
x_2083 = lean::cnstr_get(x_2080, 0);
lean::inc(x_2083);
x_2085 = lean::cnstr_get(x_2080, 1);
lean::inc(x_2085);
lean::dec(x_2080);
x_2088 = lean::cnstr_get(x_2032, 3);
lean::inc(x_2088);
lean::dec(x_2032);
lean::inc(x_2);
x_2092 = l_Lean_Elaborator_toPexpr___main(x_2088, x_1, x_2, x_2085);
if (lean::obj_tag(x_2092) == 0)
{
obj* x_2099; obj* x_2101; obj* x_2102; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_2063);
lean::dec(x_2060);
lean::dec(x_2083);
x_2099 = lean::cnstr_get(x_2092, 0);
if (lean::is_exclusive(x_2092)) {
 x_2101 = x_2092;
} else {
 lean::inc(x_2099);
 lean::dec(x_2092);
 x_2101 = lean::box(0);
}
if (lean::is_scalar(x_2101)) {
 x_2102 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2102 = x_2101;
}
lean::cnstr_set(x_2102, 0, x_2099);
return x_2102;
}
else
{
obj* x_2103; obj* x_2106; obj* x_2108; obj* x_2110; obj* x_2111; uint8 x_2112; obj* x_2113; obj* x_2114; 
x_2103 = lean::cnstr_get(x_2092, 0);
lean::inc(x_2103);
lean::dec(x_2092);
x_2106 = lean::cnstr_get(x_2103, 0);
x_2108 = lean::cnstr_get(x_2103, 1);
if (lean::is_exclusive(x_2103)) {
 x_2110 = x_2103;
} else {
 lean::inc(x_2106);
 lean::inc(x_2108);
 lean::dec(x_2103);
 x_2110 = lean::box(0);
}
x_2111 = l_Lean_Elaborator_mangleIdent(x_2063);
x_2112 = lean::unbox(x_2060);
x_2113 = lean_expr_mk_pi(x_2111, x_2112, x_2083, x_2106);
if (lean::is_scalar(x_2110)) {
 x_2114 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2114 = x_2110;
}
lean::cnstr_set(x_2114, 0, x_2113);
lean::cnstr_set(x_2114, 1, x_2108);
x_15 = x_2114;
goto lbl_16;
}
}
}
}
}
else
{
obj* x_2116; obj* x_2117; obj* x_2121; obj* x_2122; 
lean::dec(x_10);
x_2116 = l_Lean_Parser_Term_lambda_HasView;
x_2117 = lean::cnstr_get(x_2116, 0);
lean::inc(x_2117);
lean::dec(x_2116);
lean::inc(x_0);
x_2121 = lean::apply_1(x_2117, x_0);
x_2122 = lean::cnstr_get(x_2121, 1);
lean::inc(x_2122);
if (lean::obj_tag(x_2122) == 0)
{
obj* x_2127; obj* x_2128; obj* x_2130; 
lean::dec(x_2121);
lean::dec(x_2122);
lean::inc(x_0);
x_2127 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2127, 0, x_0);
x_2128 = l_Lean_Elaborator_toPexpr___main___closed__44;
lean::inc(x_2);
x_2130 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_2127, x_2128, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2127);
if (lean::obj_tag(x_2130) == 0)
{
obj* x_2136; obj* x_2138; obj* x_2139; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
x_2136 = lean::cnstr_get(x_2130, 0);
if (lean::is_exclusive(x_2130)) {
 x_2138 = x_2130;
} else {
 lean::inc(x_2136);
 lean::dec(x_2130);
 x_2138 = lean::box(0);
}
if (lean::is_scalar(x_2138)) {
 x_2139 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2139 = x_2138;
}
lean::cnstr_set(x_2139, 0, x_2136);
return x_2139;
}
else
{
obj* x_2140; 
x_2140 = lean::cnstr_get(x_2130, 0);
lean::inc(x_2140);
lean::dec(x_2130);
x_15 = x_2140;
goto lbl_16;
}
}
else
{
obj* x_2143; obj* x_2146; obj* x_2147; obj* x_2149; obj* x_2152; obj* x_2154; obj* x_2158; 
x_2143 = lean::cnstr_get(x_2122, 0);
lean::inc(x_2143);
lean::dec(x_2122);
x_2146 = l_Lean_Parser_Term_simpleBinder_View_toBinderInfo___main(x_2143);
x_2147 = lean::cnstr_get(x_2146, 1);
lean::inc(x_2147);
x_2149 = lean::cnstr_get(x_2146, 0);
lean::inc(x_2149);
lean::dec(x_2146);
x_2152 = lean::cnstr_get(x_2147, 0);
lean::inc(x_2152);
x_2154 = lean::cnstr_get(x_2147, 1);
lean::inc(x_2154);
lean::dec(x_2147);
lean::inc(x_2);
x_2158 = l_Lean_Elaborator_toPexpr___main(x_2154, x_1, x_2, x_3);
if (lean::obj_tag(x_2158) == 0)
{
obj* x_2165; obj* x_2167; obj* x_2168; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_2121);
lean::dec(x_2149);
lean::dec(x_2152);
x_2165 = lean::cnstr_get(x_2158, 0);
if (lean::is_exclusive(x_2158)) {
 x_2167 = x_2158;
} else {
 lean::inc(x_2165);
 lean::dec(x_2158);
 x_2167 = lean::box(0);
}
if (lean::is_scalar(x_2167)) {
 x_2168 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2168 = x_2167;
}
lean::cnstr_set(x_2168, 0, x_2165);
return x_2168;
}
else
{
obj* x_2169; obj* x_2172; obj* x_2174; obj* x_2177; obj* x_2181; 
x_2169 = lean::cnstr_get(x_2158, 0);
lean::inc(x_2169);
lean::dec(x_2158);
x_2172 = lean::cnstr_get(x_2169, 0);
lean::inc(x_2172);
x_2174 = lean::cnstr_get(x_2169, 1);
lean::inc(x_2174);
lean::dec(x_2169);
x_2177 = lean::cnstr_get(x_2121, 3);
lean::inc(x_2177);
lean::dec(x_2121);
lean::inc(x_2);
x_2181 = l_Lean_Elaborator_toPexpr___main(x_2177, x_1, x_2, x_2174);
if (lean::obj_tag(x_2181) == 0)
{
obj* x_2188; obj* x_2190; obj* x_2191; 
lean::dec(x_2172);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_2149);
lean::dec(x_2152);
x_2188 = lean::cnstr_get(x_2181, 0);
if (lean::is_exclusive(x_2181)) {
 x_2190 = x_2181;
} else {
 lean::inc(x_2188);
 lean::dec(x_2181);
 x_2190 = lean::box(0);
}
if (lean::is_scalar(x_2190)) {
 x_2191 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2191 = x_2190;
}
lean::cnstr_set(x_2191, 0, x_2188);
return x_2191;
}
else
{
obj* x_2192; obj* x_2195; obj* x_2197; obj* x_2199; obj* x_2200; uint8 x_2201; obj* x_2202; obj* x_2203; 
x_2192 = lean::cnstr_get(x_2181, 0);
lean::inc(x_2192);
lean::dec(x_2181);
x_2195 = lean::cnstr_get(x_2192, 0);
x_2197 = lean::cnstr_get(x_2192, 1);
if (lean::is_exclusive(x_2192)) {
 x_2199 = x_2192;
} else {
 lean::inc(x_2195);
 lean::inc(x_2197);
 lean::dec(x_2192);
 x_2199 = lean::box(0);
}
x_2200 = l_Lean_Elaborator_mangleIdent(x_2152);
x_2201 = lean::unbox(x_2149);
x_2202 = lean_expr_mk_lambda(x_2200, x_2201, x_2172, x_2195);
if (lean::is_scalar(x_2199)) {
 x_2203 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2203 = x_2199;
}
lean::cnstr_set(x_2203, 0, x_2202);
lean::cnstr_set(x_2203, 1, x_2197);
x_15 = x_2203;
goto lbl_16;
}
}
}
}
}
else
{
obj* x_2206; obj* x_2207; obj* x_2210; obj* x_2211; obj* x_2214; 
lean::dec(x_8);
lean::dec(x_10);
x_2206 = l_Lean_Parser_Term_app_HasView;
x_2207 = lean::cnstr_get(x_2206, 0);
lean::inc(x_2207);
lean::dec(x_2206);
x_2210 = lean::apply_1(x_2207, x_0);
x_2211 = lean::cnstr_get(x_2210, 0);
lean::inc(x_2211);
lean::inc(x_2);
x_2214 = l_Lean_Elaborator_toPexpr___main(x_2211, x_1, x_2, x_3);
if (lean::obj_tag(x_2214) == 0)
{
obj* x_2217; obj* x_2219; obj* x_2220; 
lean::dec(x_2210);
lean::dec(x_2);
x_2217 = lean::cnstr_get(x_2214, 0);
if (lean::is_exclusive(x_2214)) {
 x_2219 = x_2214;
} else {
 lean::inc(x_2217);
 lean::dec(x_2214);
 x_2219 = lean::box(0);
}
if (lean::is_scalar(x_2219)) {
 x_2220 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2220 = x_2219;
}
lean::cnstr_set(x_2220, 0, x_2217);
return x_2220;
}
else
{
obj* x_2221; obj* x_2224; obj* x_2226; obj* x_2229; obj* x_2232; 
x_2221 = lean::cnstr_get(x_2214, 0);
lean::inc(x_2221);
lean::dec(x_2214);
x_2224 = lean::cnstr_get(x_2221, 0);
lean::inc(x_2224);
x_2226 = lean::cnstr_get(x_2221, 1);
lean::inc(x_2226);
lean::dec(x_2221);
x_2229 = lean::cnstr_get(x_2210, 1);
lean::inc(x_2229);
lean::dec(x_2210);
x_2232 = l_Lean_Elaborator_toPexpr___main(x_2229, x_1, x_2, x_2226);
if (lean::obj_tag(x_2232) == 0)
{
obj* x_2234; obj* x_2236; obj* x_2237; 
lean::dec(x_2224);
x_2234 = lean::cnstr_get(x_2232, 0);
if (lean::is_exclusive(x_2232)) {
 x_2236 = x_2232;
} else {
 lean::inc(x_2234);
 lean::dec(x_2232);
 x_2236 = lean::box(0);
}
if (lean::is_scalar(x_2236)) {
 x_2237 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2237 = x_2236;
}
lean::cnstr_set(x_2237, 0, x_2234);
return x_2237;
}
else
{
obj* x_2238; obj* x_2240; obj* x_2241; obj* x_2243; obj* x_2245; obj* x_2246; obj* x_2247; obj* x_2248; 
x_2238 = lean::cnstr_get(x_2232, 0);
if (lean::is_exclusive(x_2232)) {
 x_2240 = x_2232;
} else {
 lean::inc(x_2238);
 lean::dec(x_2232);
 x_2240 = lean::box(0);
}
x_2241 = lean::cnstr_get(x_2238, 0);
x_2243 = lean::cnstr_get(x_2238, 1);
if (lean::is_exclusive(x_2238)) {
 x_2245 = x_2238;
} else {
 lean::inc(x_2241);
 lean::inc(x_2243);
 lean::dec(x_2238);
 x_2245 = lean::box(0);
}
x_2246 = lean_expr_mk_app(x_2224, x_2241);
if (lean::is_scalar(x_2245)) {
 x_2247 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2247 = x_2245;
}
lean::cnstr_set(x_2247, 0, x_2246);
lean::cnstr_set(x_2247, 1, x_2243);
if (lean::is_scalar(x_2240)) {
 x_2248 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_2248 = x_2240;
}
lean::cnstr_set(x_2248, 0, x_2247);
return x_2248;
}
}
}
}
else
{
obj* x_2250; obj* x_2251; obj* x_2255; obj* x_2256; 
lean::dec(x_10);
x_2250 = l_Lean_Parser_identUnivs_HasView;
x_2251 = lean::cnstr_get(x_2250, 0);
lean::inc(x_2251);
lean::dec(x_2250);
lean::inc(x_0);
x_2255 = lean::apply_1(x_2251, x_0);
x_2256 = lean::cnstr_get(x_2255, 1);
lean::inc(x_2256);
if (lean::obj_tag(x_2256) == 0)
{
obj* x_2258; obj* x_2262; obj* x_2263; obj* x_2264; obj* x_2265; obj* x_2268; obj* x_2269; obj* x_2270; obj* x_2271; obj* x_2272; obj* x_2273; uint8 x_2274; 
x_2258 = lean::cnstr_get(x_2255, 0);
lean::inc(x_2258);
lean::dec(x_2255);
lean::inc(x_2258);
x_2262 = l_Lean_Elaborator_mangleIdent(x_2258);
x_2263 = lean::box(0);
x_2264 = lean_expr_mk_const(x_2262, x_2263);
x_2265 = lean::cnstr_get(x_2258, 3);
lean::inc(x_2265);
lean::dec(x_2258);
x_2268 = lean::mk_nat_obj(0ul);
x_2269 = l_List_enumFrom___main___rarg(x_2268, x_2265);
x_2270 = l_Lean_Elaborator_toPexpr___main___closed__45;
x_2271 = l_List_foldl___main___at_Lean_Elaborator_toPexpr___main___spec__16(x_2270, x_2269);
x_2272 = lean_expr_mk_mdata(x_2271, x_2264);
x_2273 = l_Lean_Elaborator_toPexpr___main___closed__2;
x_2274 = lean_name_dec_eq(x_8, x_2273);
lean::dec(x_8);
if (x_2274 == 0)
{
obj* x_2276; 
x_2276 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_2276) == 0)
{
obj* x_2279; obj* x_2280; 
lean::dec(x_2);
x_2279 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2279, 0, x_2272);
lean::cnstr_set(x_2279, 1, x_3);
x_2280 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2280, 0, x_2279);
return x_2280;
}
else
{
obj* x_2281; obj* x_2284; obj* x_2287; obj* x_2290; obj* x_2291; obj* x_2293; obj* x_2294; obj* x_2295; obj* x_2298; obj* x_2299; obj* x_2300; obj* x_2301; obj* x_2302; 
x_2281 = lean::cnstr_get(x_2276, 0);
lean::inc(x_2281);
lean::dec(x_2276);
x_2284 = lean::cnstr_get(x_2, 0);
lean::inc(x_2284);
lean::dec(x_2);
x_2287 = lean::cnstr_get(x_2284, 2);
lean::inc(x_2287);
lean::dec(x_2284);
x_2290 = l_Lean_FileMap_toPosition(x_2287, x_2281);
x_2291 = lean::cnstr_get(x_2290, 1);
lean::inc(x_2291);
x_2293 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_2294 = l_Lean_KVMap_setNat(x_2263, x_2293, x_2291);
x_2295 = lean::cnstr_get(x_2290, 0);
lean::inc(x_2295);
lean::dec(x_2290);
x_2298 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_2299 = l_Lean_KVMap_setNat(x_2294, x_2298, x_2295);
x_2300 = lean_expr_mk_mdata(x_2299, x_2272);
x_2301 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2301, 0, x_2300);
lean::cnstr_set(x_2301, 1, x_3);
x_2302 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2302, 0, x_2301);
return x_2302;
}
}
else
{
obj* x_2305; obj* x_2306; 
lean::dec(x_0);
lean::dec(x_2);
x_2305 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2305, 0, x_2272);
lean::cnstr_set(x_2305, 1, x_3);
x_2306 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2306, 0, x_2305);
return x_2306;
}
}
else
{
obj* x_2307; obj* x_2310; obj* x_2313; obj* x_2317; 
x_2307 = lean::cnstr_get(x_2255, 0);
lean::inc(x_2307);
lean::dec(x_2255);
x_2310 = lean::cnstr_get(x_2256, 0);
lean::inc(x_2310);
lean::dec(x_2256);
x_2313 = lean::cnstr_get(x_2310, 1);
lean::inc(x_2313);
lean::dec(x_2310);
lean::inc(x_2);
x_2317 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__17(x_2313, x_1, x_2, x_3);
if (lean::obj_tag(x_2317) == 0)
{
obj* x_2322; obj* x_2324; obj* x_2325; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_2307);
x_2322 = lean::cnstr_get(x_2317, 0);
if (lean::is_exclusive(x_2317)) {
 x_2324 = x_2317;
} else {
 lean::inc(x_2322);
 lean::dec(x_2317);
 x_2324 = lean::box(0);
}
if (lean::is_scalar(x_2324)) {
 x_2325 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2325 = x_2324;
}
lean::cnstr_set(x_2325, 0, x_2322);
return x_2325;
}
else
{
obj* x_2326; obj* x_2328; obj* x_2329; obj* x_2331; obj* x_2333; obj* x_2335; obj* x_2336; obj* x_2337; obj* x_2340; obj* x_2341; obj* x_2342; obj* x_2343; obj* x_2344; obj* x_2345; uint8 x_2346; 
x_2326 = lean::cnstr_get(x_2317, 0);
if (lean::is_exclusive(x_2317)) {
 lean::cnstr_set(x_2317, 0, lean::box(0));
 x_2328 = x_2317;
} else {
 lean::inc(x_2326);
 lean::dec(x_2317);
 x_2328 = lean::box(0);
}
x_2329 = lean::cnstr_get(x_2326, 0);
x_2331 = lean::cnstr_get(x_2326, 1);
if (lean::is_exclusive(x_2326)) {
 lean::cnstr_set(x_2326, 0, lean::box(0));
 lean::cnstr_set(x_2326, 1, lean::box(0));
 x_2333 = x_2326;
} else {
 lean::inc(x_2329);
 lean::inc(x_2331);
 lean::dec(x_2326);
 x_2333 = lean::box(0);
}
lean::inc(x_2307);
x_2335 = l_Lean_Elaborator_mangleIdent(x_2307);
x_2336 = lean_expr_mk_const(x_2335, x_2329);
x_2337 = lean::cnstr_get(x_2307, 3);
lean::inc(x_2337);
lean::dec(x_2307);
x_2340 = lean::mk_nat_obj(0ul);
x_2341 = l_List_enumFrom___main___rarg(x_2340, x_2337);
x_2342 = l_Lean_Elaborator_toPexpr___main___closed__46;
x_2343 = l_List_foldl___main___at_Lean_Elaborator_toPexpr___main___spec__16(x_2342, x_2341);
x_2344 = lean_expr_mk_mdata(x_2343, x_2336);
x_2345 = l_Lean_Elaborator_toPexpr___main___closed__2;
x_2346 = lean_name_dec_eq(x_8, x_2345);
lean::dec(x_8);
if (x_2346 == 0)
{
obj* x_2348; 
x_2348 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_2348) == 0)
{
obj* x_2351; obj* x_2352; 
lean::dec(x_2);
if (lean::is_scalar(x_2333)) {
 x_2351 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2351 = x_2333;
}
lean::cnstr_set(x_2351, 0, x_2344);
lean::cnstr_set(x_2351, 1, x_2331);
if (lean::is_scalar(x_2328)) {
 x_2352 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_2352 = x_2328;
}
lean::cnstr_set(x_2352, 0, x_2351);
return x_2352;
}
else
{
obj* x_2353; obj* x_2356; obj* x_2357; obj* x_2360; obj* x_2363; obj* x_2364; obj* x_2366; obj* x_2367; obj* x_2368; obj* x_2371; obj* x_2372; obj* x_2373; obj* x_2374; obj* x_2375; 
x_2353 = lean::cnstr_get(x_2348, 0);
lean::inc(x_2353);
lean::dec(x_2348);
x_2356 = lean::box(0);
x_2357 = lean::cnstr_get(x_2, 0);
lean::inc(x_2357);
lean::dec(x_2);
x_2360 = lean::cnstr_get(x_2357, 2);
lean::inc(x_2360);
lean::dec(x_2357);
x_2363 = l_Lean_FileMap_toPosition(x_2360, x_2353);
x_2364 = lean::cnstr_get(x_2363, 1);
lean::inc(x_2364);
x_2366 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_2367 = l_Lean_KVMap_setNat(x_2356, x_2366, x_2364);
x_2368 = lean::cnstr_get(x_2363, 0);
lean::inc(x_2368);
lean::dec(x_2363);
x_2371 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_2372 = l_Lean_KVMap_setNat(x_2367, x_2371, x_2368);
x_2373 = lean_expr_mk_mdata(x_2372, x_2344);
if (lean::is_scalar(x_2333)) {
 x_2374 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2374 = x_2333;
}
lean::cnstr_set(x_2374, 0, x_2373);
lean::cnstr_set(x_2374, 1, x_2331);
if (lean::is_scalar(x_2328)) {
 x_2375 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_2375 = x_2328;
}
lean::cnstr_set(x_2375, 0, x_2374);
return x_2375;
}
}
else
{
obj* x_2378; obj* x_2379; 
lean::dec(x_0);
lean::dec(x_2);
if (lean::is_scalar(x_2333)) {
 x_2378 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2378 = x_2333;
}
lean::cnstr_set(x_2378, 0, x_2344);
lean::cnstr_set(x_2378, 1, x_2331);
if (lean::is_scalar(x_2328)) {
 x_2379 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_2379 = x_2328;
}
lean::cnstr_set(x_2379, 0, x_2378);
return x_2379;
}
}
}
}
lbl_14:
{
if (lean::obj_tag(x_13) == 0)
{
obj* x_2383; obj* x_2385; obj* x_2386; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
x_2383 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 x_2385 = x_13;
} else {
 lean::inc(x_2383);
 lean::dec(x_13);
 x_2385 = lean::box(0);
}
if (lean::is_scalar(x_2385)) {
 x_2386 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2386 = x_2385;
}
lean::cnstr_set(x_2386, 0, x_2383);
return x_2386;
}
else
{
obj* x_2387; obj* x_2389; obj* x_2390; obj* x_2392; obj* x_2394; obj* x_2395; uint8 x_2396; 
x_2387 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 lean::cnstr_set(x_13, 0, lean::box(0));
 x_2389 = x_13;
} else {
 lean::inc(x_2387);
 lean::dec(x_13);
 x_2389 = lean::box(0);
}
x_2390 = lean::cnstr_get(x_2387, 0);
x_2392 = lean::cnstr_get(x_2387, 1);
if (lean::is_exclusive(x_2387)) {
 lean::cnstr_set(x_2387, 0, lean::box(0));
 lean::cnstr_set(x_2387, 1, lean::box(0));
 x_2394 = x_2387;
} else {
 lean::inc(x_2390);
 lean::inc(x_2392);
 lean::dec(x_2387);
 x_2394 = lean::box(0);
}
x_2395 = l_Lean_Elaborator_toPexpr___main___closed__2;
x_2396 = lean_name_dec_eq(x_8, x_2395);
lean::dec(x_8);
if (x_2396 == 0)
{
obj* x_2398; 
x_2398 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_2398) == 0)
{
obj* x_2401; obj* x_2402; 
lean::dec(x_2);
if (lean::is_scalar(x_2394)) {
 x_2401 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2401 = x_2394;
}
lean::cnstr_set(x_2401, 0, x_2390);
lean::cnstr_set(x_2401, 1, x_2392);
if (lean::is_scalar(x_2389)) {
 x_2402 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_2402 = x_2389;
}
lean::cnstr_set(x_2402, 0, x_2401);
return x_2402;
}
else
{
obj* x_2403; obj* x_2406; obj* x_2409; obj* x_2412; obj* x_2413; obj* x_2415; obj* x_2416; obj* x_2417; obj* x_2418; obj* x_2421; obj* x_2422; obj* x_2423; obj* x_2424; obj* x_2425; 
x_2403 = lean::cnstr_get(x_2398, 0);
lean::inc(x_2403);
lean::dec(x_2398);
x_2406 = lean::cnstr_get(x_2, 0);
lean::inc(x_2406);
lean::dec(x_2);
x_2409 = lean::cnstr_get(x_2406, 2);
lean::inc(x_2409);
lean::dec(x_2406);
x_2412 = l_Lean_FileMap_toPosition(x_2409, x_2403);
x_2413 = lean::cnstr_get(x_2412, 1);
lean::inc(x_2413);
x_2415 = lean::box(0);
x_2416 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_2417 = l_Lean_KVMap_setNat(x_2415, x_2416, x_2413);
x_2418 = lean::cnstr_get(x_2412, 0);
lean::inc(x_2418);
lean::dec(x_2412);
x_2421 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_2422 = l_Lean_KVMap_setNat(x_2417, x_2421, x_2418);
x_2423 = lean_expr_mk_mdata(x_2422, x_2390);
if (lean::is_scalar(x_2394)) {
 x_2424 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2424 = x_2394;
}
lean::cnstr_set(x_2424, 0, x_2423);
lean::cnstr_set(x_2424, 1, x_2392);
if (lean::is_scalar(x_2389)) {
 x_2425 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_2425 = x_2389;
}
lean::cnstr_set(x_2425, 0, x_2424);
return x_2425;
}
}
else
{
obj* x_2428; obj* x_2429; 
lean::dec(x_0);
lean::dec(x_2);
if (lean::is_scalar(x_2394)) {
 x_2428 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2428 = x_2394;
}
lean::cnstr_set(x_2428, 0, x_2390);
lean::cnstr_set(x_2428, 1, x_2392);
if (lean::is_scalar(x_2389)) {
 x_2429 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_2429 = x_2389;
}
lean::cnstr_set(x_2429, 0, x_2428);
return x_2429;
}
}
}
lbl_16:
{
obj* x_2430; obj* x_2432; obj* x_2434; obj* x_2435; uint8 x_2436; 
x_2430 = lean::cnstr_get(x_15, 0);
x_2432 = lean::cnstr_get(x_15, 1);
if (lean::is_exclusive(x_15)) {
 lean::cnstr_set(x_15, 0, lean::box(0));
 lean::cnstr_set(x_15, 1, lean::box(0));
 x_2434 = x_15;
} else {
 lean::inc(x_2430);
 lean::inc(x_2432);
 lean::dec(x_15);
 x_2434 = lean::box(0);
}
x_2435 = l_Lean_Elaborator_toPexpr___main___closed__2;
x_2436 = lean_name_dec_eq(x_8, x_2435);
lean::dec(x_8);
if (x_2436 == 0)
{
obj* x_2438; 
x_2438 = l_Lean_Parser_Syntax_getPos(x_0);
lean::dec(x_0);
if (lean::obj_tag(x_2438) == 0)
{
obj* x_2441; obj* x_2442; 
lean::dec(x_2);
if (lean::is_scalar(x_2434)) {
 x_2441 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2441 = x_2434;
}
lean::cnstr_set(x_2441, 0, x_2430);
lean::cnstr_set(x_2441, 1, x_2432);
x_2442 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2442, 0, x_2441);
return x_2442;
}
else
{
obj* x_2443; obj* x_2446; obj* x_2449; obj* x_2452; obj* x_2453; obj* x_2455; obj* x_2456; obj* x_2457; obj* x_2458; obj* x_2461; obj* x_2462; obj* x_2463; obj* x_2464; obj* x_2465; 
x_2443 = lean::cnstr_get(x_2438, 0);
lean::inc(x_2443);
lean::dec(x_2438);
x_2446 = lean::cnstr_get(x_2, 0);
lean::inc(x_2446);
lean::dec(x_2);
x_2449 = lean::cnstr_get(x_2446, 2);
lean::inc(x_2449);
lean::dec(x_2446);
x_2452 = l_Lean_FileMap_toPosition(x_2449, x_2443);
x_2453 = lean::cnstr_get(x_2452, 1);
lean::inc(x_2453);
x_2455 = lean::box(0);
x_2456 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_2457 = l_Lean_KVMap_setNat(x_2455, x_2456, x_2453);
x_2458 = lean::cnstr_get(x_2452, 0);
lean::inc(x_2458);
lean::dec(x_2452);
x_2461 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_2462 = l_Lean_KVMap_setNat(x_2457, x_2461, x_2458);
x_2463 = lean_expr_mk_mdata(x_2462, x_2430);
if (lean::is_scalar(x_2434)) {
 x_2464 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2464 = x_2434;
}
lean::cnstr_set(x_2464, 0, x_2463);
lean::cnstr_set(x_2464, 1, x_2432);
x_2465 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2465, 0, x_2464);
return x_2465;
}
}
else
{
obj* x_2468; obj* x_2469; 
lean::dec(x_0);
lean::dec(x_2);
if (lean::is_scalar(x_2434)) {
 x_2468 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2468 = x_2434;
}
lean::cnstr_set(x_2468, 0, x_2430);
lean::cnstr_set(x_2468, 1, x_2432);
x_2469 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2469, 0, x_2468);
return x_2469;
}
}
}
default:
{
obj* x_2470; 
x_2470 = lean::box(0);
x_4 = x_2470;
goto lbl_5;
}
}
lbl_5:
{
obj* x_2473; obj* x_2474; obj* x_2475; obj* x_2476; obj* x_2477; obj* x_2478; obj* x_2480; 
lean::dec(x_4);
lean::inc(x_0);
x_2473 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2473, 0, x_0);
x_2474 = l_Lean_Parser_Syntax_toFormat___main(x_0);
x_2475 = l_Lean_Options_empty;
x_2476 = l_Lean_Format_pretty(x_2474, x_2475);
x_2477 = l_Lean_Elaborator_toPexpr___main___closed__1;
x_2478 = lean::string_append(x_2477, x_2476);
lean::dec(x_2476);
x_2480 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_2473, x_2478, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2473);
return x_2480;
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__1(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__3___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__3(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_List_foldr___main___at_Lean_Elaborator_toPexpr___main___spec__7___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_List_foldr___main___at_Lean_Elaborator_toPexpr___main___spec__7(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__8___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__8(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__9___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__9(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__10___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__10(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__11___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__11(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__12___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__12(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__13___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__13(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__14___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__14(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__15___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__15(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__17___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__17(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Elaborator_toPexpr___main___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_toPexpr___main(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Elaborator_toPexpr(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_toPexpr___main(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l_Lean_Elaborator_toPexpr___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_toPexpr(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Elaborator_getNamespace(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Elaborator_currentScope(x_0, x_1, x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_6 = x_3;
} else {
 lean::inc(x_4);
 lean::dec(x_3);
 x_6 = lean::box(0);
}
if (lean::is_scalar(x_6)) {
 x_7 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_7 = x_6;
}
lean::cnstr_set(x_7, 0, x_4);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_11; obj* x_13; 
x_8 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_set(x_3, 0, lean::box(0));
 x_10 = x_3;
} else {
 lean::inc(x_8);
 lean::dec(x_3);
 x_10 = lean::box(0);
}
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_11, 6);
lean::inc(x_13);
lean::dec(x_11);
if (lean::obj_tag(x_13) == 0)
{
obj* x_16; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_16 = lean::cnstr_get(x_8, 1);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 x_18 = x_8;
} else {
 lean::inc(x_16);
 lean::dec(x_8);
 x_18 = lean::box(0);
}
x_19 = lean::box(0);
if (lean::is_scalar(x_18)) {
 x_20 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_20 = x_18;
}
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_16);
if (lean::is_scalar(x_10)) {
 x_21 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_21 = x_10;
}
lean::cnstr_set(x_21, 0, x_20);
return x_21;
}
else
{
obj* x_22; obj* x_24; obj* x_25; obj* x_28; obj* x_29; 
x_22 = lean::cnstr_get(x_8, 1);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 x_24 = x_8;
} else {
 lean::inc(x_22);
 lean::dec(x_8);
 x_24 = lean::box(0);
}
x_25 = lean::cnstr_get(x_13, 0);
lean::inc(x_25);
lean::dec(x_13);
if (lean::is_scalar(x_24)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_24;
}
lean::cnstr_set(x_28, 0, x_25);
lean::cnstr_set(x_28, 1, x_22);
if (lean::is_scalar(x_10)) {
 x_29 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_29 = x_10;
}
lean::cnstr_set(x_29, 0, x_28);
return x_29;
}
}
}
}
obj* l_Lean_Elaborator_getNamespace___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Elaborator_getNamespace(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_RBNode_revFold___main___at_Lean_Elaborator_oldElabCommand___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 3);
lean::inc(x_6);
lean::dec(x_1);
x_9 = l_RBNode_revFold___main___at_Lean_Elaborator_oldElabCommand___spec__2(x_0, x_6);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_4);
lean::cnstr_set(x_10, 1, x_9);
x_0 = x_10;
x_1 = x_2;
goto _start;
}
}
}
obj* l_RBTree_toList___at_Lean_Elaborator_oldElabCommand___spec__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(0);
x_2 = l_RBNode_revFold___main___at_Lean_Elaborator_oldElabCommand___spec__2(x_1, x_0);
return x_2;
}
}
obj* l_RBTree_ofList___main___at_Lean_Elaborator_oldElabCommand___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_7; uint8 x_8; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
x_7 = l_RBTree_ofList___main___at_Lean_Elaborator_oldElabCommand___spec__3(x_4);
x_8 = l_RBNode_isRed___main___rarg(x_7);
if (x_8 == 0)
{
obj* x_9; obj* x_10; 
x_9 = lean::box(0);
x_10 = l_RBNode_ins___main___at_Lean_NameSet_insert___spec__1(x_7, x_2, x_9);
return x_10;
}
else
{
obj* x_11; obj* x_12; obj* x_13; 
x_11 = lean::box(0);
x_12 = l_RBNode_ins___main___at_Lean_NameSet_insert___spec__1(x_7, x_2, x_11);
x_13 = l_RBNode_setBlack___main___rarg(x_12);
return x_13;
}
}
}
}
obj* l_Lean_Elaborator_oldElabCommand___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_15; obj* x_17; obj* x_18; obj* x_20; obj* x_23; obj* x_26; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_0, 2);
lean::inc(x_8);
x_10 = l_Lean_Elaborator_toLevel___main___closed__4;
x_11 = l_Lean_Elaborator_OrderedRBMap_ofList___rarg(x_10, x_8);
x_12 = lean::cnstr_get(x_0, 3);
lean::inc(x_12);
x_14 = l_Lean_Elaborator_OrderedRBMap_ofList___rarg(x_10, x_12);
x_15 = lean::cnstr_get(x_0, 4);
lean::inc(x_15);
x_17 = l_RBTree_ofList___main___at_Lean_Elaborator_oldElabCommand___spec__3(x_15);
x_18 = lean::cnstr_get(x_1, 6);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_1, 7);
lean::inc(x_20);
lean::dec(x_1);
x_23 = lean::cnstr_get(x_0, 5);
lean::inc(x_23);
lean::dec(x_0);
x_26 = lean::alloc_cnstr(0, 9, 0);
lean::cnstr_set(x_26, 0, x_2);
lean::cnstr_set(x_26, 1, x_4);
lean::cnstr_set(x_26, 2, x_6);
lean::cnstr_set(x_26, 3, x_11);
lean::cnstr_set(x_26, 4, x_14);
lean::cnstr_set(x_26, 5, x_17);
lean::cnstr_set(x_26, 6, x_18);
lean::cnstr_set(x_26, 7, x_20);
lean::cnstr_set(x_26, 8, x_23);
return x_26;
}
}
obj* l_Lean_Elaborator_oldElabCommand(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_12; obj* x_13; obj* x_15; 
x_5 = lean::cnstr_get(x_3, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_5, 2);
lean::inc(x_7);
x_9 = l_Lean_Parser_Syntax_getPos(x_0);
lean::inc(x_4);
lean::inc(x_3);
x_12 = l_Lean_Elaborator_currentScope(x_2, x_3, x_4);
if (lean::obj_tag(x_9) == 0)
{
obj* x_17; 
x_17 = lean::mk_nat_obj(0ul);
x_15 = x_17;
goto lbl_16;
}
else
{
obj* x_18; 
x_18 = lean::cnstr_get(x_9, 0);
lean::inc(x_18);
lean::dec(x_9);
x_15 = x_18;
goto lbl_16;
}
lbl_14:
{
if (lean::obj_tag(x_12) == 0)
{
obj* x_25; obj* x_27; obj* x_28; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_13);
x_25 = lean::cnstr_get(x_12, 0);
if (lean::is_exclusive(x_12)) {
 x_27 = x_12;
} else {
 lean::inc(x_25);
 lean::dec(x_12);
 x_27 = lean::box(0);
}
if (lean::is_scalar(x_27)) {
 x_28 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_28 = x_27;
}
lean::cnstr_set(x_28, 0, x_25);
return x_28;
}
else
{
obj* x_29; obj* x_32; obj* x_34; obj* x_38; 
x_29 = lean::cnstr_get(x_12, 0);
lean::inc(x_29);
lean::dec(x_12);
x_32 = lean::cnstr_get(x_29, 0);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_29, 1);
lean::inc(x_34);
lean::dec(x_29);
lean::inc(x_3);
x_38 = l_Lean_Elaborator_getNamespace(x_2, x_3, x_34);
if (lean::obj_tag(x_38) == 0)
{
obj* x_44; obj* x_46; obj* x_47; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_13);
lean::dec(x_32);
x_44 = lean::cnstr_get(x_38, 0);
if (lean::is_exclusive(x_38)) {
 x_46 = x_38;
} else {
 lean::inc(x_44);
 lean::dec(x_38);
 x_46 = lean::box(0);
}
if (lean::is_scalar(x_46)) {
 x_47 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_47 = x_46;
}
lean::cnstr_set(x_47, 0, x_44);
return x_47;
}
else
{
obj* x_48; obj* x_50; obj* x_51; obj* x_53; obj* x_56; obj* x_59; obj* x_61; obj* x_63; obj* x_65; obj* x_68; obj* x_69; obj* x_71; obj* x_74; obj* x_75; obj* x_77; obj* x_78; obj* x_81; obj* x_84; obj* x_85; obj* x_88; 
x_48 = lean::cnstr_get(x_38, 0);
if (lean::is_exclusive(x_38)) {
 lean::cnstr_set(x_38, 0, lean::box(0));
 x_50 = x_38;
} else {
 lean::inc(x_48);
 lean::dec(x_38);
 x_50 = lean::box(0);
}
x_51 = lean::cnstr_get(x_48, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_48, 1);
lean::inc(x_53);
lean::dec(x_48);
x_56 = lean::cnstr_get(x_5, 0);
lean::inc(x_56);
lean::dec(x_5);
x_59 = lean::cnstr_get(x_4, 8);
lean::inc(x_59);
x_61 = lean::cnstr_get(x_4, 9);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_32, 3);
lean::inc(x_63);
x_65 = lean::cnstr_get(x_63, 0);
lean::inc(x_65);
lean::dec(x_63);
x_68 = l_List_reverse___rarg(x_65);
x_69 = lean::cnstr_get(x_32, 4);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_69, 0);
lean::inc(x_71);
lean::dec(x_69);
x_74 = l_List_reverse___rarg(x_71);
x_75 = lean::cnstr_get(x_32, 5);
lean::inc(x_75);
x_77 = l_RBTree_toList___at_Lean_Elaborator_oldElabCommand___spec__1(x_75);
x_78 = lean::cnstr_get(x_32, 8);
lean::inc(x_78);
lean::dec(x_32);
x_81 = lean::cnstr_get(x_4, 10);
lean::inc(x_81);
lean::dec(x_4);
x_84 = lean::alloc_cnstr(0, 8, 0);
lean::cnstr_set(x_84, 0, x_59);
lean::cnstr_set(x_84, 1, x_61);
lean::cnstr_set(x_84, 2, x_68);
lean::cnstr_set(x_84, 3, x_74);
lean::cnstr_set(x_84, 4, x_77);
lean::cnstr_set(x_84, 5, x_78);
lean::cnstr_set(x_84, 6, x_81);
lean::cnstr_set(x_84, 7, x_51);
x_85 = lean_elaborator_elaborate_command(x_56, x_13, x_84);
lean::dec(x_84);
lean::dec(x_56);
x_88 = lean::cnstr_get(x_85, 0);
lean::inc(x_88);
if (lean::obj_tag(x_88) == 0)
{
obj* x_91; obj* x_93; obj* x_94; obj* x_96; obj* x_98; obj* x_100; obj* x_102; obj* x_104; obj* x_106; obj* x_107; obj* x_109; obj* x_111; obj* x_113; obj* x_115; obj* x_118; obj* x_119; obj* x_120; obj* x_121; 
lean::dec(x_3);
x_91 = lean::cnstr_get(x_85, 1);
if (lean::is_exclusive(x_85)) {
 lean::cnstr_release(x_85, 0);
 x_93 = x_85;
} else {
 lean::inc(x_91);
 lean::dec(x_85);
 x_93 = lean::box(0);
}
x_94 = lean::cnstr_get(x_53, 0);
lean::inc(x_94);
x_96 = lean::cnstr_get(x_53, 1);
lean::inc(x_96);
x_98 = lean::cnstr_get(x_53, 2);
lean::inc(x_98);
x_100 = lean::cnstr_get(x_53, 3);
lean::inc(x_100);
x_102 = lean::cnstr_get(x_53, 4);
lean::inc(x_102);
x_104 = lean::cnstr_get(x_53, 5);
lean::inc(x_104);
x_106 = l_List_append___rarg(x_91, x_104);
x_107 = lean::cnstr_get(x_53, 6);
lean::inc(x_107);
x_109 = lean::cnstr_get(x_53, 7);
lean::inc(x_109);
x_111 = lean::cnstr_get(x_53, 8);
lean::inc(x_111);
x_113 = lean::cnstr_get(x_53, 9);
lean::inc(x_113);
x_115 = lean::cnstr_get(x_53, 10);
lean::inc(x_115);
lean::dec(x_53);
x_118 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_118, 0, x_94);
lean::cnstr_set(x_118, 1, x_96);
lean::cnstr_set(x_118, 2, x_98);
lean::cnstr_set(x_118, 3, x_100);
lean::cnstr_set(x_118, 4, x_102);
lean::cnstr_set(x_118, 5, x_106);
lean::cnstr_set(x_118, 6, x_107);
lean::cnstr_set(x_118, 7, x_109);
lean::cnstr_set(x_118, 8, x_111);
lean::cnstr_set(x_118, 9, x_113);
lean::cnstr_set(x_118, 10, x_115);
x_119 = lean::box(0);
if (lean::is_scalar(x_93)) {
 x_120 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_120 = x_93;
}
lean::cnstr_set(x_120, 0, x_119);
lean::cnstr_set(x_120, 1, x_118);
if (lean::is_scalar(x_50)) {
 x_121 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_121 = x_50;
}
lean::cnstr_set(x_121, 0, x_120);
return x_121;
}
else
{
obj* x_123; obj* x_126; obj* x_130; obj* x_131; 
lean::dec(x_50);
x_123 = lean::cnstr_get(x_85, 1);
lean::inc(x_123);
lean::dec(x_85);
x_126 = lean::cnstr_get(x_88, 0);
lean::inc(x_126);
lean::dec(x_88);
lean::inc(x_126);
x_130 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_oldElabCommand___lambda__1), 2, 1);
lean::closure_set(x_130, 0, x_126);
x_131 = l_Lean_Elaborator_modifyCurrentScope(x_130, x_2, x_3, x_53);
if (lean::obj_tag(x_131) == 0)
{
obj* x_134; obj* x_136; obj* x_137; 
lean::dec(x_126);
lean::dec(x_123);
x_134 = lean::cnstr_get(x_131, 0);
if (lean::is_exclusive(x_131)) {
 x_136 = x_131;
} else {
 lean::inc(x_134);
 lean::dec(x_131);
 x_136 = lean::box(0);
}
if (lean::is_scalar(x_136)) {
 x_137 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_137 = x_136;
}
lean::cnstr_set(x_137, 0, x_134);
return x_137;
}
else
{
obj* x_138; obj* x_140; obj* x_141; obj* x_143; obj* x_144; obj* x_146; obj* x_148; obj* x_150; obj* x_152; obj* x_154; obj* x_156; obj* x_158; obj* x_161; obj* x_163; obj* x_165; obj* x_168; obj* x_169; obj* x_170; obj* x_171; obj* x_172; 
x_138 = lean::cnstr_get(x_131, 0);
if (lean::is_exclusive(x_131)) {
 x_140 = x_131;
} else {
 lean::inc(x_138);
 lean::dec(x_131);
 x_140 = lean::box(0);
}
x_141 = lean::cnstr_get(x_138, 1);
if (lean::is_exclusive(x_138)) {
 lean::cnstr_release(x_138, 0);
 x_143 = x_138;
} else {
 lean::inc(x_141);
 lean::dec(x_138);
 x_143 = lean::box(0);
}
x_144 = lean::cnstr_get(x_141, 0);
lean::inc(x_144);
x_146 = lean::cnstr_get(x_141, 1);
lean::inc(x_146);
x_148 = lean::cnstr_get(x_141, 2);
lean::inc(x_148);
x_150 = lean::cnstr_get(x_141, 3);
lean::inc(x_150);
x_152 = lean::cnstr_get(x_141, 4);
lean::inc(x_152);
x_154 = lean::cnstr_get(x_141, 5);
lean::inc(x_154);
x_156 = lean::cnstr_get(x_141, 6);
lean::inc(x_156);
x_158 = lean::cnstr_get(x_141, 7);
lean::inc(x_158);
lean::dec(x_141);
x_161 = lean::cnstr_get(x_126, 0);
lean::inc(x_161);
x_163 = lean::cnstr_get(x_126, 1);
lean::inc(x_163);
x_165 = lean::cnstr_get(x_126, 6);
lean::inc(x_165);
lean::dec(x_126);
x_168 = l_List_append___rarg(x_123, x_154);
x_169 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_169, 0, x_144);
lean::cnstr_set(x_169, 1, x_146);
lean::cnstr_set(x_169, 2, x_148);
lean::cnstr_set(x_169, 3, x_150);
lean::cnstr_set(x_169, 4, x_152);
lean::cnstr_set(x_169, 5, x_168);
lean::cnstr_set(x_169, 6, x_156);
lean::cnstr_set(x_169, 7, x_158);
lean::cnstr_set(x_169, 8, x_161);
lean::cnstr_set(x_169, 9, x_163);
lean::cnstr_set(x_169, 10, x_165);
x_170 = lean::box(0);
if (lean::is_scalar(x_143)) {
 x_171 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_171 = x_143;
}
lean::cnstr_set(x_171, 0, x_170);
lean::cnstr_set(x_171, 1, x_169);
if (lean::is_scalar(x_140)) {
 x_172 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_172 = x_140;
}
lean::cnstr_set(x_172, 0, x_171);
return x_172;
}
}
}
}
}
lbl_16:
{
switch (lean::obj_tag(x_1)) {
case 10:
{
obj* x_173; obj* x_175; obj* x_178; obj* x_179; obj* x_181; obj* x_182; obj* x_183; obj* x_186; obj* x_187; obj* x_188; 
x_173 = lean::cnstr_get(x_1, 0);
lean::inc(x_173);
x_175 = lean::cnstr_get(x_1, 1);
lean::inc(x_175);
lean::dec(x_1);
x_178 = l_Lean_FileMap_toPosition(x_7, x_15);
x_179 = lean::cnstr_get(x_178, 1);
lean::inc(x_179);
x_181 = l_Lean_Elaborator_toPexpr___main___closed__3;
x_182 = l_Lean_KVMap_setNat(x_173, x_181, x_179);
x_183 = lean::cnstr_get(x_178, 0);
lean::inc(x_183);
lean::dec(x_178);
x_186 = l_Lean_Elaborator_toPexpr___main___closed__4;
x_187 = l_Lean_KVMap_setNat(x_182, x_186, x_183);
x_188 = lean_expr_mk_mdata(x_187, x_175);
x_13 = x_188;
goto lbl_14;
}
default:
{
lean::dec(x_7);
lean::dec(x_15);
x_13 = x_1;
goto lbl_14;
}
}
}
}
}
obj* l_Lean_Elaborator_oldElabCommand___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_Elaborator_oldElabCommand(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_2);
return x_5;
}
}
obj* l_List_map___main___at_Lean_Elaborator_namesToPexpr___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::box(0);
x_8 = lean_expr_mk_const(x_2, x_7);
x_9 = l_List_map___main___at_Lean_Elaborator_namesToPexpr___spec__1(x_4);
if (lean::is_scalar(x_6)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_6;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_Lean_Elaborator_namesToPexpr(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_List_map___main___at_Lean_Elaborator_namesToPexpr___spec__1(x_0);
x_2 = l_Lean_Elaborator_mkEqns___closed__1;
x_3 = l_Lean_Expr_mkCapp(x_2, x_1);
return x_3;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_attrsToPexpr___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
x_10 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_12 = x_0;
} else {
 lean::inc(x_8);
 lean::inc(x_10);
 lean::dec(x_0);
 x_12 = lean::box(0);
}
lean::inc(x_2);
x_14 = l_Lean_Elaborator_toPexpr___main(x_8, x_1, x_2, x_3);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_10);
lean::dec(x_12);
lean::dec(x_2);
x_18 = lean::cnstr_get(x_14, 0);
if (lean::is_exclusive(x_14)) {
 x_20 = x_14;
} else {
 lean::inc(x_18);
 lean::dec(x_14);
 x_20 = lean::box(0);
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_25; obj* x_27; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
lean::dec(x_14);
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
lean::dec(x_22);
x_30 = l_List_mmap___main___at_Lean_Elaborator_attrsToPexpr___spec__1(x_10, x_1, x_2, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_33; obj* x_35; obj* x_36; 
lean::dec(x_12);
lean::dec(x_25);
x_33 = lean::cnstr_get(x_30, 0);
if (lean::is_exclusive(x_30)) {
 x_35 = x_30;
} else {
 lean::inc(x_33);
 lean::dec(x_30);
 x_35 = lean::box(0);
}
if (lean::is_scalar(x_35)) {
 x_36 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_36 = x_35;
}
lean::cnstr_set(x_36, 0, x_33);
return x_36;
}
else
{
obj* x_37; obj* x_39; obj* x_40; obj* x_42; obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
x_37 = lean::cnstr_get(x_30, 0);
if (lean::is_exclusive(x_30)) {
 x_39 = x_30;
} else {
 lean::inc(x_37);
 lean::dec(x_30);
 x_39 = lean::box(0);
}
x_40 = lean::cnstr_get(x_37, 0);
x_42 = lean::cnstr_get(x_37, 1);
if (lean::is_exclusive(x_37)) {
 x_44 = x_37;
} else {
 lean::inc(x_40);
 lean::inc(x_42);
 lean::dec(x_37);
 x_44 = lean::box(0);
}
if (lean::is_scalar(x_12)) {
 x_45 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_45 = x_12;
}
lean::cnstr_set(x_45, 0, x_25);
lean::cnstr_set(x_45, 1, x_40);
if (lean::is_scalar(x_44)) {
 x_46 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_46 = x_44;
}
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_42);
if (lean::is_scalar(x_39)) {
 x_47 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_47 = x_39;
}
lean::cnstr_set(x_47, 0, x_46);
return x_47;
}
}
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_attrsToPexpr___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_16; obj* x_19; 
x_8 = lean::cnstr_get(x_0, 0);
x_10 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_12 = x_0;
} else {
 lean::inc(x_8);
 lean::inc(x_10);
 lean::dec(x_0);
 x_12 = lean::box(0);
}
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
lean::dec(x_8);
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
lean::inc(x_2);
x_19 = l_List_mmap___main___at_Lean_Elaborator_attrsToPexpr___spec__1(x_16, x_1, x_2, x_3);
if (lean::obj_tag(x_19) == 0)
{
obj* x_24; obj* x_26; obj* x_27; 
lean::dec(x_13);
lean::dec(x_10);
lean::dec(x_12);
lean::dec(x_2);
x_24 = lean::cnstr_get(x_19, 0);
if (lean::is_exclusive(x_19)) {
 x_26 = x_19;
} else {
 lean::inc(x_24);
 lean::dec(x_19);
 x_26 = lean::box(0);
}
if (lean::is_scalar(x_26)) {
 x_27 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_27 = x_26;
}
lean::cnstr_set(x_27, 0, x_24);
return x_27;
}
else
{
obj* x_28; obj* x_31; obj* x_33; obj* x_36; 
x_28 = lean::cnstr_get(x_19, 0);
lean::inc(x_28);
lean::dec(x_19);
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_28, 1);
lean::inc(x_33);
lean::dec(x_28);
x_36 = l_List_mmap___main___at_Lean_Elaborator_attrsToPexpr___spec__2(x_10, x_1, x_2, x_33);
if (lean::obj_tag(x_36) == 0)
{
obj* x_40; obj* x_42; obj* x_43; 
lean::dec(x_13);
lean::dec(x_12);
lean::dec(x_31);
x_40 = lean::cnstr_get(x_36, 0);
if (lean::is_exclusive(x_36)) {
 x_42 = x_36;
} else {
 lean::inc(x_40);
 lean::dec(x_36);
 x_42 = lean::box(0);
}
if (lean::is_scalar(x_42)) {
 x_43 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_43 = x_42;
}
lean::cnstr_set(x_43, 0, x_40);
return x_43;
}
else
{
obj* x_44; obj* x_46; obj* x_47; obj* x_49; obj* x_51; obj* x_52; obj* x_55; obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
x_44 = lean::cnstr_get(x_36, 0);
if (lean::is_exclusive(x_36)) {
 x_46 = x_36;
} else {
 lean::inc(x_44);
 lean::dec(x_36);
 x_46 = lean::box(0);
}
x_47 = lean::cnstr_get(x_44, 0);
x_49 = lean::cnstr_get(x_44, 1);
if (lean::is_exclusive(x_44)) {
 x_51 = x_44;
} else {
 lean::inc(x_47);
 lean::inc(x_49);
 lean::dec(x_44);
 x_51 = lean::box(0);
}
x_52 = lean::cnstr_get(x_13, 0);
lean::inc(x_52);
lean::dec(x_13);
x_55 = lean::cnstr_get(x_52, 2);
lean::inc(x_55);
lean::dec(x_52);
x_58 = l_Lean_Expr_mkCapp(x_55, x_31);
if (lean::is_scalar(x_12)) {
 x_59 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_59 = x_12;
}
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_47);
if (lean::is_scalar(x_51)) {
 x_60 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_60 = x_51;
}
lean::cnstr_set(x_60, 0, x_59);
lean::cnstr_set(x_60, 1, x_49);
if (lean::is_scalar(x_46)) {
 x_61 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_61 = x_46;
}
lean::cnstr_set(x_61, 0, x_60);
return x_61;
}
}
}
}
}
obj* l_Lean_Elaborator_attrsToPexpr(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_List_mmap___main___at_Lean_Elaborator_attrsToPexpr___spec__2(x_0, x_1, x_2, x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; obj* x_7; obj* x_8; 
x_5 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 x_7 = x_4;
} else {
 lean::inc(x_5);
 lean::dec(x_4);
 x_7 = lean::box(0);
}
if (lean::is_scalar(x_7)) {
 x_8 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_8 = x_7;
}
lean::cnstr_set(x_8, 0, x_5);
return x_8;
}
else
{
obj* x_9; obj* x_11; obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_9 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 x_11 = x_4;
} else {
 lean::inc(x_9);
 lean::dec(x_4);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_9, 0);
x_14 = lean::cnstr_get(x_9, 1);
if (lean::is_exclusive(x_9)) {
 x_16 = x_9;
} else {
 lean::inc(x_12);
 lean::inc(x_14);
 lean::dec(x_9);
 x_16 = lean::box(0);
}
x_17 = l_Lean_Elaborator_mkEqns___closed__1;
x_18 = l_Lean_Expr_mkCapp(x_17, x_12);
if (lean::is_scalar(x_16)) {
 x_19 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_19 = x_16;
}
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_14);
if (lean::is_scalar(x_11)) {
 x_20 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_20 = x_11;
}
lean::cnstr_set(x_20, 0, x_19);
return x_20;
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_attrsToPexpr___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_List_mmap___main___at_Lean_Elaborator_attrsToPexpr___spec__1(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_attrsToPexpr___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_List_mmap___main___at_Lean_Elaborator_attrsToPexpr___spec__2(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Elaborator_attrsToPexpr___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_attrsToPexpr(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_Elaborator_declModifiersToPexpr___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("noncomputable");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_declModifiersToPexpr___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("unsafe");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_declModifiersToPexpr___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; uint8 x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("private");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = 1;
x_5 = l_Lean_KVMap_setBool(x_0, x_3, x_4);
return x_5;
}
}
obj* _init_l_Lean_Elaborator_declModifiersToPexpr___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; uint8 x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("protected");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = 1;
x_5 = l_Lean_KVMap_setBool(x_0, x_3, x_4);
return x_5;
}
}
obj* _init_l_Lean_Elaborator_declModifiersToPexpr___closed__5() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("docString");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_declModifiersToPexpr___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("private");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_declModifiersToPexpr___closed__7() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("protected");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_Lean_Elaborator_declModifiersToPexpr(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_16; 
x_4 = lean::box(0);
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 2);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 3);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 4);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_0, 1);
lean::inc(x_13);
lean::dec(x_0);
if (lean::obj_tag(x_5) == 0)
{
if (lean::obj_tag(x_7) == 0)
{
x_16 = x_4;
goto lbl_17;
}
else
{
obj* x_18; 
x_18 = lean::cnstr_get(x_7, 0);
lean::inc(x_18);
lean::dec(x_7);
if (lean::obj_tag(x_18) == 0)
{
obj* x_22; 
lean::dec(x_18);
x_22 = l_Lean_Elaborator_declModifiersToPexpr___closed__3;
x_16 = x_22;
goto lbl_17;
}
else
{
obj* x_24; 
lean::dec(x_18);
x_24 = l_Lean_Elaborator_declModifiersToPexpr___closed__4;
x_16 = x_24;
goto lbl_17;
}
}
}
else
{
obj* x_25; obj* x_28; 
x_25 = lean::cnstr_get(x_5, 0);
lean::inc(x_25);
lean::dec(x_5);
x_28 = lean::cnstr_get(x_25, 1);
lean::inc(x_28);
lean::dec(x_25);
if (lean::obj_tag(x_28) == 0)
{
if (lean::obj_tag(x_7) == 0)
{
x_16 = x_4;
goto lbl_17;
}
else
{
obj* x_31; 
x_31 = lean::cnstr_get(x_7, 0);
lean::inc(x_31);
lean::dec(x_7);
if (lean::obj_tag(x_31) == 0)
{
obj* x_35; 
lean::dec(x_31);
x_35 = l_Lean_Elaborator_declModifiersToPexpr___closed__3;
x_16 = x_35;
goto lbl_17;
}
else
{
obj* x_37; 
lean::dec(x_31);
x_37 = l_Lean_Elaborator_declModifiersToPexpr___closed__4;
x_16 = x_37;
goto lbl_17;
}
}
}
else
{
obj* x_38; obj* x_41; obj* x_44; obj* x_45; 
x_38 = lean::cnstr_get(x_28, 0);
lean::inc(x_38);
lean::dec(x_28);
x_41 = lean::cnstr_get(x_38, 1);
lean::inc(x_41);
lean::dec(x_38);
x_44 = l_Lean_Elaborator_declModifiersToPexpr___closed__5;
x_45 = l_Lean_KVMap_setString(x_4, x_44, x_41);
if (lean::obj_tag(x_7) == 0)
{
x_16 = x_45;
goto lbl_17;
}
else
{
obj* x_46; 
x_46 = lean::cnstr_get(x_7, 0);
lean::inc(x_46);
lean::dec(x_7);
if (lean::obj_tag(x_46) == 0)
{
obj* x_50; uint8 x_51; obj* x_52; 
lean::dec(x_46);
x_50 = l_Lean_Elaborator_declModifiersToPexpr___closed__6;
x_51 = 1;
x_52 = l_Lean_KVMap_setBool(x_45, x_50, x_51);
x_16 = x_52;
goto lbl_17;
}
else
{
obj* x_54; uint8 x_55; obj* x_56; 
lean::dec(x_46);
x_54 = l_Lean_Elaborator_declModifiersToPexpr___closed__7;
x_55 = 1;
x_56 = l_Lean_KVMap_setBool(x_45, x_54, x_55);
x_16 = x_56;
goto lbl_17;
}
}
}
}
lbl_17:
{
uint8 x_57; 
if (lean::obj_tag(x_9) == 0)
{
uint8 x_59; 
x_59 = 0;
x_57 = x_59;
goto lbl_58;
}
else
{
uint8 x_61; 
lean::dec(x_9);
x_61 = 1;
x_57 = x_61;
goto lbl_58;
}
lbl_58:
{
obj* x_62; obj* x_63; 
x_62 = l_Lean_Elaborator_declModifiersToPexpr___closed__1;
x_63 = l_Lean_KVMap_setBool(x_16, x_62, x_57);
if (lean::obj_tag(x_11) == 0)
{
obj* x_64; uint8 x_65; obj* x_66; 
x_64 = l_Lean_Elaborator_declModifiersToPexpr___closed__2;
x_65 = 0;
x_66 = l_Lean_KVMap_setBool(x_63, x_64, x_65);
if (lean::obj_tag(x_13) == 0)
{
obj* x_67; 
x_67 = l_Lean_Elaborator_attrsToPexpr(x_4, x_1, x_2, x_3);
if (lean::obj_tag(x_67) == 0)
{
obj* x_69; obj* x_71; obj* x_72; 
lean::dec(x_66);
x_69 = lean::cnstr_get(x_67, 0);
if (lean::is_exclusive(x_67)) {
 x_71 = x_67;
} else {
 lean::inc(x_69);
 lean::dec(x_67);
 x_71 = lean::box(0);
}
if (lean::is_scalar(x_71)) {
 x_72 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_72 = x_71;
}
lean::cnstr_set(x_72, 0, x_69);
return x_72;
}
else
{
obj* x_73; obj* x_75; obj* x_76; obj* x_78; obj* x_80; obj* x_81; obj* x_82; obj* x_83; 
x_73 = lean::cnstr_get(x_67, 0);
if (lean::is_exclusive(x_67)) {
 x_75 = x_67;
} else {
 lean::inc(x_73);
 lean::dec(x_67);
 x_75 = lean::box(0);
}
x_76 = lean::cnstr_get(x_73, 0);
x_78 = lean::cnstr_get(x_73, 1);
if (lean::is_exclusive(x_73)) {
 x_80 = x_73;
} else {
 lean::inc(x_76);
 lean::inc(x_78);
 lean::dec(x_73);
 x_80 = lean::box(0);
}
x_81 = lean_expr_mk_mdata(x_66, x_76);
if (lean::is_scalar(x_80)) {
 x_82 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_82 = x_80;
}
lean::cnstr_set(x_82, 0, x_81);
lean::cnstr_set(x_82, 1, x_78);
if (lean::is_scalar(x_75)) {
 x_83 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_83 = x_75;
}
lean::cnstr_set(x_83, 0, x_82);
return x_83;
}
}
else
{
obj* x_84; obj* x_87; obj* x_90; 
x_84 = lean::cnstr_get(x_13, 0);
lean::inc(x_84);
lean::dec(x_13);
x_87 = lean::cnstr_get(x_84, 1);
lean::inc(x_87);
lean::dec(x_84);
x_90 = l_Lean_Elaborator_attrsToPexpr(x_87, x_1, x_2, x_3);
if (lean::obj_tag(x_90) == 0)
{
obj* x_92; obj* x_94; obj* x_95; 
lean::dec(x_66);
x_92 = lean::cnstr_get(x_90, 0);
if (lean::is_exclusive(x_90)) {
 x_94 = x_90;
} else {
 lean::inc(x_92);
 lean::dec(x_90);
 x_94 = lean::box(0);
}
if (lean::is_scalar(x_94)) {
 x_95 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_95 = x_94;
}
lean::cnstr_set(x_95, 0, x_92);
return x_95;
}
else
{
obj* x_96; obj* x_98; obj* x_99; obj* x_101; obj* x_103; obj* x_104; obj* x_105; obj* x_106; 
x_96 = lean::cnstr_get(x_90, 0);
if (lean::is_exclusive(x_90)) {
 x_98 = x_90;
} else {
 lean::inc(x_96);
 lean::dec(x_90);
 x_98 = lean::box(0);
}
x_99 = lean::cnstr_get(x_96, 0);
x_101 = lean::cnstr_get(x_96, 1);
if (lean::is_exclusive(x_96)) {
 x_103 = x_96;
} else {
 lean::inc(x_99);
 lean::inc(x_101);
 lean::dec(x_96);
 x_103 = lean::box(0);
}
x_104 = lean_expr_mk_mdata(x_66, x_99);
if (lean::is_scalar(x_103)) {
 x_105 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_105 = x_103;
}
lean::cnstr_set(x_105, 0, x_104);
lean::cnstr_set(x_105, 1, x_101);
if (lean::is_scalar(x_98)) {
 x_106 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_106 = x_98;
}
lean::cnstr_set(x_106, 0, x_105);
return x_106;
}
}
}
else
{
obj* x_108; uint8 x_109; obj* x_110; 
lean::dec(x_11);
x_108 = l_Lean_Elaborator_declModifiersToPexpr___closed__2;
x_109 = 1;
x_110 = l_Lean_KVMap_setBool(x_63, x_108, x_109);
if (lean::obj_tag(x_13) == 0)
{
obj* x_111; 
x_111 = l_Lean_Elaborator_attrsToPexpr(x_4, x_1, x_2, x_3);
if (lean::obj_tag(x_111) == 0)
{
obj* x_113; obj* x_115; obj* x_116; 
lean::dec(x_110);
x_113 = lean::cnstr_get(x_111, 0);
if (lean::is_exclusive(x_111)) {
 x_115 = x_111;
} else {
 lean::inc(x_113);
 lean::dec(x_111);
 x_115 = lean::box(0);
}
if (lean::is_scalar(x_115)) {
 x_116 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_116 = x_115;
}
lean::cnstr_set(x_116, 0, x_113);
return x_116;
}
else
{
obj* x_117; obj* x_119; obj* x_120; obj* x_122; obj* x_124; obj* x_125; obj* x_126; obj* x_127; 
x_117 = lean::cnstr_get(x_111, 0);
if (lean::is_exclusive(x_111)) {
 x_119 = x_111;
} else {
 lean::inc(x_117);
 lean::dec(x_111);
 x_119 = lean::box(0);
}
x_120 = lean::cnstr_get(x_117, 0);
x_122 = lean::cnstr_get(x_117, 1);
if (lean::is_exclusive(x_117)) {
 x_124 = x_117;
} else {
 lean::inc(x_120);
 lean::inc(x_122);
 lean::dec(x_117);
 x_124 = lean::box(0);
}
x_125 = lean_expr_mk_mdata(x_110, x_120);
if (lean::is_scalar(x_124)) {
 x_126 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_126 = x_124;
}
lean::cnstr_set(x_126, 0, x_125);
lean::cnstr_set(x_126, 1, x_122);
if (lean::is_scalar(x_119)) {
 x_127 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_127 = x_119;
}
lean::cnstr_set(x_127, 0, x_126);
return x_127;
}
}
else
{
obj* x_128; obj* x_131; obj* x_134; 
x_128 = lean::cnstr_get(x_13, 0);
lean::inc(x_128);
lean::dec(x_13);
x_131 = lean::cnstr_get(x_128, 1);
lean::inc(x_131);
lean::dec(x_128);
x_134 = l_Lean_Elaborator_attrsToPexpr(x_131, x_1, x_2, x_3);
if (lean::obj_tag(x_134) == 0)
{
obj* x_136; obj* x_138; obj* x_139; 
lean::dec(x_110);
x_136 = lean::cnstr_get(x_134, 0);
if (lean::is_exclusive(x_134)) {
 x_138 = x_134;
} else {
 lean::inc(x_136);
 lean::dec(x_134);
 x_138 = lean::box(0);
}
if (lean::is_scalar(x_138)) {
 x_139 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_139 = x_138;
}
lean::cnstr_set(x_139, 0, x_136);
return x_139;
}
else
{
obj* x_140; obj* x_142; obj* x_143; obj* x_145; obj* x_147; obj* x_148; obj* x_149; obj* x_150; 
x_140 = lean::cnstr_get(x_134, 0);
if (lean::is_exclusive(x_134)) {
 x_142 = x_134;
} else {
 lean::inc(x_140);
 lean::dec(x_134);
 x_142 = lean::box(0);
}
x_143 = lean::cnstr_get(x_140, 0);
x_145 = lean::cnstr_get(x_140, 1);
if (lean::is_exclusive(x_140)) {
 x_147 = x_140;
} else {
 lean::inc(x_143);
 lean::inc(x_145);
 lean::dec(x_140);
 x_147 = lean::box(0);
}
x_148 = lean_expr_mk_mdata(x_110, x_143);
if (lean::is_scalar(x_147)) {
 x_149 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_149 = x_147;
}
lean::cnstr_set(x_149, 0, x_148);
lean::cnstr_set(x_149, 1, x_145);
if (lean::is_scalar(x_142)) {
 x_150 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_150 = x_142;
}
lean::cnstr_set(x_150, 0, x_149);
return x_150;
}
}
}
}
}
}
}
obj* l_Lean_Elaborator_declModifiersToPexpr___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_declModifiersToPexpr(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_List_map___main___at_Lean_Elaborator_identUnivParamsToPexpr___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_Lean_Elaborator_mangleIdent(x_2);
x_8 = level_mk_param(x_7);
x_9 = l_List_map___main___at_Lean_Elaborator_identUnivParamsToPexpr___spec__1(x_4);
if (lean::is_scalar(x_6)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_6;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_Lean_Elaborator_identUnivParamsToPexpr(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_4; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = l_Lean_Elaborator_mangleIdent(x_1);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_7; obj* x_8; 
x_7 = lean::box(0);
x_8 = lean_expr_mk_const(x_3, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_12; obj* x_15; obj* x_16; 
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
lean::dec(x_4);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
lean::dec(x_9);
x_15 = l_List_map___main___at_Lean_Elaborator_identUnivParamsToPexpr___spec__1(x_12);
x_16 = lean_expr_mk_const(x_3, x_15);
return x_16;
}
}
}
obj* l_Lean_Elaborator_locally(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; 
lean::inc(x_2);
x_5 = l_Lean_Elaborator_currentScope(x_1, x_2, x_3);
if (lean::obj_tag(x_5) == 0)
{
obj* x_9; obj* x_11; obj* x_12; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_9 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 x_11 = x_5;
} else {
 lean::inc(x_9);
 lean::dec(x_5);
 x_11 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_12 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_12 = x_11;
}
lean::cnstr_set(x_12, 0, x_9);
return x_12;
}
else
{
obj* x_13; obj* x_16; obj* x_18; obj* x_23; 
x_13 = lean::cnstr_get(x_5, 0);
lean::inc(x_13);
lean::dec(x_5);
x_16 = lean::cnstr_get(x_13, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_13, 1);
lean::inc(x_18);
lean::dec(x_13);
lean::inc(x_2);
lean::inc(x_1);
x_23 = lean::apply_3(x_0, x_1, x_2, x_18);
if (lean::obj_tag(x_23) == 0)
{
obj* x_27; obj* x_29; obj* x_30; 
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_16);
x_27 = lean::cnstr_get(x_23, 0);
if (lean::is_exclusive(x_23)) {
 x_29 = x_23;
} else {
 lean::inc(x_27);
 lean::dec(x_23);
 x_29 = lean::box(0);
}
if (lean::is_scalar(x_29)) {
 x_30 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_30 = x_29;
}
lean::cnstr_set(x_30, 0, x_27);
return x_30;
}
else
{
obj* x_31; obj* x_34; obj* x_37; obj* x_38; 
x_31 = lean::cnstr_get(x_23, 0);
lean::inc(x_31);
lean::dec(x_23);
x_34 = lean::cnstr_get(x_31, 1);
lean::inc(x_34);
lean::dec(x_31);
x_37 = lean::alloc_closure(reinterpret_cast<void*>(l_fix1___rarg___lambda__1___boxed), 2, 1);
lean::closure_set(x_37, 0, x_16);
x_38 = l_Lean_Elaborator_modifyCurrentScope(x_37, x_1, x_2, x_34);
lean::dec(x_1);
return x_38;
}
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_simpleBindersToPexpr___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_16; obj* x_19; obj* x_21; obj* x_25; 
x_8 = lean::cnstr_get(x_0, 0);
x_10 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_12 = x_0;
} else {
 lean::inc(x_8);
 lean::inc(x_10);
 lean::dec(x_0);
 x_12 = lean::box(0);
}
x_13 = l_Lean_Parser_Term_simpleBinder_View_toBinderInfo___main(x_8);
x_14 = lean::cnstr_get(x_13, 1);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_13, 0);
lean::inc(x_16);
lean::dec(x_13);
x_19 = lean::cnstr_get(x_14, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_14, 1);
lean::inc(x_21);
lean::dec(x_14);
lean::inc(x_2);
x_25 = l_Lean_Elaborator_toPexpr___main(x_21, x_1, x_2, x_3);
if (lean::obj_tag(x_25) == 0)
{
obj* x_31; obj* x_33; obj* x_34; 
lean::dec(x_10);
lean::dec(x_12);
lean::dec(x_2);
lean::dec(x_16);
lean::dec(x_19);
x_31 = lean::cnstr_get(x_25, 0);
if (lean::is_exclusive(x_25)) {
 x_33 = x_25;
} else {
 lean::inc(x_31);
 lean::dec(x_25);
 x_33 = lean::box(0);
}
if (lean::is_scalar(x_33)) {
 x_34 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_34 = x_33;
}
lean::cnstr_set(x_34, 0, x_31);
return x_34;
}
else
{
obj* x_35; obj* x_38; obj* x_40; obj* x_43; 
x_35 = lean::cnstr_get(x_25, 0);
lean::inc(x_35);
lean::dec(x_25);
x_38 = lean::cnstr_get(x_35, 0);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_35, 1);
lean::inc(x_40);
lean::dec(x_35);
x_43 = l_List_mmap___main___at_Lean_Elaborator_simpleBindersToPexpr___spec__1(x_10, x_1, x_2, x_40);
if (lean::obj_tag(x_43) == 0)
{
obj* x_48; obj* x_50; obj* x_51; 
lean::dec(x_12);
lean::dec(x_38);
lean::dec(x_16);
lean::dec(x_19);
x_48 = lean::cnstr_get(x_43, 0);
if (lean::is_exclusive(x_43)) {
 x_50 = x_43;
} else {
 lean::inc(x_48);
 lean::dec(x_43);
 x_50 = lean::box(0);
}
if (lean::is_scalar(x_50)) {
 x_51 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_51 = x_50;
}
lean::cnstr_set(x_51, 0, x_48);
return x_51;
}
else
{
obj* x_52; obj* x_54; obj* x_55; obj* x_57; obj* x_59; obj* x_60; uint8 x_61; obj* x_63; obj* x_64; obj* x_65; obj* x_66; 
x_52 = lean::cnstr_get(x_43, 0);
if (lean::is_exclusive(x_43)) {
 x_54 = x_43;
} else {
 lean::inc(x_52);
 lean::dec(x_43);
 x_54 = lean::box(0);
}
x_55 = lean::cnstr_get(x_52, 0);
x_57 = lean::cnstr_get(x_52, 1);
if (lean::is_exclusive(x_52)) {
 x_59 = x_52;
} else {
 lean::inc(x_55);
 lean::inc(x_57);
 lean::dec(x_52);
 x_59 = lean::box(0);
}
x_60 = l_Lean_Elaborator_mangleIdent(x_19);
x_61 = lean::unbox(x_16);
lean::inc(x_60);
x_63 = lean_expr_local(x_60, x_60, x_38, x_61);
if (lean::is_scalar(x_12)) {
 x_64 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_64 = x_12;
}
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_55);
if (lean::is_scalar(x_59)) {
 x_65 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_65 = x_59;
}
lean::cnstr_set(x_65, 0, x_64);
lean::cnstr_set(x_65, 1, x_57);
if (lean::is_scalar(x_54)) {
 x_66 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_66 = x_54;
}
lean::cnstr_set(x_66, 0, x_65);
return x_66;
}
}
}
}
}
obj* l_Lean_Elaborator_simpleBindersToPexpr(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_List_mmap___main___at_Lean_Elaborator_simpleBindersToPexpr___spec__1(x_0, x_1, x_2, x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; obj* x_7; obj* x_8; 
x_5 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 x_7 = x_4;
} else {
 lean::inc(x_5);
 lean::dec(x_4);
 x_7 = lean::box(0);
}
if (lean::is_scalar(x_7)) {
 x_8 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_8 = x_7;
}
lean::cnstr_set(x_8, 0, x_5);
return x_8;
}
else
{
obj* x_9; obj* x_11; obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_9 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 x_11 = x_4;
} else {
 lean::inc(x_9);
 lean::dec(x_4);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_9, 0);
x_14 = lean::cnstr_get(x_9, 1);
if (lean::is_exclusive(x_9)) {
 x_16 = x_9;
} else {
 lean::inc(x_12);
 lean::inc(x_14);
 lean::dec(x_9);
 x_16 = lean::box(0);
}
x_17 = l_Lean_Elaborator_mkEqns___closed__1;
x_18 = l_Lean_Expr_mkCapp(x_17, x_12);
if (lean::is_scalar(x_16)) {
 x_19 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_19 = x_16;
}
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_14);
if (lean::is_scalar(x_11)) {
 x_20 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_20 = x_11;
}
lean::cnstr_set(x_20, 0, x_19);
return x_20;
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_simpleBindersToPexpr___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_List_mmap___main___at_Lean_Elaborator_simpleBindersToPexpr___spec__1(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Elaborator_simpleBindersToPexpr___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_simpleBindersToPexpr(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_elabDefLike___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_3);
lean::dec(x_0);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_4);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; obj* x_18; 
x_10 = lean::cnstr_get(x_1, 0);
x_12 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_14 = x_1;
} else {
 lean::inc(x_10);
 lean::inc(x_12);
 lean::dec(x_1);
 x_14 = lean::box(0);
}
x_15 = lean::cnstr_get(x_10, 1);
lean::inc(x_15);
lean::inc(x_3);
x_18 = l_List_mmap___main___at_Lean_Elaborator_attrsToPexpr___spec__1(x_15, x_2, x_3, x_4);
if (lean::obj_tag(x_18) == 0)
{
obj* x_24; obj* x_26; obj* x_27; 
lean::dec(x_14);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_10);
lean::dec(x_12);
x_24 = lean::cnstr_get(x_18, 0);
if (lean::is_exclusive(x_18)) {
 x_26 = x_18;
} else {
 lean::inc(x_24);
 lean::dec(x_18);
 x_26 = lean::box(0);
}
if (lean::is_scalar(x_26)) {
 x_27 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_27 = x_26;
}
lean::cnstr_set(x_27, 0, x_24);
return x_27;
}
else
{
obj* x_28; obj* x_31; obj* x_33; obj* x_35; obj* x_36; obj* x_40; 
x_28 = lean::cnstr_get(x_18, 0);
lean::inc(x_28);
lean::dec(x_18);
x_31 = lean::cnstr_get(x_28, 0);
x_33 = lean::cnstr_get(x_28, 1);
if (lean::is_exclusive(x_28)) {
 lean::cnstr_set(x_28, 0, lean::box(0));
 lean::cnstr_set(x_28, 1, lean::box(0));
 x_35 = x_28;
} else {
 lean::inc(x_31);
 lean::inc(x_33);
 lean::dec(x_28);
 x_35 = lean::box(0);
}
x_36 = lean::cnstr_get(x_10, 3);
lean::inc(x_36);
lean::dec(x_10);
lean::inc(x_3);
x_40 = l_Lean_Elaborator_toPexpr___main(x_36, x_2, x_3, x_33);
if (lean::obj_tag(x_40) == 0)
{
obj* x_47; obj* x_49; obj* x_50; 
lean::dec(x_14);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_12);
lean::dec(x_35);
lean::dec(x_31);
x_47 = lean::cnstr_get(x_40, 0);
if (lean::is_exclusive(x_40)) {
 x_49 = x_40;
} else {
 lean::inc(x_47);
 lean::dec(x_40);
 x_49 = lean::box(0);
}
if (lean::is_scalar(x_49)) {
 x_50 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_50 = x_49;
}
lean::cnstr_set(x_50, 0, x_47);
return x_50;
}
else
{
obj* x_51; obj* x_54; obj* x_56; obj* x_58; obj* x_60; 
x_51 = lean::cnstr_get(x_40, 0);
lean::inc(x_51);
lean::dec(x_40);
x_54 = lean::cnstr_get(x_51, 0);
x_56 = lean::cnstr_get(x_51, 1);
if (lean::is_exclusive(x_51)) {
 lean::cnstr_set(x_51, 0, lean::box(0));
 lean::cnstr_set(x_51, 1, lean::box(0));
 x_58 = x_51;
} else {
 lean::inc(x_54);
 lean::inc(x_56);
 lean::dec(x_51);
 x_58 = lean::box(0);
}
lean::inc(x_0);
x_60 = l_List_mmap___main___at_Lean_Elaborator_elabDefLike___spec__1(x_0, x_12, x_2, x_3, x_56);
if (lean::obj_tag(x_60) == 0)
{
obj* x_67; obj* x_69; obj* x_70; 
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_35);
lean::dec(x_31);
lean::dec(x_54);
lean::dec(x_58);
x_67 = lean::cnstr_get(x_60, 0);
if (lean::is_exclusive(x_60)) {
 x_69 = x_60;
} else {
 lean::inc(x_67);
 lean::dec(x_60);
 x_69 = lean::box(0);
}
if (lean::is_scalar(x_69)) {
 x_70 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_70 = x_69;
}
lean::cnstr_set(x_70, 0, x_67);
return x_70;
}
else
{
obj* x_71; obj* x_73; obj* x_74; obj* x_76; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; 
x_71 = lean::cnstr_get(x_60, 0);
if (lean::is_exclusive(x_60)) {
 x_73 = x_60;
} else {
 lean::inc(x_71);
 lean::dec(x_60);
 x_73 = lean::box(0);
}
x_74 = lean::cnstr_get(x_71, 0);
x_76 = lean::cnstr_get(x_71, 1);
if (lean::is_exclusive(x_71)) {
 x_78 = x_71;
} else {
 lean::inc(x_74);
 lean::inc(x_76);
 lean::dec(x_71);
 x_78 = lean::box(0);
}
if (lean::is_scalar(x_78)) {
 x_79 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_79 = x_78;
}
lean::cnstr_set(x_79, 0, x_31);
lean::cnstr_set(x_79, 1, x_54);
if (lean::is_scalar(x_58)) {
 x_80 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_80 = x_58;
}
lean::cnstr_set(x_80, 0, x_0);
lean::cnstr_set(x_80, 1, x_79);
if (lean::is_scalar(x_14)) {
 x_81 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_81 = x_14;
}
lean::cnstr_set(x_81, 0, x_80);
lean::cnstr_set(x_81, 1, x_74);
if (lean::is_scalar(x_35)) {
 x_82 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_82 = x_35;
}
lean::cnstr_set(x_82, 0, x_81);
lean::cnstr_set(x_82, 1, x_76);
if (lean::is_scalar(x_73)) {
 x_83 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_83 = x_73;
}
lean::cnstr_set(x_83, 0, x_82);
return x_83;
}
}
}
}
}
}
obj* l_List_map___main___at_Lean_Elaborator_elabDefLike___spec__2(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_Lean_Elaborator_mangleIdent(x_2);
x_8 = l_List_map___main___at_Lean_Elaborator_elabDefLike___spec__2(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_List_foldl___main___at_Lean_Elaborator_elabDefLike___spec__3(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
lean::inc(x_2);
x_8 = level_mk_param(x_2);
x_9 = l_Lean_Elaborator_toLevel___main___closed__4;
x_10 = l_Lean_Elaborator_OrderedRBMap_insert___rarg(x_9, x_0, x_2, x_8);
x_0 = x_10;
x_1 = x_4;
goto _start;
}
}
}
obj* l_Lean_Elaborator_elabDefLike___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_13; obj* x_14; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_26; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 3);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
lean::dec(x_0);
x_13 = l_List_map___main___at_Lean_Elaborator_elabDefLike___spec__2(x_10);
x_14 = l_List_foldl___main___at_Lean_Elaborator_elabDefLike___spec__3(x_8, x_13);
x_15 = lean::cnstr_get(x_1, 4);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_1, 5);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_1, 6);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_1, 7);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_1, 8);
lean::inc(x_23);
lean::dec(x_1);
x_26 = lean::alloc_cnstr(0, 9, 0);
lean::cnstr_set(x_26, 0, x_2);
lean::cnstr_set(x_26, 1, x_4);
lean::cnstr_set(x_26, 2, x_6);
lean::cnstr_set(x_26, 3, x_14);
lean::cnstr_set(x_26, 4, x_15);
lean::cnstr_set(x_26, 5, x_17);
lean::cnstr_set(x_26, 6, x_19);
lean::cnstr_set(x_26, 7, x_21);
lean::cnstr_set(x_26, 8, x_23);
return x_26;
}
}
obj* _init_l_Lean_Elaborator_elabDefLike___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("elabDefLike: unexpected input");
return x_0;
}
}
obj* _init_l_Lean_Elaborator_elabDefLike___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("defs");
x_4 = lean_name_mk_string(x_0, x_3);
x_5 = lean::box(0);
x_6 = l_Lean_KVMap_setName(x_5, x_2, x_4);
return x_6;
}
}
obj* l_Lean_Elaborator_elabDefLike(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_9; 
x_7 = lean::cnstr_get(x_2, 3);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_7, 0);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 0)
{
obj* x_16; obj* x_17; obj* x_18; 
lean::dec(x_9);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
x_16 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_16, 0, x_0);
x_17 = l_Lean_Elaborator_elabDefLike___closed__1;
x_18 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_16, x_17, x_4, x_5, x_6);
lean::dec(x_6);
lean::dec(x_16);
return x_18;
}
else
{
obj* x_21; obj* x_23; obj* x_25; obj* x_28; obj* x_31; obj* x_35; 
x_21 = lean::cnstr_get(x_2, 1);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_2, 2);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_2, 4);
lean::inc(x_25);
lean::dec(x_2);
x_28 = lean::cnstr_get(x_7, 1);
lean::inc(x_28);
lean::dec(x_7);
x_31 = lean::cnstr_get(x_9, 0);
lean::inc(x_31);
lean::dec(x_9);
lean::inc(x_5);
x_35 = l_Lean_Elaborator_declModifiersToPexpr(x_1, x_4, x_5, x_6);
if (lean::obj_tag(x_35) == 0)
{
obj* x_44; obj* x_46; obj* x_47; 
lean::dec(x_5);
lean::dec(x_31);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_21);
lean::dec(x_23);
lean::dec(x_25);
lean::dec(x_28);
x_44 = lean::cnstr_get(x_35, 0);
if (lean::is_exclusive(x_35)) {
 x_46 = x_35;
} else {
 lean::inc(x_44);
 lean::dec(x_35);
 x_46 = lean::box(0);
}
if (lean::is_scalar(x_46)) {
 x_47 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_47 = x_46;
}
lean::cnstr_set(x_47, 0, x_44);
return x_47;
}
else
{
obj* x_48; obj* x_51; obj* x_53; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_48 = lean::cnstr_get(x_35, 0);
lean::inc(x_48);
lean::dec(x_35);
x_51 = lean::cnstr_get(x_48, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_48, 1);
lean::inc(x_53);
lean::dec(x_48);
x_56 = lean::box(0);
x_57 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_57, 0, x_3);
x_58 = lean_expr_mk_lit(x_57);
if (lean::obj_tag(x_21) == 0)
{
obj* x_62; obj* x_65; 
x_62 = l_Lean_Expander_getOptType___main(x_28);
lean::dec(x_28);
lean::inc(x_5);
x_65 = l_Lean_Elaborator_toPexpr___main(x_62, x_4, x_5, x_53);
if (lean::obj_tag(x_65) == 0)
{
obj* x_73; obj* x_75; obj* x_76; 
lean::dec(x_5);
lean::dec(x_31);
lean::dec(x_0);
lean::dec(x_58);
lean::dec(x_23);
lean::dec(x_25);
lean::dec(x_51);
x_73 = lean::cnstr_get(x_65, 0);
if (lean::is_exclusive(x_65)) {
 x_75 = x_65;
} else {
 lean::inc(x_73);
 lean::dec(x_65);
 x_75 = lean::box(0);
}
if (lean::is_scalar(x_75)) {
 x_76 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_76 = x_75;
}
lean::cnstr_set(x_76, 0, x_73);
return x_76;
}
else
{
obj* x_77; 
x_77 = lean::cnstr_get(x_65, 0);
lean::inc(x_77);
lean::dec(x_65);
x_59 = x_56;
x_60 = x_77;
goto lbl_61;
}
}
else
{
obj* x_80; obj* x_84; obj* x_86; 
x_80 = lean::cnstr_get(x_21, 0);
lean::inc(x_80);
lean::dec(x_21);
lean::inc(x_80);
x_84 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_elabDefLike___lambda__1), 2, 1);
lean::closure_set(x_84, 0, x_80);
lean::inc(x_5);
x_86 = l_Lean_Elaborator_modifyCurrentScope(x_84, x_4, x_5, x_53);
if (lean::obj_tag(x_86) == 0)
{
obj* x_96; obj* x_98; obj* x_99; 
lean::dec(x_5);
lean::dec(x_31);
lean::dec(x_0);
lean::dec(x_80);
lean::dec(x_58);
lean::dec(x_23);
lean::dec(x_25);
lean::dec(x_28);
lean::dec(x_51);
x_96 = lean::cnstr_get(x_86, 0);
if (lean::is_exclusive(x_86)) {
 x_98 = x_86;
} else {
 lean::inc(x_96);
 lean::dec(x_86);
 x_98 = lean::box(0);
}
if (lean::is_scalar(x_98)) {
 x_99 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_99 = x_98;
}
lean::cnstr_set(x_99, 0, x_96);
return x_99;
}
else
{
obj* x_100; obj* x_103; obj* x_106; obj* x_109; 
x_100 = lean::cnstr_get(x_86, 0);
lean::inc(x_100);
lean::dec(x_86);
x_103 = lean::cnstr_get(x_100, 1);
lean::inc(x_103);
lean::dec(x_100);
x_106 = l_Lean_Expander_getOptType___main(x_28);
lean::dec(x_28);
lean::inc(x_5);
x_109 = l_Lean_Elaborator_toPexpr___main(x_106, x_4, x_5, x_103);
if (lean::obj_tag(x_109) == 0)
{
obj* x_118; obj* x_120; obj* x_121; 
lean::dec(x_5);
lean::dec(x_31);
lean::dec(x_0);
lean::dec(x_80);
lean::dec(x_58);
lean::dec(x_23);
lean::dec(x_25);
lean::dec(x_51);
x_118 = lean::cnstr_get(x_109, 0);
if (lean::is_exclusive(x_109)) {
 x_120 = x_109;
} else {
 lean::inc(x_118);
 lean::dec(x_109);
 x_120 = lean::box(0);
}
if (lean::is_scalar(x_120)) {
 x_121 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_121 = x_120;
}
lean::cnstr_set(x_121, 0, x_118);
return x_121;
}
else
{
obj* x_122; obj* x_125; obj* x_128; 
x_122 = lean::cnstr_get(x_109, 0);
lean::inc(x_122);
lean::dec(x_109);
x_125 = lean::cnstr_get(x_80, 1);
lean::inc(x_125);
lean::dec(x_80);
x_128 = l_List_map___main___at_Lean_Elaborator_elabDefLike___spec__2(x_125);
x_59 = x_128;
x_60 = x_122;
goto lbl_61;
}
}
}
lbl_61:
{
obj* x_129; obj* x_131; obj* x_133; obj* x_134; obj* x_135; obj* x_138; uint8 x_139; obj* x_143; obj* x_144; obj* x_145; obj* x_146; obj* x_147; 
x_129 = lean::cnstr_get(x_60, 0);
x_131 = lean::cnstr_get(x_60, 1);
if (lean::is_exclusive(x_60)) {
 lean::cnstr_set(x_60, 0, lean::box(0));
 lean::cnstr_set(x_60, 1, lean::box(0));
 x_133 = x_60;
} else {
 lean::inc(x_129);
 lean::inc(x_131);
 lean::dec(x_60);
 x_133 = lean::box(0);
}
x_134 = l_Lean_Elaborator_namesToPexpr(x_59);
x_135 = lean::cnstr_get(x_23, 0);
lean::inc(x_135);
lean::dec(x_23);
x_138 = l_Lean_Elaborator_mangleIdent(x_135);
x_139 = 4;
lean::inc(x_129);
lean::inc(x_138);
lean::inc(x_138);
x_143 = lean_expr_local(x_138, x_138, x_129, x_139);
x_144 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_144, 0, x_143);
lean::cnstr_set(x_144, 1, x_56);
x_145 = l_Lean_Elaborator_mkEqns___closed__1;
x_146 = l_Lean_Expr_mkCapp(x_145, x_144);
switch (lean::obj_tag(x_25)) {
case 0:
{
obj* x_152; obj* x_155; obj* x_159; 
lean::dec(x_129);
lean::dec(x_138);
lean::dec(x_133);
x_152 = lean::cnstr_get(x_25, 0);
lean::inc(x_152);
lean::dec(x_25);
x_155 = lean::cnstr_get(x_152, 1);
lean::inc(x_155);
lean::dec(x_152);
lean::inc(x_5);
x_159 = l_Lean_Elaborator_toPexpr___main(x_155, x_4, x_5, x_131);
if (lean::obj_tag(x_159) == 0)
{
obj* x_167; obj* x_169; obj* x_170; 
lean::dec(x_5);
lean::dec(x_31);
lean::dec(x_0);
lean::dec(x_58);
lean::dec(x_51);
lean::dec(x_146);
lean::dec(x_134);
x_167 = lean::cnstr_get(x_159, 0);
if (lean::is_exclusive(x_159)) {
 x_169 = x_159;
} else {
 lean::inc(x_167);
 lean::dec(x_159);
 x_169 = lean::box(0);
}
if (lean::is_scalar(x_169)) {
 x_170 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_170 = x_169;
}
lean::cnstr_set(x_170, 0, x_167);
return x_170;
}
else
{
obj* x_171; 
x_171 = lean::cnstr_get(x_159, 0);
lean::inc(x_171);
lean::dec(x_159);
x_147 = x_171;
goto lbl_148;
}
}
case 1:
{
obj* x_176; obj* x_177; 
lean::dec(x_25);
lean::dec(x_138);
x_176 = l_Lean_Elaborator_mkEqns(x_129, x_56);
if (lean::is_scalar(x_133)) {
 x_177 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_177 = x_133;
}
lean::cnstr_set(x_177, 0, x_176);
lean::cnstr_set(x_177, 1, x_131);
x_147 = x_177;
goto lbl_148;
}
default:
{
obj* x_179; obj* x_183; 
lean::dec(x_133);
x_179 = lean::cnstr_get(x_25, 0);
lean::inc(x_179);
lean::dec(x_25);
lean::inc(x_5);
x_183 = l_List_mmap___main___at_Lean_Elaborator_elabDefLike___spec__1(x_138, x_179, x_4, x_5, x_131);
if (lean::obj_tag(x_183) == 0)
{
obj* x_192; obj* x_194; obj* x_195; 
lean::dec(x_5);
lean::dec(x_31);
lean::dec(x_0);
lean::dec(x_58);
lean::dec(x_51);
lean::dec(x_146);
lean::dec(x_129);
lean::dec(x_134);
x_192 = lean::cnstr_get(x_183, 0);
if (lean::is_exclusive(x_183)) {
 x_194 = x_183;
} else {
 lean::inc(x_192);
 lean::dec(x_183);
 x_194 = lean::box(0);
}
if (lean::is_scalar(x_194)) {
 x_195 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_195 = x_194;
}
lean::cnstr_set(x_195, 0, x_192);
return x_195;
}
else
{
obj* x_196; obj* x_199; obj* x_201; obj* x_203; obj* x_204; obj* x_205; 
x_196 = lean::cnstr_get(x_183, 0);
lean::inc(x_196);
lean::dec(x_183);
x_199 = lean::cnstr_get(x_196, 0);
x_201 = lean::cnstr_get(x_196, 1);
if (lean::is_exclusive(x_196)) {
 x_203 = x_196;
} else {
 lean::inc(x_199);
 lean::inc(x_201);
 lean::dec(x_196);
 x_203 = lean::box(0);
}
x_204 = l_Lean_Elaborator_mkEqns(x_129, x_199);
if (lean::is_scalar(x_203)) {
 x_205 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_205 = x_203;
}
lean::cnstr_set(x_205, 0, x_204);
lean::cnstr_set(x_205, 1, x_201);
x_147 = x_205;
goto lbl_148;
}
}
}
lbl_148:
{
obj* x_206; obj* x_208; obj* x_212; 
x_206 = lean::cnstr_get(x_147, 0);
lean::inc(x_206);
x_208 = lean::cnstr_get(x_147, 1);
lean::inc(x_208);
lean::dec(x_147);
lean::inc(x_5);
x_212 = l_Lean_Elaborator_simpleBindersToPexpr(x_31, x_4, x_5, x_208);
if (lean::obj_tag(x_212) == 0)
{
obj* x_220; obj* x_222; obj* x_223; 
lean::dec(x_206);
lean::dec(x_5);
lean::dec(x_0);
lean::dec(x_58);
lean::dec(x_51);
lean::dec(x_146);
lean::dec(x_134);
x_220 = lean::cnstr_get(x_212, 0);
if (lean::is_exclusive(x_212)) {
 x_222 = x_212;
} else {
 lean::inc(x_220);
 lean::dec(x_212);
 x_222 = lean::box(0);
}
if (lean::is_scalar(x_222)) {
 x_223 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_223 = x_222;
}
lean::cnstr_set(x_223, 0, x_220);
return x_223;
}
else
{
obj* x_224; obj* x_227; obj* x_229; obj* x_232; obj* x_233; obj* x_234; obj* x_235; obj* x_236; obj* x_237; obj* x_238; obj* x_239; obj* x_240; obj* x_241; 
x_224 = lean::cnstr_get(x_212, 0);
lean::inc(x_224);
lean::dec(x_212);
x_227 = lean::cnstr_get(x_224, 0);
lean::inc(x_227);
x_229 = lean::cnstr_get(x_224, 1);
lean::inc(x_229);
lean::dec(x_224);
x_232 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_232, 0, x_206);
lean::cnstr_set(x_232, 1, x_56);
x_233 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_233, 0, x_227);
lean::cnstr_set(x_233, 1, x_232);
x_234 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_234, 0, x_146);
lean::cnstr_set(x_234, 1, x_233);
x_235 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_235, 0, x_134);
lean::cnstr_set(x_235, 1, x_234);
x_236 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_236, 0, x_58);
lean::cnstr_set(x_236, 1, x_235);
x_237 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_237, 0, x_51);
lean::cnstr_set(x_237, 1, x_236);
x_238 = l_Lean_Expr_mkCapp(x_145, x_237);
x_239 = l_Lean_Elaborator_elabDefLike___closed__2;
x_240 = lean_expr_mk_mdata(x_239, x_238);
x_241 = l_Lean_Elaborator_oldElabCommand(x_0, x_240, x_4, x_5, x_229);
lean::dec(x_0);
return x_241;
}
}
}
}
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_elabDefLike___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_List_mmap___main___at_Lean_Elaborator_elabDefLike___spec__1(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_Lean_Elaborator_elabDefLike___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_Lean_Elaborator_elabDefLike(x_0, x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_4);
return x_7;
}
}
obj* _init_l_Lean_Elaborator_inferModToPexpr___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(0ul);
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean_expr_mk_lit(x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_inferModToPexpr___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(1ul);
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean_expr_mk_lit(x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_inferModToPexpr___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(2ul);
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean_expr_mk_lit(x_1);
return x_2;
}
}
obj* l_Lean_Elaborator_inferModToPexpr(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_Lean_Elaborator_inferModToPexpr___closed__1;
return x_1;
}
else
{
obj* x_2; 
x_2 = lean::cnstr_get(x_0, 0);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = l_Lean_Elaborator_inferModToPexpr___closed__2;
return x_3;
}
else
{
obj* x_4; 
x_4 = l_Lean_Elaborator_inferModToPexpr___closed__3;
return x_4;
}
}
}
}
obj* l_Lean_Elaborator_inferModToPexpr___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_Elaborator_inferModToPexpr(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_ReaderT_bind___at_Lean_Elaborator_Declaration_elaborate___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_7; 
lean::inc(x_3);
lean::inc(x_2);
x_7 = lean::apply_3(x_0, x_2, x_3, x_4);
if (lean::obj_tag(x_7) == 0)
{
obj* x_11; obj* x_13; obj* x_14; 
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
x_11 = lean::cnstr_get(x_7, 0);
if (lean::is_exclusive(x_7)) {
 x_13 = x_7;
} else {
 lean::inc(x_11);
 lean::dec(x_7);
 x_13 = lean::box(0);
}
if (lean::is_scalar(x_13)) {
 x_14 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_14 = x_13;
}
lean::cnstr_set(x_14, 0, x_11);
return x_14;
}
else
{
obj* x_15; obj* x_18; obj* x_20; obj* x_23; 
x_15 = lean::cnstr_get(x_7, 0);
lean::inc(x_15);
lean::dec(x_7);
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_15, 1);
lean::inc(x_20);
lean::dec(x_15);
x_23 = lean::apply_4(x_1, x_18, x_2, x_3, x_20);
return x_23;
}
}
}
obj* l_ReaderT_bind___at_Lean_Elaborator_Declaration_elaborate___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_bind___at_Lean_Elaborator_Declaration_elaborate___spec__1___rarg), 5, 0);
return x_2;
}
}
obj* _init_l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__2___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("Declaration.elaborate: unexpected input");
return x_0;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_3);
lean::dec(x_0);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_4);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; obj* x_17; obj* x_19; 
x_10 = lean::cnstr_get(x_1, 0);
x_12 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_14 = x_1;
} else {
 lean::inc(x_10);
 lean::inc(x_12);
 lean::dec(x_1);
 x_14 = lean::box(0);
}
x_17 = lean::cnstr_get(x_10, 3);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_17, 0);
lean::inc(x_19);
if (lean::obj_tag(x_19) == 0)
{
obj* x_24; 
lean::dec(x_10);
lean::dec(x_17);
lean::dec(x_19);
x_24 = lean::box(0);
x_15 = x_24;
goto lbl_16;
}
else
{
obj* x_25; 
x_25 = lean::cnstr_get(x_19, 0);
lean::inc(x_25);
lean::dec(x_19);
if (lean::obj_tag(x_25) == 0)
{
obj* x_28; 
x_28 = lean::cnstr_get(x_17, 1);
lean::inc(x_28);
lean::dec(x_17);
if (lean::obj_tag(x_28) == 0)
{
obj* x_32; 
lean::dec(x_10);
x_32 = lean::box(0);
x_15 = x_32;
goto lbl_16;
}
else
{
obj* x_34; obj* x_37; obj* x_41; 
lean::dec(x_14);
x_34 = lean::cnstr_get(x_28, 0);
lean::inc(x_34);
lean::dec(x_28);
x_37 = lean::cnstr_get(x_34, 1);
lean::inc(x_37);
lean::dec(x_34);
lean::inc(x_3);
x_41 = l_Lean_Elaborator_toPexpr___main(x_37, x_2, x_3, x_4);
if (lean::obj_tag(x_41) == 0)
{
obj* x_46; obj* x_48; obj* x_49; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_10);
lean::dec(x_12);
x_46 = lean::cnstr_get(x_41, 0);
if (lean::is_exclusive(x_41)) {
 x_48 = x_41;
} else {
 lean::inc(x_46);
 lean::dec(x_41);
 x_48 = lean::box(0);
}
if (lean::is_scalar(x_48)) {
 x_49 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_49 = x_48;
}
lean::cnstr_set(x_49, 0, x_46);
return x_49;
}
else
{
obj* x_50; obj* x_53; obj* x_55; obj* x_58; 
x_50 = lean::cnstr_get(x_41, 0);
lean::inc(x_50);
lean::dec(x_41);
x_53 = lean::cnstr_get(x_50, 0);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_50, 1);
lean::inc(x_55);
lean::dec(x_50);
x_58 = l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__2(x_0, x_12, x_2, x_3, x_55);
if (lean::obj_tag(x_58) == 0)
{
obj* x_61; obj* x_63; obj* x_64; 
lean::dec(x_10);
lean::dec(x_53);
x_61 = lean::cnstr_get(x_58, 0);
if (lean::is_exclusive(x_58)) {
 x_63 = x_58;
} else {
 lean::inc(x_61);
 lean::dec(x_58);
 x_63 = lean::box(0);
}
if (lean::is_scalar(x_63)) {
 x_64 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_64 = x_63;
}
lean::cnstr_set(x_64, 0, x_61);
return x_64;
}
else
{
obj* x_65; obj* x_67; obj* x_68; obj* x_70; obj* x_72; obj* x_73; obj* x_76; uint8 x_77; obj* x_79; obj* x_80; obj* x_81; obj* x_82; 
x_65 = lean::cnstr_get(x_58, 0);
if (lean::is_exclusive(x_58)) {
 x_67 = x_58;
} else {
 lean::inc(x_65);
 lean::dec(x_58);
 x_67 = lean::box(0);
}
x_68 = lean::cnstr_get(x_65, 0);
x_70 = lean::cnstr_get(x_65, 1);
if (lean::is_exclusive(x_65)) {
 x_72 = x_65;
} else {
 lean::inc(x_68);
 lean::inc(x_70);
 lean::dec(x_65);
 x_72 = lean::box(0);
}
x_73 = lean::cnstr_get(x_10, 1);
lean::inc(x_73);
lean::dec(x_10);
x_76 = l_Lean_Elaborator_mangleIdent(x_73);
x_77 = 0;
lean::inc(x_76);
x_79 = lean_expr_local(x_76, x_76, x_53, x_77);
x_80 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_80, 0, x_79);
lean::cnstr_set(x_80, 1, x_68);
if (lean::is_scalar(x_72)) {
 x_81 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_81 = x_72;
}
lean::cnstr_set(x_81, 0, x_80);
lean::cnstr_set(x_81, 1, x_70);
if (lean::is_scalar(x_67)) {
 x_82 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_82 = x_67;
}
lean::cnstr_set(x_82, 0, x_81);
return x_82;
}
}
}
}
else
{
obj* x_86; 
lean::dec(x_25);
lean::dec(x_10);
lean::dec(x_17);
x_86 = lean::box(0);
x_15 = x_86;
goto lbl_16;
}
}
lbl_16:
{
obj* x_89; obj* x_90; obj* x_92; 
lean::dec(x_15);
lean::inc(x_0);
x_89 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_89, 0, x_0);
x_90 = l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__2___closed__1;
lean::inc(x_3);
x_92 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_89, x_90, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_89);
if (lean::obj_tag(x_92) == 0)
{
obj* x_99; obj* x_101; obj* x_102; 
lean::dec(x_14);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_12);
x_99 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_101 = x_92;
} else {
 lean::inc(x_99);
 lean::dec(x_92);
 x_101 = lean::box(0);
}
if (lean::is_scalar(x_101)) {
 x_102 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_102 = x_101;
}
lean::cnstr_set(x_102, 0, x_99);
return x_102;
}
else
{
obj* x_103; obj* x_106; obj* x_108; obj* x_111; 
x_103 = lean::cnstr_get(x_92, 0);
lean::inc(x_103);
lean::dec(x_92);
x_106 = lean::cnstr_get(x_103, 0);
lean::inc(x_106);
x_108 = lean::cnstr_get(x_103, 1);
lean::inc(x_108);
lean::dec(x_103);
x_111 = l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__2(x_0, x_12, x_2, x_3, x_108);
if (lean::obj_tag(x_111) == 0)
{
obj* x_114; obj* x_116; obj* x_117; 
lean::dec(x_14);
lean::dec(x_106);
x_114 = lean::cnstr_get(x_111, 0);
if (lean::is_exclusive(x_111)) {
 x_116 = x_111;
} else {
 lean::inc(x_114);
 lean::dec(x_111);
 x_116 = lean::box(0);
}
if (lean::is_scalar(x_116)) {
 x_117 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_117 = x_116;
}
lean::cnstr_set(x_117, 0, x_114);
return x_117;
}
else
{
obj* x_118; obj* x_120; obj* x_121; obj* x_123; obj* x_125; obj* x_126; obj* x_127; obj* x_128; 
x_118 = lean::cnstr_get(x_111, 0);
if (lean::is_exclusive(x_111)) {
 x_120 = x_111;
} else {
 lean::inc(x_118);
 lean::dec(x_111);
 x_120 = lean::box(0);
}
x_121 = lean::cnstr_get(x_118, 0);
x_123 = lean::cnstr_get(x_118, 1);
if (lean::is_exclusive(x_118)) {
 x_125 = x_118;
} else {
 lean::inc(x_121);
 lean::inc(x_123);
 lean::dec(x_118);
 x_125 = lean::box(0);
}
if (lean::is_scalar(x_14)) {
 x_126 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_126 = x_14;
}
lean::cnstr_set(x_126, 0, x_106);
lean::cnstr_set(x_126, 1, x_121);
if (lean::is_scalar(x_125)) {
 x_127 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_127 = x_125;
}
lean::cnstr_set(x_127, 0, x_126);
lean::cnstr_set(x_127, 1, x_123);
if (lean::is_scalar(x_120)) {
 x_128 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_128 = x_120;
}
lean::cnstr_set(x_128, 0, x_127);
return x_128;
}
}
}
}
}
}
obj* l_List_map___main___at_Lean_Elaborator_Declaration_elaborate___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_10; obj* x_12; obj* x_13; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::cnstr_get(x_2, 2);
lean::inc(x_7);
lean::dec(x_2);
x_10 = l_Lean_Elaborator_inferModToPexpr(x_7);
lean::dec(x_7);
x_12 = l_List_map___main___at_Lean_Elaborator_Declaration_elaborate___spec__3(x_4);
if (lean::is_scalar(x_6)) {
 x_13 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_13 = x_6;
}
lean::cnstr_set(x_13, 0, x_10);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_17; 
x_8 = lean::cnstr_get(x_0, 0);
x_10 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_12 = x_0;
} else {
 lean::inc(x_8);
 lean::inc(x_10);
 lean::dec(x_0);
 x_12 = lean::box(0);
}
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
lean::dec(x_8);
lean::inc(x_2);
x_17 = l_Lean_Elaborator_toPexpr___main(x_13, x_1, x_2, x_3);
if (lean::obj_tag(x_17) == 0)
{
obj* x_21; obj* x_23; obj* x_24; 
lean::dec(x_10);
lean::dec(x_12);
lean::dec(x_2);
x_21 = lean::cnstr_get(x_17, 0);
if (lean::is_exclusive(x_17)) {
 x_23 = x_17;
} else {
 lean::inc(x_21);
 lean::dec(x_17);
 x_23 = lean::box(0);
}
if (lean::is_scalar(x_23)) {
 x_24 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_24 = x_23;
}
lean::cnstr_set(x_24, 0, x_21);
return x_24;
}
else
{
obj* x_25; obj* x_28; obj* x_30; obj* x_33; 
x_25 = lean::cnstr_get(x_17, 0);
lean::inc(x_25);
lean::dec(x_17);
x_28 = lean::cnstr_get(x_25, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_25, 1);
lean::inc(x_30);
lean::dec(x_25);
x_33 = l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__4(x_10, x_1, x_2, x_30);
if (lean::obj_tag(x_33) == 0)
{
obj* x_36; obj* x_38; obj* x_39; 
lean::dec(x_12);
lean::dec(x_28);
x_36 = lean::cnstr_get(x_33, 0);
if (lean::is_exclusive(x_33)) {
 x_38 = x_33;
} else {
 lean::inc(x_36);
 lean::dec(x_33);
 x_38 = lean::box(0);
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_36);
return x_39;
}
else
{
obj* x_40; obj* x_42; obj* x_43; obj* x_45; obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
x_40 = lean::cnstr_get(x_33, 0);
if (lean::is_exclusive(x_33)) {
 x_42 = x_33;
} else {
 lean::inc(x_40);
 lean::dec(x_33);
 x_42 = lean::box(0);
}
x_43 = lean::cnstr_get(x_40, 0);
x_45 = lean::cnstr_get(x_40, 1);
if (lean::is_exclusive(x_40)) {
 x_47 = x_40;
} else {
 lean::inc(x_43);
 lean::inc(x_45);
 lean::dec(x_40);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_12)) {
 x_48 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_48 = x_12;
}
lean::cnstr_set(x_48, 0, x_28);
lean::cnstr_set(x_48, 1, x_43);
if (lean::is_scalar(x_47)) {
 x_49 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_49 = x_47;
}
lean::cnstr_set(x_49, 0, x_48);
lean::cnstr_set(x_49, 1, x_45);
if (lean::is_scalar(x_42)) {
 x_50 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_50 = x_42;
}
lean::cnstr_set(x_50, 0, x_49);
return x_50;
}
}
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__5(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_0);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_5);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
return x_11;
}
else
{
obj* x_12; obj* x_14; obj* x_16; obj* x_17; 
x_12 = lean::cnstr_get(x_2, 0);
x_14 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_set(x_2, 0, lean::box(0));
 lean::cnstr_set(x_2, 1, lean::box(0));
 x_16 = x_2;
} else {
 lean::inc(x_12);
 lean::inc(x_14);
 lean::dec(x_2);
 x_16 = lean::box(0);
}
switch (lean::obj_tag(x_12)) {
case 0:
{
obj* x_19; obj* x_22; 
x_19 = lean::cnstr_get(x_12, 0);
lean::inc(x_19);
lean::dec(x_12);
x_22 = lean::cnstr_get(x_19, 1);
lean::inc(x_22);
lean::dec(x_19);
if (lean::obj_tag(x_22) == 0)
{
obj* x_27; obj* x_28; obj* x_30; 
lean::dec(x_22);
lean::inc(x_0);
x_27 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_27, 0, x_0);
x_28 = l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__2___closed__1;
lean::inc(x_4);
x_30 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_27, x_28, x_3, x_4, x_5);
lean::dec(x_5);
lean::dec(x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_38; obj* x_40; obj* x_41; 
lean::dec(x_14);
lean::dec(x_16);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_0);
x_38 = lean::cnstr_get(x_30, 0);
if (lean::is_exclusive(x_30)) {
 x_40 = x_30;
} else {
 lean::inc(x_38);
 lean::dec(x_30);
 x_40 = lean::box(0);
}
if (lean::is_scalar(x_40)) {
 x_41 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_41 = x_40;
}
lean::cnstr_set(x_41, 0, x_38);
return x_41;
}
else
{
obj* x_42; 
x_42 = lean::cnstr_get(x_30, 0);
lean::inc(x_42);
lean::dec(x_30);
x_17 = x_42;
goto lbl_18;
}
}
else
{
obj* x_45; uint8 x_48; obj* x_49; obj* x_50; obj* x_51; 
x_45 = lean::cnstr_get(x_22, 0);
lean::inc(x_45);
lean::dec(x_22);
x_48 = 0;
x_49 = lean::box(x_48);
x_50 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_45);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_50);
lean::cnstr_set(x_51, 1, x_5);
x_17 = x_51;
goto lbl_18;
}
}
case 1:
{
obj* x_52; obj* x_55; uint8 x_58; obj* x_59; obj* x_60; obj* x_61; 
x_52 = lean::cnstr_get(x_12, 0);
lean::inc(x_52);
lean::dec(x_12);
x_55 = lean::cnstr_get(x_52, 1);
lean::inc(x_55);
lean::dec(x_52);
x_58 = 1;
x_59 = lean::box(x_58);
x_60 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_60, 0, x_59);
lean::cnstr_set(x_60, 1, x_55);
x_61 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_61, 0, x_60);
lean::cnstr_set(x_61, 1, x_5);
x_17 = x_61;
goto lbl_18;
}
case 2:
{
obj* x_62; obj* x_65; uint8 x_68; obj* x_69; obj* x_70; obj* x_71; 
x_62 = lean::cnstr_get(x_12, 0);
lean::inc(x_62);
lean::dec(x_12);
x_65 = lean::cnstr_get(x_62, 1);
lean::inc(x_65);
lean::dec(x_62);
x_68 = 2;
x_69 = lean::box(x_68);
x_70 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_70, 0, x_69);
lean::cnstr_set(x_70, 1, x_65);
x_71 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_71, 0, x_70);
lean::cnstr_set(x_71, 1, x_5);
x_17 = x_71;
goto lbl_18;
}
default:
{
obj* x_72; obj* x_75; uint8 x_78; obj* x_79; obj* x_80; obj* x_81; 
x_72 = lean::cnstr_get(x_12, 0);
lean::inc(x_72);
lean::dec(x_12);
x_75 = lean::cnstr_get(x_72, 1);
lean::inc(x_75);
lean::dec(x_72);
x_78 = 3;
x_79 = lean::box(x_78);
x_80 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_80, 0, x_79);
lean::cnstr_set(x_80, 1, x_75);
x_81 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_81, 0, x_80);
lean::cnstr_set(x_81, 1, x_5);
x_17 = x_81;
goto lbl_18;
}
}
lbl_18:
{
obj* x_82; obj* x_84; obj* x_87; obj* x_89; obj* x_92; obj* x_94; obj* x_97; obj* x_100; 
x_82 = lean::cnstr_get(x_17, 0);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_17, 1);
lean::inc(x_84);
lean::dec(x_17);
x_87 = lean::cnstr_get(x_82, 0);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_82, 1);
lean::inc(x_89);
lean::dec(x_82);
x_92 = lean::cnstr_get(x_89, 2);
lean::inc(x_92);
x_94 = lean::cnstr_get(x_92, 1);
lean::inc(x_94);
lean::dec(x_92);
x_97 = l_Lean_Expander_getOptType___main(x_94);
lean::dec(x_94);
lean::inc(x_4);
x_100 = l_Lean_Elaborator_toPexpr___main(x_97, x_3, x_4, x_84);
if (lean::obj_tag(x_100) == 0)
{
obj* x_108; obj* x_110; obj* x_111; 
lean::dec(x_14);
lean::dec(x_16);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_87);
lean::dec(x_89);
x_108 = lean::cnstr_get(x_100, 0);
if (lean::is_exclusive(x_100)) {
 x_110 = x_100;
} else {
 lean::inc(x_108);
 lean::dec(x_100);
 x_110 = lean::box(0);
}
if (lean::is_scalar(x_110)) {
 x_111 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_111 = x_110;
}
lean::cnstr_set(x_111, 0, x_108);
return x_111;
}
else
{
obj* x_112; obj* x_115; obj* x_117; obj* x_121; 
x_112 = lean::cnstr_get(x_100, 0);
lean::inc(x_112);
lean::dec(x_100);
x_115 = lean::cnstr_get(x_112, 0);
lean::inc(x_115);
x_117 = lean::cnstr_get(x_112, 1);
lean::inc(x_117);
lean::dec(x_112);
lean::inc(x_1);
x_121 = l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__5(x_0, x_1, x_14, x_3, x_4, x_117);
if (lean::obj_tag(x_121) == 0)
{
obj* x_127; obj* x_129; obj* x_130; 
lean::dec(x_16);
lean::dec(x_1);
lean::dec(x_87);
lean::dec(x_89);
lean::dec(x_115);
x_127 = lean::cnstr_get(x_121, 0);
if (lean::is_exclusive(x_121)) {
 x_129 = x_121;
} else {
 lean::inc(x_127);
 lean::dec(x_121);
 x_129 = lean::box(0);
}
if (lean::is_scalar(x_129)) {
 x_130 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_130 = x_129;
}
lean::cnstr_set(x_130, 0, x_127);
return x_130;
}
else
{
obj* x_131; obj* x_133; obj* x_134; obj* x_136; obj* x_138; obj* x_139; uint8 x_140; obj* x_143; obj* x_144; obj* x_146; obj* x_147; obj* x_148; obj* x_151; obj* x_153; obj* x_154; obj* x_155; obj* x_156; obj* x_157; obj* x_158; obj* x_159; obj* x_160; obj* x_161; 
x_131 = lean::cnstr_get(x_121, 0);
if (lean::is_exclusive(x_121)) {
 x_133 = x_121;
} else {
 lean::inc(x_131);
 lean::dec(x_121);
 x_133 = lean::box(0);
}
x_134 = lean::cnstr_get(x_131, 0);
x_136 = lean::cnstr_get(x_131, 1);
if (lean::is_exclusive(x_131)) {
 x_138 = x_131;
} else {
 lean::inc(x_134);
 lean::inc(x_136);
 lean::dec(x_131);
 x_138 = lean::box(0);
}
x_139 = l_Lean_Elaborator_dummy;
x_140 = lean::unbox(x_87);
lean::inc(x_1);
lean::inc(x_1);
x_143 = lean_expr_local(x_1, x_1, x_139, x_140);
x_144 = lean::cnstr_get(x_89, 0);
lean::inc(x_144);
x_146 = l_List_map___main___at_Lean_Elaborator_elabDefLike___spec__2(x_144);
x_147 = l_Lean_Elaborator_namesToPexpr(x_146);
x_148 = lean::cnstr_get(x_89, 1);
lean::inc(x_148);
lean::dec(x_89);
x_151 = l_Lean_Elaborator_inferModToPexpr(x_148);
lean::dec(x_148);
x_153 = lean::box(0);
if (lean::is_scalar(x_16)) {
 x_154 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_154 = x_16;
}
lean::cnstr_set(x_154, 0, x_115);
lean::cnstr_set(x_154, 1, x_153);
x_155 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_155, 0, x_151);
lean::cnstr_set(x_155, 1, x_154);
x_156 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_156, 0, x_147);
lean::cnstr_set(x_156, 1, x_155);
x_157 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_157, 0, x_143);
lean::cnstr_set(x_157, 1, x_156);
x_158 = l_Lean_Expr_mkCapp(x_1, x_157);
x_159 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_159, 0, x_158);
lean::cnstr_set(x_159, 1, x_134);
if (lean::is_scalar(x_138)) {
 x_160 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_160 = x_138;
}
lean::cnstr_set(x_160, 0, x_159);
lean::cnstr_set(x_160, 1, x_136);
if (lean::is_scalar(x_133)) {
 x_161 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_161 = x_133;
}
lean::cnstr_set(x_161, 0, x_160);
return x_161;
}
}
}
}
}
}
obj* l_Lean_Elaborator_Declaration_elaborate___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
obj* x_9; obj* x_13; 
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
lean::dec(x_0);
lean::inc(x_7);
x_13 = l_Lean_Elaborator_toPexpr___main(x_9, x_6, x_7, x_8);
if (lean::obj_tag(x_13) == 0)
{
obj* x_19; obj* x_21; obj* x_22; 
lean::dec(x_5);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
x_19 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 x_21 = x_13;
} else {
 lean::inc(x_19);
 lean::dec(x_13);
 x_21 = lean::box(0);
}
if (lean::is_scalar(x_21)) {
 x_22 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_22 = x_21;
}
lean::cnstr_set(x_22, 0, x_19);
return x_22;
}
else
{
obj* x_23; obj* x_26; obj* x_28; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_23 = lean::cnstr_get(x_13, 0);
lean::inc(x_23);
lean::dec(x_13);
x_26 = lean::cnstr_get(x_23, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_23, 1);
lean::inc(x_28);
lean::dec(x_23);
x_31 = l_Lean_Elaborator_identUnivParamsToPexpr(x_1);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_26);
lean::cnstr_set(x_32, 1, x_2);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_31);
lean::cnstr_set(x_33, 1, x_32);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_5);
lean::cnstr_set(x_34, 1, x_33);
x_35 = l_Lean_Elaborator_mkEqns___closed__1;
x_36 = l_Lean_Expr_mkCapp(x_35, x_34);
x_37 = lean_expr_mk_mdata(x_3, x_36);
x_38 = l_Lean_Elaborator_oldElabCommand(x_4, x_37, x_6, x_7, x_28);
return x_38;
}
}
}
obj* l_Lean_Elaborator_Declaration_elaborate___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10, obj* x_11, obj* x_12) {
_start:
{
obj* x_13; obj* x_15; 
x_15 = lean::cnstr_get(x_8, 1);
if (lean::obj_tag(x_15) == 0)
{
lean::inc(x_0);
x_13 = x_0;
goto lbl_14;
}
else
{
obj* x_17; obj* x_18; 
x_17 = lean::cnstr_get(x_15, 0);
x_18 = lean::cnstr_get(x_17, 1);
lean::inc(x_18);
x_13 = x_18;
goto lbl_14;
}
lbl_14:
{
obj* x_21; 
lean::inc(x_11);
x_21 = l_Lean_Elaborator_attrsToPexpr(x_13, x_10, x_11, x_12);
if (lean::obj_tag(x_21) == 0)
{
obj* x_31; obj* x_33; obj* x_34; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_11);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_6);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_31 = lean::cnstr_get(x_21, 0);
if (lean::is_exclusive(x_21)) {
 x_33 = x_21;
} else {
 lean::inc(x_31);
 lean::dec(x_21);
 x_33 = lean::box(0);
}
if (lean::is_scalar(x_33)) {
 x_34 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_34 = x_33;
}
lean::cnstr_set(x_34, 0, x_31);
return x_34;
}
else
{
obj* x_35; obj* x_38; obj* x_40; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; 
x_35 = lean::cnstr_get(x_21, 0);
lean::inc(x_35);
lean::dec(x_21);
x_38 = lean::cnstr_get(x_35, 0);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_35, 1);
lean::inc(x_40);
lean::dec(x_35);
lean::inc(x_0);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_38);
lean::cnstr_set(x_44, 1, x_0);
x_45 = l_Lean_Elaborator_mkEqns___closed__1;
x_46 = l_Lean_Expr_mkCapp(x_45, x_44);
if (lean::obj_tag(x_6) == 0)
{
obj* x_50; obj* x_52; 
x_50 = l_Lean_Expander_getOptType___main(x_7);
lean::inc(x_11);
x_52 = l_Lean_Elaborator_toPexpr___main(x_50, x_10, x_11, x_40);
if (lean::obj_tag(x_52) == 0)
{
obj* x_62; obj* x_64; obj* x_65; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_11);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_46);
x_62 = lean::cnstr_get(x_52, 0);
if (lean::is_exclusive(x_52)) {
 x_64 = x_52;
} else {
 lean::inc(x_62);
 lean::dec(x_52);
 x_64 = lean::box(0);
}
if (lean::is_scalar(x_64)) {
 x_65 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_65 = x_64;
}
lean::cnstr_set(x_65, 0, x_62);
return x_65;
}
else
{
obj* x_66; 
x_66 = lean::cnstr_get(x_52, 0);
lean::inc(x_66);
lean::dec(x_52);
lean::inc(x_0);
x_47 = x_0;
x_48 = x_66;
goto lbl_49;
}
}
else
{
obj* x_70; obj* x_74; obj* x_76; 
x_70 = lean::cnstr_get(x_6, 0);
lean::inc(x_70);
lean::dec(x_6);
lean::inc(x_70);
x_74 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_elabDefLike___lambda__1), 2, 1);
lean::closure_set(x_74, 0, x_70);
lean::inc(x_11);
x_76 = l_Lean_Elaborator_modifyCurrentScope(x_74, x_10, x_11, x_40);
if (lean::obj_tag(x_76) == 0)
{
obj* x_87; obj* x_89; obj* x_90; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_11);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_70);
lean::dec(x_46);
x_87 = lean::cnstr_get(x_76, 0);
if (lean::is_exclusive(x_76)) {
 x_89 = x_76;
} else {
 lean::inc(x_87);
 lean::dec(x_76);
 x_89 = lean::box(0);
}
if (lean::is_scalar(x_89)) {
 x_90 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_90 = x_89;
}
lean::cnstr_set(x_90, 0, x_87);
return x_90;
}
else
{
obj* x_91; obj* x_94; obj* x_97; obj* x_99; 
x_91 = lean::cnstr_get(x_76, 0);
lean::inc(x_91);
lean::dec(x_76);
x_94 = lean::cnstr_get(x_91, 1);
lean::inc(x_94);
lean::dec(x_91);
x_97 = l_Lean_Expander_getOptType___main(x_7);
lean::inc(x_11);
x_99 = l_Lean_Elaborator_toPexpr___main(x_97, x_10, x_11, x_94);
if (lean::obj_tag(x_99) == 0)
{
obj* x_110; obj* x_112; obj* x_113; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_11);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_70);
lean::dec(x_46);
x_110 = lean::cnstr_get(x_99, 0);
if (lean::is_exclusive(x_99)) {
 x_112 = x_99;
} else {
 lean::inc(x_110);
 lean::dec(x_99);
 x_112 = lean::box(0);
}
if (lean::is_scalar(x_112)) {
 x_113 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_113 = x_112;
}
lean::cnstr_set(x_113, 0, x_110);
return x_113;
}
else
{
obj* x_114; obj* x_117; obj* x_120; 
x_114 = lean::cnstr_get(x_99, 0);
lean::inc(x_114);
lean::dec(x_99);
x_117 = lean::cnstr_get(x_70, 1);
lean::inc(x_117);
lean::dec(x_70);
x_120 = l_List_map___main___at_Lean_Elaborator_elabDefLike___spec__2(x_117);
x_47 = x_120;
x_48 = x_114;
goto lbl_49;
}
}
}
lbl_49:
{
obj* x_121; obj* x_123; obj* x_127; 
x_121 = lean::cnstr_get(x_48, 0);
lean::inc(x_121);
x_123 = lean::cnstr_get(x_48, 1);
lean::inc(x_123);
lean::dec(x_48);
lean::inc(x_11);
x_127 = l_Lean_Elaborator_simpleBindersToPexpr(x_1, x_10, x_11, x_123);
if (lean::obj_tag(x_127) == 0)
{
obj* x_138; obj* x_140; obj* x_141; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_11);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_46);
lean::dec(x_47);
lean::dec(x_121);
x_138 = lean::cnstr_get(x_127, 0);
if (lean::is_exclusive(x_127)) {
 x_140 = x_127;
} else {
 lean::inc(x_138);
 lean::dec(x_127);
 x_140 = lean::box(0);
}
if (lean::is_scalar(x_140)) {
 x_141 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_141 = x_140;
}
lean::cnstr_set(x_141, 0, x_138);
return x_141;
}
else
{
obj* x_142; obj* x_145; obj* x_147; obj* x_153; 
x_142 = lean::cnstr_get(x_127, 0);
lean::inc(x_142);
lean::dec(x_127);
x_145 = lean::cnstr_get(x_142, 0);
lean::inc(x_145);
x_147 = lean::cnstr_get(x_142, 1);
lean::inc(x_147);
lean::dec(x_142);
lean::inc(x_11);
lean::inc(x_3);
lean::inc(x_2);
x_153 = l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__2(x_2, x_3, x_10, x_11, x_147);
if (lean::obj_tag(x_153) == 0)
{
obj* x_165; obj* x_167; obj* x_168; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_11);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_46);
lean::dec(x_145);
lean::dec(x_47);
lean::dec(x_121);
x_165 = lean::cnstr_get(x_153, 0);
if (lean::is_exclusive(x_153)) {
 x_167 = x_153;
} else {
 lean::inc(x_165);
 lean::dec(x_153);
 x_167 = lean::box(0);
}
if (lean::is_scalar(x_167)) {
 x_168 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_168 = x_167;
}
lean::cnstr_set(x_168, 0, x_165);
return x_168;
}
else
{
obj* x_169; obj* x_172; obj* x_174; obj* x_177; obj* x_178; obj* x_181; uint8 x_182; obj* x_184; obj* x_186; obj* x_187; obj* x_188; obj* x_190; obj* x_191; obj* x_192; obj* x_193; obj* x_195; obj* x_196; obj* x_197; obj* x_198; obj* x_199; obj* x_200; obj* x_201; obj* x_202; obj* x_203; obj* x_204; obj* x_205; obj* x_206; 
x_169 = lean::cnstr_get(x_153, 0);
lean::inc(x_169);
lean::dec(x_153);
x_172 = lean::cnstr_get(x_169, 0);
lean::inc(x_172);
x_174 = lean::cnstr_get(x_169, 1);
lean::inc(x_174);
lean::dec(x_169);
x_177 = l_Lean_Elaborator_namesToPexpr(x_47);
x_178 = lean::cnstr_get(x_4, 0);
lean::inc(x_178);
lean::dec(x_4);
x_181 = l_Lean_Elaborator_mangleIdent(x_178);
x_182 = 0;
lean::inc(x_181);
x_184 = lean_expr_local(x_181, x_181, x_121, x_182);
lean::inc(x_0);
x_186 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_186, 0, x_184);
lean::cnstr_set(x_186, 1, x_0);
x_187 = l_Lean_Expr_mkCapp(x_45, x_186);
x_188 = l_Lean_Expr_mkCapp(x_45, x_172);
lean::inc(x_0);
x_190 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_190, 0, x_188);
lean::cnstr_set(x_190, 1, x_0);
x_191 = l_Lean_Expr_mkCapp(x_45, x_190);
x_192 = l_List_map___main___at_Lean_Elaborator_Declaration_elaborate___spec__3(x_3);
x_193 = l_Lean_Expr_mkCapp(x_45, x_192);
lean::inc(x_0);
x_195 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_195, 0, x_193);
lean::cnstr_set(x_195, 1, x_0);
x_196 = l_Lean_Expr_mkCapp(x_45, x_195);
x_197 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_197, 0, x_196);
lean::cnstr_set(x_197, 1, x_0);
x_198 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_198, 0, x_191);
lean::cnstr_set(x_198, 1, x_197);
x_199 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_199, 0, x_145);
lean::cnstr_set(x_199, 1, x_198);
x_200 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_200, 0, x_187);
lean::cnstr_set(x_200, 1, x_199);
x_201 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_201, 0, x_177);
lean::cnstr_set(x_201, 1, x_200);
x_202 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_202, 0, x_46);
lean::cnstr_set(x_202, 1, x_201);
x_203 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_203, 0, x_9);
lean::cnstr_set(x_203, 1, x_202);
x_204 = l_Lean_Expr_mkCapp(x_45, x_203);
x_205 = lean_expr_mk_mdata(x_5, x_204);
x_206 = l_Lean_Elaborator_oldElabCommand(x_2, x_205, x_10, x_11, x_174);
lean::dec(x_2);
return x_206;
}
}
}
}
}
}
}
obj* _init_l_Lean_Elaborator_Declaration_elaborate___lambda__3___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = l_Lean_Elaborator_inferModToPexpr(x_0);
return x_1;
}
}
obj* _init_l_Lean_Elaborator_Declaration_elaborate___lambda__3___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("mk");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_Lean_Elaborator_Declaration_elaborate___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10, obj* x_11, obj* x_12, obj* x_13) {
_start:
{
obj* x_14; obj* x_15; 
if (lean::obj_tag(x_8) == 0)
{
obj* x_17; obj* x_19; 
x_17 = l_Lean_Expander_getOptType___main(x_9);
lean::inc(x_12);
x_19 = l_Lean_Elaborator_toPexpr___main(x_17, x_11, x_12, x_13);
if (lean::obj_tag(x_19) == 0)
{
obj* x_29; obj* x_31; obj* x_32; 
lean::dec(x_5);
lean::dec(x_10);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_6);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_12);
lean::dec(x_2);
x_29 = lean::cnstr_get(x_19, 0);
if (lean::is_exclusive(x_19)) {
 x_31 = x_19;
} else {
 lean::inc(x_29);
 lean::dec(x_19);
 x_31 = lean::box(0);
}
if (lean::is_scalar(x_31)) {
 x_32 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_32 = x_31;
}
lean::cnstr_set(x_32, 0, x_29);
return x_32;
}
else
{
obj* x_33; 
x_33 = lean::cnstr_get(x_19, 0);
lean::inc(x_33);
lean::dec(x_19);
lean::inc(x_5);
x_14 = x_5;
x_15 = x_33;
goto lbl_16;
}
}
else
{
obj* x_37; obj* x_41; obj* x_43; 
x_37 = lean::cnstr_get(x_8, 0);
lean::inc(x_37);
lean::dec(x_8);
lean::inc(x_37);
x_41 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_elabDefLike___lambda__1), 2, 1);
lean::closure_set(x_41, 0, x_37);
lean::inc(x_12);
x_43 = l_Lean_Elaborator_modifyCurrentScope(x_41, x_11, x_12, x_13);
if (lean::obj_tag(x_43) == 0)
{
obj* x_54; obj* x_56; obj* x_57; 
lean::dec(x_5);
lean::dec(x_10);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_6);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_12);
lean::dec(x_2);
lean::dec(x_37);
x_54 = lean::cnstr_get(x_43, 0);
if (lean::is_exclusive(x_43)) {
 x_56 = x_43;
} else {
 lean::inc(x_54);
 lean::dec(x_43);
 x_56 = lean::box(0);
}
if (lean::is_scalar(x_56)) {
 x_57 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_57 = x_56;
}
lean::cnstr_set(x_57, 0, x_54);
return x_57;
}
else
{
obj* x_58; obj* x_61; obj* x_64; obj* x_66; 
x_58 = lean::cnstr_get(x_43, 0);
lean::inc(x_58);
lean::dec(x_43);
x_61 = lean::cnstr_get(x_58, 1);
lean::inc(x_61);
lean::dec(x_58);
x_64 = l_Lean_Expander_getOptType___main(x_9);
lean::inc(x_12);
x_66 = l_Lean_Elaborator_toPexpr___main(x_64, x_11, x_12, x_61);
if (lean::obj_tag(x_66) == 0)
{
obj* x_77; obj* x_79; obj* x_80; 
lean::dec(x_5);
lean::dec(x_10);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_6);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_12);
lean::dec(x_2);
lean::dec(x_37);
x_77 = lean::cnstr_get(x_66, 0);
if (lean::is_exclusive(x_66)) {
 x_79 = x_66;
} else {
 lean::inc(x_77);
 lean::dec(x_66);
 x_79 = lean::box(0);
}
if (lean::is_scalar(x_79)) {
 x_80 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_80 = x_79;
}
lean::cnstr_set(x_80, 0, x_77);
return x_80;
}
else
{
obj* x_81; obj* x_84; obj* x_87; 
x_81 = lean::cnstr_get(x_66, 0);
lean::inc(x_81);
lean::dec(x_66);
x_84 = lean::cnstr_get(x_37, 1);
lean::inc(x_84);
lean::dec(x_37);
x_87 = l_List_map___main___at_Lean_Elaborator_elabDefLike___spec__2(x_84);
x_14 = x_87;
x_15 = x_81;
goto lbl_16;
}
}
}
lbl_16:
{
obj* x_88; obj* x_90; obj* x_94; 
x_88 = lean::cnstr_get(x_15, 0);
lean::inc(x_88);
x_90 = lean::cnstr_get(x_15, 1);
lean::inc(x_90);
lean::dec(x_15);
lean::inc(x_12);
x_94 = l_Lean_Elaborator_simpleBindersToPexpr(x_0, x_11, x_12, x_90);
if (lean::obj_tag(x_94) == 0)
{
obj* x_105; obj* x_107; obj* x_108; 
lean::dec(x_5);
lean::dec(x_10);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_6);
lean::dec(x_3);
lean::dec(x_12);
lean::dec(x_2);
lean::dec(x_14);
lean::dec(x_88);
x_105 = lean::cnstr_get(x_94, 0);
if (lean::is_exclusive(x_94)) {
 x_107 = x_94;
} else {
 lean::inc(x_105);
 lean::dec(x_94);
 x_107 = lean::box(0);
}
if (lean::is_scalar(x_107)) {
 x_108 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_108 = x_107;
}
lean::cnstr_set(x_108, 0, x_105);
return x_108;
}
else
{
obj* x_109; obj* x_112; obj* x_114; obj* x_117; obj* x_118; obj* x_121; obj* x_122; uint8 x_123; obj* x_125; obj* x_126; 
x_109 = lean::cnstr_get(x_94, 0);
lean::inc(x_109);
lean::dec(x_94);
x_112 = lean::cnstr_get(x_109, 0);
lean::inc(x_112);
x_114 = lean::cnstr_get(x_109, 1);
lean::inc(x_114);
lean::dec(x_109);
x_117 = l_Lean_Elaborator_namesToPexpr(x_14);
x_118 = lean::cnstr_get(x_1, 0);
lean::inc(x_118);
lean::dec(x_1);
x_121 = l_Lean_Elaborator_mangleIdent(x_118);
x_122 = l_Lean_Elaborator_dummy;
x_123 = 0;
lean::inc(x_121);
x_125 = lean_expr_local(x_121, x_121, x_122, x_123);
if (lean::obj_tag(x_7) == 0)
{
lean::inc(x_5);
x_126 = x_5;
goto lbl_127;
}
else
{
obj* x_129; obj* x_130; 
x_129 = lean::cnstr_get(x_7, 0);
x_130 = lean::cnstr_get(x_129, 1);
lean::inc(x_130);
x_126 = x_130;
goto lbl_127;
}
lbl_127:
{
obj* x_133; 
lean::inc(x_12);
x_133 = l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__4(x_126, x_11, x_12, x_114);
if (lean::obj_tag(x_133) == 0)
{
obj* x_145; obj* x_147; obj* x_148; 
lean::dec(x_5);
lean::dec(x_10);
lean::dec(x_4);
lean::dec(x_6);
lean::dec(x_3);
lean::dec(x_12);
lean::dec(x_2);
lean::dec(x_112);
lean::dec(x_88);
lean::dec(x_117);
lean::dec(x_125);
x_145 = lean::cnstr_get(x_133, 0);
if (lean::is_exclusive(x_133)) {
 x_147 = x_133;
} else {
 lean::inc(x_145);
 lean::dec(x_133);
 x_147 = lean::box(0);
}
if (lean::is_scalar(x_147)) {
 x_148 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_148 = x_147;
}
lean::cnstr_set(x_148, 0, x_145);
return x_148;
}
else
{
obj* x_149; obj* x_152; obj* x_154; obj* x_157; obj* x_158; obj* x_161; obj* x_162; 
x_149 = lean::cnstr_get(x_133, 0);
lean::inc(x_149);
lean::dec(x_133);
x_152 = lean::cnstr_get(x_149, 0);
lean::inc(x_152);
x_154 = lean::cnstr_get(x_149, 1);
lean::inc(x_154);
lean::dec(x_149);
x_157 = l_Lean_Elaborator_mkEqns___closed__1;
x_158 = l_Lean_Expr_mkCapp(x_157, x_152);
lean::inc(x_12);
lean::inc(x_2);
x_161 = l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__5(x_2, x_157, x_3, x_11, x_12, x_154);
if (lean::obj_tag(x_4) == 0)
{
obj* x_164; 
x_164 = l_Lean_Elaborator_Declaration_elaborate___lambda__3___closed__2;
x_162 = x_164;
goto lbl_163;
}
else
{
obj* x_165; obj* x_167; obj* x_170; 
x_165 = lean::cnstr_get(x_4, 0);
lean::inc(x_165);
x_167 = lean::cnstr_get(x_165, 0);
lean::inc(x_167);
lean::dec(x_165);
x_170 = l_Lean_Elaborator_mangleIdent(x_167);
x_162 = x_170;
goto lbl_163;
}
lbl_163:
{
obj* x_172; 
lean::inc(x_162);
x_172 = lean_expr_local(x_162, x_162, x_122, x_123);
if (lean::obj_tag(x_4) == 0)
{
if (lean::obj_tag(x_161) == 0)
{
obj* x_184; obj* x_186; obj* x_187; 
lean::dec(x_5);
lean::dec(x_10);
lean::dec(x_6);
lean::dec(x_12);
lean::dec(x_2);
lean::dec(x_158);
lean::dec(x_172);
lean::dec(x_112);
lean::dec(x_88);
lean::dec(x_117);
lean::dec(x_125);
x_184 = lean::cnstr_get(x_161, 0);
if (lean::is_exclusive(x_161)) {
 x_186 = x_161;
} else {
 lean::inc(x_184);
 lean::dec(x_161);
 x_186 = lean::box(0);
}
if (lean::is_scalar(x_186)) {
 x_187 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_187 = x_186;
}
lean::cnstr_set(x_187, 0, x_184);
return x_187;
}
else
{
obj* x_188; obj* x_191; obj* x_193; obj* x_196; obj* x_197; obj* x_198; obj* x_199; obj* x_200; obj* x_201; obj* x_202; obj* x_203; obj* x_204; obj* x_205; obj* x_206; obj* x_207; obj* x_208; obj* x_209; 
x_188 = lean::cnstr_get(x_161, 0);
lean::inc(x_188);
lean::dec(x_161);
x_191 = lean::cnstr_get(x_188, 0);
lean::inc(x_191);
x_193 = lean::cnstr_get(x_188, 1);
lean::inc(x_193);
lean::dec(x_188);
x_196 = l_Lean_Expr_mkCapp(x_157, x_191);
x_197 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_197, 0, x_196);
lean::cnstr_set(x_197, 1, x_5);
x_198 = l_Lean_Elaborator_Declaration_elaborate___lambda__3___closed__1;
x_199 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_199, 0, x_198);
lean::cnstr_set(x_199, 1, x_197);
x_200 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_200, 0, x_172);
lean::cnstr_set(x_200, 1, x_199);
x_201 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_201, 0, x_88);
lean::cnstr_set(x_201, 1, x_200);
x_202 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_202, 0, x_158);
lean::cnstr_set(x_202, 1, x_201);
x_203 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_203, 0, x_112);
lean::cnstr_set(x_203, 1, x_202);
x_204 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_204, 0, x_125);
lean::cnstr_set(x_204, 1, x_203);
x_205 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_205, 0, x_117);
lean::cnstr_set(x_205, 1, x_204);
x_206 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_206, 0, x_10);
lean::cnstr_set(x_206, 1, x_205);
x_207 = l_Lean_Expr_mkCapp(x_157, x_206);
x_208 = lean_expr_mk_mdata(x_6, x_207);
x_209 = l_Lean_Elaborator_oldElabCommand(x_2, x_208, x_11, x_12, x_193);
lean::dec(x_2);
return x_209;
}
}
else
{
if (lean::obj_tag(x_161) == 0)
{
obj* x_223; obj* x_225; obj* x_226; 
lean::dec(x_5);
lean::dec(x_10);
lean::dec(x_4);
lean::dec(x_6);
lean::dec(x_12);
lean::dec(x_2);
lean::dec(x_158);
lean::dec(x_172);
lean::dec(x_112);
lean::dec(x_88);
lean::dec(x_117);
lean::dec(x_125);
x_223 = lean::cnstr_get(x_161, 0);
if (lean::is_exclusive(x_161)) {
 x_225 = x_161;
} else {
 lean::inc(x_223);
 lean::dec(x_161);
 x_225 = lean::box(0);
}
if (lean::is_scalar(x_225)) {
 x_226 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_226 = x_225;
}
lean::cnstr_set(x_226, 0, x_223);
return x_226;
}
else
{
obj* x_227; obj* x_230; obj* x_233; obj* x_235; obj* x_238; obj* x_241; obj* x_243; obj* x_244; obj* x_245; obj* x_246; obj* x_247; obj* x_248; obj* x_249; obj* x_250; obj* x_251; obj* x_252; obj* x_253; obj* x_254; obj* x_255; 
x_227 = lean::cnstr_get(x_161, 0);
lean::inc(x_227);
lean::dec(x_161);
x_230 = lean::cnstr_get(x_4, 0);
lean::inc(x_230);
lean::dec(x_4);
x_233 = lean::cnstr_get(x_227, 0);
lean::inc(x_233);
x_235 = lean::cnstr_get(x_227, 1);
lean::inc(x_235);
lean::dec(x_227);
x_238 = lean::cnstr_get(x_230, 1);
lean::inc(x_238);
lean::dec(x_230);
x_241 = l_Lean_Elaborator_inferModToPexpr(x_238);
lean::dec(x_238);
x_243 = l_Lean_Expr_mkCapp(x_157, x_233);
x_244 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_244, 0, x_243);
lean::cnstr_set(x_244, 1, x_5);
x_245 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_245, 0, x_241);
lean::cnstr_set(x_245, 1, x_244);
x_246 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_246, 0, x_172);
lean::cnstr_set(x_246, 1, x_245);
x_247 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_247, 0, x_88);
lean::cnstr_set(x_247, 1, x_246);
x_248 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_248, 0, x_158);
lean::cnstr_set(x_248, 1, x_247);
x_249 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_249, 0, x_112);
lean::cnstr_set(x_249, 1, x_248);
x_250 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_250, 0, x_125);
lean::cnstr_set(x_250, 1, x_249);
x_251 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_251, 0, x_117);
lean::cnstr_set(x_251, 1, x_250);
x_252 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_252, 0, x_10);
lean::cnstr_set(x_252, 1, x_251);
x_253 = l_Lean_Expr_mkCapp(x_157, x_252);
x_254 = lean_expr_mk_mdata(x_6, x_253);
x_255 = l_Lean_Elaborator_oldElabCommand(x_2, x_254, x_11, x_12, x_235);
lean::dec(x_2);
return x_255;
}
}
}
}
}
}
}
}
}
obj* _init_l_Lean_Elaborator_Declaration_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("def");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
x_6 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
}
obj* _init_l_Lean_Elaborator_Declaration_elaborate___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string(".");
x_2 = lean::box(0);
x_3 = l_Lean_Name_toStringWithSep___main(x_1, x_2);
lean::dec(x_1);
x_5 = l_Lean_Parser_Substring_ofString(x_3);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_7, 0, x_0);
lean::cnstr_set(x_7, 1, x_5);
lean::cnstr_set(x_7, 2, x_2);
lean::cnstr_set(x_7, 3, x_6);
lean::cnstr_set(x_7, 4, x_6);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_0);
return x_8;
}
}
obj* _init_l_Lean_Elaborator_Declaration_elaborate___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("axiom");
x_4 = lean_name_mk_string(x_0, x_3);
x_5 = lean::box(0);
x_6 = l_Lean_KVMap_setName(x_5, x_2, x_4);
return x_6;
}
}
obj* _init_l_Lean_Elaborator_Declaration_elaborate___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("inductives");
x_4 = lean_name_mk_string(x_0, x_3);
x_5 = lean::box(0);
x_6 = l_Lean_KVMap_setName(x_5, x_2, x_4);
return x_6;
}
}
obj* _init_l_Lean_Elaborator_Declaration_elaborate___closed__5() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("structure");
x_4 = lean_name_mk_string(x_0, x_3);
x_5 = lean::box(0);
x_6 = l_Lean_KVMap_setName(x_5, x_2, x_4);
return x_6;
}
}
obj* l_Lean_Elaborator_Declaration_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_7; obj* x_11; obj* x_12; 
x_6 = l_Lean_Parser_command_Declaration_HasView;
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
lean::dec(x_6);
lean::inc(x_0);
x_11 = lean::apply_1(x_7, x_0);
x_12 = lean::cnstr_get(x_11, 1);
lean::inc(x_12);
switch (lean::obj_tag(x_12)) {
case 0:
{
obj* x_14; obj* x_17; 
x_14 = lean::cnstr_get(x_12, 0);
lean::inc(x_14);
lean::dec(x_12);
x_17 = lean::cnstr_get(x_14, 0);
lean::inc(x_17);
switch (lean::obj_tag(x_17)) {
case 0:
{
obj* x_20; obj* x_23; obj* x_24; obj* x_25; 
lean::dec(x_17);
x_20 = lean::cnstr_get(x_11, 0);
lean::inc(x_20);
lean::dec(x_11);
x_23 = lean::mk_nat_obj(1ul);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_elabDefLike___boxed), 7, 4);
lean::closure_set(x_24, 0, x_0);
lean::closure_set(x_24, 1, x_20);
lean::closure_set(x_24, 2, x_14);
lean::closure_set(x_24, 3, x_23);
x_25 = l_Lean_Elaborator_locally(x_24, x_1, x_2, x_3);
return x_25;
}
case 3:
{
obj* x_27; obj* x_30; obj* x_31; obj* x_32; 
lean::dec(x_17);
x_27 = lean::cnstr_get(x_11, 0);
lean::inc(x_27);
lean::dec(x_11);
x_30 = lean::mk_nat_obj(0ul);
x_31 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_elabDefLike___boxed), 7, 4);
lean::closure_set(x_31, 0, x_0);
lean::closure_set(x_31, 1, x_27);
lean::closure_set(x_31, 2, x_14);
lean::closure_set(x_31, 3, x_30);
x_32 = l_Lean_Elaborator_locally(x_31, x_1, x_2, x_3);
return x_32;
}
case 4:
{
obj* x_34; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_17);
x_34 = lean::cnstr_get(x_11, 0);
lean::inc(x_34);
lean::dec(x_11);
x_37 = lean::mk_nat_obj(2ul);
x_38 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_elabDefLike___boxed), 7, 4);
lean::closure_set(x_38, 0, x_0);
lean::closure_set(x_38, 1, x_34);
lean::closure_set(x_38, 2, x_14);
lean::closure_set(x_38, 3, x_37);
x_39 = l_Lean_Elaborator_locally(x_38, x_1, x_2, x_3);
return x_39;
}
default:
{
obj* x_41; obj* x_44; obj* x_45; obj* x_46; 
lean::dec(x_17);
x_41 = lean::cnstr_get(x_11, 0);
lean::inc(x_41);
lean::dec(x_11);
x_44 = lean::mk_nat_obj(6ul);
x_45 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_elabDefLike___boxed), 7, 4);
lean::closure_set(x_45, 0, x_0);
lean::closure_set(x_45, 1, x_41);
lean::closure_set(x_45, 2, x_14);
lean::closure_set(x_45, 3, x_44);
x_46 = l_Lean_Elaborator_locally(x_45, x_1, x_2, x_3);
return x_46;
}
}
}
case 1:
{
obj* x_47; obj* x_50; obj* x_53; obj* x_54; obj* x_56; obj* x_58; obj* x_60; obj* x_63; obj* x_64; 
x_47 = lean::cnstr_get(x_12, 0);
lean::inc(x_47);
lean::dec(x_12);
x_50 = lean::cnstr_get(x_11, 0);
lean::inc(x_50);
lean::dec(x_11);
x_53 = lean::box(0);
x_54 = lean::cnstr_get(x_47, 1);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_47, 2);
lean::inc(x_56);
x_58 = lean::cnstr_get(x_56, 0);
lean::inc(x_58);
x_60 = lean::cnstr_get(x_56, 1);
lean::inc(x_60);
lean::dec(x_56);
x_63 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_63, 0, x_60);
x_64 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_64, 0, x_58);
lean::cnstr_set(x_64, 1, x_63);
if (lean::obj_tag(x_54) == 0)
{
obj* x_65; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; 
x_65 = lean::cnstr_get(x_47, 3);
lean::inc(x_65);
lean::dec(x_47);
x_68 = l_Lean_Elaborator_Declaration_elaborate___closed__1;
x_69 = l_Lean_Elaborator_Declaration_elaborate___closed__2;
x_70 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_70, 0, x_68);
lean::cnstr_set(x_70, 1, x_53);
lean::cnstr_set(x_70, 2, x_69);
lean::cnstr_set(x_70, 3, x_64);
lean::cnstr_set(x_70, 4, x_65);
x_71 = lean::mk_nat_obj(4ul);
x_72 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_elabDefLike___boxed), 7, 4);
lean::closure_set(x_72, 0, x_0);
lean::closure_set(x_72, 1, x_50);
lean::closure_set(x_72, 2, x_70);
lean::closure_set(x_72, 3, x_71);
x_73 = l_Lean_Elaborator_locally(x_72, x_1, x_2, x_3);
return x_73;
}
else
{
obj* x_74; obj* x_77; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; 
x_74 = lean::cnstr_get(x_47, 3);
lean::inc(x_74);
lean::dec(x_47);
x_77 = lean::cnstr_get(x_54, 0);
lean::inc(x_77);
lean::dec(x_54);
x_80 = l_Lean_Elaborator_Declaration_elaborate___closed__1;
x_81 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_81, 0, x_80);
lean::cnstr_set(x_81, 1, x_53);
lean::cnstr_set(x_81, 2, x_77);
lean::cnstr_set(x_81, 3, x_64);
lean::cnstr_set(x_81, 4, x_74);
x_82 = lean::mk_nat_obj(4ul);
x_83 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_elabDefLike___boxed), 7, 4);
lean::closure_set(x_83, 0, x_0);
lean::closure_set(x_83, 1, x_50);
lean::closure_set(x_83, 2, x_81);
lean::closure_set(x_83, 3, x_82);
x_84 = l_Lean_Elaborator_locally(x_83, x_1, x_2, x_3);
return x_84;
}
}
case 2:
{
obj* x_85; obj* x_88; obj* x_91; obj* x_92; obj* x_94; obj* x_96; obj* x_99; obj* x_100; obj* x_101; obj* x_104; obj* x_105; obj* x_106; obj* x_107; obj* x_108; obj* x_109; 
x_85 = lean::cnstr_get(x_12, 0);
lean::inc(x_85);
lean::dec(x_12);
x_88 = lean::cnstr_get(x_11, 0);
lean::inc(x_88);
lean::dec(x_11);
x_91 = lean::box(0);
x_92 = lean::cnstr_get(x_85, 1);
lean::inc(x_92);
x_94 = lean::cnstr_get(x_92, 0);
lean::inc(x_94);
x_96 = lean::cnstr_get(x_92, 1);
lean::inc(x_96);
lean::dec(x_92);
x_99 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_99, 0, x_96);
x_100 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_100, 0, x_94);
lean::cnstr_set(x_100, 1, x_99);
x_101 = lean::cnstr_get(x_85, 2);
lean::inc(x_101);
lean::dec(x_85);
x_104 = l_Lean_Elaborator_Declaration_elaborate___closed__1;
x_105 = l_Lean_Elaborator_Declaration_elaborate___closed__2;
x_106 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_106, 0, x_104);
lean::cnstr_set(x_106, 1, x_91);
lean::cnstr_set(x_106, 2, x_105);
lean::cnstr_set(x_106, 3, x_100);
lean::cnstr_set(x_106, 4, x_101);
x_107 = lean::mk_nat_obj(3ul);
x_108 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_elabDefLike___boxed), 7, 4);
lean::closure_set(x_108, 0, x_0);
lean::closure_set(x_108, 1, x_88);
lean::closure_set(x_108, 2, x_106);
lean::closure_set(x_108, 3, x_107);
x_109 = l_Lean_Elaborator_locally(x_108, x_1, x_2, x_3);
return x_109;
}
case 3:
{
obj* x_110; obj* x_113; obj* x_115; 
x_110 = lean::cnstr_get(x_12, 0);
lean::inc(x_110);
lean::dec(x_12);
x_113 = lean::cnstr_get(x_110, 2);
lean::inc(x_113);
x_115 = lean::cnstr_get(x_113, 0);
lean::inc(x_115);
if (lean::obj_tag(x_115) == 0)
{
obj* x_121; 
lean::dec(x_11);
lean::dec(x_113);
lean::dec(x_115);
lean::dec(x_110);
x_121 = lean::box(0);
x_4 = x_121;
goto lbl_5;
}
else
{
obj* x_122; 
x_122 = lean::cnstr_get(x_115, 0);
lean::inc(x_122);
lean::dec(x_115);
if (lean::obj_tag(x_122) == 0)
{
obj* x_125; obj* x_128; obj* x_131; obj* x_132; obj* x_135; obj* x_136; obj* x_137; obj* x_138; obj* x_139; 
x_125 = lean::cnstr_get(x_110, 1);
lean::inc(x_125);
lean::dec(x_110);
x_128 = lean::cnstr_get(x_113, 1);
lean::inc(x_128);
lean::dec(x_113);
x_131 = lean::box(0);
x_132 = lean::cnstr_get(x_11, 0);
lean::inc(x_132);
lean::dec(x_11);
x_135 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_declModifiersToPexpr___boxed), 4, 1);
lean::closure_set(x_135, 0, x_132);
x_136 = l_Lean_Elaborator_Declaration_elaborate___closed__3;
x_137 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_Declaration_elaborate___lambda__1___boxed), 9, 5);
lean::closure_set(x_137, 0, x_128);
lean::closure_set(x_137, 1, x_125);
lean::closure_set(x_137, 2, x_131);
lean::closure_set(x_137, 3, x_136);
lean::closure_set(x_137, 4, x_0);
x_138 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_bind___at_Lean_Elaborator_Declaration_elaborate___spec__1___rarg), 5, 2);
lean::closure_set(x_138, 0, x_135);
lean::closure_set(x_138, 1, x_137);
x_139 = l_Lean_Elaborator_locally(x_138, x_1, x_2, x_3);
return x_139;
}
else
{
obj* x_144; 
lean::dec(x_11);
lean::dec(x_113);
lean::dec(x_122);
lean::dec(x_110);
x_144 = lean::box(0);
x_4 = x_144;
goto lbl_5;
}
}
}
case 4:
{
obj* x_145; obj* x_148; 
x_145 = lean::cnstr_get(x_12, 0);
lean::inc(x_145);
lean::dec(x_12);
x_148 = lean::cnstr_get(x_145, 0);
lean::inc(x_148);
if (lean::obj_tag(x_148) == 0)
{
obj* x_150; obj* x_152; 
x_150 = lean::cnstr_get(x_145, 4);
lean::inc(x_150);
x_152 = lean::cnstr_get(x_150, 0);
lean::inc(x_152);
if (lean::obj_tag(x_152) == 0)
{
obj* x_158; 
lean::dec(x_145);
lean::dec(x_152);
lean::dec(x_150);
lean::dec(x_11);
x_158 = lean::box(0);
x_4 = x_158;
goto lbl_5;
}
else
{
obj* x_159; obj* x_161; obj* x_163; obj* x_166; obj* x_169; obj* x_172; obj* x_173; obj* x_177; obj* x_178; obj* x_179; obj* x_180; obj* x_181; 
x_159 = lean::cnstr_get(x_145, 2);
lean::inc(x_159);
x_161 = lean::cnstr_get(x_145, 3);
lean::inc(x_161);
x_163 = lean::cnstr_get(x_145, 6);
lean::inc(x_163);
lean::dec(x_145);
x_166 = lean::cnstr_get(x_150, 1);
lean::inc(x_166);
lean::dec(x_150);
x_169 = lean::cnstr_get(x_152, 0);
lean::inc(x_169);
lean::dec(x_152);
x_172 = lean::box(0);
x_173 = lean::cnstr_get(x_11, 0);
lean::inc(x_173);
lean::dec(x_11);
lean::inc(x_173);
x_177 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_declModifiersToPexpr___boxed), 4, 1);
lean::closure_set(x_177, 0, x_173);
x_178 = l_Lean_Elaborator_Declaration_elaborate___closed__4;
x_179 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_Declaration_elaborate___lambda__2___boxed), 13, 9);
lean::closure_set(x_179, 0, x_172);
lean::closure_set(x_179, 1, x_169);
lean::closure_set(x_179, 2, x_0);
lean::closure_set(x_179, 3, x_163);
lean::closure_set(x_179, 4, x_161);
lean::closure_set(x_179, 5, x_178);
lean::closure_set(x_179, 6, x_159);
lean::closure_set(x_179, 7, x_166);
lean::closure_set(x_179, 8, x_173);
x_180 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_bind___at_Lean_Elaborator_Declaration_elaborate___spec__1___rarg), 5, 2);
lean::closure_set(x_180, 0, x_177);
lean::closure_set(x_180, 1, x_179);
x_181 = l_Lean_Elaborator_locally(x_180, x_1, x_2, x_3);
return x_181;
}
}
else
{
obj* x_185; 
lean::dec(x_145);
lean::dec(x_148);
lean::dec(x_11);
x_185 = lean::box(0);
x_4 = x_185;
goto lbl_5;
}
}
default:
{
obj* x_186; obj* x_189; 
x_186 = lean::cnstr_get(x_12, 0);
lean::inc(x_186);
lean::dec(x_12);
x_189 = lean::cnstr_get(x_186, 0);
lean::inc(x_189);
if (lean::obj_tag(x_189) == 0)
{
obj* x_192; obj* x_194; 
lean::dec(x_189);
x_192 = lean::cnstr_get(x_186, 3);
lean::inc(x_192);
x_194 = lean::cnstr_get(x_192, 0);
lean::inc(x_194);
if (lean::obj_tag(x_194) == 0)
{
obj* x_200; 
lean::dec(x_186);
lean::dec(x_194);
lean::dec(x_192);
lean::dec(x_11);
x_200 = lean::box(0);
x_4 = x_200;
goto lbl_5;
}
else
{
obj* x_201; obj* x_203; obj* x_205; obj* x_207; obj* x_209; obj* x_212; obj* x_215; obj* x_218; obj* x_219; obj* x_222; obj* x_223; obj* x_224; obj* x_225; obj* x_226; 
x_201 = lean::cnstr_get(x_186, 1);
lean::inc(x_201);
x_203 = lean::cnstr_get(x_186, 2);
lean::inc(x_203);
x_205 = lean::cnstr_get(x_186, 4);
lean::inc(x_205);
x_207 = lean::cnstr_get(x_186, 6);
lean::inc(x_207);
x_209 = lean::cnstr_get(x_186, 7);
lean::inc(x_209);
lean::dec(x_186);
x_212 = lean::cnstr_get(x_192, 1);
lean::inc(x_212);
lean::dec(x_192);
x_215 = lean::cnstr_get(x_194, 0);
lean::inc(x_215);
lean::dec(x_194);
x_218 = lean::box(0);
x_219 = lean::cnstr_get(x_11, 0);
lean::inc(x_219);
lean::dec(x_11);
x_222 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_declModifiersToPexpr___boxed), 4, 1);
lean::closure_set(x_222, 0, x_219);
x_223 = l_Lean_Elaborator_Declaration_elaborate___closed__5;
x_224 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_Declaration_elaborate___lambda__3___boxed), 14, 10);
lean::closure_set(x_224, 0, x_215);
lean::closure_set(x_224, 1, x_203);
lean::closure_set(x_224, 2, x_0);
lean::closure_set(x_224, 3, x_209);
lean::closure_set(x_224, 4, x_207);
lean::closure_set(x_224, 5, x_218);
lean::closure_set(x_224, 6, x_223);
lean::closure_set(x_224, 7, x_205);
lean::closure_set(x_224, 8, x_201);
lean::closure_set(x_224, 9, x_212);
x_225 = lean::alloc_closure(reinterpret_cast<void*>(l_ReaderT_bind___at_Lean_Elaborator_Declaration_elaborate___spec__1___rarg), 5, 2);
lean::closure_set(x_225, 0, x_222);
lean::closure_set(x_225, 1, x_224);
x_226 = l_Lean_Elaborator_locally(x_225, x_1, x_2, x_3);
return x_226;
}
}
else
{
obj* x_230; 
lean::dec(x_186);
lean::dec(x_189);
lean::dec(x_11);
x_230 = lean::box(0);
x_4 = x_230;
goto lbl_5;
}
}
}
lbl_5:
{
obj* x_232; obj* x_233; obj* x_234; obj* x_235; 
lean::dec(x_4);
x_232 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_232, 0, x_0);
x_233 = l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__2___closed__1;
x_234 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg___boxed), 5, 2);
lean::closure_set(x_234, 0, x_232);
lean::closure_set(x_234, 1, x_233);
x_235 = l_Lean_Elaborator_locally(x_234, x_1, x_2, x_3);
return x_235;
}
}
}
obj* l_ReaderT_bind___at_Lean_Elaborator_Declaration_elaborate___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_ReaderT_bind___at_Lean_Elaborator_Declaration_elaborate___spec__1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__2(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__4___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__4(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__5___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__5(x_0, x_1, x_2, x_3, x_4, x_5);
lean::dec(x_3);
return x_6;
}
}
obj* l_Lean_Elaborator_Declaration_elaborate___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
obj* x_9; 
x_9 = l_Lean_Elaborator_Declaration_elaborate___lambda__1(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean::dec(x_4);
lean::dec(x_6);
return x_9;
}
}
obj* l_Lean_Elaborator_Declaration_elaborate___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10, obj* x_11, obj* x_12) {
_start:
{
obj* x_13; 
x_13 = l_Lean_Elaborator_Declaration_elaborate___lambda__2(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean::dec(x_7);
lean::dec(x_8);
lean::dec(x_10);
return x_13;
}
}
obj* l_Lean_Elaborator_Declaration_elaborate___lambda__3___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10, obj* x_11, obj* x_12, obj* x_13) {
_start:
{
obj* x_14; 
x_14 = l_Lean_Elaborator_Declaration_elaborate___lambda__3(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean::dec(x_7);
lean::dec(x_9);
lean::dec(x_11);
return x_14;
}
}
obj* l_List_mfilter___main___at_Lean_Elaborator_variables_elaborate___spec__1___lambda__1(obj* x_0, uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_25; obj* x_27; obj* x_29; obj* x_32; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_3, 2);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_3, 3);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_3, 4);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_0, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_0, 1);
lean::inc(x_16);
lean::dec(x_0);
x_19 = lean::alloc_cnstr(0, 2, 1);
lean::cnstr_set(x_19, 0, x_14);
lean::cnstr_set(x_19, 1, x_16);
lean::cnstr_set_scalar(x_19, sizeof(void*)*2, x_1);
x_20 = x_19;
x_21 = l_Lean_Elaborator_toLevel___main___closed__4;
x_22 = l_Lean_Elaborator_OrderedRBMap_insert___rarg(x_21, x_12, x_2, x_20);
x_23 = lean::cnstr_get(x_3, 5);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_3, 6);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_3, 7);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_3, 8);
lean::inc(x_29);
lean::dec(x_3);
x_32 = lean::alloc_cnstr(0, 9, 0);
lean::cnstr_set(x_32, 0, x_4);
lean::cnstr_set(x_32, 1, x_6);
lean::cnstr_set(x_32, 2, x_8);
lean::cnstr_set(x_32, 3, x_10);
lean::cnstr_set(x_32, 4, x_22);
lean::cnstr_set(x_32, 5, x_23);
lean::cnstr_set(x_32, 6, x_25);
lean::cnstr_set(x_32, 7, x_27);
lean::cnstr_set(x_32, 8, x_29);
return x_32;
}
}
obj* l_List_mfilter___main___at_Lean_Elaborator_variables_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; 
lean::dec(x_2);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_0);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_15; obj* x_16; obj* x_18; obj* x_21; obj* x_23; obj* x_25; obj* x_26; uint8 x_27; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
lean::inc(x_7);
x_15 = l_Lean_Parser_Term_simpleBinder_View_toBinderInfo___main(x_7);
x_16 = lean::cnstr_get(x_15, 1);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
lean::dec(x_15);
x_21 = lean::cnstr_get(x_16, 0);
x_23 = lean::cnstr_get(x_16, 1);
if (lean::is_exclusive(x_16)) {
 lean::cnstr_set(x_16, 0, lean::box(0));
 lean::cnstr_set(x_16, 1, lean::box(0));
 x_25 = x_16;
} else {
 lean::inc(x_21);
 lean::inc(x_23);
 lean::dec(x_16);
 x_25 = lean::box(0);
}
x_26 = l_Lean_Expander_bindingAnnotationUpdate;
x_27 = l_Lean_Parser_Syntax_isOfKind___main(x_26, x_23);
lean::dec(x_23);
if (x_27 == 0)
{
uint8 x_31; obj* x_32; obj* x_33; 
lean::dec(x_18);
lean::dec(x_21);
x_31 = 1;
x_32 = lean::box(x_31);
if (lean::is_scalar(x_25)) {
 x_33 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_33 = x_25;
}
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_3);
x_12 = x_33;
goto lbl_13;
}
else
{
obj* x_36; 
lean::dec(x_25);
lean::inc(x_2);
x_36 = l_Lean_Elaborator_currentScope(x_1, x_2, x_3);
if (lean::obj_tag(x_36) == 0)
{
obj* x_43; obj* x_45; obj* x_46; 
lean::dec(x_9);
lean::dec(x_7);
lean::dec(x_11);
lean::dec(x_2);
lean::dec(x_18);
lean::dec(x_21);
x_43 = lean::cnstr_get(x_36, 0);
if (lean::is_exclusive(x_36)) {
 x_45 = x_36;
} else {
 lean::inc(x_43);
 lean::dec(x_36);
 x_45 = lean::box(0);
}
if (lean::is_scalar(x_45)) {
 x_46 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_46 = x_45;
}
lean::cnstr_set(x_46, 0, x_43);
return x_46;
}
else
{
obj* x_47; obj* x_50; obj* x_52; obj* x_55; obj* x_56; obj* x_59; obj* x_61; 
x_47 = lean::cnstr_get(x_36, 0);
lean::inc(x_47);
lean::dec(x_36);
x_50 = lean::cnstr_get(x_47, 0);
lean::inc(x_50);
x_52 = lean::cnstr_get(x_47, 1);
lean::inc(x_52);
lean::dec(x_47);
x_55 = l_Lean_Elaborator_mangleIdent(x_21);
x_56 = lean::cnstr_get(x_50, 4);
lean::inc(x_56);
lean::dec(x_50);
x_59 = l_Lean_Elaborator_toLevel___main___closed__4;
lean::inc(x_55);
x_61 = l_Lean_Elaborator_OrderedRBMap_find___rarg(x_59, x_56, x_55);
if (lean::obj_tag(x_61) == 0)
{
obj* x_63; obj* x_64; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_74; 
lean::dec(x_18);
x_63 = lean::box(0);
x_64 = l_Lean_Name_toString___closed__1;
lean::inc(x_55);
x_66 = l_Lean_Name_toStringWithSep___main(x_64, x_55);
x_67 = l_Lean_Parser_Substring_ofString(x_66);
x_68 = lean::box(0);
x_69 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_69, 0, x_63);
lean::cnstr_set(x_69, 1, x_67);
lean::cnstr_set(x_69, 2, x_55);
lean::cnstr_set(x_69, 3, x_68);
lean::cnstr_set(x_69, 4, x_68);
x_70 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_70, 0, x_69);
x_71 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_71, 0, x_70);
x_72 = l_String_splitAux___main___closed__1;
lean::inc(x_2);
x_74 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_71, x_72, x_1, x_2, x_52);
lean::dec(x_52);
lean::dec(x_71);
if (lean::obj_tag(x_74) == 0)
{
obj* x_81; obj* x_83; obj* x_84; 
lean::dec(x_9);
lean::dec(x_7);
lean::dec(x_11);
lean::dec(x_2);
x_81 = lean::cnstr_get(x_74, 0);
if (lean::is_exclusive(x_74)) {
 x_83 = x_74;
} else {
 lean::inc(x_81);
 lean::dec(x_74);
 x_83 = lean::box(0);
}
if (lean::is_scalar(x_83)) {
 x_84 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_84 = x_83;
}
lean::cnstr_set(x_84, 0, x_81);
return x_84;
}
else
{
obj* x_85; obj* x_88; obj* x_90; uint8 x_91; obj* x_92; obj* x_93; 
x_85 = lean::cnstr_get(x_74, 0);
lean::inc(x_85);
lean::dec(x_74);
x_88 = lean::cnstr_get(x_85, 1);
if (lean::is_exclusive(x_85)) {
 lean::cnstr_release(x_85, 0);
 x_90 = x_85;
} else {
 lean::inc(x_88);
 lean::dec(x_85);
 x_90 = lean::box(0);
}
x_91 = 0;
x_92 = lean::box(x_91);
if (lean::is_scalar(x_90)) {
 x_93 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_93 = x_90;
}
lean::cnstr_set(x_93, 0, x_92);
lean::cnstr_set(x_93, 1, x_88);
x_12 = x_93;
goto lbl_13;
}
}
else
{
obj* x_94; obj* x_97; obj* x_100; obj* x_102; 
x_94 = lean::cnstr_get(x_61, 0);
lean::inc(x_94);
lean::dec(x_61);
x_97 = lean::cnstr_get(x_94, 1);
lean::inc(x_97);
lean::dec(x_94);
x_100 = lean::alloc_closure(reinterpret_cast<void*>(l_List_mfilter___main___at_Lean_Elaborator_variables_elaborate___spec__1___lambda__1___boxed), 4, 3);
lean::closure_set(x_100, 0, x_97);
lean::closure_set(x_100, 1, x_18);
lean::closure_set(x_100, 2, x_55);
lean::inc(x_2);
x_102 = l_Lean_Elaborator_modifyCurrentScope(x_100, x_1, x_2, x_52);
if (lean::obj_tag(x_102) == 0)
{
obj* x_107; obj* x_109; obj* x_110; 
lean::dec(x_9);
lean::dec(x_7);
lean::dec(x_11);
lean::dec(x_2);
x_107 = lean::cnstr_get(x_102, 0);
if (lean::is_exclusive(x_102)) {
 x_109 = x_102;
} else {
 lean::inc(x_107);
 lean::dec(x_102);
 x_109 = lean::box(0);
}
if (lean::is_scalar(x_109)) {
 x_110 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_110 = x_109;
}
lean::cnstr_set(x_110, 0, x_107);
return x_110;
}
else
{
obj* x_111; obj* x_114; obj* x_116; uint8 x_117; obj* x_118; obj* x_119; 
x_111 = lean::cnstr_get(x_102, 0);
lean::inc(x_111);
lean::dec(x_102);
x_114 = lean::cnstr_get(x_111, 1);
if (lean::is_exclusive(x_111)) {
 lean::cnstr_release(x_111, 0);
 x_116 = x_111;
} else {
 lean::inc(x_114);
 lean::dec(x_111);
 x_116 = lean::box(0);
}
x_117 = 0;
x_118 = lean::box(x_117);
if (lean::is_scalar(x_116)) {
 x_119 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_119 = x_116;
}
lean::cnstr_set(x_119, 0, x_118);
lean::cnstr_set(x_119, 1, x_114);
x_12 = x_119;
goto lbl_13;
}
}
}
}
lbl_13:
{
obj* x_120; obj* x_122; obj* x_125; 
x_120 = lean::cnstr_get(x_12, 0);
lean::inc(x_120);
x_122 = lean::cnstr_get(x_12, 1);
lean::inc(x_122);
lean::dec(x_12);
x_125 = l_List_mfilter___main___at_Lean_Elaborator_variables_elaborate___spec__1(x_9, x_1, x_2, x_122);
if (lean::obj_tag(x_125) == 0)
{
obj* x_129; obj* x_131; obj* x_132; 
lean::dec(x_7);
lean::dec(x_11);
lean::dec(x_120);
x_129 = lean::cnstr_get(x_125, 0);
if (lean::is_exclusive(x_125)) {
 x_131 = x_125;
} else {
 lean::inc(x_129);
 lean::dec(x_125);
 x_131 = lean::box(0);
}
if (lean::is_scalar(x_131)) {
 x_132 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_132 = x_131;
}
lean::cnstr_set(x_132, 0, x_129);
return x_132;
}
else
{
obj* x_133; obj* x_135; uint8 x_136; 
x_133 = lean::cnstr_get(x_125, 0);
if (lean::is_exclusive(x_125)) {
 lean::cnstr_set(x_125, 0, lean::box(0));
 x_135 = x_125;
} else {
 lean::inc(x_133);
 lean::dec(x_125);
 x_135 = lean::box(0);
}
x_136 = lean::unbox(x_120);
if (x_136 == 0)
{
obj* x_139; obj* x_141; obj* x_143; obj* x_144; obj* x_145; 
lean::dec(x_7);
lean::dec(x_11);
x_139 = lean::cnstr_get(x_133, 0);
x_141 = lean::cnstr_get(x_133, 1);
if (lean::is_exclusive(x_133)) {
 x_143 = x_133;
} else {
 lean::inc(x_139);
 lean::inc(x_141);
 lean::dec(x_133);
 x_143 = lean::box(0);
}
if (lean::is_scalar(x_143)) {
 x_144 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_144 = x_143;
}
lean::cnstr_set(x_144, 0, x_139);
lean::cnstr_set(x_144, 1, x_141);
if (lean::is_scalar(x_135)) {
 x_145 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_145 = x_135;
}
lean::cnstr_set(x_145, 0, x_144);
return x_145;
}
else
{
obj* x_146; obj* x_148; obj* x_150; obj* x_151; obj* x_152; obj* x_153; 
x_146 = lean::cnstr_get(x_133, 0);
x_148 = lean::cnstr_get(x_133, 1);
if (lean::is_exclusive(x_133)) {
 x_150 = x_133;
} else {
 lean::inc(x_146);
 lean::inc(x_148);
 lean::dec(x_133);
 x_150 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_151 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_151 = x_11;
}
lean::cnstr_set(x_151, 0, x_7);
lean::cnstr_set(x_151, 1, x_146);
if (lean::is_scalar(x_150)) {
 x_152 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_152 = x_150;
}
lean::cnstr_set(x_152, 0, x_151);
lean::cnstr_set(x_152, 1, x_148);
if (lean::is_scalar(x_135)) {
 x_153 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_153 = x_135;
}
lean::cnstr_set(x_153, 0, x_152);
return x_153;
}
}
}
}
}
}
obj* _init_l_Lean_Elaborator_variables_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("variables.elaborate: unexpected input");
return x_0;
}
}
obj* _init_l_Lean_Elaborator_variables_elaborate___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("variables");
x_4 = lean_name_mk_string(x_0, x_3);
x_5 = lean::box(0);
x_6 = l_Lean_KVMap_setName(x_5, x_2, x_4);
return x_6;
}
}
obj* l_Lean_Elaborator_variables_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_command_variables_HasView;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
lean::dec(x_4);
lean::inc(x_0);
x_9 = lean::apply_1(x_5, x_0);
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
lean::dec(x_9);
if (lean::obj_tag(x_10) == 0)
{
obj* x_15; obj* x_16; obj* x_18; 
lean::dec(x_10);
lean::inc(x_0);
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_0);
x_16 = l_Lean_Elaborator_variables_elaborate___closed__1;
lean::inc(x_2);
x_18 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_15, x_16, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_15);
if (lean::obj_tag(x_18) == 0)
{
obj* x_23; obj* x_25; obj* x_26; 
lean::dec(x_0);
lean::dec(x_2);
x_23 = lean::cnstr_get(x_18, 0);
if (lean::is_exclusive(x_18)) {
 x_25 = x_18;
} else {
 lean::inc(x_23);
 lean::dec(x_18);
 x_25 = lean::box(0);
}
if (lean::is_scalar(x_25)) {
 x_26 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_26 = x_25;
}
lean::cnstr_set(x_26, 0, x_23);
return x_26;
}
else
{
obj* x_27; obj* x_30; obj* x_32; obj* x_36; 
x_27 = lean::cnstr_get(x_18, 0);
lean::inc(x_27);
lean::dec(x_18);
x_30 = lean::cnstr_get(x_27, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_27, 1);
lean::inc(x_32);
lean::dec(x_27);
lean::inc(x_2);
x_36 = l_Lean_Elaborator_simpleBindersToPexpr(x_30, x_1, x_2, x_32);
if (lean::obj_tag(x_36) == 0)
{
obj* x_39; obj* x_41; obj* x_42; 
lean::dec(x_0);
lean::dec(x_2);
x_39 = lean::cnstr_get(x_36, 0);
if (lean::is_exclusive(x_36)) {
 x_41 = x_36;
} else {
 lean::inc(x_39);
 lean::dec(x_36);
 x_41 = lean::box(0);
}
if (lean::is_scalar(x_41)) {
 x_42 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_42 = x_41;
}
lean::cnstr_set(x_42, 0, x_39);
return x_42;
}
else
{
obj* x_43; obj* x_46; obj* x_48; obj* x_51; obj* x_52; obj* x_53; 
x_43 = lean::cnstr_get(x_36, 0);
lean::inc(x_43);
lean::dec(x_36);
x_46 = lean::cnstr_get(x_43, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_43, 1);
lean::inc(x_48);
lean::dec(x_43);
x_51 = l_Lean_Elaborator_variables_elaborate___closed__2;
x_52 = lean_expr_mk_mdata(x_51, x_46);
x_53 = l_Lean_Elaborator_oldElabCommand(x_0, x_52, x_1, x_2, x_48);
lean::dec(x_0);
return x_53;
}
}
}
else
{
obj* x_55; obj* x_59; 
x_55 = lean::cnstr_get(x_10, 0);
lean::inc(x_55);
lean::dec(x_10);
lean::inc(x_2);
x_59 = l_List_mfilter___main___at_Lean_Elaborator_variables_elaborate___spec__1(x_55, x_1, x_2, x_3);
if (lean::obj_tag(x_59) == 0)
{
obj* x_62; obj* x_64; obj* x_65; 
lean::dec(x_0);
lean::dec(x_2);
x_62 = lean::cnstr_get(x_59, 0);
if (lean::is_exclusive(x_59)) {
 x_64 = x_59;
} else {
 lean::inc(x_62);
 lean::dec(x_59);
 x_64 = lean::box(0);
}
if (lean::is_scalar(x_64)) {
 x_65 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_65 = x_64;
}
lean::cnstr_set(x_65, 0, x_62);
return x_65;
}
else
{
obj* x_66; obj* x_69; obj* x_71; obj* x_75; 
x_66 = lean::cnstr_get(x_59, 0);
lean::inc(x_66);
lean::dec(x_59);
x_69 = lean::cnstr_get(x_66, 0);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_66, 1);
lean::inc(x_71);
lean::dec(x_66);
lean::inc(x_2);
x_75 = l_Lean_Elaborator_simpleBindersToPexpr(x_69, x_1, x_2, x_71);
if (lean::obj_tag(x_75) == 0)
{
obj* x_78; obj* x_80; obj* x_81; 
lean::dec(x_0);
lean::dec(x_2);
x_78 = lean::cnstr_get(x_75, 0);
if (lean::is_exclusive(x_75)) {
 x_80 = x_75;
} else {
 lean::inc(x_78);
 lean::dec(x_75);
 x_80 = lean::box(0);
}
if (lean::is_scalar(x_80)) {
 x_81 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_81 = x_80;
}
lean::cnstr_set(x_81, 0, x_78);
return x_81;
}
else
{
obj* x_82; obj* x_85; obj* x_87; obj* x_90; obj* x_91; obj* x_92; 
x_82 = lean::cnstr_get(x_75, 0);
lean::inc(x_82);
lean::dec(x_75);
x_85 = lean::cnstr_get(x_82, 0);
lean::inc(x_85);
x_87 = lean::cnstr_get(x_82, 1);
lean::inc(x_87);
lean::dec(x_82);
x_90 = l_Lean_Elaborator_variables_elaborate___closed__2;
x_91 = lean_expr_mk_mdata(x_90, x_85);
x_92 = l_Lean_Elaborator_oldElabCommand(x_0, x_91, x_1, x_2, x_87);
lean::dec(x_0);
return x_92;
}
}
}
}
}
obj* l_List_mfilter___main___at_Lean_Elaborator_variables_elaborate___spec__1___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
x_5 = l_List_mfilter___main___at_Lean_Elaborator_variables_elaborate___spec__1___lambda__1(x_0, x_4, x_2, x_3);
return x_5;
}
}
obj* l_List_mfilter___main___at_Lean_Elaborator_variables_elaborate___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_List_mfilter___main___at_Lean_Elaborator_variables_elaborate___spec__1(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Elaborator_variables_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_variables_elaborate(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_List_foldl___main___at_Lean_Elaborator_include_elaborate___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; uint8 x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_Lean_Elaborator_mangleIdent(x_2);
x_8 = l_RBNode_isRed___main___rarg(x_0);
if (x_8 == 0)
{
obj* x_9; obj* x_10; 
x_9 = lean::box(0);
x_10 = l_RBNode_ins___main___at_Lean_NameSet_insert___spec__1(x_0, x_7, x_9);
x_0 = x_10;
x_1 = x_4;
goto _start;
}
else
{
obj* x_12; obj* x_13; obj* x_14; 
x_12 = lean::box(0);
x_13 = l_RBNode_ins___main___at_Lean_NameSet_insert___spec__1(x_0, x_7, x_12);
x_14 = l_RBNode_setBlack___main___rarg(x_13);
x_0 = x_14;
x_1 = x_4;
goto _start;
}
}
}
}
obj* l_Lean_Elaborator_include_elaborate___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_17; obj* x_18; obj* x_20; obj* x_22; obj* x_25; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 3);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_1, 4);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 5);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_0, 1);
lean::inc(x_14);
lean::dec(x_0);
x_17 = l_List_foldl___main___at_Lean_Elaborator_include_elaborate___spec__1(x_12, x_14);
x_18 = lean::cnstr_get(x_1, 6);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_1, 7);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_1, 8);
lean::inc(x_22);
lean::dec(x_1);
x_25 = lean::alloc_cnstr(0, 9, 0);
lean::cnstr_set(x_25, 0, x_2);
lean::cnstr_set(x_25, 1, x_4);
lean::cnstr_set(x_25, 2, x_6);
lean::cnstr_set(x_25, 3, x_8);
lean::cnstr_set(x_25, 4, x_10);
lean::cnstr_set(x_25, 5, x_17);
lean::cnstr_set(x_25, 6, x_18);
lean::cnstr_set(x_25, 7, x_20);
lean::cnstr_set(x_25, 8, x_22);
return x_25;
}
}
obj* l_Lean_Elaborator_include_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_command_include_HasView;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
lean::dec(x_4);
x_8 = lean::apply_1(x_5, x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_include_elaborate___lambda__1), 2, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = l_Lean_Elaborator_modifyCurrentScope(x_9, x_1, x_2, x_3);
return x_10;
}
}
obj* l_Lean_Elaborator_include_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_include_elaborate(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_Elaborator_Module_header_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("not implemented: imports");
return x_0;
}
}
obj* l_Lean_Elaborator_Module_header_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Module_header_HasView;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
lean::dec(x_4);
lean::inc(x_0);
x_9 = lean::apply_1(x_5, x_0);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; obj* x_14; obj* x_15; 
lean::dec(x_9);
x_13 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_13, 0, x_0);
x_14 = l_Lean_Elaborator_Module_header_elaborate___closed__1;
x_15 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_13, x_14, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_13);
return x_15;
}
else
{
obj* x_18; obj* x_19; 
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 x_18 = x_10;
} else {
 lean::dec(x_10);
 x_18 = lean::box(0);
}
x_19 = lean::cnstr_get(x_9, 1);
lean::inc(x_19);
lean::dec(x_9);
if (lean::obj_tag(x_19) == 0)
{
obj* x_25; obj* x_26; obj* x_27; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_18);
x_25 = lean::box(0);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_3);
x_27 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_27, 0, x_26);
return x_27;
}
else
{
obj* x_29; obj* x_30; obj* x_31; 
lean::dec(x_19);
if (lean::is_scalar(x_18)) {
 x_29 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_29 = x_18;
}
lean::cnstr_set(x_29, 0, x_0);
x_30 = l_Lean_Elaborator_Module_header_elaborate___closed__1;
x_31 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_29, x_30, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_29);
return x_31;
}
}
}
}
obj* l_Lean_Elaborator_Module_header_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_Module_header_elaborate(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Elaborator_precToNat___main(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::mk_nat_obj(0ul);
return x_1;
}
else
{
obj* x_2; obj* x_5; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = l_Lean_Parser_command_NotationSpec_precedenceTerm_View_toNat___main(x_5);
return x_8;
}
}
}
obj* l_Lean_Elaborator_precToNat(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_Elaborator_precToNat___main(x_0);
return x_1;
}
}
obj* _init_l_List_mfoldl___main___at_Lean_Elaborator_CommandParserConfig_registerNotationTokens___spec__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("registerNotationTokens: unreachable");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_List_mfoldl___main___at_Lean_Elaborator_CommandParserConfig_registerNotationTokens___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; 
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_8; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_3, 0);
lean::inc(x_5);
lean::dec(x_3);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
obj* x_13; 
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_0);
x_13 = l_List_mfoldl___main___at_Lean_Elaborator_CommandParserConfig_registerNotationTokens___spec__1___closed__1;
return x_13;
}
else
{
obj* x_14; obj* x_17; obj* x_20; obj* x_23; obj* x_25; obj* x_27; obj* x_30; obj* x_33; obj* x_35; obj* x_36; obj* x_38; obj* x_39; obj* x_40; obj* x_42; obj* x_43; obj* x_45; obj* x_47; obj* x_49; obj* x_52; 
x_14 = lean::cnstr_get(x_1, 1);
lean::inc(x_14);
lean::dec(x_1);
x_17 = lean::cnstr_get(x_5, 3);
lean::inc(x_17);
lean::dec(x_5);
x_20 = lean::cnstr_get(x_8, 0);
lean::inc(x_20);
lean::dec(x_8);
x_23 = lean::cnstr_get(x_0, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_23, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_23, 1);
lean::inc(x_27);
lean::dec(x_23);
x_30 = lean::cnstr_get(x_20, 1);
lean::inc(x_30);
lean::dec(x_20);
x_33 = l_String_trim(x_30);
lean::dec(x_30);
x_35 = l_Lean_Elaborator_precToNat___main(x_17);
x_36 = lean::box(0);
lean::inc(x_33);
x_38 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_38, 0, x_33);
lean::cnstr_set(x_38, 1, x_35);
lean::cnstr_set(x_38, 2, x_36);
x_39 = lean::mk_nat_obj(0ul);
x_40 = l___private_init_lean_parser_trie_2__insertAux___main___rarg(x_33, x_38, x_27, x_39);
lean::dec(x_33);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_25);
lean::cnstr_set(x_42, 1, x_40);
x_43 = lean::cnstr_get(x_0, 1);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_0, 2);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_0, 3);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_0, 4);
lean::inc(x_49);
lean::dec(x_0);
x_52 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_52, 0, x_42);
lean::cnstr_set(x_52, 1, x_43);
lean::cnstr_set(x_52, 2, x_45);
lean::cnstr_set(x_52, 3, x_47);
lean::cnstr_set(x_52, 4, x_49);
x_0 = x_52;
x_1 = x_14;
goto _start;
}
}
}
}
obj* l_Lean_Elaborator_CommandParserConfig_registerNotationTokens(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_List_mfoldl___main___at_Lean_Elaborator_CommandParserConfig_registerNotationTokens___spec__1(x_1, x_2);
return x_5;
}
}
obj* l_Option_toMonad___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__1___rarg(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_5; obj* x_6; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_2);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
}
obj* l_Option_toMonad___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Option_toMonad___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__1___rarg), 1, 0);
return x_1;
}
}
obj* _init_l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("registerNotationParser: unreachable");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_binderIdent_Parser), 5, 0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_binders_Parser), 5, 0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::mk_nat_obj(0ul);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_Parser), 6, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
}
obj* _init_l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__5() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("registerNotationParser: unimplemented");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_Lean_Expander_expandBracketedBinder___main___closed__4;
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_11; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_9 = lean::cnstr_get(x_2, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_9, 1);
lean::inc(x_11);
lean::dec(x_9);
if (lean::obj_tag(x_11) == 0)
{
obj* x_15; 
lean::dec(x_2);
x_15 = l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__1;
x_7 = x_15;
goto lbl_8;
}
else
{
obj* x_16; obj* x_19; obj* x_22; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_30; 
x_16 = lean::cnstr_get(x_11, 0);
lean::inc(x_16);
lean::dec(x_11);
x_19 = lean::cnstr_get(x_16, 1);
lean::inc(x_19);
lean::dec(x_16);
x_22 = l_String_trim(x_19);
lean::dec(x_19);
lean::inc(x_22);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_DList_singleton___rarg), 2, 1);
lean::closure_set(x_25, 0, x_22);
x_26 = lean::mk_nat_obj(0ul);
x_27 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolCore___at_Lean_Parser_command_NotationSpec_precedenceTerm_Parser_Lean_Parser_HasTokens___spec__1___boxed), 8, 3);
lean::closure_set(x_27, 0, x_22);
lean::closure_set(x_27, 1, x_26);
lean::closure_set(x_27, 2, x_25);
x_30 = lean::cnstr_get(x_2, 1);
lean::inc(x_30);
lean::dec(x_2);
if (lean::obj_tag(x_30) == 0)
{
obj* x_33; 
x_33 = l_Lean_Expander_noExpansion___closed__1;
x_28 = x_33;
goto lbl_29;
}
else
{
obj* x_34; 
x_34 = lean::cnstr_get(x_30, 0);
lean::inc(x_34);
lean::dec(x_30);
switch (lean::obj_tag(x_34)) {
case 0:
{
obj* x_38; 
lean::dec(x_34);
x_38 = l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__2;
x_28 = x_38;
goto lbl_29;
}
case 1:
{
obj* x_40; 
lean::dec(x_34);
x_40 = l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__3;
x_28 = x_40;
goto lbl_29;
}
default:
{
obj* x_41; obj* x_44; 
x_41 = lean::cnstr_get(x_34, 0);
lean::inc(x_41);
lean::dec(x_34);
x_44 = lean::cnstr_get(x_41, 1);
lean::inc(x_44);
lean::dec(x_41);
if (lean::obj_tag(x_44) == 0)
{
obj* x_47; 
x_47 = l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__4;
x_28 = x_47;
goto lbl_29;
}
else
{
obj* x_48; obj* x_50; obj* x_51; 
x_48 = lean::cnstr_get(x_44, 0);
if (lean::is_exclusive(x_44)) {
 lean::cnstr_set(x_44, 0, lean::box(0));
 x_50 = x_44;
} else {
 lean::inc(x_48);
 lean::dec(x_44);
 x_50 = lean::box(0);
}
x_51 = lean::cnstr_get(x_48, 1);
lean::inc(x_51);
lean::dec(x_48);
switch (lean::obj_tag(x_51)) {
case 0:
{
obj* x_54; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_54 = lean::cnstr_get(x_51, 0);
lean::inc(x_54);
lean::dec(x_51);
x_57 = l_Lean_Parser_command_NotationSpec_precedenceTerm_View_toNat___main(x_54);
x_58 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_Parser), 6, 1);
lean::closure_set(x_58, 0, x_57);
if (lean::is_scalar(x_50)) {
 x_59 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_59 = x_50;
}
lean::cnstr_set(x_59, 0, x_58);
x_60 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_60, 0, x_59);
x_28 = x_60;
goto lbl_29;
}
case 2:
{
obj* x_61; obj* x_64; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_61 = lean::cnstr_get(x_51, 0);
lean::inc(x_61);
lean::dec(x_51);
x_64 = lean::cnstr_get(x_61, 2);
lean::inc(x_64);
lean::dec(x_61);
x_67 = l_Lean_Elaborator_precToNat___main(x_64);
x_68 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_Parser), 6, 1);
lean::closure_set(x_68, 0, x_67);
if (lean::is_scalar(x_50)) {
 x_69 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_69 = x_50;
}
lean::cnstr_set(x_69, 0, x_68);
x_70 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_70, 0, x_69);
x_28 = x_70;
goto lbl_29;
}
default:
{
obj* x_73; 
lean::dec(x_50);
lean::dec(x_51);
x_73 = l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__5;
x_28 = x_73;
goto lbl_29;
}
}
}
}
}
}
lbl_29:
{
if (lean::obj_tag(x_28) == 0)
{
obj* x_75; obj* x_77; obj* x_78; 
lean::dec(x_27);
x_75 = lean::cnstr_get(x_28, 0);
if (lean::is_exclusive(x_28)) {
 x_77 = x_28;
} else {
 lean::inc(x_75);
 lean::dec(x_28);
 x_77 = lean::box(0);
}
if (lean::is_scalar(x_77)) {
 x_78 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_78 = x_77;
}
lean::cnstr_set(x_78, 0, x_75);
x_7 = x_78;
goto lbl_8;
}
else
{
obj* x_79; obj* x_81; obj* x_82; obj* x_83; obj* x_84; 
x_79 = lean::cnstr_get(x_28, 0);
if (lean::is_exclusive(x_28)) {
 x_81 = x_28;
} else {
 lean::inc(x_79);
 lean::dec(x_28);
 x_81 = lean::box(0);
}
x_82 = l_Option_toMonad___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__1___rarg(x_79);
x_83 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_83, 0, x_27);
lean::cnstr_set(x_83, 1, x_82);
if (lean::is_scalar(x_81)) {
 x_84 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_84 = x_81;
}
lean::cnstr_set(x_84, 0, x_83);
x_7 = x_84;
goto lbl_8;
}
}
}
lbl_8:
{
if (lean::obj_tag(x_7) == 0)
{
obj* x_87; obj* x_89; obj* x_90; 
lean::dec(x_6);
lean::dec(x_4);
x_87 = lean::cnstr_get(x_7, 0);
if (lean::is_exclusive(x_7)) {
 x_89 = x_7;
} else {
 lean::inc(x_87);
 lean::dec(x_7);
 x_89 = lean::box(0);
}
if (lean::is_scalar(x_89)) {
 x_90 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_90 = x_89;
}
lean::cnstr_set(x_90, 0, x_87);
return x_90;
}
else
{
obj* x_91; obj* x_94; 
x_91 = lean::cnstr_get(x_7, 0);
lean::inc(x_91);
lean::dec(x_7);
x_94 = l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2(x_4);
if (lean::obj_tag(x_94) == 0)
{
obj* x_97; obj* x_99; obj* x_100; 
lean::dec(x_6);
lean::dec(x_91);
x_97 = lean::cnstr_get(x_94, 0);
if (lean::is_exclusive(x_94)) {
 x_99 = x_94;
} else {
 lean::inc(x_97);
 lean::dec(x_94);
 x_99 = lean::box(0);
}
if (lean::is_scalar(x_99)) {
 x_100 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_100 = x_99;
}
lean::cnstr_set(x_100, 0, x_97);
return x_100;
}
else
{
obj* x_101; obj* x_103; obj* x_104; obj* x_105; 
x_101 = lean::cnstr_get(x_94, 0);
if (lean::is_exclusive(x_94)) {
 x_103 = x_94;
} else {
 lean::inc(x_101);
 lean::dec(x_94);
 x_103 = lean::box(0);
}
if (lean::is_scalar(x_6)) {
 x_104 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_104 = x_6;
}
lean::cnstr_set(x_104, 0, x_91);
lean::cnstr_set(x_104, 1, x_101);
if (lean::is_scalar(x_103)) {
 x_105 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_105 = x_103;
}
lean::cnstr_set(x_105, 0, x_104);
return x_105;
}
}
}
}
}
}
obj* l_List_map___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_List_map___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__3(x_4);
if (lean::is_scalar(x_6)) {
 x_8 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_8 = x_6;
}
lean::cnstr_set(x_8, 0, x_2);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
}
obj* l_coe___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = lean::apply_5(x_0, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
obj* l_List_map___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__5(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coe___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__4___boxed), 7, 1);
lean::closure_set(x_7, 0, x_2);
x_8 = l_List_map___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__5(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* _init_l_Lean_Elaborator_CommandParserConfig_registerNotationParser___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_getLeading___boxed), 6, 0);
return x_0;
}
}
obj* l_Lean_Elaborator_CommandParserConfig_registerNotationParser(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; 
x_3 = lean::cnstr_get(x_1, 2);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
lean::inc(x_5);
x_8 = l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2(x_5);
if (lean::obj_tag(x_8) == 0)
{
obj* x_14; obj* x_16; obj* x_17; 
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_14 = lean::cnstr_get(x_8, 0);
if (lean::is_exclusive(x_8)) {
 x_16 = x_8;
} else {
 lean::inc(x_14);
 lean::dec(x_8);
 x_16 = lean::box(0);
}
if (lean::is_scalar(x_16)) {
 x_17 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_17 = x_16;
}
lean::cnstr_set(x_17, 0, x_14);
return x_17;
}
else
{
if (lean::obj_tag(x_5) == 0)
{
obj* x_23; 
lean::dec(x_8);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_23 = l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__1;
return x_23;
}
else
{
obj* x_24; obj* x_26; obj* x_27; obj* x_30; 
x_24 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_set(x_5, 0, lean::box(0));
 lean::cnstr_release(x_5, 1);
 x_26 = x_5;
} else {
 lean::inc(x_24);
 lean::dec(x_5);
 x_26 = lean::box(0);
}
x_27 = lean::cnstr_get(x_24, 0);
lean::inc(x_27);
lean::dec(x_24);
x_30 = lean::cnstr_get(x_27, 1);
lean::inc(x_30);
lean::dec(x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_39; 
lean::dec(x_8);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_26);
x_39 = l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__1;
return x_39;
}
else
{
obj* x_40; obj* x_42; obj* x_43; obj* x_46; obj* x_49; obj* x_51; obj* x_52; obj* x_53; 
x_40 = lean::cnstr_get(x_8, 0);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_set(x_8, 0, lean::box(0));
 x_42 = x_8;
} else {
 lean::inc(x_40);
 lean::dec(x_8);
 x_42 = lean::box(0);
}
x_43 = lean::cnstr_get(x_30, 0);
lean::inc(x_43);
lean::dec(x_30);
x_46 = lean::cnstr_get(x_43, 1);
lean::inc(x_46);
lean::dec(x_43);
x_49 = l_String_trim(x_46);
lean::dec(x_46);
x_51 = l_List_map___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__3(x_40);
x_52 = l_List_join___main___rarg(x_51);
x_53 = lean::cnstr_get(x_1, 0);
lean::inc(x_53);
lean::dec(x_1);
if (lean::obj_tag(x_53) == 0)
{
obj* x_56; 
x_56 = lean::cnstr_get(x_3, 0);
lean::inc(x_56);
lean::dec(x_3);
if (lean::obj_tag(x_56) == 0)
{
obj* x_60; obj* x_62; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_70; obj* x_72; obj* x_75; obj* x_76; 
lean::dec(x_26);
x_60 = lean::cnstr_get(x_2, 0);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_2, 1);
lean::inc(x_62);
x_64 = lean::box(0);
x_65 = lean_name_mk_string(x_64, x_49);
x_66 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1), 7, 2);
lean::closure_set(x_66, 0, x_0);
lean::closure_set(x_66, 1, x_52);
x_67 = l_Lean_Parser_TokenMap_insert___rarg(x_62, x_65, x_66);
x_68 = lean::cnstr_get(x_2, 2);
lean::inc(x_68);
x_70 = lean::cnstr_get(x_2, 3);
lean::inc(x_70);
x_72 = lean::cnstr_get(x_2, 4);
lean::inc(x_72);
lean::dec(x_2);
x_75 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_75, 0, x_60);
lean::cnstr_set(x_75, 1, x_67);
lean::cnstr_set(x_75, 2, x_68);
lean::cnstr_set(x_75, 3, x_70);
lean::cnstr_set(x_75, 4, x_72);
if (lean::is_scalar(x_42)) {
 x_76 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_76 = x_42;
}
lean::cnstr_set(x_76, 0, x_75);
return x_76;
}
else
{
obj* x_78; obj* x_80; obj* x_82; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_93; obj* x_96; obj* x_97; 
lean::dec(x_56);
x_78 = lean::cnstr_get(x_2, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_2, 1);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_2, 2);
lean::inc(x_82);
x_84 = lean::box(0);
x_85 = lean_name_mk_string(x_84, x_49);
x_86 = l_List_map___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__5(x_52);
x_87 = l_Lean_Elaborator_CommandParserConfig_registerNotationParser___closed__1;
if (lean::is_scalar(x_26)) {
 x_88 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_88 = x_26;
}
lean::cnstr_set(x_88, 0, x_87);
lean::cnstr_set(x_88, 1, x_86);
x_89 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_Term_sortApp_Parser_Lean_Parser_HasTokens___spec__3), 8, 2);
lean::closure_set(x_89, 0, x_0);
lean::closure_set(x_89, 1, x_88);
x_90 = l_Lean_Parser_TokenMap_insert___rarg(x_82, x_85, x_89);
x_91 = lean::cnstr_get(x_2, 3);
lean::inc(x_91);
x_93 = lean::cnstr_get(x_2, 4);
lean::inc(x_93);
lean::dec(x_2);
x_96 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_96, 0, x_78);
lean::cnstr_set(x_96, 1, x_80);
lean::cnstr_set(x_96, 2, x_90);
lean::cnstr_set(x_96, 3, x_91);
lean::cnstr_set(x_96, 4, x_93);
if (lean::is_scalar(x_42)) {
 x_97 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_97 = x_42;
}
lean::cnstr_set(x_97, 0, x_96);
return x_97;
}
}
else
{
obj* x_99; 
lean::dec(x_53);
x_99 = lean::cnstr_get(x_3, 0);
lean::inc(x_99);
lean::dec(x_3);
if (lean::obj_tag(x_99) == 0)
{
obj* x_103; obj* x_105; obj* x_107; obj* x_109; obj* x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_118; obj* x_119; 
lean::dec(x_26);
x_103 = lean::cnstr_get(x_2, 0);
lean::inc(x_103);
x_105 = lean::cnstr_get(x_2, 1);
lean::inc(x_105);
x_107 = lean::cnstr_get(x_2, 2);
lean::inc(x_107);
x_109 = lean::cnstr_get(x_2, 3);
lean::inc(x_109);
x_111 = lean::box(0);
x_112 = lean_name_mk_string(x_111, x_49);
x_113 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_command_NotationSpec_precedenceLit_Parser___spec__1), 7, 2);
lean::closure_set(x_113, 0, x_0);
lean::closure_set(x_113, 1, x_52);
x_114 = l_Lean_Parser_TokenMap_insert___rarg(x_109, x_112, x_113);
x_115 = lean::cnstr_get(x_2, 4);
lean::inc(x_115);
lean::dec(x_2);
x_118 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_118, 0, x_103);
lean::cnstr_set(x_118, 1, x_105);
lean::cnstr_set(x_118, 2, x_107);
lean::cnstr_set(x_118, 3, x_114);
lean::cnstr_set(x_118, 4, x_115);
if (lean::is_scalar(x_42)) {
 x_119 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_119 = x_42;
}
lean::cnstr_set(x_119, 0, x_118);
return x_119;
}
else
{
obj* x_121; obj* x_123; obj* x_125; obj* x_127; obj* x_129; obj* x_132; obj* x_133; obj* x_134; obj* x_135; obj* x_136; obj* x_137; obj* x_138; obj* x_139; obj* x_140; 
lean::dec(x_99);
x_121 = lean::cnstr_get(x_2, 0);
lean::inc(x_121);
x_123 = lean::cnstr_get(x_2, 1);
lean::inc(x_123);
x_125 = lean::cnstr_get(x_2, 2);
lean::inc(x_125);
x_127 = lean::cnstr_get(x_2, 3);
lean::inc(x_127);
x_129 = lean::cnstr_get(x_2, 4);
lean::inc(x_129);
lean::dec(x_2);
x_132 = lean::box(0);
x_133 = lean_name_mk_string(x_132, x_49);
x_134 = l_List_map___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__5(x_52);
x_135 = l_Lean_Elaborator_CommandParserConfig_registerNotationParser___closed__1;
if (lean::is_scalar(x_26)) {
 x_136 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_136 = x_26;
}
lean::cnstr_set(x_136, 0, x_135);
lean::cnstr_set(x_136, 1, x_134);
x_137 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Combinators_node___at_Lean_Parser_Term_sortApp_Parser_Lean_Parser_HasTokens___spec__3), 8, 2);
lean::closure_set(x_137, 0, x_0);
lean::closure_set(x_137, 1, x_136);
x_138 = l_Lean_Parser_TokenMap_insert___rarg(x_129, x_133, x_137);
x_139 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_139, 0, x_121);
lean::cnstr_set(x_139, 1, x_123);
lean::cnstr_set(x_139, 2, x_125);
lean::cnstr_set(x_139, 3, x_127);
lean::cnstr_set(x_139, 4, x_138);
if (lean::is_scalar(x_42)) {
 x_140 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_140 = x_42;
}
lean::cnstr_set(x_140, 0, x_139);
return x_140;
}
}
}
}
}
}
}
obj* l_Option_toMonad___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__1___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Option_toMonad___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__1(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_coe___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__4___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_coe___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__4(x_0, x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_1);
return x_7;
}
}
obj* l_List_mfoldl___main___at_Lean_Elaborator_updateParserConfig___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; 
lean::dec(x_3);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_4);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_13; obj* x_15; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_1, 1);
lean::inc(x_10);
lean::dec(x_1);
x_13 = lean::cnstr_get(x_8, 2);
lean::inc(x_13);
x_15 = l_Lean_Elaborator_CommandParserConfig_registerNotationTokens(x_13, x_0);
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_19; obj* x_20; obj* x_23; obj* x_24; obj* x_26; 
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
lean::dec(x_15);
x_19 = l_Lean_Parser_command_reserveNotation_HasView;
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
lean::dec(x_19);
x_23 = lean::apply_1(x_20, x_8);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::inc(x_3);
x_26 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_24, x_16, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_24);
if (lean::obj_tag(x_26) == 0)
{
obj* x_31; obj* x_33; obj* x_34; 
lean::dec(x_3);
lean::dec(x_10);
x_31 = lean::cnstr_get(x_26, 0);
if (lean::is_exclusive(x_26)) {
 x_33 = x_26;
} else {
 lean::inc(x_31);
 lean::dec(x_26);
 x_33 = lean::box(0);
}
if (lean::is_scalar(x_33)) {
 x_34 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_34 = x_33;
}
lean::cnstr_set(x_34, 0, x_31);
return x_34;
}
else
{
obj* x_35; obj* x_38; obj* x_40; 
x_35 = lean::cnstr_get(x_26, 0);
lean::inc(x_35);
lean::dec(x_26);
x_38 = lean::cnstr_get(x_35, 0);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_35, 1);
lean::inc(x_40);
lean::dec(x_35);
x_0 = x_38;
x_1 = x_10;
x_4 = x_40;
goto _start;
}
}
else
{
obj* x_45; 
lean::dec(x_8);
x_45 = lean::cnstr_get(x_15, 0);
lean::inc(x_45);
lean::dec(x_15);
x_0 = x_45;
x_1 = x_10;
goto _start;
}
}
}
}
obj* l_List_mfoldl___main___at_Lean_Elaborator_updateParserConfig___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; 
lean::dec(x_3);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_4);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_13; obj* x_15; obj* x_17; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_1, 1);
lean::inc(x_10);
lean::dec(x_1);
x_13 = lean::cnstr_get(x_8, 1);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_13, 2);
lean::inc(x_15);
x_17 = l_Lean_Elaborator_CommandParserConfig_registerNotationTokens(x_15, x_0);
if (lean::obj_tag(x_17) == 0)
{
obj* x_19; obj* x_22; obj* x_23; obj* x_26; obj* x_27; obj* x_29; 
lean::dec(x_8);
x_19 = lean::cnstr_get(x_17, 0);
lean::inc(x_19);
lean::dec(x_17);
x_22 = l_Lean_Parser_command_notation_HasView;
x_23 = lean::cnstr_get(x_22, 1);
lean::inc(x_23);
lean::dec(x_22);
x_26 = lean::apply_1(x_23, x_13);
x_27 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::inc(x_3);
x_29 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_27, x_19, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_27);
if (lean::obj_tag(x_29) == 0)
{
obj* x_34; obj* x_36; obj* x_37; 
lean::dec(x_3);
lean::dec(x_10);
x_34 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_36 = x_29;
} else {
 lean::inc(x_34);
 lean::dec(x_29);
 x_36 = lean::box(0);
}
if (lean::is_scalar(x_36)) {
 x_37 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_37 = x_36;
}
lean::cnstr_set(x_37, 0, x_34);
return x_37;
}
else
{
obj* x_38; obj* x_41; obj* x_43; 
x_38 = lean::cnstr_get(x_29, 0);
lean::inc(x_38);
lean::dec(x_29);
x_41 = lean::cnstr_get(x_38, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_38, 1);
lean::inc(x_43);
lean::dec(x_38);
x_0 = x_41;
x_1 = x_10;
x_4 = x_43;
goto _start;
}
}
else
{
obj* x_47; obj* x_50; obj* x_54; 
x_47 = lean::cnstr_get(x_17, 0);
lean::inc(x_47);
lean::dec(x_17);
x_50 = lean::cnstr_get(x_8, 0);
lean::inc(x_50);
lean::dec(x_8);
lean::inc(x_13);
x_54 = l_Lean_Elaborator_CommandParserConfig_registerNotationParser(x_50, x_13, x_47);
if (lean::obj_tag(x_54) == 0)
{
obj* x_55; obj* x_58; obj* x_59; obj* x_62; obj* x_63; obj* x_65; 
x_55 = lean::cnstr_get(x_54, 0);
lean::inc(x_55);
lean::dec(x_54);
x_58 = l_Lean_Parser_command_notation_HasView;
x_59 = lean::cnstr_get(x_58, 1);
lean::inc(x_59);
lean::dec(x_58);
x_62 = lean::apply_1(x_59, x_13);
x_63 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_63, 0, x_62);
lean::inc(x_3);
x_65 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_63, x_55, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_63);
if (lean::obj_tag(x_65) == 0)
{
obj* x_70; obj* x_72; obj* x_73; 
lean::dec(x_3);
lean::dec(x_10);
x_70 = lean::cnstr_get(x_65, 0);
if (lean::is_exclusive(x_65)) {
 x_72 = x_65;
} else {
 lean::inc(x_70);
 lean::dec(x_65);
 x_72 = lean::box(0);
}
if (lean::is_scalar(x_72)) {
 x_73 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_73 = x_72;
}
lean::cnstr_set(x_73, 0, x_70);
return x_73;
}
else
{
obj* x_74; obj* x_77; obj* x_79; 
x_74 = lean::cnstr_get(x_65, 0);
lean::inc(x_74);
lean::dec(x_65);
x_77 = lean::cnstr_get(x_74, 0);
lean::inc(x_77);
x_79 = lean::cnstr_get(x_74, 1);
lean::inc(x_79);
lean::dec(x_74);
x_0 = x_77;
x_1 = x_10;
x_4 = x_79;
goto _start;
}
}
else
{
obj* x_84; 
lean::dec(x_13);
x_84 = lean::cnstr_get(x_54, 0);
lean::inc(x_84);
lean::dec(x_54);
x_0 = x_84;
x_1 = x_10;
goto _start;
}
}
}
}
}
obj* l_Lean_Elaborator_updateParserConfig(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; 
lean::inc(x_2);
lean::inc(x_1);
x_5 = l_Lean_Elaborator_currentScope(x_0, x_1, x_2);
if (lean::obj_tag(x_5) == 0)
{
obj* x_8; obj* x_10; obj* x_11; 
lean::dec(x_1);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 x_10 = x_5;
} else {
 lean::inc(x_8);
 lean::dec(x_5);
 x_10 = lean::box(0);
}
if (lean::is_scalar(x_10)) {
 x_11 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_11 = x_10;
}
lean::cnstr_set(x_11, 0, x_8);
return x_11;
}
else
{
obj* x_12; obj* x_15; obj* x_17; obj* x_20; obj* x_22; obj* x_24; obj* x_28; 
x_12 = lean::cnstr_get(x_5, 0);
lean::inc(x_12);
lean::dec(x_5);
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_12, 1);
lean::inc(x_17);
lean::dec(x_12);
x_20 = lean::cnstr_get(x_1, 1);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_20, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_2, 0);
lean::inc(x_24);
lean::inc(x_1);
lean::inc(x_24);
x_28 = l_List_mfoldl___main___at_Lean_Elaborator_updateParserConfig___spec__1(x_22, x_24, x_0, x_1, x_17);
if (lean::obj_tag(x_28) == 0)
{
obj* x_34; obj* x_36; obj* x_37; 
lean::dec(x_15);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_20);
lean::dec(x_24);
x_34 = lean::cnstr_get(x_28, 0);
if (lean::is_exclusive(x_28)) {
 x_36 = x_28;
} else {
 lean::inc(x_34);
 lean::dec(x_28);
 x_36 = lean::box(0);
}
if (lean::is_scalar(x_36)) {
 x_37 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_37 = x_36;
}
lean::cnstr_set(x_37, 0, x_34);
return x_37;
}
else
{
obj* x_38; obj* x_41; obj* x_43; obj* x_46; obj* x_48; obj* x_52; obj* x_53; 
x_38 = lean::cnstr_get(x_28, 0);
lean::inc(x_38);
lean::dec(x_28);
x_41 = lean::cnstr_get(x_38, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_38, 1);
lean::inc(x_43);
lean::dec(x_38);
x_46 = lean::cnstr_get(x_2, 1);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_15, 2);
lean::inc(x_48);
lean::dec(x_15);
lean::inc(x_46);
x_52 = l_List_append___rarg(x_46, x_48);
x_53 = l_List_mfoldl___main___at_Lean_Elaborator_updateParserConfig___spec__2(x_41, x_52, x_0, x_1, x_43);
if (lean::obj_tag(x_53) == 0)
{
obj* x_58; obj* x_60; obj* x_61; 
lean::dec(x_2);
lean::dec(x_20);
lean::dec(x_24);
lean::dec(x_46);
x_58 = lean::cnstr_get(x_53, 0);
if (lean::is_exclusive(x_53)) {
 x_60 = x_53;
} else {
 lean::inc(x_58);
 lean::dec(x_53);
 x_60 = lean::box(0);
}
if (lean::is_scalar(x_60)) {
 x_61 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_61 = x_60;
}
lean::cnstr_set(x_61, 0, x_58);
return x_61;
}
else
{
obj* x_62; obj* x_64; obj* x_65; obj* x_67; obj* x_68; obj* x_70; obj* x_72; obj* x_74; obj* x_76; obj* x_79; obj* x_80; obj* x_82; obj* x_84; obj* x_86; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
x_62 = lean::cnstr_get(x_53, 0);
if (lean::is_exclusive(x_53)) {
 x_64 = x_53;
} else {
 lean::inc(x_62);
 lean::dec(x_53);
 x_64 = lean::box(0);
}
x_65 = lean::cnstr_get(x_62, 0);
if (lean::is_exclusive(x_62)) {
 lean::cnstr_release(x_62, 1);
 x_67 = x_62;
} else {
 lean::inc(x_65);
 lean::dec(x_62);
 x_67 = lean::box(0);
}
x_68 = lean::cnstr_get(x_2, 2);
lean::inc(x_68);
x_70 = lean::cnstr_get(x_2, 3);
lean::inc(x_70);
x_72 = lean::cnstr_get(x_2, 4);
lean::inc(x_72);
x_74 = lean::cnstr_get(x_2, 5);
lean::inc(x_74);
x_76 = lean::cnstr_get(x_20, 1);
lean::inc(x_76);
lean::dec(x_20);
x_79 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_79, 0, x_65);
lean::cnstr_set(x_79, 1, x_76);
x_80 = lean::cnstr_get(x_2, 7);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_2, 8);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_2, 9);
lean::inc(x_84);
x_86 = lean::cnstr_get(x_2, 10);
lean::inc(x_86);
lean::dec(x_2);
x_89 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_89, 0, x_24);
lean::cnstr_set(x_89, 1, x_46);
lean::cnstr_set(x_89, 2, x_68);
lean::cnstr_set(x_89, 3, x_70);
lean::cnstr_set(x_89, 4, x_72);
lean::cnstr_set(x_89, 5, x_74);
lean::cnstr_set(x_89, 6, x_79);
lean::cnstr_set(x_89, 7, x_80);
lean::cnstr_set(x_89, 8, x_82);
lean::cnstr_set(x_89, 9, x_84);
lean::cnstr_set(x_89, 10, x_86);
x_90 = lean::box(0);
if (lean::is_scalar(x_67)) {
 x_91 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_91 = x_67;
}
lean::cnstr_set(x_91, 0, x_90);
lean::cnstr_set(x_91, 1, x_89);
if (lean::is_scalar(x_64)) {
 x_92 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_92 = x_64;
}
lean::cnstr_set(x_92, 0, x_91);
return x_92;
}
}
}
}
}
obj* l_List_mfoldl___main___at_Lean_Elaborator_updateParserConfig___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_List_mfoldl___main___at_Lean_Elaborator_updateParserConfig___spec__1(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_List_mfoldl___main___at_Lean_Elaborator_updateParserConfig___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_List_mfoldl___main___at_Lean_Elaborator_updateParserConfig___spec__2(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_Lean_Elaborator_updateParserConfig___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Elaborator_updateParserConfig(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* _init_l_Lean_Elaborator_postprocessNotationSpec___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_0 = lean::box(0);
x_1 = lean::mk_string(":");
x_2 = l_String_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
x_6 = l_Lean_Parser_maxPrec;
x_7 = l_Lean_Parser_number_View_ofNat(x_6);
x_8 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
x_9 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_5);
lean::cnstr_set(x_10, 1, x_9);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
return x_11;
}
}
obj* l_Lean_Elaborator_postprocessNotationSpec(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
if (lean::obj_tag(x_3) == 0)
{
return x_0;
}
else
{
obj* x_5; obj* x_7; obj* x_9; 
x_5 = lean::cnstr_get(x_3, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_5, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_7, 3);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 0)
{
obj* x_11; obj* x_12; obj* x_14; obj* x_15; obj* x_17; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_11 = x_0;
} else {
 lean::dec(x_0);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 x_14 = x_3;
} else {
 lean::inc(x_12);
 lean::dec(x_3);
 x_14 = lean::box(0);
}
x_15 = lean::cnstr_get(x_5, 1);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 x_17 = x_5;
} else {
 lean::inc(x_15);
 lean::dec(x_5);
 x_17 = lean::box(0);
}
x_18 = lean::cnstr_get(x_7, 0);
x_20 = lean::cnstr_get(x_7, 1);
x_22 = lean::cnstr_get(x_7, 2);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 3);
 x_24 = x_7;
} else {
 lean::inc(x_18);
 lean::inc(x_20);
 lean::inc(x_22);
 lean::dec(x_7);
 x_24 = lean::box(0);
}
x_25 = l_Lean_Elaborator_postprocessNotationSpec___closed__1;
if (lean::is_scalar(x_24)) {
 x_26 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_26 = x_24;
}
lean::cnstr_set(x_26, 0, x_18);
lean::cnstr_set(x_26, 1, x_20);
lean::cnstr_set(x_26, 2, x_22);
lean::cnstr_set(x_26, 3, x_25);
if (lean::is_scalar(x_17)) {
 x_27 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_27 = x_17;
}
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_15);
if (lean::is_scalar(x_14)) {
 x_28 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_28 = x_14;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_12);
if (lean::is_scalar(x_11)) {
 x_29 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_29 = x_11;
}
lean::cnstr_set(x_29, 0, x_1);
lean::cnstr_set(x_29, 1, x_28);
return x_29;
}
else
{
lean::dec(x_7);
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_3);
return x_0;
}
}
}
else
{
lean::dec(x_1);
return x_0;
}
}
}
obj* l_Lean_Elaborator_reserveNotation_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_16; obj* x_17; obj* x_18; obj* x_20; obj* x_21; obj* x_23; obj* x_25; obj* x_27; obj* x_29; obj* x_31; obj* x_33; obj* x_35; obj* x_37; obj* x_39; obj* x_42; obj* x_43; 
x_4 = l_Lean_Parser_command_reserveNotation_HasView;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
lean::dec(x_4);
x_8 = lean::apply_1(x_5, x_0);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_8, 2);
lean::inc(x_13);
lean::dec(x_8);
x_16 = l_Lean_Elaborator_postprocessNotationSpec(x_13);
x_17 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_17, 0, x_9);
lean::cnstr_set(x_17, 1, x_11);
lean::cnstr_set(x_17, 2, x_16);
x_18 = lean::cnstr_get(x_3, 0);
lean::inc(x_18);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_17);
lean::cnstr_set(x_20, 1, x_18);
x_21 = lean::cnstr_get(x_3, 1);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_3, 2);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_3, 3);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_3, 4);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_3, 5);
lean::inc(x_29);
x_31 = lean::cnstr_get(x_3, 6);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_3, 7);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_3, 8);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_3, 9);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_3, 10);
lean::inc(x_39);
lean::dec(x_3);
x_42 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_42, 0, x_20);
lean::cnstr_set(x_42, 1, x_21);
lean::cnstr_set(x_42, 2, x_23);
lean::cnstr_set(x_42, 3, x_25);
lean::cnstr_set(x_42, 4, x_27);
lean::cnstr_set(x_42, 5, x_29);
lean::cnstr_set(x_42, 6, x_31);
lean::cnstr_set(x_42, 7, x_33);
lean::cnstr_set(x_42, 8, x_35);
lean::cnstr_set(x_42, 9, x_37);
lean::cnstr_set(x_42, 10, x_39);
x_43 = l_Lean_Elaborator_updateParserConfig(x_1, x_2, x_42);
return x_43;
}
}
obj* l_Lean_Elaborator_reserveNotation_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_reserveNotation_elaborate(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
uint8 l_Lean_Elaborator_matchPrecedence___main(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_2; 
x_2 = 0;
return x_2;
}
else
{
uint8 x_4; 
lean::dec(x_1);
x_4 = 1;
return x_4;
}
}
else
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_6; 
lean::dec(x_0);
x_6 = 0;
return x_6;
}
else
{
obj* x_7; obj* x_10; obj* x_13; obj* x_16; obj* x_17; obj* x_20; uint8 x_21; 
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
lean::dec(x_1);
x_13 = lean::cnstr_get(x_7, 1);
lean::inc(x_13);
lean::dec(x_7);
x_16 = l_Lean_Parser_command_NotationSpec_precedenceTerm_View_toNat___main(x_13);
x_17 = lean::cnstr_get(x_10, 1);
lean::inc(x_17);
lean::dec(x_10);
x_20 = l_Lean_Parser_command_NotationSpec_precedenceTerm_View_toNat___main(x_17);
x_21 = lean::nat_dec_eq(x_16, x_20);
lean::dec(x_20);
lean::dec(x_16);
return x_21;
}
}
}
}
obj* l_Lean_Elaborator_matchPrecedence___main___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_Lean_Elaborator_matchPrecedence___main(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
uint8 l_Lean_Elaborator_matchPrecedence(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; 
x_2 = l_Lean_Elaborator_matchPrecedence___main(x_0, x_1);
return x_2;
}
}
obj* l_Lean_Elaborator_matchPrecedence___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_Lean_Elaborator_matchPrecedence(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_matchSpec___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_List_mmap___main___at_Lean_Parser_Syntax_reprint___main___spec__1___closed__1;
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_11; obj* x_13; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_9 = lean::cnstr_get(x_2, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_11, 1);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_18; 
lean::dec(x_11);
lean::dec(x_9);
lean::dec(x_2);
x_18 = lean::box(0);
x_7 = x_18;
goto lbl_8;
}
else
{
obj* x_19; obj* x_22; obj* x_25; obj* x_28; obj* x_30; obj* x_32; 
x_19 = lean::cnstr_get(x_2, 1);
lean::inc(x_19);
lean::dec(x_2);
x_22 = lean::cnstr_get(x_11, 3);
lean::inc(x_22);
lean::dec(x_11);
x_25 = lean::cnstr_get(x_13, 0);
lean::inc(x_25);
lean::dec(x_13);
x_28 = lean::cnstr_get(x_19, 0);
lean::inc(x_28);
x_32 = lean::cnstr_get(x_28, 1);
lean::inc(x_32);
if (lean::obj_tag(x_32) == 0)
{
obj* x_39; 
lean::dec(x_28);
lean::dec(x_9);
lean::dec(x_19);
lean::dec(x_22);
lean::dec(x_25);
x_39 = lean::box(0);
x_7 = x_39;
goto lbl_8;
}
else
{
obj* x_40; obj* x_42; obj* x_44; obj* x_45; obj* x_48; obj* x_50; obj* x_53; uint8 x_55; 
x_40 = lean::cnstr_get(x_28, 3);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_32, 0);
if (lean::is_exclusive(x_32)) {
 lean::cnstr_set(x_32, 0, lean::box(0));
 x_44 = x_32;
} else {
 lean::inc(x_42);
 lean::dec(x_32);
 x_44 = lean::box(0);
}
x_45 = lean::cnstr_get(x_25, 1);
lean::inc(x_45);
lean::dec(x_25);
x_48 = l_String_trim(x_45);
lean::dec(x_45);
x_50 = lean::cnstr_get(x_42, 1);
lean::inc(x_50);
lean::dec(x_42);
x_53 = l_String_trim(x_50);
lean::dec(x_50);
x_55 = lean::string_dec_eq(x_48, x_53);
lean::dec(x_53);
lean::dec(x_48);
if (x_55 == 0)
{
obj* x_64; 
lean::dec(x_28);
lean::dec(x_9);
lean::dec(x_40);
lean::dec(x_19);
lean::dec(x_22);
lean::dec(x_44);
x_64 = lean::box(0);
x_7 = x_64;
goto lbl_8;
}
else
{
uint8 x_65; 
x_65 = l_Lean_Elaborator_matchPrecedence___main(x_22, x_40);
if (x_65 == 0)
{
obj* x_70; 
lean::dec(x_28);
lean::dec(x_9);
lean::dec(x_19);
lean::dec(x_44);
x_70 = lean::box(0);
x_7 = x_70;
goto lbl_8;
}
else
{
obj* x_71; 
x_71 = lean::cnstr_get(x_9, 1);
lean::inc(x_71);
lean::dec(x_9);
if (lean::obj_tag(x_71) == 0)
{
obj* x_74; 
x_74 = lean::cnstr_get(x_19, 1);
lean::inc(x_74);
lean::dec(x_19);
if (lean::obj_tag(x_74) == 0)
{
obj* x_77; 
if (lean::is_scalar(x_44)) {
 x_77 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_77 = x_44;
}
lean::cnstr_set(x_77, 0, x_74);
x_30 = x_77;
goto lbl_31;
}
else
{
obj* x_80; 
lean::dec(x_44);
lean::dec(x_74);
x_80 = lean::box(0);
x_30 = x_80;
goto lbl_31;
}
}
else
{
obj* x_82; obj* x_84; 
lean::dec(x_44);
x_82 = lean::cnstr_get(x_71, 0);
if (lean::is_exclusive(x_71)) {
 lean::cnstr_set(x_71, 0, lean::box(0));
 x_84 = x_71;
} else {
 lean::inc(x_82);
 lean::dec(x_71);
 x_84 = lean::box(0);
}
switch (lean::obj_tag(x_82)) {
case 0:
{
obj* x_85; 
x_85 = lean::cnstr_get(x_19, 1);
lean::inc(x_85);
lean::dec(x_19);
if (lean::obj_tag(x_85) == 0)
{
obj* x_90; 
lean::dec(x_84);
lean::dec(x_82);
x_90 = lean::box(0);
x_30 = x_90;
goto lbl_31;
}
else
{
obj* x_91; 
x_91 = lean::cnstr_get(x_85, 0);
lean::inc(x_91);
switch (lean::obj_tag(x_91)) {
case 0:
{
obj* x_93; obj* x_96; obj* x_99; obj* x_102; uint8 x_105; 
x_93 = lean::cnstr_get(x_82, 0);
lean::inc(x_93);
lean::dec(x_82);
x_96 = lean::cnstr_get(x_91, 0);
lean::inc(x_96);
lean::dec(x_91);
x_99 = lean::cnstr_get(x_93, 1);
lean::inc(x_99);
lean::dec(x_93);
x_102 = lean::cnstr_get(x_96, 1);
lean::inc(x_102);
lean::dec(x_96);
x_105 = l_Lean_Elaborator_matchPrecedence___main(x_99, x_102);
if (x_105 == 0)
{
obj* x_108; 
lean::dec(x_85);
lean::dec(x_84);
x_108 = lean::box(0);
x_30 = x_108;
goto lbl_31;
}
else
{
obj* x_109; 
if (lean::is_scalar(x_84)) {
 x_109 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_109 = x_84;
}
lean::cnstr_set(x_109, 0, x_85);
x_30 = x_109;
goto lbl_31;
}
}
default:
{
obj* x_114; 
lean::dec(x_85);
lean::dec(x_84);
lean::dec(x_91);
lean::dec(x_82);
x_114 = lean::box(0);
x_30 = x_114;
goto lbl_31;
}
}
}
}
case 1:
{
obj* x_115; 
x_115 = lean::cnstr_get(x_19, 1);
lean::inc(x_115);
lean::dec(x_19);
if (lean::obj_tag(x_115) == 0)
{
obj* x_120; 
lean::dec(x_84);
lean::dec(x_82);
x_120 = lean::box(0);
x_30 = x_120;
goto lbl_31;
}
else
{
obj* x_121; 
x_121 = lean::cnstr_get(x_115, 0);
lean::inc(x_121);
switch (lean::obj_tag(x_121)) {
case 1:
{
obj* x_123; obj* x_126; obj* x_129; obj* x_132; uint8 x_135; 
x_123 = lean::cnstr_get(x_82, 0);
lean::inc(x_123);
lean::dec(x_82);
x_126 = lean::cnstr_get(x_121, 0);
lean::inc(x_126);
lean::dec(x_121);
x_129 = lean::cnstr_get(x_123, 1);
lean::inc(x_129);
lean::dec(x_123);
x_132 = lean::cnstr_get(x_126, 1);
lean::inc(x_132);
lean::dec(x_126);
x_135 = l_Lean_Elaborator_matchPrecedence___main(x_129, x_132);
if (x_135 == 0)
{
obj* x_138; 
lean::dec(x_84);
lean::dec(x_115);
x_138 = lean::box(0);
x_30 = x_138;
goto lbl_31;
}
else
{
obj* x_139; 
if (lean::is_scalar(x_84)) {
 x_139 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_139 = x_84;
}
lean::cnstr_set(x_139, 0, x_115);
x_30 = x_139;
goto lbl_31;
}
}
default:
{
obj* x_144; 
lean::dec(x_84);
lean::dec(x_82);
lean::dec(x_121);
lean::dec(x_115);
x_144 = lean::box(0);
x_30 = x_144;
goto lbl_31;
}
}
}
}
default:
{
obj* x_145; obj* x_147; obj* x_148; obj* x_150; 
x_145 = lean::cnstr_get(x_82, 0);
if (lean::is_exclusive(x_82)) {
 lean::cnstr_set(x_82, 0, lean::box(0));
 x_147 = x_82;
} else {
 lean::inc(x_145);
 lean::dec(x_82);
 x_147 = lean::box(0);
}
x_150 = lean::cnstr_get(x_19, 1);
lean::inc(x_150);
lean::dec(x_19);
if (lean::obj_tag(x_150) == 0)
{
obj* x_156; 
lean::dec(x_84);
lean::dec(x_147);
lean::dec(x_145);
x_156 = lean::box(0);
x_30 = x_156;
goto lbl_31;
}
else
{
obj* x_157; obj* x_159; 
x_157 = lean::cnstr_get(x_150, 0);
if (lean::is_exclusive(x_150)) {
 lean::cnstr_set(x_150, 0, lean::box(0));
 x_159 = x_150;
} else {
 lean::inc(x_157);
 lean::dec(x_150);
 x_159 = lean::box(0);
}
switch (lean::obj_tag(x_157)) {
case 2:
{
obj* x_160; 
x_160 = lean::cnstr_get(x_145, 1);
lean::inc(x_160);
if (lean::obj_tag(x_160) == 0)
{
obj* x_162; obj* x_165; 
x_162 = lean::cnstr_get(x_157, 0);
lean::inc(x_162);
lean::dec(x_157);
x_165 = lean::cnstr_get(x_162, 1);
lean::inc(x_165);
lean::dec(x_162);
if (lean::obj_tag(x_165) == 0)
{
obj* x_169; 
lean::dec(x_159);
x_169 = lean::box(0);
x_148 = x_169;
goto lbl_149;
}
else
{
obj* x_170; obj* x_172; 
x_170 = lean::cnstr_get(x_165, 0);
lean::inc(x_170);
x_172 = lean::cnstr_get(x_170, 1);
lean::inc(x_172);
lean::dec(x_170);
switch (lean::obj_tag(x_172)) {
case 0:
{
obj* x_176; 
lean::dec(x_172);
if (lean::is_scalar(x_159)) {
 x_176 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_176 = x_159;
}
lean::cnstr_set(x_176, 0, x_165);
x_148 = x_176;
goto lbl_149;
}
default:
{
obj* x_180; 
lean::dec(x_159);
lean::dec(x_172);
lean::dec(x_165);
x_180 = lean::box(0);
x_148 = x_180;
goto lbl_149;
}
}
}
}
else
{
obj* x_182; obj* x_184; 
lean::dec(x_159);
x_182 = lean::cnstr_get(x_160, 0);
lean::inc(x_182);
x_184 = lean::cnstr_get(x_182, 1);
lean::inc(x_184);
lean::dec(x_182);
switch (lean::obj_tag(x_184)) {
case 0:
{
obj* x_187; obj* x_190; 
x_187 = lean::cnstr_get(x_157, 0);
lean::inc(x_187);
lean::dec(x_157);
x_190 = lean::cnstr_get(x_187, 1);
lean::inc(x_190);
lean::dec(x_187);
if (lean::obj_tag(x_190) == 0)
{
obj* x_195; 
lean::dec(x_184);
lean::dec(x_160);
x_195 = lean::box(0);
x_148 = x_195;
goto lbl_149;
}
else
{
obj* x_196; obj* x_198; obj* x_199; 
x_196 = lean::cnstr_get(x_190, 0);
if (lean::is_exclusive(x_190)) {
 lean::cnstr_set(x_190, 0, lean::box(0));
 x_198 = x_190;
} else {
 lean::inc(x_196);
 lean::dec(x_190);
 x_198 = lean::box(0);
}
x_199 = lean::cnstr_get(x_196, 1);
lean::inc(x_199);
lean::dec(x_196);
switch (lean::obj_tag(x_199)) {
case 0:
{
obj* x_202; obj* x_205; obj* x_208; obj* x_209; uint8 x_210; 
x_202 = lean::cnstr_get(x_184, 0);
lean::inc(x_202);
lean::dec(x_184);
x_205 = lean::cnstr_get(x_199, 0);
lean::inc(x_205);
lean::dec(x_199);
x_208 = l_Lean_Parser_command_NotationSpec_precedenceTerm_View_toNat___main(x_202);
x_209 = l_Lean_Parser_command_NotationSpec_precedenceTerm_View_toNat___main(x_205);
x_210 = lean::nat_dec_eq(x_208, x_209);
lean::dec(x_209);
lean::dec(x_208);
if (x_210 == 0)
{
obj* x_215; 
lean::dec(x_198);
lean::dec(x_160);
x_215 = lean::box(0);
x_148 = x_215;
goto lbl_149;
}
else
{
obj* x_216; 
if (lean::is_scalar(x_198)) {
 x_216 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_216 = x_198;
}
lean::cnstr_set(x_216, 0, x_160);
x_148 = x_216;
goto lbl_149;
}
}
default:
{
obj* x_221; 
lean::dec(x_198);
lean::dec(x_184);
lean::dec(x_199);
lean::dec(x_160);
x_221 = lean::box(0);
x_148 = x_221;
goto lbl_149;
}
}
}
}
default:
{
obj* x_225; 
lean::dec(x_184);
lean::dec(x_157);
lean::dec(x_160);
x_225 = lean::box(0);
x_148 = x_225;
goto lbl_149;
}
}
}
}
default:
{
obj* x_231; 
lean::dec(x_84);
lean::dec(x_159);
lean::dec(x_157);
lean::dec(x_147);
lean::dec(x_145);
x_231 = lean::box(0);
x_30 = x_231;
goto lbl_31;
}
}
}
lbl_149:
{
if (lean::obj_tag(x_148) == 0)
{
obj* x_235; 
lean::dec(x_84);
lean::dec(x_147);
lean::dec(x_145);
x_235 = lean::box(0);
x_30 = x_235;
goto lbl_31;
}
else
{
obj* x_236; obj* x_238; obj* x_239; obj* x_242; obj* x_243; obj* x_244; obj* x_245; 
x_236 = lean::cnstr_get(x_148, 0);
if (lean::is_exclusive(x_148)) {
 x_238 = x_148;
} else {
 lean::inc(x_236);
 lean::dec(x_148);
 x_238 = lean::box(0);
}
x_239 = lean::cnstr_get(x_145, 0);
lean::inc(x_239);
lean::dec(x_145);
x_242 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_242, 0, x_239);
lean::cnstr_set(x_242, 1, x_236);
if (lean::is_scalar(x_147)) {
 x_243 = lean::alloc_cnstr(2, 1, 0);
} else {
 x_243 = x_147;
}
lean::cnstr_set(x_243, 0, x_242);
if (lean::is_scalar(x_238)) {
 x_244 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_244 = x_238;
}
lean::cnstr_set(x_244, 0, x_243);
if (lean::is_scalar(x_84)) {
 x_245 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_245 = x_84;
}
lean::cnstr_set(x_245, 0, x_244);
x_30 = x_245;
goto lbl_31;
}
}
}
}
}
}
}
}
lbl_31:
{
if (lean::obj_tag(x_30) == 0)
{
obj* x_247; 
lean::dec(x_28);
x_247 = lean::box(0);
x_7 = x_247;
goto lbl_8;
}
else
{
obj* x_248; obj* x_250; obj* x_251; obj* x_252; 
x_248 = lean::cnstr_get(x_30, 0);
if (lean::is_exclusive(x_30)) {
 x_250 = x_30;
} else {
 lean::inc(x_248);
 lean::dec(x_30);
 x_250 = lean::box(0);
}
x_251 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_251, 0, x_28);
lean::cnstr_set(x_251, 1, x_248);
if (lean::is_scalar(x_250)) {
 x_252 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_252 = x_250;
}
lean::cnstr_set(x_252, 0, x_251);
x_7 = x_252;
goto lbl_8;
}
}
}
lbl_8:
{
if (lean::obj_tag(x_7) == 0)
{
obj* x_255; 
lean::dec(x_6);
lean::dec(x_4);
x_255 = lean::box(0);
return x_255;
}
else
{
obj* x_256; obj* x_259; 
x_256 = lean::cnstr_get(x_7, 0);
lean::inc(x_256);
lean::dec(x_7);
x_259 = l_List_mmap___main___at_Lean_Elaborator_matchSpec___spec__1(x_4);
if (lean::obj_tag(x_259) == 0)
{
obj* x_262; 
lean::dec(x_6);
lean::dec(x_256);
x_262 = lean::box(0);
return x_262;
}
else
{
obj* x_263; obj* x_265; obj* x_266; obj* x_267; 
x_263 = lean::cnstr_get(x_259, 0);
if (lean::is_exclusive(x_259)) {
 x_265 = x_259;
} else {
 lean::inc(x_263);
 lean::dec(x_259);
 x_265 = lean::box(0);
}
if (lean::is_scalar(x_6)) {
 x_266 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_266 = x_6;
}
lean::cnstr_set(x_266, 0, x_256);
lean::cnstr_set(x_266, 1, x_263);
if (lean::is_scalar(x_265)) {
 x_267 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_267 = x_265;
}
lean::cnstr_set(x_267, 0, x_266);
return x_267;
}
}
}
}
}
}
obj* _init_l_Lean_Elaborator_matchSpec___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_List_zip___rarg___lambda__1), 2, 0);
return x_0;
}
}
obj* l_Lean_Elaborator_matchSpec(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
if (lean::obj_tag(x_2) == 0)
{
obj* x_6; 
x_6 = lean::cnstr_get(x_1, 0);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_8; 
x_8 = lean::box(0);
x_4 = x_8;
goto lbl_5;
}
else
{
obj* x_12; 
lean::dec(x_6);
lean::dec(x_1);
lean::dec(x_0);
x_12 = lean::box(0);
return x_12;
}
}
else
{
obj* x_13; 
x_13 = lean::cnstr_get(x_1, 0);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_18; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_18 = lean::box(0);
return x_18;
}
else
{
obj* x_20; 
lean::dec(x_13);
x_20 = lean::box(0);
x_4 = x_20;
goto lbl_5;
}
}
lbl_5:
{
obj* x_22; obj* x_25; obj* x_28; obj* x_29; obj* x_30; 
lean::dec(x_4);
x_22 = lean::cnstr_get(x_0, 1);
lean::inc(x_22);
lean::dec(x_0);
x_25 = lean::cnstr_get(x_1, 1);
lean::inc(x_25);
lean::dec(x_1);
x_28 = l_Lean_Elaborator_matchSpec___closed__1;
x_29 = l_List_zipWith___main___rarg(x_28, x_22, x_25);
x_30 = l_List_mmap___main___at_Lean_Elaborator_matchSpec___spec__1(x_29);
if (lean::obj_tag(x_30) == 0)
{
obj* x_32; 
lean::dec(x_2);
x_32 = lean::box(0);
return x_32;
}
else
{
obj* x_33; obj* x_35; obj* x_36; obj* x_37; 
x_33 = lean::cnstr_get(x_30, 0);
if (lean::is_exclusive(x_30)) {
 x_35 = x_30;
} else {
 lean::inc(x_33);
 lean::dec(x_30);
 x_35 = lean::box(0);
}
x_36 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_36, 0, x_2);
lean::cnstr_set(x_36, 1, x_33);
if (lean::is_scalar(x_35)) {
 x_37 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_37 = x_35;
}
lean::cnstr_set(x_37, 0, x_36);
return x_37;
}
}
}
}
obj* l_List_filterMap___main___at_Lean_Elaborator_notation_elaborateAux___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_14; 
x_4 = lean::cnstr_get(x_1, 0);
x_6 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_8 = x_1;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
x_9 = lean::cnstr_get(x_0, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_4, 2);
lean::inc(x_11);
lean::dec(x_4);
x_14 = l_Lean_Elaborator_matchSpec(x_9, x_11);
if (lean::obj_tag(x_14) == 0)
{
lean::dec(x_8);
x_1 = x_6;
goto _start;
}
else
{
obj* x_17; obj* x_20; obj* x_21; 
x_17 = lean::cnstr_get(x_14, 0);
lean::inc(x_17);
lean::dec(x_14);
x_20 = l_List_filterMap___main___at_Lean_Elaborator_notation_elaborateAux___spec__1(x_0, x_6);
if (lean::is_scalar(x_8)) {
 x_21 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_21 = x_8;
}
lean::cnstr_set(x_21, 0, x_17);
lean::cnstr_set(x_21, 1, x_20);
return x_21;
}
}
}
}
obj* _init_l_Lean_Elaborator_notation_elaborateAux___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid notation, matches multiple reserved notations");
return x_0;
}
}
obj* l_Lean_Elaborator_notation_elaborateAux(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::inc(x_0);
x_7 = l_List_filterMap___main___at_Lean_Elaborator_notation_elaborateAux___spec__1(x_0, x_4);
if (lean::obj_tag(x_7) == 0)
{
obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_18; obj* x_21; obj* x_22; obj* x_23; 
lean::dec(x_2);
x_9 = lean::cnstr_get(x_0, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_0, 2);
lean::inc(x_13);
x_15 = l_Lean_Elaborator_postprocessNotationSpec(x_13);
x_16 = lean::cnstr_get(x_0, 3);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_0, 4);
lean::inc(x_18);
lean::dec(x_0);
x_21 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_21, 0, x_9);
lean::cnstr_set(x_21, 1, x_11);
lean::cnstr_set(x_21, 2, x_15);
lean::cnstr_set(x_21, 3, x_16);
lean::cnstr_set(x_21, 4, x_18);
x_22 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_3);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_22);
return x_23;
}
else
{
obj* x_24; 
x_24 = lean::cnstr_get(x_7, 1);
lean::inc(x_24);
if (lean::obj_tag(x_24) == 0)
{
obj* x_27; obj* x_30; obj* x_32; obj* x_34; obj* x_36; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
lean::dec(x_2);
x_27 = lean::cnstr_get(x_7, 0);
lean::inc(x_27);
lean::dec(x_7);
x_30 = lean::cnstr_get(x_0, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_0, 1);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_0, 3);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_0, 4);
lean::inc(x_36);
lean::dec(x_0);
x_39 = l_Lean_Elaborator_postprocessNotationSpec(x_27);
x_40 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_40, 0, x_30);
lean::cnstr_set(x_40, 1, x_32);
lean::cnstr_set(x_40, 2, x_39);
lean::cnstr_set(x_40, 3, x_34);
lean::cnstr_set(x_40, 4, x_36);
x_41 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_3);
x_42 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_42, 0, x_41);
return x_42;
}
else
{
obj* x_45; obj* x_46; obj* x_49; obj* x_50; obj* x_51; obj* x_52; 
lean::dec(x_7);
lean::dec(x_24);
x_45 = l_Lean_Parser_command_notation_HasView;
x_46 = lean::cnstr_get(x_45, 1);
lean::inc(x_46);
lean::dec(x_45);
x_49 = lean::apply_1(x_46, x_0);
x_50 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_50, 0, x_49);
x_51 = l_Lean_Elaborator_notation_elaborateAux___closed__1;
x_52 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_50, x_51, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_50);
if (lean::obj_tag(x_52) == 0)
{
obj* x_55; obj* x_57; obj* x_58; 
x_55 = lean::cnstr_get(x_52, 0);
if (lean::is_exclusive(x_52)) {
 x_57 = x_52;
} else {
 lean::inc(x_55);
 lean::dec(x_52);
 x_57 = lean::box(0);
}
if (lean::is_scalar(x_57)) {
 x_58 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_58 = x_57;
}
lean::cnstr_set(x_58, 0, x_55);
return x_58;
}
else
{
obj* x_59; obj* x_61; obj* x_62; obj* x_64; obj* x_66; obj* x_67; obj* x_69; obj* x_71; obj* x_73; obj* x_74; obj* x_76; obj* x_79; obj* x_80; obj* x_81; 
x_59 = lean::cnstr_get(x_52, 0);
if (lean::is_exclusive(x_52)) {
 x_61 = x_52;
} else {
 lean::inc(x_59);
 lean::dec(x_52);
 x_61 = lean::box(0);
}
x_62 = lean::cnstr_get(x_59, 0);
x_64 = lean::cnstr_get(x_59, 1);
if (lean::is_exclusive(x_59)) {
 x_66 = x_59;
} else {
 lean::inc(x_62);
 lean::inc(x_64);
 lean::dec(x_59);
 x_66 = lean::box(0);
}
x_67 = lean::cnstr_get(x_62, 0);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_62, 1);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_62, 2);
lean::inc(x_71);
x_73 = l_Lean_Elaborator_postprocessNotationSpec(x_71);
x_74 = lean::cnstr_get(x_62, 3);
lean::inc(x_74);
x_76 = lean::cnstr_get(x_62, 4);
lean::inc(x_76);
lean::dec(x_62);
x_79 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_79, 0, x_67);
lean::cnstr_set(x_79, 1, x_69);
lean::cnstr_set(x_79, 2, x_73);
lean::cnstr_set(x_79, 3, x_74);
lean::cnstr_set(x_79, 4, x_76);
if (lean::is_scalar(x_66)) {
 x_80 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_80 = x_66;
}
lean::cnstr_set(x_80, 0, x_79);
lean::cnstr_set(x_80, 1, x_64);
if (lean::is_scalar(x_61)) {
 x_81 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_81 = x_61;
}
lean::cnstr_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
obj* l_Lean_Elaborator_notation_elaborateAux___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_notation_elaborateAux(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_Elaborator_mkNotationKind___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_notation");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_Lean_Elaborator_mkNotationKind___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
x_7 = lean::mk_nat_obj(1ul);
x_8 = lean::nat_add(x_5, x_7);
x_9 = lean::cnstr_get(x_0, 3);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 4);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_0, 5);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_0, 6);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_0, 7);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_0, 8);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_0, 9);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_0, 10);
lean::inc(x_23);
lean::dec(x_0);
x_26 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_26, 0, x_1);
lean::cnstr_set(x_26, 1, x_3);
lean::cnstr_set(x_26, 2, x_8);
lean::cnstr_set(x_26, 3, x_9);
lean::cnstr_set(x_26, 4, x_11);
lean::cnstr_set(x_26, 5, x_13);
lean::cnstr_set(x_26, 6, x_15);
lean::cnstr_set(x_26, 7, x_17);
lean::cnstr_set(x_26, 8, x_19);
lean::cnstr_set(x_26, 9, x_21);
lean::cnstr_set(x_26, 10, x_23);
x_27 = l_Lean_Elaborator_mkNotationKind___rarg___closed__1;
x_28 = lean_name_mk_numeral(x_27, x_5);
x_29 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_26);
x_30 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_30, 0, x_29);
return x_30;
}
}
obj* l_Lean_Elaborator_mkNotationKind(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_mkNotationKind___rarg), 1, 0);
return x_2;
}
}
obj* l_Lean_Elaborator_mkNotationKind___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Elaborator_mkNotationKind(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Elaborator_registerNotationMacro(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_mkNotationKind___rarg(x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; obj* x_8; obj* x_9; 
lean::dec(x_0);
x_6 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 x_8 = x_4;
} else {
 lean::inc(x_6);
 lean::dec(x_4);
 x_8 = lean::box(0);
}
if (lean::is_scalar(x_8)) {
 x_9 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_9 = x_8;
}
lean::cnstr_set(x_9, 0, x_6);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_13; obj* x_15; obj* x_17; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_29; obj* x_31; obj* x_32; obj* x_34; obj* x_36; obj* x_38; obj* x_40; obj* x_42; obj* x_44; obj* x_47; uint8 x_50; 
x_10 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_set(x_4, 0, lean::box(0));
 x_12 = x_4;
} else {
 lean::inc(x_10);
 lean::dec(x_4);
 x_12 = lean::box(0);
}
x_13 = lean::cnstr_get(x_10, 0);
x_15 = lean::cnstr_get(x_10, 1);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_set(x_10, 0, lean::box(0));
 lean::cnstr_set(x_10, 1, lean::box(0));
 x_17 = x_10;
} else {
 lean::inc(x_13);
 lean::inc(x_15);
 lean::dec(x_10);
 x_17 = lean::box(0);
}
x_18 = lean::cnstr_get(x_15, 7);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_18, 1);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_15, 8);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_15, 9);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_15, 10);
lean::inc(x_26);
lean::inc(x_13);
x_29 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_29, 0, x_13);
lean::cnstr_set(x_29, 1, x_0);
lean::inc(x_29);
x_31 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Expander_mkNotationTransformer), 3, 1);
lean::closure_set(x_31, 0, x_29);
x_32 = lean::cnstr_get(x_15, 0);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_15, 1);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_15, 2);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_15, 3);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_15, 4);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_15, 5);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_15, 6);
lean::inc(x_44);
lean::dec(x_15);
x_47 = lean::cnstr_get(x_18, 0);
lean::inc(x_47);
lean::dec(x_18);
x_50 = l_RBNode_isRed___main___rarg(x_20);
if (x_50 == 0)
{
obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; 
x_51 = l_RBNode_ins___main___at_Lean_Expander_builtinTransformers___spec__1(x_20, x_13, x_31);
x_52 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_52, 0, x_47);
lean::cnstr_set(x_52, 1, x_51);
x_53 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_53, 0, x_32);
lean::cnstr_set(x_53, 1, x_34);
lean::cnstr_set(x_53, 2, x_36);
lean::cnstr_set(x_53, 3, x_38);
lean::cnstr_set(x_53, 4, x_40);
lean::cnstr_set(x_53, 5, x_42);
lean::cnstr_set(x_53, 6, x_44);
lean::cnstr_set(x_53, 7, x_52);
lean::cnstr_set(x_53, 8, x_22);
lean::cnstr_set(x_53, 9, x_24);
lean::cnstr_set(x_53, 10, x_26);
if (lean::is_scalar(x_17)) {
 x_54 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_54 = x_17;
}
lean::cnstr_set(x_54, 0, x_29);
lean::cnstr_set(x_54, 1, x_53);
if (lean::is_scalar(x_12)) {
 x_55 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_55 = x_12;
}
lean::cnstr_set(x_55, 0, x_54);
return x_55;
}
else
{
obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
x_56 = l_RBNode_ins___main___at_Lean_Expander_builtinTransformers___spec__1(x_20, x_13, x_31);
x_57 = l_RBNode_setBlack___main___rarg(x_56);
x_58 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_58, 0, x_47);
lean::cnstr_set(x_58, 1, x_57);
x_59 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_59, 0, x_32);
lean::cnstr_set(x_59, 1, x_34);
lean::cnstr_set(x_59, 2, x_36);
lean::cnstr_set(x_59, 3, x_38);
lean::cnstr_set(x_59, 4, x_40);
lean::cnstr_set(x_59, 5, x_42);
lean::cnstr_set(x_59, 6, x_44);
lean::cnstr_set(x_59, 7, x_58);
lean::cnstr_set(x_59, 8, x_22);
lean::cnstr_set(x_59, 9, x_24);
lean::cnstr_set(x_59, 10, x_26);
if (lean::is_scalar(x_17)) {
 x_60 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_60 = x_17;
}
lean::cnstr_set(x_60, 0, x_29);
lean::cnstr_set(x_60, 1, x_59);
if (lean::is_scalar(x_12)) {
 x_61 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_61 = x_12;
}
lean::cnstr_set(x_61, 0, x_60);
return x_61;
}
}
}
}
obj* l_Lean_Elaborator_registerNotationMacro___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_registerNotationMacro(x_0, x_1, x_2, x_3);
lean::dec(x_1);
lean::dec(x_2);
return x_4;
}
}
uint8 l_List_foldr___main___at_Lean_Elaborator_notation_elaborate___spec__1(uint8 x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_3; uint8 x_4; obj* x_5; 
x_2 = lean::cnstr_get(x_1, 0);
x_3 = lean::cnstr_get(x_1, 1);
x_4 = l_List_foldr___main___at_Lean_Elaborator_notation_elaborate___spec__1(x_0, x_3);
x_5 = lean::cnstr_get(x_2, 1);
if (lean::obj_tag(x_5) == 0)
{
return x_4;
}
else
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 0);
switch (lean::obj_tag(x_6)) {
case 2:
{
obj* x_7; obj* x_8; 
x_7 = lean::cnstr_get(x_6, 0);
x_8 = lean::cnstr_get(x_7, 1);
if (lean::obj_tag(x_8) == 0)
{
return x_4;
}
else
{
obj* x_9; obj* x_10; 
x_9 = lean::cnstr_get(x_8, 0);
x_10 = lean::cnstr_get(x_9, 1);
switch (lean::obj_tag(x_10)) {
case 3:
{
uint8 x_11; 
x_11 = 1;
return x_11;
}
default:
{
return x_4;
}
}
}
}
default:
{
return x_4;
}
}
}
}
}
}
obj* l_Lean_Elaborator_notation_elaborate___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_22; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_0);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::cnstr_get(x_1, 3);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_1, 4);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_1, 5);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_1, 6);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_1, 7);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_1, 8);
lean::inc(x_19);
lean::dec(x_1);
x_22 = lean::alloc_cnstr(0, 9, 0);
lean::cnstr_set(x_22, 0, x_2);
lean::cnstr_set(x_22, 1, x_4);
lean::cnstr_set(x_22, 2, x_8);
lean::cnstr_set(x_22, 3, x_9);
lean::cnstr_set(x_22, 4, x_11);
lean::cnstr_set(x_22, 5, x_13);
lean::cnstr_set(x_22, 6, x_15);
lean::cnstr_set(x_22, 7, x_17);
lean::cnstr_set(x_22, 8, x_19);
return x_22;
}
}
obj* _init_l_Lean_Elaborator_notation_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(1ul);
x_1 = lean::mk_nat_obj(0ul);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_notation_elaborate___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ignoring notation using 'fold' action");
return x_0;
}
}
obj* l_Lean_Elaborator_notation_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_8; obj* x_9; obj* x_11; uint8 x_14; uint8 x_15; 
x_4 = l_Lean_Parser_command_notation_HasView;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
lean::dec(x_4);
x_8 = lean::apply_1(x_5, x_0);
x_9 = lean::cnstr_get(x_8, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_9, 1);
lean::inc(x_11);
lean::dec(x_9);
x_14 = 0;
x_15 = l_List_foldr___main___at_Lean_Elaborator_notation_elaborate___spec__1(x_14, x_11);
lean::dec(x_11);
if (x_15 == 0)
{
obj* x_18; 
lean::inc(x_2);
x_18 = l_Lean_Elaborator_notation_elaborateAux(x_8, x_1, x_2, x_3);
if (lean::obj_tag(x_18) == 0)
{
obj* x_20; obj* x_22; obj* x_23; 
lean::dec(x_2);
x_20 = lean::cnstr_get(x_18, 0);
if (lean::is_exclusive(x_18)) {
 x_22 = x_18;
} else {
 lean::inc(x_20);
 lean::dec(x_18);
 x_22 = lean::box(0);
}
if (lean::is_scalar(x_22)) {
 x_23 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_23 = x_22;
}
lean::cnstr_set(x_23, 0, x_20);
return x_23;
}
else
{
obj* x_24; obj* x_27; obj* x_29; obj* x_33; 
x_24 = lean::cnstr_get(x_18, 0);
lean::inc(x_24);
lean::dec(x_18);
x_27 = lean::cnstr_get(x_24, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_24, 1);
lean::inc(x_29);
lean::dec(x_24);
lean::inc(x_27);
x_33 = l_Lean_Elaborator_registerNotationMacro(x_27, x_1, x_2, x_29);
if (lean::obj_tag(x_33) == 0)
{
obj* x_36; obj* x_38; obj* x_39; 
lean::dec(x_2);
lean::dec(x_27);
x_36 = lean::cnstr_get(x_33, 0);
if (lean::is_exclusive(x_33)) {
 x_38 = x_33;
} else {
 lean::inc(x_36);
 lean::dec(x_33);
 x_38 = lean::box(0);
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_36);
return x_39;
}
else
{
obj* x_40; obj* x_43; 
x_40 = lean::cnstr_get(x_33, 0);
lean::inc(x_40);
lean::dec(x_33);
x_43 = lean::cnstr_get(x_27, 0);
lean::inc(x_43);
lean::dec(x_27);
if (lean::obj_tag(x_43) == 0)
{
obj* x_46; obj* x_48; obj* x_51; obj* x_53; obj* x_55; obj* x_56; obj* x_58; obj* x_60; obj* x_62; obj* x_64; obj* x_66; obj* x_68; obj* x_70; obj* x_72; obj* x_75; obj* x_76; 
x_46 = lean::cnstr_get(x_40, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_40, 1);
lean::inc(x_48);
lean::dec(x_40);
x_51 = lean::cnstr_get(x_48, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_48, 1);
lean::inc(x_53);
x_55 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_55, 0, x_46);
lean::cnstr_set(x_55, 1, x_53);
x_56 = lean::cnstr_get(x_48, 2);
lean::inc(x_56);
x_58 = lean::cnstr_get(x_48, 3);
lean::inc(x_58);
x_60 = lean::cnstr_get(x_48, 4);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_48, 5);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_48, 6);
lean::inc(x_64);
x_66 = lean::cnstr_get(x_48, 7);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_48, 8);
lean::inc(x_68);
x_70 = lean::cnstr_get(x_48, 9);
lean::inc(x_70);
x_72 = lean::cnstr_get(x_48, 10);
lean::inc(x_72);
lean::dec(x_48);
x_75 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_75, 0, x_51);
lean::cnstr_set(x_75, 1, x_55);
lean::cnstr_set(x_75, 2, x_56);
lean::cnstr_set(x_75, 3, x_58);
lean::cnstr_set(x_75, 4, x_60);
lean::cnstr_set(x_75, 5, x_62);
lean::cnstr_set(x_75, 6, x_64);
lean::cnstr_set(x_75, 7, x_66);
lean::cnstr_set(x_75, 8, x_68);
lean::cnstr_set(x_75, 9, x_70);
lean::cnstr_set(x_75, 10, x_72);
x_76 = l_Lean_Elaborator_updateParserConfig(x_1, x_2, x_75);
return x_76;
}
else
{
obj* x_78; obj* x_80; obj* x_83; obj* x_85; 
lean::dec(x_43);
x_78 = lean::cnstr_get(x_40, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_40, 1);
lean::inc(x_80);
lean::dec(x_40);
x_83 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_notation_elaborate___lambda__1), 2, 1);
lean::closure_set(x_83, 0, x_78);
lean::inc(x_2);
x_85 = l_Lean_Elaborator_modifyCurrentScope(x_83, x_1, x_2, x_80);
if (lean::obj_tag(x_85) == 0)
{
obj* x_87; obj* x_89; obj* x_90; 
lean::dec(x_2);
x_87 = lean::cnstr_get(x_85, 0);
if (lean::is_exclusive(x_85)) {
 x_89 = x_85;
} else {
 lean::inc(x_87);
 lean::dec(x_85);
 x_89 = lean::box(0);
}
if (lean::is_scalar(x_89)) {
 x_90 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_90 = x_89;
}
lean::cnstr_set(x_90, 0, x_87);
return x_90;
}
else
{
obj* x_91; obj* x_94; obj* x_97; 
x_91 = lean::cnstr_get(x_85, 0);
lean::inc(x_91);
lean::dec(x_85);
x_94 = lean::cnstr_get(x_91, 1);
lean::inc(x_94);
lean::dec(x_91);
x_97 = l_Lean_Elaborator_updateParserConfig(x_1, x_2, x_94);
return x_97;
}
}
}
}
}
else
{
obj* x_99; obj* x_101; obj* x_103; obj* x_105; obj* x_107; obj* x_109; obj* x_112; obj* x_115; obj* x_116; uint8 x_117; obj* x_118; obj* x_119; obj* x_120; obj* x_121; obj* x_122; obj* x_124; obj* x_125; obj* x_127; obj* x_129; obj* x_131; obj* x_133; obj* x_136; obj* x_137; obj* x_138; obj* x_139; 
lean::dec(x_8);
x_99 = lean::cnstr_get(x_3, 0);
lean::inc(x_99);
x_101 = lean::cnstr_get(x_3, 1);
lean::inc(x_101);
x_103 = lean::cnstr_get(x_3, 2);
lean::inc(x_103);
x_105 = lean::cnstr_get(x_3, 3);
lean::inc(x_105);
x_107 = lean::cnstr_get(x_3, 4);
lean::inc(x_107);
x_109 = lean::cnstr_get(x_2, 0);
lean::inc(x_109);
lean::dec(x_2);
x_112 = lean::cnstr_get(x_109, 0);
lean::inc(x_112);
lean::dec(x_109);
x_115 = lean::box(0);
x_116 = l_Lean_Elaborator_notation_elaborate___closed__1;
x_117 = 1;
x_118 = l_String_splitAux___main___closed__1;
x_119 = l_Lean_Elaborator_notation_elaborate___closed__2;
x_120 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_120, 0, x_112);
lean::cnstr_set(x_120, 1, x_116);
lean::cnstr_set(x_120, 2, x_115);
lean::cnstr_set(x_120, 3, x_118);
lean::cnstr_set(x_120, 4, x_119);
lean::cnstr_set_scalar(x_120, sizeof(void*)*5, x_117);
x_121 = x_120;
x_122 = lean::cnstr_get(x_3, 5);
lean::inc(x_122);
x_124 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_124, 0, x_121);
lean::cnstr_set(x_124, 1, x_122);
x_125 = lean::cnstr_get(x_3, 6);
lean::inc(x_125);
x_127 = lean::cnstr_get(x_3, 7);
lean::inc(x_127);
x_129 = lean::cnstr_get(x_3, 8);
lean::inc(x_129);
x_131 = lean::cnstr_get(x_3, 9);
lean::inc(x_131);
x_133 = lean::cnstr_get(x_3, 10);
lean::inc(x_133);
lean::dec(x_3);
x_136 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_136, 0, x_99);
lean::cnstr_set(x_136, 1, x_101);
lean::cnstr_set(x_136, 2, x_103);
lean::cnstr_set(x_136, 3, x_105);
lean::cnstr_set(x_136, 4, x_107);
lean::cnstr_set(x_136, 5, x_124);
lean::cnstr_set(x_136, 6, x_125);
lean::cnstr_set(x_136, 7, x_127);
lean::cnstr_set(x_136, 8, x_129);
lean::cnstr_set(x_136, 9, x_131);
lean::cnstr_set(x_136, 10, x_133);
x_137 = lean::box(0);
x_138 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_138, 0, x_137);
lean::cnstr_set(x_138, 1, x_136);
x_139 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_139, 0, x_138);
return x_139;
}
}
}
obj* l_List_foldr___main___at_Lean_Elaborator_notation_elaborate___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; uint8 x_3; obj* x_4; 
x_2 = lean::unbox(x_0);
x_3 = l_List_foldr___main___at_Lean_Elaborator_notation_elaborate___spec__1(x_2, x_1);
x_4 = lean::box(x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Elaborator_notation_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_notation_elaborate(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Elaborator_universe_elaborate___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_22; obj* x_25; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 3);
lean::inc(x_8);
lean::inc(x_0);
x_11 = level_mk_param(x_0);
x_12 = l_Lean_Elaborator_toLevel___main___closed__4;
x_13 = l_Lean_Elaborator_OrderedRBMap_insert___rarg(x_12, x_8, x_0, x_11);
x_14 = lean::cnstr_get(x_1, 4);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_1, 5);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_1, 6);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_1, 7);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_1, 8);
lean::inc(x_22);
lean::dec(x_1);
x_25 = lean::alloc_cnstr(0, 9, 0);
lean::cnstr_set(x_25, 0, x_2);
lean::cnstr_set(x_25, 1, x_4);
lean::cnstr_set(x_25, 2, x_6);
lean::cnstr_set(x_25, 3, x_13);
lean::cnstr_set(x_25, 4, x_14);
lean::cnstr_set(x_25, 5, x_16);
lean::cnstr_set(x_25, 6, x_18);
lean::cnstr_set(x_25, 7, x_20);
lean::cnstr_set(x_25, 8, x_22);
return x_25;
}
}
obj* _init_l_Lean_Elaborator_universe_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("a universe named '");
return x_0;
}
}
obj* _init_l_Lean_Elaborator_universe_elaborate___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("' has already been declared in this Scope");
return x_0;
}
}
obj* l_Lean_Elaborator_universe_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; 
lean::inc(x_2);
x_5 = l_Lean_Elaborator_currentScope(x_1, x_2, x_3);
if (lean::obj_tag(x_5) == 0)
{
obj* x_8; obj* x_10; obj* x_11; 
lean::dec(x_0);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 x_10 = x_5;
} else {
 lean::inc(x_8);
 lean::dec(x_5);
 x_10 = lean::box(0);
}
if (lean::is_scalar(x_10)) {
 x_11 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_11 = x_10;
}
lean::cnstr_set(x_11, 0, x_8);
return x_11;
}
else
{
obj* x_12; obj* x_15; obj* x_17; obj* x_20; obj* x_21; obj* x_25; obj* x_26; obj* x_29; obj* x_30; obj* x_33; obj* x_35; 
x_12 = lean::cnstr_get(x_5, 0);
lean::inc(x_12);
lean::dec(x_5);
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_12, 1);
lean::inc(x_17);
lean::dec(x_12);
x_20 = l_Lean_Parser_command_universe_HasView;
x_21 = lean::cnstr_get(x_20, 0);
lean::inc(x_21);
lean::dec(x_20);
lean::inc(x_0);
x_25 = lean::apply_1(x_21, x_0);
x_26 = lean::cnstr_get(x_25, 1);
lean::inc(x_26);
lean::dec(x_25);
x_29 = l_Lean_Elaborator_mangleIdent(x_26);
x_30 = lean::cnstr_get(x_15, 3);
lean::inc(x_30);
lean::dec(x_15);
x_33 = l_Lean_Elaborator_toLevel___main___closed__4;
lean::inc(x_29);
x_35 = l_Lean_Elaborator_OrderedRBMap_find___rarg(x_33, x_30, x_29);
if (lean::obj_tag(x_35) == 0)
{
obj* x_37; obj* x_38; 
lean::dec(x_0);
x_37 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_universe_elaborate___lambda__1), 2, 1);
lean::closure_set(x_37, 0, x_29);
x_38 = l_Lean_Elaborator_modifyCurrentScope(x_37, x_1, x_2, x_17);
return x_38;
}
else
{
obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_46; obj* x_47; obj* x_48; 
if (lean::is_exclusive(x_35)) {
 lean::cnstr_release(x_35, 0);
 x_39 = x_35;
} else {
 lean::dec(x_35);
 x_39 = lean::box(0);
}
if (lean::is_scalar(x_39)) {
 x_40 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_40 = x_39;
}
lean::cnstr_set(x_40, 0, x_0);
x_41 = l_Lean_Name_toString___closed__1;
x_42 = l_Lean_Name_toStringWithSep___main(x_41, x_29);
x_43 = l_Lean_Elaborator_universe_elaborate___closed__1;
x_44 = lean::string_append(x_43, x_42);
lean::dec(x_42);
x_46 = l_Lean_Elaborator_universe_elaborate___closed__2;
x_47 = lean::string_append(x_44, x_46);
x_48 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_40, x_47, x_1, x_2, x_17);
lean::dec(x_17);
lean::dec(x_40);
return x_48;
}
}
}
}
obj* l_Lean_Elaborator_universe_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_universe_elaborate(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unknown identifier '");
return x_0;
}
}
obj* _init_l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid 'attribute' command, identifier is ambiguous");
return x_0;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_8, 3);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_26; obj* x_27; obj* x_29; 
x_12 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_14 = x_0;
} else {
 lean::inc(x_12);
 lean::dec(x_0);
 x_14 = lean::box(0);
}
lean::inc(x_8);
x_16 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_16, 0, x_8);
x_17 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_17, 0, x_16);
x_18 = lean::cnstr_get(x_8, 2);
lean::inc(x_18);
lean::dec(x_8);
x_21 = l_Lean_Name_toString___closed__1;
x_22 = l_Lean_Name_toStringWithSep___main(x_21, x_18);
x_23 = l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1___closed__1;
x_24 = lean::string_append(x_23, x_22);
lean::dec(x_22);
x_26 = l_Char_HasRepr___closed__1;
x_27 = lean::string_append(x_24, x_26);
lean::inc(x_2);
x_29 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_17, x_27, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_17);
if (lean::obj_tag(x_29) == 0)
{
obj* x_35; obj* x_37; obj* x_38; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_2);
x_35 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_37 = x_29;
} else {
 lean::inc(x_35);
 lean::dec(x_29);
 x_37 = lean::box(0);
}
if (lean::is_scalar(x_37)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_37;
}
lean::cnstr_set(x_38, 0, x_35);
return x_38;
}
else
{
obj* x_39; obj* x_42; obj* x_44; obj* x_47; 
x_39 = lean::cnstr_get(x_29, 0);
lean::inc(x_39);
lean::dec(x_29);
x_42 = lean::cnstr_get(x_39, 0);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_39, 1);
lean::inc(x_44);
lean::dec(x_39);
x_47 = l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1(x_12, x_1, x_2, x_44);
if (lean::obj_tag(x_47) == 0)
{
obj* x_50; obj* x_52; obj* x_53; 
lean::dec(x_14);
lean::dec(x_42);
x_50 = lean::cnstr_get(x_47, 0);
if (lean::is_exclusive(x_47)) {
 x_52 = x_47;
} else {
 lean::inc(x_50);
 lean::dec(x_47);
 x_52 = lean::box(0);
}
if (lean::is_scalar(x_52)) {
 x_53 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_53 = x_52;
}
lean::cnstr_set(x_53, 0, x_50);
return x_53;
}
else
{
obj* x_54; obj* x_56; obj* x_57; obj* x_59; obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
x_54 = lean::cnstr_get(x_47, 0);
if (lean::is_exclusive(x_47)) {
 x_56 = x_47;
} else {
 lean::inc(x_54);
 lean::dec(x_47);
 x_56 = lean::box(0);
}
x_57 = lean::cnstr_get(x_54, 0);
x_59 = lean::cnstr_get(x_54, 1);
if (lean::is_exclusive(x_54)) {
 x_61 = x_54;
} else {
 lean::inc(x_57);
 lean::inc(x_59);
 lean::dec(x_54);
 x_61 = lean::box(0);
}
if (lean::is_scalar(x_14)) {
 x_62 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_62 = x_14;
}
lean::cnstr_set(x_62, 0, x_42);
lean::cnstr_set(x_62, 1, x_57);
if (lean::is_scalar(x_61)) {
 x_63 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_63 = x_61;
}
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_59);
if (lean::is_scalar(x_56)) {
 x_64 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_64 = x_56;
}
lean::cnstr_set(x_64, 0, x_63);
return x_64;
}
}
}
else
{
obj* x_65; 
x_65 = lean::cnstr_get(x_10, 1);
lean::inc(x_65);
if (lean::obj_tag(x_65) == 0)
{
obj* x_68; obj* x_71; obj* x_73; obj* x_74; 
lean::dec(x_8);
x_68 = lean::cnstr_get(x_0, 1);
lean::inc(x_68);
lean::dec(x_0);
x_71 = lean::cnstr_get(x_10, 0);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_set(x_10, 0, lean::box(0));
 lean::cnstr_release(x_10, 1);
 x_73 = x_10;
} else {
 lean::inc(x_71);
 lean::dec(x_10);
 x_73 = lean::box(0);
}
x_74 = l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1(x_68, x_1, x_2, x_3);
if (lean::obj_tag(x_74) == 0)
{
obj* x_77; obj* x_79; obj* x_80; 
lean::dec(x_71);
lean::dec(x_73);
x_77 = lean::cnstr_get(x_74, 0);
if (lean::is_exclusive(x_74)) {
 x_79 = x_74;
} else {
 lean::inc(x_77);
 lean::dec(x_74);
 x_79 = lean::box(0);
}
if (lean::is_scalar(x_79)) {
 x_80 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_80 = x_79;
}
lean::cnstr_set(x_80, 0, x_77);
return x_80;
}
else
{
obj* x_81; obj* x_83; obj* x_84; obj* x_86; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; 
x_81 = lean::cnstr_get(x_74, 0);
if (lean::is_exclusive(x_74)) {
 x_83 = x_74;
} else {
 lean::inc(x_81);
 lean::dec(x_74);
 x_83 = lean::box(0);
}
x_84 = lean::cnstr_get(x_81, 0);
x_86 = lean::cnstr_get(x_81, 1);
if (lean::is_exclusive(x_81)) {
 x_88 = x_81;
} else {
 lean::inc(x_84);
 lean::inc(x_86);
 lean::dec(x_81);
 x_88 = lean::box(0);
}
x_89 = lean::box(0);
x_90 = lean_expr_mk_const(x_71, x_89);
if (lean::is_scalar(x_73)) {
 x_91 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_91 = x_73;
}
lean::cnstr_set(x_91, 0, x_90);
lean::cnstr_set(x_91, 1, x_84);
if (lean::is_scalar(x_88)) {
 x_92 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_92 = x_88;
}
lean::cnstr_set(x_92, 0, x_91);
lean::cnstr_set(x_92, 1, x_86);
if (lean::is_scalar(x_83)) {
 x_93 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_93 = x_83;
}
lean::cnstr_set(x_93, 0, x_92);
return x_93;
}
}
else
{
obj* x_95; obj* x_96; obj* x_99; obj* x_100; obj* x_101; obj* x_103; 
lean::dec(x_10);
if (lean::is_exclusive(x_65)) {
 lean::cnstr_release(x_65, 0);
 lean::cnstr_release(x_65, 1);
 x_95 = x_65;
} else {
 lean::dec(x_65);
 x_95 = lean::box(0);
}
x_96 = lean::cnstr_get(x_0, 1);
lean::inc(x_96);
lean::dec(x_0);
x_99 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_99, 0, x_8);
x_100 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_100, 0, x_99);
x_101 = l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1___closed__2;
lean::inc(x_2);
x_103 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_100, x_101, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_100);
if (lean::obj_tag(x_103) == 0)
{
obj* x_109; obj* x_111; obj* x_112; 
lean::dec(x_2);
lean::dec(x_95);
lean::dec(x_96);
x_109 = lean::cnstr_get(x_103, 0);
if (lean::is_exclusive(x_103)) {
 x_111 = x_103;
} else {
 lean::inc(x_109);
 lean::dec(x_103);
 x_111 = lean::box(0);
}
if (lean::is_scalar(x_111)) {
 x_112 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_112 = x_111;
}
lean::cnstr_set(x_112, 0, x_109);
return x_112;
}
else
{
obj* x_113; obj* x_116; obj* x_118; obj* x_121; 
x_113 = lean::cnstr_get(x_103, 0);
lean::inc(x_113);
lean::dec(x_103);
x_116 = lean::cnstr_get(x_113, 0);
lean::inc(x_116);
x_118 = lean::cnstr_get(x_113, 1);
lean::inc(x_118);
lean::dec(x_113);
x_121 = l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1(x_96, x_1, x_2, x_118);
if (lean::obj_tag(x_121) == 0)
{
obj* x_124; obj* x_126; obj* x_127; 
lean::dec(x_95);
lean::dec(x_116);
x_124 = lean::cnstr_get(x_121, 0);
if (lean::is_exclusive(x_121)) {
 x_126 = x_121;
} else {
 lean::inc(x_124);
 lean::dec(x_121);
 x_126 = lean::box(0);
}
if (lean::is_scalar(x_126)) {
 x_127 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_127 = x_126;
}
lean::cnstr_set(x_127, 0, x_124);
return x_127;
}
else
{
obj* x_128; obj* x_130; obj* x_131; obj* x_133; obj* x_135; obj* x_136; obj* x_137; obj* x_138; 
x_128 = lean::cnstr_get(x_121, 0);
if (lean::is_exclusive(x_121)) {
 x_130 = x_121;
} else {
 lean::inc(x_128);
 lean::dec(x_121);
 x_130 = lean::box(0);
}
x_131 = lean::cnstr_get(x_128, 0);
x_133 = lean::cnstr_get(x_128, 1);
if (lean::is_exclusive(x_128)) {
 x_135 = x_128;
} else {
 lean::inc(x_131);
 lean::inc(x_133);
 lean::dec(x_128);
 x_135 = lean::box(0);
}
if (lean::is_scalar(x_95)) {
 x_136 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_136 = x_95;
}
lean::cnstr_set(x_136, 0, x_116);
lean::cnstr_set(x_136, 1, x_131);
if (lean::is_scalar(x_135)) {
 x_137 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_137 = x_135;
}
lean::cnstr_set(x_137, 0, x_136);
lean::cnstr_set(x_137, 1, x_133);
if (lean::is_scalar(x_130)) {
 x_138 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_138 = x_130;
}
lean::cnstr_set(x_138, 0, x_137);
return x_138;
}
}
}
}
}
}
}
obj* _init_l_Lean_Elaborator_attribute_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("attribute");
x_4 = lean_name_mk_string(x_0, x_3);
x_5 = lean::box(0);
x_6 = l_Lean_KVMap_setName(x_5, x_2, x_4);
return x_6;
}
}
obj* _init_l_Lean_Elaborator_attribute_elaborate___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("local");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_Lean_Elaborator_attribute_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_9; uint8 x_10; obj* x_11; obj* x_13; obj* x_15; obj* x_18; 
x_4 = l_Lean_Parser_command_attribute_HasView;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
lean::dec(x_4);
lean::inc(x_0);
x_9 = lean::apply_1(x_5, x_0);
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 3);
lean::inc(x_15);
lean::inc(x_2);
x_18 = l_Lean_Elaborator_attrsToPexpr(x_15, x_1, x_2, x_3);
if (lean::obj_tag(x_13) == 0)
{
if (lean::obj_tag(x_18) == 0)
{
obj* x_22; obj* x_24; obj* x_25; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_2);
x_22 = lean::cnstr_get(x_18, 0);
if (lean::is_exclusive(x_18)) {
 x_24 = x_18;
} else {
 lean::inc(x_22);
 lean::dec(x_18);
 x_24 = lean::box(0);
}
if (lean::is_scalar(x_24)) {
 x_25 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_25 = x_24;
}
lean::cnstr_set(x_25, 0, x_22);
return x_25;
}
else
{
obj* x_26; uint8 x_29; 
x_26 = lean::cnstr_get(x_18, 0);
lean::inc(x_26);
lean::dec(x_18);
x_29 = 0;
x_10 = x_29;
x_11 = x_26;
goto lbl_12;
}
}
else
{
lean::dec(x_13);
if (lean::obj_tag(x_18) == 0)
{
obj* x_34; obj* x_36; obj* x_37; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_2);
x_34 = lean::cnstr_get(x_18, 0);
if (lean::is_exclusive(x_18)) {
 x_36 = x_18;
} else {
 lean::inc(x_34);
 lean::dec(x_18);
 x_36 = lean::box(0);
}
if (lean::is_scalar(x_36)) {
 x_37 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_37 = x_36;
}
lean::cnstr_set(x_37, 0, x_34);
return x_37;
}
else
{
obj* x_38; uint8 x_41; 
x_38 = lean::cnstr_get(x_18, 0);
lean::inc(x_38);
lean::dec(x_18);
x_41 = 1;
x_10 = x_41;
x_11 = x_38;
goto lbl_12;
}
}
lbl_12:
{
obj* x_42; obj* x_44; obj* x_47; obj* x_51; 
x_42 = lean::cnstr_get(x_11, 0);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_11, 1);
lean::inc(x_44);
lean::dec(x_11);
x_47 = lean::cnstr_get(x_9, 5);
lean::inc(x_47);
lean::dec(x_9);
lean::inc(x_2);
x_51 = l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1(x_47, x_1, x_2, x_44);
if (lean::obj_tag(x_51) == 0)
{
obj* x_55; obj* x_57; obj* x_58; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_42);
x_55 = lean::cnstr_get(x_51, 0);
if (lean::is_exclusive(x_51)) {
 x_57 = x_51;
} else {
 lean::inc(x_55);
 lean::dec(x_51);
 x_57 = lean::box(0);
}
if (lean::is_scalar(x_57)) {
 x_58 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_58 = x_57;
}
lean::cnstr_set(x_58, 0, x_55);
return x_58;
}
else
{
obj* x_59; obj* x_62; obj* x_64; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
x_59 = lean::cnstr_get(x_51, 0);
lean::inc(x_59);
lean::dec(x_51);
x_62 = lean::cnstr_get(x_59, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_59, 1);
lean::inc(x_64);
lean::dec(x_59);
x_67 = l_Lean_Elaborator_attribute_elaborate___closed__1;
x_68 = l_Lean_Elaborator_attribute_elaborate___closed__2;
x_69 = l_Lean_KVMap_setBool(x_67, x_68, x_10);
x_70 = l_Lean_Elaborator_mkEqns___closed__1;
x_71 = l_Lean_Expr_mkCapp(x_70, x_62);
x_72 = lean_expr_mk_app(x_42, x_71);
x_73 = lean_expr_mk_mdata(x_69, x_72);
x_74 = l_Lean_Elaborator_oldElabCommand(x_0, x_73, x_1, x_2, x_64);
lean::dec(x_0);
return x_74;
}
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Elaborator_attribute_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_attribute_elaborate(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_Elaborator_check_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("#check");
x_4 = lean_name_mk_string(x_0, x_3);
x_5 = lean::box(0);
x_6 = l_Lean_KVMap_setName(x_5, x_2, x_4);
return x_6;
}
}
obj* l_Lean_Elaborator_check_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_9; obj* x_10; obj* x_14; 
x_4 = l_Lean_Parser_command_check_HasView;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
lean::dec(x_4);
lean::inc(x_0);
x_9 = lean::apply_1(x_5, x_0);
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
lean::dec(x_9);
lean::inc(x_2);
x_14 = l_Lean_Elaborator_toPexpr___main(x_10, x_1, x_2, x_3);
if (lean::obj_tag(x_14) == 0)
{
obj* x_17; obj* x_19; obj* x_20; 
lean::dec(x_0);
lean::dec(x_2);
x_17 = lean::cnstr_get(x_14, 0);
if (lean::is_exclusive(x_14)) {
 x_19 = x_14;
} else {
 lean::inc(x_17);
 lean::dec(x_14);
 x_19 = lean::box(0);
}
if (lean::is_scalar(x_19)) {
 x_20 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_20 = x_19;
}
lean::cnstr_set(x_20, 0, x_17);
return x_20;
}
else
{
obj* x_21; obj* x_24; obj* x_26; obj* x_29; obj* x_30; obj* x_31; 
x_21 = lean::cnstr_get(x_14, 0);
lean::inc(x_21);
lean::dec(x_14);
x_24 = lean::cnstr_get(x_21, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_21, 1);
lean::inc(x_26);
lean::dec(x_21);
x_29 = l_Lean_Elaborator_check_elaborate___closed__1;
x_30 = lean_expr_mk_mdata(x_29, x_24);
x_31 = l_Lean_Elaborator_oldElabCommand(x_0, x_30, x_1, x_2, x_26);
lean::dec(x_0);
return x_31;
}
}
}
obj* l_Lean_Elaborator_check_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_check_elaborate(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Elaborator_open_elaborate___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_21; obj* x_22; obj* x_25; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 3);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_1, 4);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 5);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_1, 6);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_1, 7);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_0, 1);
lean::inc(x_18);
lean::dec(x_0);
x_21 = l_List_append___rarg(x_16, x_18);
x_22 = lean::cnstr_get(x_1, 8);
lean::inc(x_22);
lean::dec(x_1);
x_25 = lean::alloc_cnstr(0, 9, 0);
lean::cnstr_set(x_25, 0, x_2);
lean::cnstr_set(x_25, 1, x_4);
lean::cnstr_set(x_25, 2, x_6);
lean::cnstr_set(x_25, 3, x_8);
lean::cnstr_set(x_25, 4, x_10);
lean::cnstr_set(x_25, 5, x_12);
lean::cnstr_set(x_25, 6, x_14);
lean::cnstr_set(x_25, 7, x_21);
lean::cnstr_set(x_25, 8, x_22);
return x_25;
}
}
obj* l_Lean_Elaborator_open_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_command_open_HasView;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
lean::dec(x_4);
x_8 = lean::apply_1(x_5, x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_open_elaborate___lambda__1), 2, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = l_Lean_Elaborator_modifyCurrentScope(x_9, x_1, x_2, x_3);
return x_10;
}
}
obj* l_Lean_Elaborator_open_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_open_elaborate(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_List_map___main___at_Lean_Elaborator_export_elaborate___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_12; 
x_4 = lean::cnstr_get(x_1, 0);
x_6 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 x_8 = x_1;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
lean::inc(x_0);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_0);
lean::cnstr_set(x_10, 1, x_4);
x_11 = l_List_map___main___at_Lean_Elaborator_export_elaborate___spec__1(x_0, x_6);
if (lean::is_scalar(x_8)) {
 x_12 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_12 = x_8;
}
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
}
}
obj* l_Lean_Elaborator_export_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_getNamespace(x_1, x_2, x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; obj* x_8; obj* x_9; 
lean::dec(x_0);
x_6 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 x_8 = x_4;
} else {
 lean::inc(x_6);
 lean::dec(x_4);
 x_8 = lean::box(0);
}
if (lean::is_scalar(x_8)) {
 x_9 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_9 = x_8;
}
lean::cnstr_set(x_9, 0, x_6);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_13; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_22; obj* x_23; obj* x_25; obj* x_27; obj* x_29; obj* x_31; obj* x_34; obj* x_35; obj* x_36; obj* x_38; obj* x_40; obj* x_42; obj* x_44; obj* x_46; obj* x_48; obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
x_10 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 x_12 = x_4;
} else {
 lean::inc(x_10);
 lean::dec(x_4);
 x_12 = lean::box(0);
}
x_13 = lean::cnstr_get(x_10, 0);
x_15 = lean::cnstr_get(x_10, 1);
if (lean::is_exclusive(x_10)) {
 x_17 = x_10;
} else {
 lean::inc(x_13);
 lean::inc(x_15);
 lean::dec(x_10);
 x_17 = lean::box(0);
}
x_18 = l_Lean_Parser_command_export_HasView;
x_19 = lean::cnstr_get(x_18, 0);
lean::inc(x_19);
lean::dec(x_18);
x_22 = lean::apply_1(x_19, x_0);
x_23 = lean::cnstr_get(x_15, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_15, 1);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_15, 2);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_15, 3);
lean::inc(x_29);
x_31 = lean::cnstr_get(x_22, 1);
lean::inc(x_31);
lean::dec(x_22);
x_34 = l_List_map___main___at_Lean_Elaborator_export_elaborate___spec__1(x_13, x_31);
x_35 = l_List_append___rarg(x_29, x_34);
x_36 = lean::cnstr_get(x_15, 4);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_15, 5);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_15, 6);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_15, 7);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_15, 8);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_15, 9);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_15, 10);
lean::inc(x_48);
lean::dec(x_15);
x_51 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_51, 0, x_23);
lean::cnstr_set(x_51, 1, x_25);
lean::cnstr_set(x_51, 2, x_27);
lean::cnstr_set(x_51, 3, x_35);
lean::cnstr_set(x_51, 4, x_36);
lean::cnstr_set(x_51, 5, x_38);
lean::cnstr_set(x_51, 6, x_40);
lean::cnstr_set(x_51, 7, x_42);
lean::cnstr_set(x_51, 8, x_44);
lean::cnstr_set(x_51, 9, x_46);
lean::cnstr_set(x_51, 10, x_48);
x_52 = lean::box(0);
if (lean::is_scalar(x_17)) {
 x_53 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_53 = x_17;
}
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_51);
if (lean::is_scalar(x_12)) {
 x_54 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_54 = x_12;
}
lean::cnstr_set(x_54, 0, x_53);
return x_54;
}
}
}
obj* l_Lean_Elaborator_export_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_export_elaborate(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_Elaborator_initQuot_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("initQuot");
x_4 = lean_name_mk_string(x_0, x_3);
x_5 = lean::box(0);
x_6 = l_Lean_KVMap_setName(x_5, x_2, x_4);
x_7 = l_Lean_Elaborator_dummy;
x_8 = lean_expr_mk_mdata(x_6, x_7);
return x_8;
}
}
obj* l_Lean_Elaborator_initQuot_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = l_Lean_Elaborator_initQuot_elaborate___closed__1;
x_5 = l_Lean_Elaborator_oldElabCommand(x_0, x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_Lean_Elaborator_initQuot_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_initQuot_elaborate(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Elaborator_setOption_elaborate___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_19; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 3);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_1, 4);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 5);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_1, 6);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_1, 7);
lean::inc(x_16);
lean::dec(x_1);
x_19 = lean::alloc_cnstr(0, 9, 0);
lean::cnstr_set(x_19, 0, x_2);
lean::cnstr_set(x_19, 1, x_4);
lean::cnstr_set(x_19, 2, x_6);
lean::cnstr_set(x_19, 3, x_8);
lean::cnstr_set(x_19, 4, x_10);
lean::cnstr_set(x_19, 5, x_12);
lean::cnstr_set(x_19, 6, x_14);
lean::cnstr_set(x_19, 7, x_16);
lean::cnstr_set(x_19, 8, x_0);
return x_19;
}
}
obj* l_Lean_Elaborator_setOption_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; 
lean::inc(x_2);
x_5 = l_Lean_Elaborator_currentScope(x_1, x_2, x_3);
if (lean::obj_tag(x_5) == 0)
{
obj* x_8; obj* x_10; obj* x_11; 
lean::dec(x_0);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 x_10 = x_5;
} else {
 lean::inc(x_8);
 lean::dec(x_5);
 x_10 = lean::box(0);
}
if (lean::is_scalar(x_10)) {
 x_11 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_11 = x_10;
}
lean::cnstr_set(x_11, 0, x_8);
return x_11;
}
else
{
obj* x_12; obj* x_15; obj* x_17; obj* x_20; obj* x_21; obj* x_24; obj* x_25; 
x_12 = lean::cnstr_get(x_5, 0);
lean::inc(x_12);
lean::dec(x_5);
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_12, 1);
lean::inc(x_17);
lean::dec(x_12);
x_20 = l_Lean_Parser_command_setOption_HasView;
x_21 = lean::cnstr_get(x_20, 0);
lean::inc(x_21);
lean::dec(x_20);
x_24 = lean::apply_1(x_21, x_0);
x_25 = lean::cnstr_get(x_24, 2);
lean::inc(x_25);
switch (lean::obj_tag(x_25)) {
case 0:
{
obj* x_27; 
x_27 = lean::cnstr_get(x_25, 0);
lean::inc(x_27);
lean::dec(x_25);
if (lean::obj_tag(x_27) == 0)
{
obj* x_31; obj* x_34; obj* x_37; uint8 x_40; obj* x_41; obj* x_42; obj* x_43; 
lean::dec(x_27);
x_31 = lean::cnstr_get(x_24, 1);
lean::inc(x_31);
lean::dec(x_24);
x_34 = lean::cnstr_get(x_31, 2);
lean::inc(x_34);
lean::dec(x_31);
x_37 = lean::cnstr_get(x_15, 8);
lean::inc(x_37);
lean::dec(x_15);
x_40 = 1;
x_41 = l_Lean_KVMap_setBool(x_37, x_34, x_40);
x_42 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_setOption_elaborate___lambda__1), 2, 1);
lean::closure_set(x_42, 0, x_41);
x_43 = l_Lean_Elaborator_modifyCurrentScope(x_42, x_1, x_2, x_17);
return x_43;
}
else
{
obj* x_45; obj* x_48; obj* x_51; uint8 x_54; obj* x_55; obj* x_56; obj* x_57; 
lean::dec(x_27);
x_45 = lean::cnstr_get(x_24, 1);
lean::inc(x_45);
lean::dec(x_24);
x_48 = lean::cnstr_get(x_45, 2);
lean::inc(x_48);
lean::dec(x_45);
x_51 = lean::cnstr_get(x_15, 8);
lean::inc(x_51);
lean::dec(x_15);
x_54 = 0;
x_55 = l_Lean_KVMap_setBool(x_51, x_48, x_54);
x_56 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_setOption_elaborate___lambda__1), 2, 1);
lean::closure_set(x_56, 0, x_55);
x_57 = l_Lean_Elaborator_modifyCurrentScope(x_56, x_1, x_2, x_17);
return x_57;
}
}
case 1:
{
obj* x_58; obj* x_61; obj* x_64; obj* x_67; obj* x_70; 
x_58 = lean::cnstr_get(x_24, 1);
lean::inc(x_58);
lean::dec(x_24);
x_61 = lean::cnstr_get(x_58, 2);
lean::inc(x_61);
lean::dec(x_58);
x_64 = lean::cnstr_get(x_15, 8);
lean::inc(x_64);
lean::dec(x_15);
x_67 = lean::cnstr_get(x_25, 0);
lean::inc(x_67);
lean::dec(x_25);
x_70 = l_Lean_Parser_stringLit_View_value(x_67);
if (lean::obj_tag(x_70) == 0)
{
obj* x_72; obj* x_73; 
lean::dec(x_61);
x_72 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_setOption_elaborate___lambda__1), 2, 1);
lean::closure_set(x_72, 0, x_64);
x_73 = l_Lean_Elaborator_modifyCurrentScope(x_72, x_1, x_2, x_17);
return x_73;
}
else
{
obj* x_74; obj* x_77; obj* x_78; obj* x_79; 
x_74 = lean::cnstr_get(x_70, 0);
lean::inc(x_74);
lean::dec(x_70);
x_77 = l_Lean_KVMap_setString(x_64, x_61, x_74);
x_78 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_setOption_elaborate___lambda__1), 2, 1);
lean::closure_set(x_78, 0, x_77);
x_79 = l_Lean_Elaborator_modifyCurrentScope(x_78, x_1, x_2, x_17);
return x_79;
}
}
default:
{
obj* x_80; obj* x_83; obj* x_86; obj* x_89; obj* x_92; obj* x_93; obj* x_94; obj* x_95; 
x_80 = lean::cnstr_get(x_24, 1);
lean::inc(x_80);
lean::dec(x_24);
x_83 = lean::cnstr_get(x_80, 2);
lean::inc(x_83);
lean::dec(x_80);
x_86 = lean::cnstr_get(x_15, 8);
lean::inc(x_86);
lean::dec(x_15);
x_89 = lean::cnstr_get(x_25, 0);
lean::inc(x_89);
lean::dec(x_25);
x_92 = l_Lean_Parser_number_View_toNat___main(x_89);
x_93 = l_Lean_KVMap_setNat(x_86, x_83, x_92);
x_94 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_setOption_elaborate___lambda__1), 2, 1);
lean::closure_set(x_94, 0, x_93);
x_95 = l_Lean_Elaborator_modifyCurrentScope(x_94, x_1, x_2, x_17);
return x_95;
}
}
}
}
}
obj* l_Lean_Elaborator_setOption_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_setOption_elaborate(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_List_mfor___main___at_Lean_Elaborator_noKind_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_1);
lean::dec(x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_3);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_11; obj* x_16; 
x_9 = lean::cnstr_get(x_0, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 1);
lean::inc(x_11);
lean::dec(x_0);
lean::inc(x_2);
lean::inc(x_1);
x_16 = lean::apply_3(x_1, x_9, x_2, x_3);
if (lean::obj_tag(x_16) == 0)
{
obj* x_20; obj* x_22; obj* x_23; 
lean::dec(x_1);
lean::dec(x_11);
lean::dec(x_2);
x_20 = lean::cnstr_get(x_16, 0);
if (lean::is_exclusive(x_16)) {
 x_22 = x_16;
} else {
 lean::inc(x_20);
 lean::dec(x_16);
 x_22 = lean::box(0);
}
if (lean::is_scalar(x_22)) {
 x_23 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_23 = x_22;
}
lean::cnstr_set(x_23, 0, x_20);
return x_23;
}
else
{
obj* x_24; obj* x_27; 
x_24 = lean::cnstr_get(x_16, 0);
lean::inc(x_24);
lean::dec(x_16);
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
lean::dec(x_24);
x_0 = x_11;
x_3 = x_27;
goto _start;
}
}
}
}
obj* _init_l_Lean_Elaborator_noKind_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("noKind.elaborate: unreachable");
return x_0;
}
}
obj* l_Lean_Elaborator_noKind_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; 
lean::inc(x_0);
x_5 = l_Lean_Parser_Syntax_asNode___main(x_0);
if (lean::obj_tag(x_5) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_0);
x_7 = l_Lean_Elaborator_noKind_elaborate___closed__1;
x_8 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_6, x_7, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_1);
lean::dec(x_6);
return x_8;
}
else
{
obj* x_13; obj* x_16; obj* x_19; 
lean::dec(x_0);
x_13 = lean::cnstr_get(x_5, 0);
lean::inc(x_13);
lean::dec(x_5);
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
lean::dec(x_13);
x_19 = l_List_mfor___main___at_Lean_Elaborator_noKind_elaborate___spec__1(x_16, x_1, x_2, x_3);
return x_19;
}
}
}
obj* _init_l_Lean_Elaborator_end_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid 'end', there is no open Scope to end");
return x_0;
}
}
obj* _init_l_Lean_Elaborator_end_elaborate___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string(".");
x_2 = lean::box(0);
x_3 = l_Lean_Name_toStringWithSep___main(x_1, x_2);
lean::dec(x_1);
x_5 = l_Lean_Parser_Substring_ofString(x_3);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_7, 0, x_0);
lean::cnstr_set(x_7, 1, x_5);
lean::cnstr_set(x_7, 2, x_2);
lean::cnstr_set(x_7, 3, x_6);
lean::cnstr_set(x_7, 4, x_6);
x_8 = l_Lean_Elaborator_mangleIdent(x_7);
return x_8;
}
}
obj* _init_l_Lean_Elaborator_end_elaborate___closed__3() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid end of ");
return x_0;
}
}
obj* _init_l_Lean_Elaborator_end_elaborate___closed__4() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string(", expected Name '");
return x_0;
}
}
obj* l_Lean_Elaborator_end_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::cnstr_get(x_3, 4);
lean::inc(x_4);
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_0);
x_7 = l_Lean_Elaborator_end_elaborate___closed__1;
x_8 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_6, x_7, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_6);
return x_8;
}
else
{
obj* x_11; 
x_11 = lean::cnstr_get(x_4, 1);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_14; obj* x_15; obj* x_16; 
lean::dec(x_4);
x_14 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_14, 0, x_0);
x_15 = l_Lean_Elaborator_end_elaborate___closed__1;
x_16 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_14, x_15, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_14);
return x_16;
}
else
{
obj* x_19; obj* x_22; obj* x_23; obj* x_27; obj* x_28; 
x_19 = lean::cnstr_get(x_4, 0);
lean::inc(x_19);
lean::dec(x_4);
x_22 = l_Lean_Parser_command_end_HasView;
x_23 = lean::cnstr_get(x_22, 0);
lean::inc(x_23);
lean::dec(x_22);
lean::inc(x_0);
x_27 = lean::apply_1(x_23, x_0);
x_28 = lean::cnstr_get(x_27, 1);
lean::inc(x_28);
lean::dec(x_27);
if (lean::obj_tag(x_28) == 0)
{
obj* x_31; obj* x_33; uint8 x_34; 
x_31 = lean::cnstr_get(x_19, 1);
lean::inc(x_31);
x_33 = l_Lean_Elaborator_end_elaborate___closed__2;
x_34 = lean_name_dec_eq(x_33, x_31);
if (x_34 == 0)
{
obj* x_35; obj* x_36; obj* x_39; obj* x_40; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_48; obj* x_49; obj* x_51; 
x_35 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_35, 0, x_0);
x_36 = lean::cnstr_get(x_19, 0);
lean::inc(x_36);
lean::dec(x_19);
x_39 = l_Lean_Elaborator_end_elaborate___closed__3;
x_40 = lean::string_append(x_39, x_36);
lean::dec(x_36);
x_42 = l_Lean_Elaborator_end_elaborate___closed__4;
x_43 = lean::string_append(x_40, x_42);
x_44 = l_Lean_Name_toString___closed__1;
x_45 = l_Lean_Name_toStringWithSep___main(x_44, x_31);
x_46 = lean::string_append(x_43, x_45);
lean::dec(x_45);
x_48 = l_Char_HasRepr___closed__1;
x_49 = lean::string_append(x_46, x_48);
lean::inc(x_2);
x_51 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_35, x_49, x_1, x_2, x_3);
lean::dec(x_35);
if (lean::obj_tag(x_51) == 0)
{
obj* x_56; obj* x_58; obj* x_59; 
lean::dec(x_11);
lean::dec(x_3);
lean::dec(x_2);
x_56 = lean::cnstr_get(x_51, 0);
if (lean::is_exclusive(x_51)) {
 x_58 = x_51;
} else {
 lean::inc(x_56);
 lean::dec(x_51);
 x_58 = lean::box(0);
}
if (lean::is_scalar(x_58)) {
 x_59 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_59 = x_58;
}
lean::cnstr_set(x_59, 0, x_56);
return x_59;
}
else
{
obj* x_61; obj* x_63; obj* x_65; obj* x_67; obj* x_69; obj* x_71; obj* x_73; obj* x_75; obj* x_77; obj* x_79; obj* x_82; obj* x_83; 
lean::dec(x_51);
x_61 = lean::cnstr_get(x_3, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_3, 1);
lean::inc(x_63);
x_65 = lean::cnstr_get(x_3, 2);
lean::inc(x_65);
x_67 = lean::cnstr_get(x_3, 3);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_3, 5);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_3, 6);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_3, 7);
lean::inc(x_73);
x_75 = lean::cnstr_get(x_3, 8);
lean::inc(x_75);
x_77 = lean::cnstr_get(x_3, 9);
lean::inc(x_77);
x_79 = lean::cnstr_get(x_3, 10);
lean::inc(x_79);
lean::dec(x_3);
x_82 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_82, 0, x_61);
lean::cnstr_set(x_82, 1, x_63);
lean::cnstr_set(x_82, 2, x_65);
lean::cnstr_set(x_82, 3, x_67);
lean::cnstr_set(x_82, 4, x_11);
lean::cnstr_set(x_82, 5, x_69);
lean::cnstr_set(x_82, 6, x_71);
lean::cnstr_set(x_82, 7, x_73);
lean::cnstr_set(x_82, 8, x_75);
lean::cnstr_set(x_82, 9, x_77);
lean::cnstr_set(x_82, 10, x_79);
x_83 = l_Lean_Elaborator_updateParserConfig(x_1, x_2, x_82);
return x_83;
}
}
else
{
obj* x_87; obj* x_89; obj* x_91; obj* x_93; obj* x_95; obj* x_97; obj* x_99; obj* x_101; obj* x_103; obj* x_105; obj* x_108; obj* x_109; 
lean::dec(x_0);
lean::dec(x_31);
lean::dec(x_19);
x_87 = lean::cnstr_get(x_3, 0);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_3, 1);
lean::inc(x_89);
x_91 = lean::cnstr_get(x_3, 2);
lean::inc(x_91);
x_93 = lean::cnstr_get(x_3, 3);
lean::inc(x_93);
x_95 = lean::cnstr_get(x_3, 5);
lean::inc(x_95);
x_97 = lean::cnstr_get(x_3, 6);
lean::inc(x_97);
x_99 = lean::cnstr_get(x_3, 7);
lean::inc(x_99);
x_101 = lean::cnstr_get(x_3, 8);
lean::inc(x_101);
x_103 = lean::cnstr_get(x_3, 9);
lean::inc(x_103);
x_105 = lean::cnstr_get(x_3, 10);
lean::inc(x_105);
lean::dec(x_3);
x_108 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_108, 0, x_87);
lean::cnstr_set(x_108, 1, x_89);
lean::cnstr_set(x_108, 2, x_91);
lean::cnstr_set(x_108, 3, x_93);
lean::cnstr_set(x_108, 4, x_11);
lean::cnstr_set(x_108, 5, x_95);
lean::cnstr_set(x_108, 6, x_97);
lean::cnstr_set(x_108, 7, x_99);
lean::cnstr_set(x_108, 8, x_101);
lean::cnstr_set(x_108, 9, x_103);
lean::cnstr_set(x_108, 10, x_105);
x_109 = l_Lean_Elaborator_updateParserConfig(x_1, x_2, x_108);
return x_109;
}
}
else
{
obj* x_110; obj* x_112; obj* x_114; obj* x_115; uint8 x_116; 
x_110 = lean::cnstr_get(x_19, 1);
lean::inc(x_110);
x_112 = lean::cnstr_get(x_28, 0);
if (lean::is_exclusive(x_28)) {
 lean::cnstr_set(x_28, 0, lean::box(0));
 x_114 = x_28;
} else {
 lean::inc(x_112);
 lean::dec(x_28);
 x_114 = lean::box(0);
}
x_115 = l_Lean_Elaborator_mangleIdent(x_112);
x_116 = lean_name_dec_eq(x_115, x_110);
lean::dec(x_115);
if (x_116 == 0)
{
obj* x_118; obj* x_119; obj* x_122; obj* x_123; obj* x_125; obj* x_126; obj* x_127; obj* x_128; obj* x_129; obj* x_131; obj* x_132; obj* x_134; 
if (lean::is_scalar(x_114)) {
 x_118 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_118 = x_114;
}
lean::cnstr_set(x_118, 0, x_0);
x_119 = lean::cnstr_get(x_19, 0);
lean::inc(x_119);
lean::dec(x_19);
x_122 = l_Lean_Elaborator_end_elaborate___closed__3;
x_123 = lean::string_append(x_122, x_119);
lean::dec(x_119);
x_125 = l_Lean_Elaborator_end_elaborate___closed__4;
x_126 = lean::string_append(x_123, x_125);
x_127 = l_Lean_Name_toString___closed__1;
x_128 = l_Lean_Name_toStringWithSep___main(x_127, x_110);
x_129 = lean::string_append(x_126, x_128);
lean::dec(x_128);
x_131 = l_Char_HasRepr___closed__1;
x_132 = lean::string_append(x_129, x_131);
lean::inc(x_2);
x_134 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_118, x_132, x_1, x_2, x_3);
lean::dec(x_118);
if (lean::obj_tag(x_134) == 0)
{
obj* x_139; obj* x_141; obj* x_142; 
lean::dec(x_11);
lean::dec(x_3);
lean::dec(x_2);
x_139 = lean::cnstr_get(x_134, 0);
if (lean::is_exclusive(x_134)) {
 x_141 = x_134;
} else {
 lean::inc(x_139);
 lean::dec(x_134);
 x_141 = lean::box(0);
}
if (lean::is_scalar(x_141)) {
 x_142 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_142 = x_141;
}
lean::cnstr_set(x_142, 0, x_139);
return x_142;
}
else
{
obj* x_144; obj* x_146; obj* x_148; obj* x_150; obj* x_152; obj* x_154; obj* x_156; obj* x_158; obj* x_160; obj* x_162; obj* x_165; obj* x_166; 
lean::dec(x_134);
x_144 = lean::cnstr_get(x_3, 0);
lean::inc(x_144);
x_146 = lean::cnstr_get(x_3, 1);
lean::inc(x_146);
x_148 = lean::cnstr_get(x_3, 2);
lean::inc(x_148);
x_150 = lean::cnstr_get(x_3, 3);
lean::inc(x_150);
x_152 = lean::cnstr_get(x_3, 5);
lean::inc(x_152);
x_154 = lean::cnstr_get(x_3, 6);
lean::inc(x_154);
x_156 = lean::cnstr_get(x_3, 7);
lean::inc(x_156);
x_158 = lean::cnstr_get(x_3, 8);
lean::inc(x_158);
x_160 = lean::cnstr_get(x_3, 9);
lean::inc(x_160);
x_162 = lean::cnstr_get(x_3, 10);
lean::inc(x_162);
lean::dec(x_3);
x_165 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_165, 0, x_144);
lean::cnstr_set(x_165, 1, x_146);
lean::cnstr_set(x_165, 2, x_148);
lean::cnstr_set(x_165, 3, x_150);
lean::cnstr_set(x_165, 4, x_11);
lean::cnstr_set(x_165, 5, x_152);
lean::cnstr_set(x_165, 6, x_154);
lean::cnstr_set(x_165, 7, x_156);
lean::cnstr_set(x_165, 8, x_158);
lean::cnstr_set(x_165, 9, x_160);
lean::cnstr_set(x_165, 10, x_162);
x_166 = l_Lean_Elaborator_updateParserConfig(x_1, x_2, x_165);
return x_166;
}
}
else
{
obj* x_171; obj* x_173; obj* x_175; obj* x_177; obj* x_179; obj* x_181; obj* x_183; obj* x_185; obj* x_187; obj* x_189; obj* x_192; obj* x_193; 
lean::dec(x_0);
lean::dec(x_19);
lean::dec(x_114);
lean::dec(x_110);
x_171 = lean::cnstr_get(x_3, 0);
lean::inc(x_171);
x_173 = lean::cnstr_get(x_3, 1);
lean::inc(x_173);
x_175 = lean::cnstr_get(x_3, 2);
lean::inc(x_175);
x_177 = lean::cnstr_get(x_3, 3);
lean::inc(x_177);
x_179 = lean::cnstr_get(x_3, 5);
lean::inc(x_179);
x_181 = lean::cnstr_get(x_3, 6);
lean::inc(x_181);
x_183 = lean::cnstr_get(x_3, 7);
lean::inc(x_183);
x_185 = lean::cnstr_get(x_3, 8);
lean::inc(x_185);
x_187 = lean::cnstr_get(x_3, 9);
lean::inc(x_187);
x_189 = lean::cnstr_get(x_3, 10);
lean::inc(x_189);
lean::dec(x_3);
x_192 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_192, 0, x_171);
lean::cnstr_set(x_192, 1, x_173);
lean::cnstr_set(x_192, 2, x_175);
lean::cnstr_set(x_192, 3, x_177);
lean::cnstr_set(x_192, 4, x_11);
lean::cnstr_set(x_192, 5, x_179);
lean::cnstr_set(x_192, 6, x_181);
lean::cnstr_set(x_192, 7, x_183);
lean::cnstr_set(x_192, 8, x_185);
lean::cnstr_set(x_192, 9, x_187);
lean::cnstr_set(x_192, 10, x_189);
x_193 = l_Lean_Elaborator_updateParserConfig(x_1, x_2, x_192);
return x_193;
}
}
}
}
}
}
obj* l_Lean_Elaborator_end_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_end_elaborate(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_Elaborator_section_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("section");
return x_0;
}
}
obj* _init_l_Lean_Elaborator_section_elaborate___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string(".");
x_2 = lean::box(0);
x_3 = l_Lean_Name_toStringWithSep___main(x_1, x_2);
lean::dec(x_1);
x_5 = l_Lean_Parser_Substring_ofString(x_3);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_7, 0, x_0);
lean::cnstr_set(x_7, 1, x_5);
lean::cnstr_set(x_7, 2, x_2);
lean::cnstr_set(x_7, 3, x_6);
lean::cnstr_set(x_7, 4, x_6);
return x_7;
}
}
obj* l_Lean_Elaborator_section_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_11; obj* x_12; obj* x_15; 
x_7 = l_Lean_Parser_command_section_HasView;
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
lean::dec(x_7);
x_11 = lean::apply_1(x_8, x_0);
x_12 = lean::cnstr_get(x_11, 1);
lean::inc(x_12);
lean::dec(x_11);
x_15 = l_Lean_Elaborator_currentScope(x_1, x_2, x_3);
if (lean::obj_tag(x_12) == 0)
{
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_18; obj* x_19; 
x_16 = lean::cnstr_get(x_15, 0);
if (lean::is_exclusive(x_15)) {
 x_18 = x_15;
} else {
 lean::inc(x_16);
 lean::dec(x_15);
 x_18 = lean::box(0);
}
if (lean::is_scalar(x_18)) {
 x_19 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_19 = x_18;
}
lean::cnstr_set(x_19, 0, x_16);
return x_19;
}
else
{
obj* x_20; obj* x_23; 
x_20 = lean::cnstr_get(x_15, 0);
lean::inc(x_20);
lean::dec(x_15);
x_23 = l_Lean_Elaborator_section_elaborate___closed__2;
x_4 = x_23;
x_5 = x_20;
goto lbl_6;
}
}
else
{
if (lean::obj_tag(x_15) == 0)
{
obj* x_25; obj* x_27; obj* x_28; 
lean::dec(x_12);
x_25 = lean::cnstr_get(x_15, 0);
if (lean::is_exclusive(x_15)) {
 x_27 = x_15;
} else {
 lean::inc(x_25);
 lean::dec(x_15);
 x_27 = lean::box(0);
}
if (lean::is_scalar(x_27)) {
 x_28 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_28 = x_27;
}
lean::cnstr_set(x_28, 0, x_25);
return x_28;
}
else
{
obj* x_29; obj* x_32; 
x_29 = lean::cnstr_get(x_12, 0);
lean::inc(x_29);
lean::dec(x_12);
x_32 = lean::cnstr_get(x_15, 0);
lean::inc(x_32);
lean::dec(x_15);
x_4 = x_29;
x_5 = x_32;
goto lbl_6;
}
}
lbl_6:
{
obj* x_35; obj* x_37; obj* x_39; obj* x_40; obj* x_41; obj* x_43; obj* x_45; obj* x_47; obj* x_49; obj* x_51; obj* x_53; obj* x_55; obj* x_57; obj* x_59; obj* x_61; obj* x_64; obj* x_65; obj* x_66; obj* x_68; obj* x_69; obj* x_71; obj* x_73; obj* x_75; obj* x_77; obj* x_79; obj* x_82; obj* x_83; obj* x_84; obj* x_85; 
x_35 = lean::cnstr_get(x_5, 0);
x_37 = lean::cnstr_get(x_5, 1);
if (lean::is_exclusive(x_5)) {
 x_39 = x_5;
} else {
 lean::inc(x_35);
 lean::inc(x_37);
 lean::dec(x_5);
 x_39 = lean::box(0);
}
x_40 = l_Lean_Elaborator_mangleIdent(x_4);
x_41 = lean::cnstr_get(x_37, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_37, 1);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_37, 2);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_37, 3);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_35, 2);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_35, 3);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_35, 4);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_35, 5);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_35, 6);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_35, 7);
lean::inc(x_59);
x_61 = lean::cnstr_get(x_35, 8);
lean::inc(x_61);
lean::dec(x_35);
x_64 = l_Lean_Elaborator_section_elaborate___closed__1;
x_65 = lean::alloc_cnstr(0, 9, 0);
lean::cnstr_set(x_65, 0, x_64);
lean::cnstr_set(x_65, 1, x_40);
lean::cnstr_set(x_65, 2, x_49);
lean::cnstr_set(x_65, 3, x_51);
lean::cnstr_set(x_65, 4, x_53);
lean::cnstr_set(x_65, 5, x_55);
lean::cnstr_set(x_65, 6, x_57);
lean::cnstr_set(x_65, 7, x_59);
lean::cnstr_set(x_65, 8, x_61);
x_66 = lean::cnstr_get(x_37, 4);
lean::inc(x_66);
x_68 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_68, 0, x_65);
lean::cnstr_set(x_68, 1, x_66);
x_69 = lean::cnstr_get(x_37, 5);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_37, 6);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_37, 7);
lean::inc(x_73);
x_75 = lean::cnstr_get(x_37, 8);
lean::inc(x_75);
x_77 = lean::cnstr_get(x_37, 9);
lean::inc(x_77);
x_79 = lean::cnstr_get(x_37, 10);
lean::inc(x_79);
lean::dec(x_37);
x_82 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_82, 0, x_41);
lean::cnstr_set(x_82, 1, x_43);
lean::cnstr_set(x_82, 2, x_45);
lean::cnstr_set(x_82, 3, x_47);
lean::cnstr_set(x_82, 4, x_68);
lean::cnstr_set(x_82, 5, x_69);
lean::cnstr_set(x_82, 6, x_71);
lean::cnstr_set(x_82, 7, x_73);
lean::cnstr_set(x_82, 8, x_75);
lean::cnstr_set(x_82, 9, x_77);
lean::cnstr_set(x_82, 10, x_79);
x_83 = lean::box(0);
if (lean::is_scalar(x_39)) {
 x_84 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_84 = x_39;
}
lean::cnstr_set(x_84, 0, x_83);
lean::cnstr_set(x_84, 1, x_82);
x_85 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_85, 0, x_84);
return x_85;
}
}
}
obj* l_Lean_Elaborator_section_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_section_elaborate(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_Elaborator_namespace_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("namespace");
return x_0;
}
}
obj* l_Lean_Elaborator_namespace_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; 
lean::inc(x_2);
x_5 = l_Lean_Elaborator_currentScope(x_1, x_2, x_3);
if (lean::obj_tag(x_5) == 0)
{
obj* x_8; obj* x_10; obj* x_11; 
lean::dec(x_0);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 x_10 = x_5;
} else {
 lean::inc(x_8);
 lean::dec(x_5);
 x_10 = lean::box(0);
}
if (lean::is_scalar(x_10)) {
 x_11 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_11 = x_10;
}
lean::cnstr_set(x_11, 0, x_8);
return x_11;
}
else
{
obj* x_12; obj* x_15; obj* x_17; obj* x_20; 
x_12 = lean::cnstr_get(x_5, 0);
lean::inc(x_12);
lean::dec(x_5);
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_12, 1);
lean::inc(x_17);
lean::dec(x_12);
x_20 = l_Lean_Elaborator_getNamespace(x_1, x_2, x_17);
if (lean::obj_tag(x_20) == 0)
{
obj* x_23; obj* x_25; obj* x_26; 
lean::dec(x_0);
lean::dec(x_15);
x_23 = lean::cnstr_get(x_20, 0);
if (lean::is_exclusive(x_20)) {
 x_25 = x_20;
} else {
 lean::inc(x_23);
 lean::dec(x_20);
 x_25 = lean::box(0);
}
if (lean::is_scalar(x_25)) {
 x_26 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_26 = x_25;
}
lean::cnstr_set(x_26, 0, x_23);
return x_26;
}
else
{
obj* x_27; obj* x_29; obj* x_30; obj* x_32; obj* x_34; obj* x_35; obj* x_36; obj* x_39; obj* x_40; obj* x_43; obj* x_44; obj* x_46; obj* x_48; obj* x_50; obj* x_53; obj* x_55; obj* x_57; obj* x_58; obj* x_60; obj* x_63; obj* x_64; obj* x_65; obj* x_67; obj* x_69; obj* x_71; obj* x_73; obj* x_75; obj* x_76; obj* x_78; obj* x_80; obj* x_82; obj* x_84; obj* x_86; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
x_27 = lean::cnstr_get(x_20, 0);
if (lean::is_exclusive(x_20)) {
 x_29 = x_20;
} else {
 lean::inc(x_27);
 lean::dec(x_20);
 x_29 = lean::box(0);
}
x_30 = lean::cnstr_get(x_27, 0);
x_32 = lean::cnstr_get(x_27, 1);
if (lean::is_exclusive(x_27)) {
 x_34 = x_27;
} else {
 lean::inc(x_30);
 lean::inc(x_32);
 lean::dec(x_27);
 x_34 = lean::box(0);
}
x_35 = l_Lean_Parser_command_namespace_HasView;
x_36 = lean::cnstr_get(x_35, 0);
lean::inc(x_36);
lean::dec(x_35);
x_39 = lean::apply_1(x_36, x_0);
x_40 = lean::cnstr_get(x_39, 1);
lean::inc(x_40);
lean::dec(x_39);
x_43 = l_Lean_Elaborator_mangleIdent(x_40);
x_44 = lean::cnstr_get(x_15, 2);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_15, 3);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_15, 4);
lean::inc(x_48);
x_50 = lean::cnstr_get(x_15, 5);
lean::inc(x_50);
lean::inc(x_43);
x_53 = l_Lean_Name_append___main(x_30, x_43);
lean::dec(x_30);
x_55 = lean::cnstr_get(x_15, 6);
lean::inc(x_55);
x_57 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_57, 0, x_53);
lean::cnstr_set(x_57, 1, x_55);
x_58 = lean::cnstr_get(x_15, 7);
lean::inc(x_58);
x_60 = lean::cnstr_get(x_15, 8);
lean::inc(x_60);
lean::dec(x_15);
x_63 = l_Lean_Elaborator_namespace_elaborate___closed__1;
x_64 = lean::alloc_cnstr(0, 9, 0);
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_43);
lean::cnstr_set(x_64, 2, x_44);
lean::cnstr_set(x_64, 3, x_46);
lean::cnstr_set(x_64, 4, x_48);
lean::cnstr_set(x_64, 5, x_50);
lean::cnstr_set(x_64, 6, x_57);
lean::cnstr_set(x_64, 7, x_58);
lean::cnstr_set(x_64, 8, x_60);
x_65 = lean::cnstr_get(x_32, 0);
lean::inc(x_65);
x_67 = lean::cnstr_get(x_32, 1);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_32, 2);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_32, 3);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_32, 4);
lean::inc(x_73);
x_75 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_75, 0, x_64);
lean::cnstr_set(x_75, 1, x_73);
x_76 = lean::cnstr_get(x_32, 5);
lean::inc(x_76);
x_78 = lean::cnstr_get(x_32, 6);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_32, 7);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_32, 8);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_32, 9);
lean::inc(x_84);
x_86 = lean::cnstr_get(x_32, 10);
lean::inc(x_86);
lean::dec(x_32);
x_89 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_89, 0, x_65);
lean::cnstr_set(x_89, 1, x_67);
lean::cnstr_set(x_89, 2, x_69);
lean::cnstr_set(x_89, 3, x_71);
lean::cnstr_set(x_89, 4, x_75);
lean::cnstr_set(x_89, 5, x_76);
lean::cnstr_set(x_89, 6, x_78);
lean::cnstr_set(x_89, 7, x_80);
lean::cnstr_set(x_89, 8, x_82);
lean::cnstr_set(x_89, 9, x_84);
lean::cnstr_set(x_89, 10, x_86);
x_90 = lean::box(0);
if (lean::is_scalar(x_34)) {
 x_91 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_91 = x_34;
}
lean::cnstr_set(x_91, 0, x_90);
lean::cnstr_set(x_91, 1, x_89);
if (lean::is_scalar(x_29)) {
 x_92 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_92 = x_29;
}
lean::cnstr_set(x_92, 0, x_91);
return x_92;
}
}
}
}
obj* l_Lean_Elaborator_namespace_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_namespace_elaborate(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_Elaborator_eoi_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid end of input, expected 'end'");
return x_0;
}
}
obj* l_Lean_Elaborator_eoi_elaborate(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_7; obj* x_9; uint8 x_10; 
x_4 = lean::cnstr_get(x_3, 4);
lean::inc(x_4);
x_6 = lean::mk_nat_obj(0ul);
x_7 = l_List_lengthAux___main___rarg(x_4, x_6);
lean::dec(x_4);
x_9 = lean::mk_nat_obj(1ul);
x_10 = lean::nat_dec_lt(x_9, x_7);
lean::dec(x_7);
if (x_10 == 0)
{
obj* x_14; obj* x_15; obj* x_16; 
lean::dec(x_0);
lean::dec(x_2);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_3);
x_16 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_16, 0, x_15);
return x_16;
}
else
{
obj* x_17; obj* x_18; obj* x_19; 
x_17 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_17, 0, x_0);
x_18 = l_Lean_Elaborator_eoi_elaborate___closed__1;
x_19 = l_Lean_Expander_error___at_Lean_Elaborator_currentScope___spec__1___rarg(x_17, x_18, x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_17);
return x_19;
}
}
}
obj* l_Lean_Elaborator_eoi_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_eoi_elaborate(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_RBNode_ins___main___at_Lean_Elaborator_elaborators___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
uint8 x_3; obj* x_4; obj* x_5; 
x_3 = 0;
x_4 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
lean::cnstr_set_scalar(x_4, sizeof(void*)*4, x_3);
x_5 = x_4;
return x_5;
}
else
{
uint8 x_6; 
x_6 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*4);
if (x_6 == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; uint8 x_16; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
x_11 = lean::cnstr_get(x_0, 2);
x_13 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_15 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_0);
 x_15 = lean::box(0);
}
x_16 = l_Lean_Name_quickLt(x_1, x_9);
if (x_16 == 0)
{
uint8 x_17; 
x_17 = l_Lean_Name_quickLt(x_9, x_1);
if (x_17 == 0)
{
obj* x_20; obj* x_21; 
lean::dec(x_9);
lean::dec(x_11);
if (lean::is_scalar(x_15)) {
 x_20 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_20 = x_15;
}
lean::cnstr_set(x_20, 0, x_7);
lean::cnstr_set(x_20, 1, x_1);
lean::cnstr_set(x_20, 2, x_2);
lean::cnstr_set(x_20, 3, x_13);
lean::cnstr_set_scalar(x_20, sizeof(void*)*4, x_6);
x_21 = x_20;
return x_21;
}
else
{
obj* x_22; obj* x_23; obj* x_24; 
x_22 = l_RBNode_ins___main___at_Lean_Elaborator_elaborators___spec__1(x_13, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_23 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_23 = x_15;
}
lean::cnstr_set(x_23, 0, x_7);
lean::cnstr_set(x_23, 1, x_9);
lean::cnstr_set(x_23, 2, x_11);
lean::cnstr_set(x_23, 3, x_22);
lean::cnstr_set_scalar(x_23, sizeof(void*)*4, x_6);
x_24 = x_23;
return x_24;
}
}
else
{
obj* x_25; obj* x_26; obj* x_27; 
x_25 = l_RBNode_ins___main___at_Lean_Elaborator_elaborators___spec__1(x_7, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_26 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_26 = x_15;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_9);
lean::cnstr_set(x_26, 2, x_11);
lean::cnstr_set(x_26, 3, x_13);
lean::cnstr_set_scalar(x_26, sizeof(void*)*4, x_6);
x_27 = x_26;
return x_27;
}
}
else
{
obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; uint8 x_37; 
x_28 = lean::cnstr_get(x_0, 0);
x_30 = lean::cnstr_get(x_0, 1);
x_32 = lean::cnstr_get(x_0, 2);
x_34 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_36 = x_0;
} else {
 lean::inc(x_28);
 lean::inc(x_30);
 lean::inc(x_32);
 lean::inc(x_34);
 lean::dec(x_0);
 x_36 = lean::box(0);
}
x_37 = l_Lean_Name_quickLt(x_1, x_30);
if (x_37 == 0)
{
uint8 x_38; 
x_38 = l_Lean_Name_quickLt(x_30, x_1);
if (x_38 == 0)
{
obj* x_41; obj* x_42; 
lean::dec(x_32);
lean::dec(x_30);
if (lean::is_scalar(x_36)) {
 x_41 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_41 = x_36;
}
lean::cnstr_set(x_41, 0, x_28);
lean::cnstr_set(x_41, 1, x_1);
lean::cnstr_set(x_41, 2, x_2);
lean::cnstr_set(x_41, 3, x_34);
lean::cnstr_set_scalar(x_41, sizeof(void*)*4, x_6);
x_42 = x_41;
return x_42;
}
else
{
uint8 x_43; 
x_43 = l_RBNode_isRed___main___rarg(x_34);
if (x_43 == 0)
{
obj* x_44; obj* x_45; obj* x_46; 
x_44 = l_RBNode_ins___main___at_Lean_Elaborator_elaborators___spec__1(x_34, x_1, x_2);
if (lean::is_scalar(x_36)) {
 x_45 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_45 = x_36;
}
lean::cnstr_set(x_45, 0, x_28);
lean::cnstr_set(x_45, 1, x_30);
lean::cnstr_set(x_45, 2, x_32);
lean::cnstr_set(x_45, 3, x_44);
lean::cnstr_set_scalar(x_45, sizeof(void*)*4, x_6);
x_46 = x_45;
return x_46;
}
else
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_47 = lean::box(0);
if (lean::is_scalar(x_36)) {
 x_48 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_48 = x_36;
}
lean::cnstr_set(x_48, 0, x_28);
lean::cnstr_set(x_48, 1, x_30);
lean::cnstr_set(x_48, 2, x_32);
lean::cnstr_set(x_48, 3, x_47);
lean::cnstr_set_scalar(x_48, sizeof(void*)*4, x_6);
x_49 = x_48;
x_50 = l_RBNode_ins___main___at_Lean_Elaborator_elaborators___spec__1(x_34, x_1, x_2);
x_51 = l_RBNode_balance2___main___rarg(x_49, x_50);
return x_51;
}
}
}
else
{
uint8 x_52; 
x_52 = l_RBNode_isRed___main___rarg(x_28);
if (x_52 == 0)
{
obj* x_53; obj* x_54; obj* x_55; 
x_53 = l_RBNode_ins___main___at_Lean_Elaborator_elaborators___spec__1(x_28, x_1, x_2);
if (lean::is_scalar(x_36)) {
 x_54 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_54 = x_36;
}
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_30);
lean::cnstr_set(x_54, 2, x_32);
lean::cnstr_set(x_54, 3, x_34);
lean::cnstr_set_scalar(x_54, sizeof(void*)*4, x_6);
x_55 = x_54;
return x_55;
}
else
{
obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_56 = lean::box(0);
if (lean::is_scalar(x_36)) {
 x_57 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_57 = x_36;
}
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_30);
lean::cnstr_set(x_57, 2, x_32);
lean::cnstr_set(x_57, 3, x_34);
lean::cnstr_set_scalar(x_57, sizeof(void*)*4, x_6);
x_58 = x_57;
x_59 = l_RBNode_ins___main___at_Lean_Elaborator_elaborators___spec__1(x_28, x_1, x_2);
x_60 = l_RBNode_balance1___main___rarg(x_58, x_59);
return x_60;
}
}
}
}
}
}
obj* l_List_foldl___main___at_Lean_Elaborator_elaborators___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_9; uint8 x_12; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 1);
lean::inc(x_9);
lean::dec(x_2);
x_12 = l_RBNode_isRed___main___rarg(x_0);
if (x_12 == 0)
{
obj* x_13; 
x_13 = l_RBNode_ins___main___at_Lean_Elaborator_elaborators___spec__1(x_0, x_7, x_9);
x_0 = x_13;
x_1 = x_4;
goto _start;
}
else
{
obj* x_15; obj* x_16; 
x_15 = l_RBNode_ins___main___at_Lean_Elaborator_elaborators___spec__1(x_0, x_7, x_9);
x_16 = l_RBNode_setBlack___main___rarg(x_15);
x_0 = x_16;
x_1 = x_4;
goto _start;
}
}
}
}
obj* _init_l_Lean_Elaborator_elaborators() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
x_0 = l_Lean_Parser_Module_header;
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_Module_header_elaborate___boxed), 4, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = l_Lean_Parser_command_notation;
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_notation_elaborate___boxed), 4, 0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_4);
x_6 = l_Lean_Parser_command_reserveNotation;
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_reserveNotation_elaborate___boxed), 4, 0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
x_9 = l_Lean_Parser_command_universe;
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_universe_elaborate___boxed), 4, 0);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
x_12 = l_Lean_Parser_noKind;
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_noKind_elaborate), 4, 0);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
x_15 = l_Lean_Parser_command_end;
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_end_elaborate___boxed), 4, 0);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
x_18 = l_Lean_Parser_command_section;
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_section_elaborate___boxed), 4, 0);
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_18);
lean::cnstr_set(x_20, 1, x_19);
x_21 = l_Lean_Parser_command_namespace;
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_namespace_elaborate___boxed), 4, 0);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_22);
x_24 = l_Lean_Parser_command_variables;
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_variables_elaborate___boxed), 4, 0);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_24);
lean::cnstr_set(x_26, 1, x_25);
x_27 = l_Lean_Parser_command_include;
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_include_elaborate___boxed), 4, 0);
x_29 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_29, 0, x_27);
lean::cnstr_set(x_29, 1, x_28);
x_30 = l_Lean_Parser_command_Declaration;
x_31 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_Declaration_elaborate), 4, 0);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_30);
lean::cnstr_set(x_32, 1, x_31);
x_33 = l_Lean_Parser_command_attribute;
x_34 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_attribute_elaborate___boxed), 4, 0);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_33);
lean::cnstr_set(x_35, 1, x_34);
x_36 = l_Lean_Parser_command_open;
x_37 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_open_elaborate___boxed), 4, 0);
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_36);
lean::cnstr_set(x_38, 1, x_37);
x_39 = l_Lean_Parser_command_export;
x_40 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_export_elaborate___boxed), 4, 0);
x_41 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_41, 0, x_39);
lean::cnstr_set(x_41, 1, x_40);
x_42 = l_Lean_Parser_command_check;
x_43 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_check_elaborate___boxed), 4, 0);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_42);
lean::cnstr_set(x_44, 1, x_43);
x_45 = l_Lean_Parser_command_initQuot;
x_46 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_initQuot_elaborate___boxed), 4, 0);
x_47 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_47, 0, x_45);
lean::cnstr_set(x_47, 1, x_46);
x_48 = l_Lean_Parser_command_setOption;
x_49 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_setOption_elaborate___boxed), 4, 0);
x_50 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_50, 0, x_48);
lean::cnstr_set(x_50, 1, x_49);
x_51 = l_Lean_Parser_Module_eoi;
x_52 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_eoi_elaborate___boxed), 4, 0);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_51);
lean::cnstr_set(x_53, 1, x_52);
x_54 = lean::box(0);
x_55 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_55, 0, x_53);
lean::cnstr_set(x_55, 1, x_54);
x_56 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_56, 0, x_50);
lean::cnstr_set(x_56, 1, x_55);
x_57 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_57, 0, x_47);
lean::cnstr_set(x_57, 1, x_56);
x_58 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_58, 0, x_44);
lean::cnstr_set(x_58, 1, x_57);
x_59 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_59, 0, x_41);
lean::cnstr_set(x_59, 1, x_58);
x_60 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_60, 0, x_38);
lean::cnstr_set(x_60, 1, x_59);
x_61 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_61, 0, x_35);
lean::cnstr_set(x_61, 1, x_60);
x_62 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_62, 0, x_32);
lean::cnstr_set(x_62, 1, x_61);
x_63 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_63, 0, x_29);
lean::cnstr_set(x_63, 1, x_62);
x_64 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_64, 0, x_26);
lean::cnstr_set(x_64, 1, x_63);
x_65 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_65, 0, x_23);
lean::cnstr_set(x_65, 1, x_64);
x_66 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_66, 0, x_20);
lean::cnstr_set(x_66, 1, x_65);
x_67 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_67, 0, x_17);
lean::cnstr_set(x_67, 1, x_66);
x_68 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_68, 0, x_14);
lean::cnstr_set(x_68, 1, x_67);
x_69 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_69, 0, x_11);
lean::cnstr_set(x_69, 1, x_68);
x_70 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_70, 0, x_8);
lean::cnstr_set(x_70, 1, x_69);
x_71 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_71, 0, x_5);
lean::cnstr_set(x_71, 1, x_70);
x_72 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_72, 0, x_2);
lean::cnstr_set(x_72, 1, x_71);
x_73 = lean::box(0);
x_74 = l_List_foldl___main___at_Lean_Elaborator_elaborators___spec__2(x_73, x_72);
return x_74;
}
}
uint8 l_List_decidableMem___main___at_Lean_Elaborator_isOpenNamespace___main___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_2; 
x_2 = 0;
return x_2;
}
else
{
obj* x_3; obj* x_4; uint8 x_5; 
x_3 = lean::cnstr_get(x_1, 0);
x_4 = lean::cnstr_get(x_1, 1);
x_5 = lean_name_dec_eq(x_0, x_3);
if (x_5 == 0)
{
uint8 x_6; 
x_6 = l_List_decidableMem___main___at_Lean_Elaborator_isOpenNamespace___main___spec__1(x_0, x_4);
if (x_6 == 0)
{
uint8 x_7; 
x_7 = 0;
return x_7;
}
else
{
uint8 x_8; 
x_8 = 1;
return x_8;
}
}
else
{
uint8 x_9; 
x_9 = 1;
return x_9;
}
}
}
}
uint8 l_List_foldr___main___at_Lean_Elaborator_isOpenNamespace___main___spec__2(obj* x_0, uint8 x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
return x_1;
}
else
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; uint8 x_7; 
x_3 = lean::cnstr_get(x_2, 0);
x_4 = lean::cnstr_get(x_2, 1);
x_5 = lean::cnstr_get(x_3, 0);
x_6 = lean::cnstr_get(x_5, 2);
x_7 = lean_name_dec_eq(x_6, x_0);
if (x_7 == 0)
{
x_2 = x_4;
goto _start;
}
else
{
uint8 x_9; 
x_9 = 1;
return x_9;
}
}
}
}
uint8 l_Lean_Elaborator_isOpenNamespace___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; uint8 x_3; 
x_2 = lean::box(0);
x_3 = lean_name_dec_eq(x_1, x_2);
if (x_3 == 0)
{
obj* x_4; uint8 x_5; 
x_4 = lean::cnstr_get(x_0, 6);
x_5 = l_List_decidableMem___main___at_Lean_Elaborator_isOpenNamespace___main___spec__1(x_1, x_4);
if (x_5 == 0)
{
obj* x_6; uint8 x_7; uint8 x_8; 
x_6 = lean::cnstr_get(x_0, 7);
x_7 = 0;
x_8 = l_List_foldr___main___at_Lean_Elaborator_isOpenNamespace___main___spec__2(x_1, x_7, x_6);
if (x_8 == 0)
{
return x_7;
}
else
{
uint8 x_9; 
x_9 = 1;
return x_9;
}
}
else
{
uint8 x_10; 
x_10 = 1;
return x_10;
}
}
else
{
uint8 x_11; 
x_11 = 1;
return x_11;
}
}
}
obj* l_List_decidableMem___main___at_Lean_Elaborator_isOpenNamespace___main___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_List_decidableMem___main___at_Lean_Elaborator_isOpenNamespace___main___spec__1(x_0, x_1);
x_3 = lean::box(x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
obj* l_List_foldr___main___at_Lean_Elaborator_isOpenNamespace___main___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; obj* x_5; 
x_3 = lean::unbox(x_1);
x_4 = l_List_foldr___main___at_Lean_Elaborator_isOpenNamespace___main___spec__2(x_0, x_3, x_2);
x_5 = lean::box(x_4);
lean::dec(x_0);
lean::dec(x_2);
return x_5;
}
}
obj* l_Lean_Elaborator_isOpenNamespace___main___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_Lean_Elaborator_isOpenNamespace___main(x_0, x_1);
x_3 = lean::box(x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
uint8 l_Lean_Elaborator_isOpenNamespace(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; 
x_2 = l_Lean_Elaborator_isOpenNamespace___main(x_0, x_1);
return x_2;
}
}
obj* l_Lean_Elaborator_isOpenNamespace___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_Lean_Elaborator_isOpenNamespace(x_0, x_1);
x_3 = lean::box(x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
uint8 l_List_foldr___main___at_Lean_Elaborator_matchOpenSpec___spec__1(obj* x_0, uint8 x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
return x_1;
}
else
{
obj* x_3; obj* x_4; obj* x_5; uint8 x_6; 
x_3 = lean::cnstr_get(x_2, 0);
x_4 = lean::cnstr_get(x_2, 1);
x_5 = lean::cnstr_get(x_3, 2);
x_6 = lean_name_dec_eq(x_0, x_5);
if (x_6 == 0)
{
x_2 = x_4;
goto _start;
}
else
{
uint8 x_8; 
x_8 = 1;
return x_8;
}
}
}
}
obj* l_Lean_Elaborator_matchOpenSpec(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::cnstr_get(x_1, 2);
lean::inc(x_2);
if (lean::obj_tag(x_2) == 0)
{
obj* x_4; obj* x_7; obj* x_10; obj* x_12; 
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean::cnstr_get(x_4, 2);
lean::inc(x_7);
lean::dec(x_4);
x_10 = l_Lean_Name_append___main(x_7, x_0);
lean::dec(x_7);
x_12 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_12, 0, x_10);
return x_12;
}
else
{
obj* x_13; obj* x_15; obj* x_16; obj* x_18; uint8 x_21; 
x_13 = lean::cnstr_get(x_2, 0);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_set(x_2, 0, lean::box(0));
 x_15 = x_2;
} else {
 lean::inc(x_13);
 lean::dec(x_2);
 x_15 = lean::box(0);
}
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_16, 2);
lean::inc(x_18);
lean::dec(x_16);
x_21 = lean_name_dec_eq(x_0, x_18);
lean::dec(x_18);
if (x_21 == 0)
{
obj* x_23; uint8 x_26; uint8 x_27; 
x_23 = lean::cnstr_get(x_13, 2);
lean::inc(x_23);
lean::dec(x_13);
x_26 = 0;
x_27 = l_List_foldr___main___at_Lean_Elaborator_matchOpenSpec___spec__1(x_0, x_26, x_23);
lean::dec(x_23);
if (x_27 == 0)
{
obj* x_32; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_15);
x_32 = lean::box(0);
return x_32;
}
else
{
obj* x_33; obj* x_36; obj* x_39; obj* x_41; 
x_33 = lean::cnstr_get(x_1, 0);
lean::inc(x_33);
lean::dec(x_1);
x_36 = lean::cnstr_get(x_33, 2);
lean::inc(x_36);
lean::dec(x_33);
x_39 = l_Lean_Name_append___main(x_36, x_0);
lean::dec(x_36);
if (lean::is_scalar(x_15)) {
 x_41 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_41 = x_15;
}
lean::cnstr_set(x_41, 0, x_39);
return x_41;
}
}
else
{
obj* x_43; obj* x_46; obj* x_49; obj* x_51; 
lean::dec(x_13);
x_43 = lean::cnstr_get(x_1, 0);
lean::inc(x_43);
lean::dec(x_1);
x_46 = lean::cnstr_get(x_43, 2);
lean::inc(x_46);
lean::dec(x_43);
x_49 = l_Lean_Name_append___main(x_46, x_0);
lean::dec(x_46);
if (lean::is_scalar(x_15)) {
 x_51 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_51 = x_15;
}
lean::cnstr_set(x_51, 0, x_49);
return x_51;
}
}
}
}
obj* l_List_foldr___main___at_Lean_Elaborator_matchOpenSpec___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; obj* x_5; 
x_3 = lean::unbox(x_1);
x_4 = l_List_foldr___main___at_Lean_Elaborator_matchOpenSpec___spec__1(x_0, x_3, x_2);
x_5 = lean::box(x_4);
lean::dec(x_0);
lean::dec(x_2);
return x_5;
}
}
obj* l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_5; 
lean::dec(x_0);
x_5 = l_List_reverse___rarg(x_3);
return x_5;
}
else
{
obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_13; uint8 x_14; 
x_6 = lean::cnstr_get(x_2, 0);
x_8 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_set(x_2, 0, lean::box(0));
 lean::cnstr_set(x_2, 1, lean::box(0));
 x_10 = x_2;
} else {
 lean::inc(x_6);
 lean::inc(x_8);
 lean::dec(x_2);
 x_10 = lean::box(0);
}
x_11 = lean::cnstr_get(x_1, 8);
lean::inc(x_0);
x_13 = l_Lean_Name_append___main(x_6, x_0);
x_14 = lean_environment_contains(x_11, x_13);
lean::dec(x_13);
if (x_14 == 0)
{
lean::dec(x_6);
lean::dec(x_10);
x_2 = x_8;
goto _start;
}
else
{
obj* x_19; 
if (lean::is_scalar(x_10)) {
 x_19 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_19 = x_10;
}
lean::cnstr_set(x_19, 0, x_6);
lean::cnstr_set(x_19, 1, x_3);
x_2 = x_8;
x_3 = x_19;
goto _start;
}
}
}
}
obj* l_List_filterMap___main___at_Lean_Elaborator_resolveContext___main___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_10; 
x_4 = lean::cnstr_get(x_1, 0);
x_6 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_8 = x_1;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
lean::inc(x_0);
x_10 = l_Lean_Elaborator_matchOpenSpec(x_0, x_4);
if (lean::obj_tag(x_10) == 0)
{
lean::dec(x_8);
x_1 = x_6;
goto _start;
}
else
{
obj* x_13; obj* x_16; obj* x_17; 
x_13 = lean::cnstr_get(x_10, 0);
lean::inc(x_13);
lean::dec(x_10);
x_16 = l_List_filterMap___main___at_Lean_Elaborator_resolveContext___main___spec__2(x_0, x_6);
if (lean::is_scalar(x_8)) {
 x_17 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_17 = x_8;
}
lean::cnstr_set(x_17, 0, x_13);
lean::cnstr_set(x_17, 1, x_16);
return x_17;
}
}
}
}
obj* l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; uint8 x_9; 
x_4 = lean::cnstr_get(x_1, 0);
x_6 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_8 = x_1;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
x_9 = lean_environment_contains(x_0, x_4);
if (x_9 == 0)
{
lean::dec(x_4);
lean::dec(x_8);
x_1 = x_6;
goto _start;
}
else
{
obj* x_13; 
if (lean::is_scalar(x_8)) {
 x_13 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_13 = x_8;
}
lean::cnstr_set(x_13, 0, x_4);
lean::cnstr_set(x_13, 1, x_2);
x_1 = x_6;
x_2 = x_13;
goto _start;
}
}
}
}
obj* l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; uint8 x_11; 
x_4 = lean::cnstr_get(x_1, 0);
x_6 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_8 = x_1;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
x_11 = l_Lean_Elaborator_isOpenNamespace___main(x_0, x_9);
lean::dec(x_9);
if (x_11 == 0)
{
lean::dec(x_4);
lean::dec(x_8);
x_1 = x_6;
goto _start;
}
else
{
obj* x_16; 
if (lean::is_scalar(x_8)) {
 x_16 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_16 = x_8;
}
lean::cnstr_set(x_16, 0, x_4);
lean::cnstr_set(x_16, 1, x_2);
x_1 = x_6;
x_2 = x_16;
goto _start;
}
}
}
}
obj* l_List_filterMap___main___at_Lean_Elaborator_resolveContext___main___spec__5(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_13; 
x_4 = lean::cnstr_get(x_1, 0);
x_6 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_8 = x_1;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
x_9 = lean::cnstr_get(x_4, 1);
lean::inc(x_9);
lean::dec(x_4);
lean::inc(x_0);
x_13 = l_Lean_Elaborator_matchOpenSpec(x_0, x_9);
if (lean::obj_tag(x_13) == 0)
{
lean::dec(x_8);
x_1 = x_6;
goto _start;
}
else
{
obj* x_16; obj* x_19; obj* x_20; 
x_16 = lean::cnstr_get(x_13, 0);
lean::inc(x_16);
lean::dec(x_13);
x_19 = l_List_filterMap___main___at_Lean_Elaborator_resolveContext___main___spec__5(x_0, x_6);
if (lean::is_scalar(x_8)) {
 x_20 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_20 = x_8;
}
lean::cnstr_set(x_20, 0, x_16);
lean::cnstr_set(x_20, 1, x_19);
return x_20;
}
}
}
}
obj* l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__6(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; uint8 x_9; 
x_4 = lean::cnstr_get(x_1, 0);
x_6 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_8 = x_1;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
x_9 = lean_environment_contains(x_0, x_4);
if (x_9 == 0)
{
lean::dec(x_4);
lean::dec(x_8);
x_1 = x_6;
goto _start;
}
else
{
obj* x_13; 
if (lean::is_scalar(x_8)) {
 x_13 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_13 = x_8;
}
lean::cnstr_set(x_13, 0, x_4);
lean::cnstr_set(x_13, 1, x_2);
x_1 = x_6;
x_2 = x_13;
goto _start;
}
}
}
}
obj* _init_l_Lean_Elaborator_resolveContext___main___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_root_");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_Lean_Elaborator_resolveContext___main(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; 
lean::inc(x_3);
x_5 = l_Lean_Elaborator_currentScope(x_1, x_2, x_3);
if (lean::obj_tag(x_5) == 0)
{
obj* x_8; obj* x_10; obj* x_11; 
lean::dec(x_3);
lean::dec(x_0);
x_8 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 x_10 = x_5;
} else {
 lean::inc(x_8);
 lean::dec(x_5);
 x_10 = lean::box(0);
}
if (lean::is_scalar(x_10)) {
 x_11 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_11 = x_10;
}
lean::cnstr_set(x_11, 0, x_8);
return x_11;
}
else
{
obj* x_12; obj* x_14; obj* x_15; obj* x_17; obj* x_19; obj* x_20; obj* x_22; obj* x_24; 
x_12 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_set(x_5, 0, lean::box(0));
 x_14 = x_5;
} else {
 lean::inc(x_12);
 lean::dec(x_5);
 x_14 = lean::box(0);
}
x_15 = lean::cnstr_get(x_12, 0);
x_17 = lean::cnstr_get(x_12, 1);
if (lean::is_exclusive(x_12)) {
 lean::cnstr_set(x_12, 0, lean::box(0));
 lean::cnstr_set(x_12, 1, lean::box(0));
 x_19 = x_12;
} else {
 lean::inc(x_15);
 lean::inc(x_17);
 lean::dec(x_12);
 x_19 = lean::box(0);
}
x_20 = lean::cnstr_get(x_15, 4);
lean::inc(x_20);
x_22 = l_Lean_Elaborator_toLevel___main___closed__4;
lean::inc(x_0);
x_24 = l_Lean_Elaborator_OrderedRBMap_find___rarg(x_22, x_20, x_0);
if (lean::obj_tag(x_24) == 0)
{
obj* x_25; obj* x_27; obj* x_29; 
x_25 = lean::cnstr_get(x_15, 6);
lean::inc(x_25);
x_27 = lean::box(0);
lean::inc(x_0);
x_29 = l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__1(x_0, x_3, x_25, x_27);
if (lean::obj_tag(x_29) == 0)
{
obj* x_30; obj* x_31; obj* x_33; obj* x_34; uint8 x_36; obj* x_37; obj* x_40; obj* x_41; obj* x_42; obj* x_45; obj* x_47; obj* x_48; 
x_30 = l_Lean_Elaborator_resolveContext___main___closed__1;
x_31 = lean::box(0);
lean::inc(x_0);
x_33 = l_Lean_Name_replacePrefix___main(x_0, x_30, x_31);
x_34 = lean::cnstr_get(x_3, 8);
lean::inc(x_34);
x_36 = lean_environment_contains(x_34, x_33);
x_37 = lean::cnstr_get(x_15, 7);
lean::inc(x_37);
lean::inc(x_0);
x_40 = l_List_filterMap___main___at_Lean_Elaborator_resolveContext___main___spec__2(x_0, x_37);
x_41 = l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__3(x_34, x_40, x_27);
x_42 = lean::cnstr_get(x_3, 3);
lean::inc(x_42);
lean::dec(x_3);
x_45 = l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__4(x_15, x_42, x_27);
lean::dec(x_15);
x_47 = l_List_filterMap___main___at_Lean_Elaborator_resolveContext___main___spec__5(x_0, x_45);
x_48 = l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__6(x_34, x_47, x_27);
lean::dec(x_34);
if (x_36 == 0)
{
obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
lean::dec(x_33);
x_51 = l_List_append___rarg(x_29, x_41);
x_52 = l_List_append___rarg(x_51, x_48);
if (lean::is_scalar(x_19)) {
 x_53 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_53 = x_19;
}
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_17);
if (lean::is_scalar(x_14)) {
 x_54 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_54 = x_14;
}
lean::cnstr_set(x_54, 0, x_53);
return x_54;
}
else
{
obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
x_55 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_55, 0, x_33);
lean::cnstr_set(x_55, 1, x_29);
x_56 = l_List_append___rarg(x_55, x_41);
x_57 = l_List_append___rarg(x_56, x_48);
if (lean::is_scalar(x_19)) {
 x_58 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_58 = x_19;
}
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_17);
if (lean::is_scalar(x_14)) {
 x_59 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_59 = x_14;
}
lean::cnstr_set(x_59, 0, x_58);
return x_59;
}
}
else
{
obj* x_62; obj* x_64; obj* x_65; obj* x_67; obj* x_68; obj* x_69; 
lean::dec(x_3);
lean::dec(x_15);
x_62 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 lean::cnstr_release(x_29, 1);
 x_64 = x_29;
} else {
 lean::inc(x_62);
 lean::dec(x_29);
 x_64 = lean::box(0);
}
x_65 = l_Lean_Name_append___main(x_62, x_0);
lean::dec(x_62);
if (lean::is_scalar(x_64)) {
 x_67 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_67 = x_64;
}
lean::cnstr_set(x_67, 0, x_65);
lean::cnstr_set(x_67, 1, x_27);
if (lean::is_scalar(x_19)) {
 x_68 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_68 = x_19;
}
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_17);
if (lean::is_scalar(x_14)) {
 x_69 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_69 = x_14;
}
lean::cnstr_set(x_69, 0, x_68);
return x_69;
}
}
else
{
obj* x_74; obj* x_77; obj* x_79; obj* x_80; obj* x_83; obj* x_84; obj* x_85; obj* x_86; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_15);
lean::dec(x_19);
x_74 = lean::cnstr_get(x_24, 0);
lean::inc(x_74);
lean::dec(x_24);
x_77 = lean::cnstr_get(x_74, 1);
if (lean::is_exclusive(x_74)) {
 lean::cnstr_release(x_74, 0);
 x_79 = x_74;
} else {
 lean::inc(x_77);
 lean::dec(x_74);
 x_79 = lean::box(0);
}
x_80 = lean::cnstr_get(x_77, 0);
lean::inc(x_80);
lean::dec(x_77);
x_83 = lean::box(0);
x_84 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_84, 0, x_80);
lean::cnstr_set(x_84, 1, x_83);
if (lean::is_scalar(x_79)) {
 x_85 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_85 = x_79;
}
lean::cnstr_set(x_85, 0, x_84);
lean::cnstr_set(x_85, 1, x_17);
if (lean::is_scalar(x_14)) {
 x_86 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_86 = x_14;
}
lean::cnstr_set(x_86, 0, x_85);
return x_86;
}
}
}
}
obj* l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__1(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__3___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__3(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__4___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__4(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__6___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_List_filterAux___main___at_Lean_Elaborator_resolveContext___main___spec__6(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_Lean_Elaborator_resolveContext___main___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_resolveContext___main(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Elaborator_resolveContext(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_resolveContext___main(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l_Lean_Elaborator_resolveContext___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_resolveContext(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_preresolve___main___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
x_10 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_12 = x_0;
} else {
 lean::inc(x_8);
 lean::inc(x_10);
 lean::dec(x_0);
 x_12 = lean::box(0);
}
lean::inc(x_2);
x_14 = l_Lean_Elaborator_preresolve___main(x_8, x_1, x_2, x_3);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_10);
lean::dec(x_12);
lean::dec(x_2);
x_18 = lean::cnstr_get(x_14, 0);
if (lean::is_exclusive(x_14)) {
 x_20 = x_14;
} else {
 lean::inc(x_18);
 lean::dec(x_14);
 x_20 = lean::box(0);
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_25; obj* x_27; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
lean::dec(x_14);
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
lean::dec(x_22);
x_30 = l_List_mmap___main___at_Lean_Elaborator_preresolve___main___spec__1(x_10, x_1, x_2, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_33; obj* x_35; obj* x_36; 
lean::dec(x_12);
lean::dec(x_25);
x_33 = lean::cnstr_get(x_30, 0);
if (lean::is_exclusive(x_30)) {
 x_35 = x_30;
} else {
 lean::inc(x_33);
 lean::dec(x_30);
 x_35 = lean::box(0);
}
if (lean::is_scalar(x_35)) {
 x_36 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_36 = x_35;
}
lean::cnstr_set(x_36, 0, x_33);
return x_36;
}
else
{
obj* x_37; obj* x_39; obj* x_40; obj* x_42; obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
x_37 = lean::cnstr_get(x_30, 0);
if (lean::is_exclusive(x_30)) {
 x_39 = x_30;
} else {
 lean::inc(x_37);
 lean::dec(x_30);
 x_39 = lean::box(0);
}
x_40 = lean::cnstr_get(x_37, 0);
x_42 = lean::cnstr_get(x_37, 1);
if (lean::is_exclusive(x_37)) {
 x_44 = x_37;
} else {
 lean::inc(x_40);
 lean::inc(x_42);
 lean::dec(x_37);
 x_44 = lean::box(0);
}
if (lean::is_scalar(x_12)) {
 x_45 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_45 = x_12;
}
lean::cnstr_set(x_45, 0, x_25);
lean::cnstr_set(x_45, 1, x_40);
if (lean::is_scalar(x_44)) {
 x_46 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_46 = x_44;
}
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_42);
if (lean::is_scalar(x_39)) {
 x_47 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_47 = x_39;
}
lean::cnstr_set(x_47, 0, x_46);
return x_47;
}
}
}
}
}
obj* l_Lean_Elaborator_preresolve___main(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 1:
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; 
x_4 = lean::cnstr_get(x_0, 0);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 x_6 = x_0;
} else {
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
lean::inc(x_4);
x_8 = l_Lean_Elaborator_mangleIdent(x_4);
x_9 = l_Lean_Elaborator_resolveContext___main(x_8, x_1, x_2, x_3);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; obj* x_14; obj* x_15; 
lean::dec(x_6);
lean::dec(x_4);
x_12 = lean::cnstr_get(x_9, 0);
if (lean::is_exclusive(x_9)) {
 x_14 = x_9;
} else {
 lean::inc(x_12);
 lean::dec(x_9);
 x_14 = lean::box(0);
}
if (lean::is_scalar(x_14)) {
 x_15 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_15 = x_14;
}
lean::cnstr_set(x_15, 0, x_12);
return x_15;
}
else
{
obj* x_16; obj* x_18; obj* x_19; obj* x_21; obj* x_23; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_32; obj* x_33; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
x_16 = lean::cnstr_get(x_9, 0);
if (lean::is_exclusive(x_9)) {
 x_18 = x_9;
} else {
 lean::inc(x_16);
 lean::dec(x_9);
 x_18 = lean::box(0);
}
x_19 = lean::cnstr_get(x_16, 0);
x_21 = lean::cnstr_get(x_16, 1);
if (lean::is_exclusive(x_16)) {
 x_23 = x_16;
} else {
 lean::inc(x_19);
 lean::inc(x_21);
 lean::dec(x_16);
 x_23 = lean::box(0);
}
x_24 = lean::cnstr_get(x_4, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_4, 1);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_4, 2);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_4, 3);
lean::inc(x_30);
x_32 = l_List_append___rarg(x_19, x_30);
x_33 = lean::cnstr_get(x_4, 4);
lean::inc(x_33);
lean::dec(x_4);
x_36 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_36, 0, x_24);
lean::cnstr_set(x_36, 1, x_26);
lean::cnstr_set(x_36, 2, x_28);
lean::cnstr_set(x_36, 3, x_32);
lean::cnstr_set(x_36, 4, x_33);
if (lean::is_scalar(x_6)) {
 x_37 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_37 = x_6;
}
lean::cnstr_set(x_37, 0, x_36);
if (lean::is_scalar(x_23)) {
 x_38 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_38 = x_23;
}
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_38, 1, x_21);
if (lean::is_scalar(x_18)) {
 x_39 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_39 = x_18;
}
lean::cnstr_set(x_39, 0, x_38);
return x_39;
}
}
case 2:
{
obj* x_40; obj* x_42; obj* x_43; obj* x_45; 
x_40 = lean::cnstr_get(x_0, 0);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 x_42 = x_0;
} else {
 lean::inc(x_40);
 lean::dec(x_0);
 x_42 = lean::box(0);
}
x_43 = lean::cnstr_get(x_40, 1);
lean::inc(x_43);
x_45 = l_List_mmap___main___at_Lean_Elaborator_preresolve___main___spec__1(x_43, x_1, x_2, x_3);
if (lean::obj_tag(x_45) == 0)
{
obj* x_48; obj* x_50; obj* x_51; 
lean::dec(x_40);
lean::dec(x_42);
x_48 = lean::cnstr_get(x_45, 0);
if (lean::is_exclusive(x_45)) {
 x_50 = x_45;
} else {
 lean::inc(x_48);
 lean::dec(x_45);
 x_50 = lean::box(0);
}
if (lean::is_scalar(x_50)) {
 x_51 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_51 = x_50;
}
lean::cnstr_set(x_51, 0, x_48);
return x_51;
}
else
{
obj* x_52; obj* x_54; obj* x_55; obj* x_57; obj* x_59; obj* x_60; obj* x_62; obj* x_65; obj* x_66; obj* x_67; obj* x_68; 
x_52 = lean::cnstr_get(x_45, 0);
if (lean::is_exclusive(x_45)) {
 x_54 = x_45;
} else {
 lean::inc(x_52);
 lean::dec(x_45);
 x_54 = lean::box(0);
}
x_55 = lean::cnstr_get(x_52, 0);
x_57 = lean::cnstr_get(x_52, 1);
if (lean::is_exclusive(x_52)) {
 x_59 = x_52;
} else {
 lean::inc(x_55);
 lean::inc(x_57);
 lean::dec(x_52);
 x_59 = lean::box(0);
}
x_60 = lean::cnstr_get(x_40, 0);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_40, 2);
lean::inc(x_62);
lean::dec(x_40);
x_65 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_65, 0, x_60);
lean::cnstr_set(x_65, 1, x_55);
lean::cnstr_set(x_65, 2, x_62);
if (lean::is_scalar(x_42)) {
 x_66 = lean::alloc_cnstr(2, 1, 0);
} else {
 x_66 = x_42;
}
lean::cnstr_set(x_66, 0, x_65);
if (lean::is_scalar(x_59)) {
 x_67 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_67 = x_59;
}
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_57);
if (lean::is_scalar(x_54)) {
 x_68 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_68 = x_54;
}
lean::cnstr_set(x_68, 0, x_67);
return x_68;
}
}
default:
{
obj* x_70; obj* x_71; 
lean::dec(x_2);
x_70 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_70, 0, x_0);
lean::cnstr_set(x_70, 1, x_3);
x_71 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_71, 0, x_70);
return x_71;
}
}
}
}
obj* l_List_mmap___main___at_Lean_Elaborator_preresolve___main___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_List_mmap___main___at_Lean_Elaborator_preresolve___main___spec__1(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Elaborator_preresolve___main___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_preresolve___main(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Elaborator_preresolve(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_preresolve___main(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l_Lean_Elaborator_preresolve___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Elaborator_preresolve(x_0, x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_Elaborator_mkState___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("MODULE");
return x_0;
}
}
obj* _init_l_Lean_Elaborator_mkState___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("MODULE");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Elaborator_mkState___closed__3() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Name_quickLt___boxed), 2, 0);
x_1 = l_Lean_Elaborator_OrderedRBMap_empty___rarg(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_Lean_Elaborator_mkState___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; uint32 x_5; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_ngen");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("fixme");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = 0;
x_6 = lean::alloc_cnstr(0, 1, 4);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set_scalar(x_6, sizeof(void*)*1, x_5);
x_7 = x_6;
return x_7;
}
}
obj* l_Lean_Elaborator_mkState(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_12; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_3 = lean::box(0);
x_4 = lean::box(0);
x_5 = l_Lean_Elaborator_mkState___closed__1;
x_6 = l_Lean_Elaborator_mkState___closed__2;
x_7 = l_Lean_Elaborator_mkState___closed__3;
x_8 = lean::alloc_cnstr(0, 9, 0);
lean::cnstr_set(x_8, 0, x_5);
lean::cnstr_set(x_8, 1, x_6);
lean::cnstr_set(x_8, 2, x_3);
lean::cnstr_set(x_8, 3, x_7);
lean::cnstr_set(x_8, 4, x_7);
lean::cnstr_set(x_8, 5, x_4);
lean::cnstr_set(x_8, 6, x_3);
lean::cnstr_set(x_8, 7, x_3);
lean::cnstr_set(x_8, 8, x_2);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_0, 0);
lean::inc(x_12);
lean::dec(x_0);
x_15 = l_Lean_Expander_builtinTransformers;
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_12);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::mk_nat_obj(0ul);
x_18 = l_Lean_MessageLog_empty;
x_19 = l_Lean_Elaborator_mkState___closed__4;
x_20 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_20, 0, x_3);
lean::cnstr_set(x_20, 1, x_3);
lean::cnstr_set(x_20, 2, x_17);
lean::cnstr_set(x_20, 3, x_3);
lean::cnstr_set(x_20, 4, x_9);
lean::cnstr_set(x_20, 5, x_18);
lean::cnstr_set(x_20, 6, x_10);
lean::cnstr_set(x_20, 7, x_16);
lean::cnstr_set(x_20, 8, x_1);
lean::cnstr_set(x_20, 9, x_19);
lean::cnstr_set(x_20, 10, x_17);
return x_20;
}
}
obj* l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_9; obj* x_12; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_4, 2);
lean::inc(x_9);
lean::dec(x_4);
x_12 = lean::box(0);
if (lean::obj_tag(x_0) == 0)
{
obj* x_13; obj* x_14; uint8 x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_13 = lean::mk_nat_obj(0ul);
x_14 = l_Lean_FileMap_toPosition(x_9, x_13);
x_15 = 2;
x_16 = l_String_splitAux___main___closed__1;
x_17 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_17, 0, x_7);
lean::cnstr_set(x_17, 1, x_14);
lean::cnstr_set(x_17, 2, x_12);
lean::cnstr_set(x_17, 3, x_16);
lean::cnstr_set(x_17, 4, x_1);
lean::cnstr_set_scalar(x_17, sizeof(void*)*5, x_15);
x_18 = x_17;
x_19 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_19, 0, x_18);
return x_19;
}
else
{
obj* x_20; obj* x_21; 
x_20 = lean::cnstr_get(x_0, 0);
x_21 = l_Lean_Parser_Syntax_getPos(x_20);
if (lean::obj_tag(x_21) == 0)
{
obj* x_22; obj* x_23; uint8 x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_22 = lean::mk_nat_obj(0ul);
x_23 = l_Lean_FileMap_toPosition(x_9, x_22);
x_24 = 2;
x_25 = l_String_splitAux___main___closed__1;
x_26 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_26, 0, x_7);
lean::cnstr_set(x_26, 1, x_23);
lean::cnstr_set(x_26, 2, x_12);
lean::cnstr_set(x_26, 3, x_25);
lean::cnstr_set(x_26, 4, x_1);
lean::cnstr_set_scalar(x_26, sizeof(void*)*5, x_24);
x_27 = x_26;
x_28 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_28, 0, x_27);
return x_28;
}
else
{
obj* x_29; obj* x_32; uint8 x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
x_29 = lean::cnstr_get(x_21, 0);
lean::inc(x_29);
lean::dec(x_21);
x_32 = l_Lean_FileMap_toPosition(x_9, x_29);
x_33 = 2;
x_34 = l_String_splitAux___main___closed__1;
x_35 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_35, 0, x_7);
lean::cnstr_set(x_35, 1, x_32);
lean::cnstr_set(x_35, 2, x_12);
lean::cnstr_set(x_35, 3, x_34);
lean::cnstr_set(x_35, 4, x_1);
lean::cnstr_set_scalar(x_35, sizeof(void*)*5, x_33);
x_36 = x_35;
x_37 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_37, 0, x_36);
return x_37;
}
}
}
}
obj* l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__1___rarg___boxed), 4, 0);
return x_1;
}
}
obj* l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; obj* x_10; obj* x_13; 
x_5 = lean::cnstr_get(x_3, 0);
lean::inc(x_5);
lean::dec(x_3);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_5, 2);
lean::inc(x_10);
lean::dec(x_5);
x_13 = lean::box(0);
if (lean::obj_tag(x_0) == 0)
{
obj* x_14; obj* x_15; uint8 x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_14 = lean::mk_nat_obj(0ul);
x_15 = l_Lean_FileMap_toPosition(x_10, x_14);
x_16 = 2;
x_17 = l_String_splitAux___main___closed__1;
x_18 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_18, 0, x_8);
lean::cnstr_set(x_18, 1, x_15);
lean::cnstr_set(x_18, 2, x_13);
lean::cnstr_set(x_18, 3, x_17);
lean::cnstr_set(x_18, 4, x_1);
lean::cnstr_set_scalar(x_18, sizeof(void*)*5, x_16);
x_19 = x_18;
x_20 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_20, 0, x_19);
return x_20;
}
else
{
obj* x_21; obj* x_22; 
x_21 = lean::cnstr_get(x_0, 0);
x_22 = l_Lean_Parser_Syntax_getPos(x_21);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; obj* x_24; uint8 x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_23 = lean::mk_nat_obj(0ul);
x_24 = l_Lean_FileMap_toPosition(x_10, x_23);
x_25 = 2;
x_26 = l_String_splitAux___main___closed__1;
x_27 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_27, 0, x_8);
lean::cnstr_set(x_27, 1, x_24);
lean::cnstr_set(x_27, 2, x_13);
lean::cnstr_set(x_27, 3, x_26);
lean::cnstr_set(x_27, 4, x_1);
lean::cnstr_set_scalar(x_27, sizeof(void*)*5, x_25);
x_28 = x_27;
x_29 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_29, 0, x_28);
return x_29;
}
else
{
obj* x_30; obj* x_33; uint8 x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_30 = lean::cnstr_get(x_22, 0);
lean::inc(x_30);
lean::dec(x_22);
x_33 = l_Lean_FileMap_toPosition(x_10, x_30);
x_34 = 2;
x_35 = l_String_splitAux___main___closed__1;
x_36 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_36, 0, x_8);
lean::cnstr_set(x_36, 1, x_33);
lean::cnstr_set(x_36, 2, x_13);
lean::cnstr_set(x_36, 3, x_35);
lean::cnstr_set(x_36, 4, x_1);
lean::cnstr_set_scalar(x_36, sizeof(void*)*5, x_34);
x_37 = x_36;
x_38 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_38, 0, x_37);
return x_38;
}
}
}
}
obj* l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__2___rarg___boxed), 5, 0);
return x_1;
}
}
obj* l_RBNode_find___main___at_Lean_Elaborator_processCommand___spec__3(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; uint8 x_12; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 2);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 3);
lean::inc(x_9);
lean::dec(x_0);
x_12 = l_Lean_Name_quickLt(x_1, x_5);
if (x_12 == 0)
{
uint8 x_14; 
lean::dec(x_3);
x_14 = l_Lean_Name_quickLt(x_5, x_1);
lean::dec(x_5);
if (x_14 == 0)
{
obj* x_17; 
lean::dec(x_9);
x_17 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_17, 0, x_7);
return x_17;
}
else
{
lean::dec(x_7);
x_0 = x_9;
goto _start;
}
}
else
{
lean::dec(x_7);
lean::dec(x_9);
lean::dec(x_5);
x_0 = x_3;
goto _start;
}
}
}
}
obj* _init_l_Lean_Elaborator_processCommand___lambda__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("not a command: ");
return x_0;
}
}
obj* _init_l_Lean_Elaborator_processCommand___lambda__1___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unknown command: ");
return x_0;
}
}
obj* l_Lean_Elaborator_processCommand___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; 
lean::inc(x_1);
x_5 = l_Lean_Parser_Syntax_asNode___main(x_1);
if (lean::obj_tag(x_5) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_14; 
lean::inc(x_1);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_1);
x_8 = l_Lean_Parser_Syntax_toFormat___main(x_1);
x_9 = l_Lean_Options_empty;
x_10 = l_Lean_Format_pretty(x_8, x_9);
x_11 = l_Lean_Elaborator_processCommand___lambda__1___closed__1;
x_12 = lean::string_append(x_11, x_10);
lean::dec(x_10);
x_14 = l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__2___rarg(x_7, x_12, x_0, x_2, x_3);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_7);
return x_14;
}
else
{
obj* x_18; obj* x_20; obj* x_21; obj* x_24; obj* x_25; 
x_18 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_set(x_5, 0, lean::box(0));
 x_20 = x_5;
} else {
 lean::inc(x_18);
 lean::dec(x_5);
 x_20 = lean::box(0);
}
x_21 = lean::cnstr_get(x_18, 0);
lean::inc(x_21);
lean::dec(x_18);
x_24 = l_Lean_Elaborator_elaborators;
x_25 = l_RBNode_find___main___at_Lean_Elaborator_processCommand___spec__3(x_24, x_21);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_32; 
if (lean::is_scalar(x_20)) {
 x_26 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_26 = x_20;
}
lean::cnstr_set(x_26, 0, x_1);
x_27 = l_Lean_Name_toString___closed__1;
x_28 = l_Lean_Name_toStringWithSep___main(x_27, x_21);
x_29 = l_Lean_Elaborator_processCommand___lambda__1___closed__2;
x_30 = lean::string_append(x_29, x_28);
lean::dec(x_28);
x_32 = l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__2___rarg(x_26, x_30, x_0, x_2, x_3);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_26);
return x_32;
}
else
{
obj* x_38; obj* x_42; 
lean::dec(x_20);
lean::dec(x_21);
x_38 = lean::cnstr_get(x_25, 0);
lean::inc(x_38);
lean::dec(x_25);
lean::inc(x_2);
x_42 = l_Lean_Elaborator_preresolve___main(x_1, x_0, x_2, x_3);
if (lean::obj_tag(x_42) == 0)
{
obj* x_46; obj* x_48; obj* x_49; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_38);
x_46 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_48 = x_42;
} else {
 lean::inc(x_46);
 lean::dec(x_42);
 x_48 = lean::box(0);
}
if (lean::is_scalar(x_48)) {
 x_49 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_49 = x_48;
}
lean::cnstr_set(x_49, 0, x_46);
return x_49;
}
else
{
obj* x_50; obj* x_53; obj* x_55; obj* x_58; 
x_50 = lean::cnstr_get(x_42, 0);
lean::inc(x_50);
lean::dec(x_42);
x_53 = lean::cnstr_get(x_50, 0);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_50, 1);
lean::inc(x_55);
lean::dec(x_50);
x_58 = lean::apply_4(x_38, x_53, x_0, x_2, x_55);
return x_58;
}
}
}
}
}
obj* _init_l_Lean_Elaborator_processCommand___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Elaborator_processCommand___lambda__1), 4, 0);
return x_0;
}
}
obj* l_Lean_Elaborator_processCommand(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_24; obj* x_35; obj* x_36; obj* x_37; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 2);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_1, 3);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_1, 4);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_1, 6);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_1, 7);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_1, 8);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_1, 9);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_1, 10);
lean::inc(x_21);
lean::dec(x_1);
x_24 = l_Lean_MessageLog_empty;
lean::inc(x_21);
lean::inc(x_19);
lean::inc(x_17);
lean::inc(x_15);
lean::inc(x_13);
lean::inc(x_11);
lean::inc(x_9);
lean::inc(x_7);
lean::inc(x_5);
lean::inc(x_3);
x_35 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_35, 0, x_3);
lean::cnstr_set(x_35, 1, x_5);
lean::cnstr_set(x_35, 2, x_7);
lean::cnstr_set(x_35, 3, x_9);
lean::cnstr_set(x_35, 4, x_11);
lean::cnstr_set(x_35, 5, x_24);
lean::cnstr_set(x_35, 6, x_13);
lean::cnstr_set(x_35, 7, x_15);
lean::cnstr_set(x_35, 8, x_17);
lean::cnstr_set(x_35, 9, x_19);
lean::cnstr_set(x_35, 10, x_21);
x_36 = l_Lean_Elaborator_processCommand___closed__1;
x_37 = lean::fixpoint3(x_36, x_2, x_0, x_35);
if (lean::obj_tag(x_37) == 0)
{
obj* x_38; obj* x_41; obj* x_42; 
x_38 = lean::cnstr_get(x_37, 0);
lean::inc(x_38);
lean::dec(x_37);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_38);
lean::cnstr_set(x_41, 1, x_24);
x_42 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_42, 0, x_3);
lean::cnstr_set(x_42, 1, x_5);
lean::cnstr_set(x_42, 2, x_7);
lean::cnstr_set(x_42, 3, x_9);
lean::cnstr_set(x_42, 4, x_11);
lean::cnstr_set(x_42, 5, x_41);
lean::cnstr_set(x_42, 6, x_13);
lean::cnstr_set(x_42, 7, x_15);
lean::cnstr_set(x_42, 8, x_17);
lean::cnstr_set(x_42, 9, x_19);
lean::cnstr_set(x_42, 10, x_21);
return x_42;
}
else
{
obj* x_53; obj* x_56; 
lean::dec(x_7);
lean::dec(x_15);
lean::dec(x_19);
lean::dec(x_13);
lean::dec(x_17);
lean::dec(x_11);
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_3);
lean::dec(x_21);
x_53 = lean::cnstr_get(x_37, 0);
lean::inc(x_53);
lean::dec(x_37);
x_56 = lean::cnstr_get(x_53, 1);
lean::inc(x_56);
lean::dec(x_53);
return x_56;
}
}
}
obj* l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__1___rarg(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_3);
return x_4;
}
}
obj* l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__1___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__1(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__2___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__2___rarg(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_4);
return x_5;
}
}
obj* l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__2___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_Expander_error___at_Lean_Elaborator_processCommand___spec__2(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_RBNode_find___main___at_Lean_Elaborator_processCommand___spec__3___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_RBNode_find___main___at_Lean_Elaborator_processCommand___spec__3(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* initialize_init_lean_parser_module(obj*);
obj* initialize_init_lean_expander(obj*);
obj* initialize_init_lean_expr(obj*);
obj* initialize_init_lean_options(obj*);
static bool _G_initialized = false;
obj* initialize_init_lean_elaborator(obj* w) {
 if (_G_initialized) return w;
 _G_initialized = true;
if (io_result_is_error(w)) return w;
w = initialize_init_lean_parser_module(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_expander(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_expr(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_options(w);
 l_Lean_Elaborator_ElaboratorM_Monad = _init_l_Lean_Elaborator_ElaboratorM_Monad();
lean::mark_persistent(l_Lean_Elaborator_ElaboratorM_Monad);
 l_Lean_Elaborator_ElaboratorM_Lean_Parser_MonadRec = _init_l_Lean_Elaborator_ElaboratorM_Lean_Parser_MonadRec();
lean::mark_persistent(l_Lean_Elaborator_ElaboratorM_Lean_Parser_MonadRec);
 l_Lean_Elaborator_ElaboratorM_MonadReader = _init_l_Lean_Elaborator_ElaboratorM_MonadReader();
lean::mark_persistent(l_Lean_Elaborator_ElaboratorM_MonadReader);
 l_Lean_Elaborator_ElaboratorM_MonadState = _init_l_Lean_Elaborator_ElaboratorM_MonadState();
lean::mark_persistent(l_Lean_Elaborator_ElaboratorM_MonadState);
 l_Lean_Elaborator_ElaboratorM_MonadExcept = _init_l_Lean_Elaborator_ElaboratorM_MonadExcept();
lean::mark_persistent(l_Lean_Elaborator_ElaboratorM_MonadExcept);
 l_Lean_Elaborator_elaboratorInh___closed__1 = _init_l_Lean_Elaborator_elaboratorInh___closed__1();
lean::mark_persistent(l_Lean_Elaborator_elaboratorInh___closed__1);
 l_Lean_Elaborator_currentScope___closed__1 = _init_l_Lean_Elaborator_currentScope___closed__1();
lean::mark_persistent(l_Lean_Elaborator_currentScope___closed__1);
 l_Lean_Elaborator_modifyCurrentScope___closed__1 = _init_l_Lean_Elaborator_modifyCurrentScope___closed__1();
lean::mark_persistent(l_Lean_Elaborator_modifyCurrentScope___closed__1);
 l_Lean_Elaborator_levelGetAppArgs___main___closed__1 = _init_l_Lean_Elaborator_levelGetAppArgs___main___closed__1();
lean::mark_persistent(l_Lean_Elaborator_levelGetAppArgs___main___closed__1);
 l_Lean_Elaborator_toLevel___main___closed__1 = _init_l_Lean_Elaborator_toLevel___main___closed__1();
lean::mark_persistent(l_Lean_Elaborator_toLevel___main___closed__1);
 l_Lean_Elaborator_toLevel___main___closed__2 = _init_l_Lean_Elaborator_toLevel___main___closed__2();
lean::mark_persistent(l_Lean_Elaborator_toLevel___main___closed__2);
 l_Lean_Elaborator_toLevel___main___closed__3 = _init_l_Lean_Elaborator_toLevel___main___closed__3();
lean::mark_persistent(l_Lean_Elaborator_toLevel___main___closed__3);
 l_Lean_Elaborator_toLevel___main___closed__4 = _init_l_Lean_Elaborator_toLevel___main___closed__4();
lean::mark_persistent(l_Lean_Elaborator_toLevel___main___closed__4);
 l_Lean_Elaborator_toLevel___main___closed__5 = _init_l_Lean_Elaborator_toLevel___main___closed__5();
lean::mark_persistent(l_Lean_Elaborator_toLevel___main___closed__5);
 l_Lean_Elaborator_Expr_mkAnnotation___closed__1 = _init_l_Lean_Elaborator_Expr_mkAnnotation___closed__1();
lean::mark_persistent(l_Lean_Elaborator_Expr_mkAnnotation___closed__1);
 l_Lean_Elaborator_dummy = _init_l_Lean_Elaborator_dummy();
lean::mark_persistent(l_Lean_Elaborator_dummy);
 l_List_map___main___at_Lean_Elaborator_mkEqns___spec__1___closed__1 = _init_l_List_map___main___at_Lean_Elaborator_mkEqns___spec__1___closed__1();
lean::mark_persistent(l_List_map___main___at_Lean_Elaborator_mkEqns___spec__1___closed__1);
 l_Lean_Elaborator_mkEqns___closed__1 = _init_l_Lean_Elaborator_mkEqns___closed__1();
lean::mark_persistent(l_Lean_Elaborator_mkEqns___closed__1);
 l_Lean_Elaborator_mkEqns___closed__2 = _init_l_Lean_Elaborator_mkEqns___closed__2();
lean::mark_persistent(l_Lean_Elaborator_mkEqns___closed__2);
 l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__3___closed__1 = _init_l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__3___closed__1();
lean::mark_persistent(l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__3___closed__1);
 l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__1 = _init_l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__1();
lean::mark_persistent(l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__1);
 l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__2 = _init_l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__2();
lean::mark_persistent(l_List_mmap___main___at_Lean_Elaborator_toPexpr___main___spec__6___closed__2);
 l_Lean_Elaborator_toPexpr___main___closed__1 = _init_l_Lean_Elaborator_toPexpr___main___closed__1();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__1);
 l_Lean_Elaborator_toPexpr___main___closed__2 = _init_l_Lean_Elaborator_toPexpr___main___closed__2();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__2);
 l_Lean_Elaborator_toPexpr___main___closed__3 = _init_l_Lean_Elaborator_toPexpr___main___closed__3();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__3);
 l_Lean_Elaborator_toPexpr___main___closed__4 = _init_l_Lean_Elaborator_toPexpr___main___closed__4();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__4);
 l_Lean_Elaborator_toPexpr___main___closed__5 = _init_l_Lean_Elaborator_toPexpr___main___closed__5();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__5);
 l_Lean_Elaborator_toPexpr___main___closed__6 = _init_l_Lean_Elaborator_toPexpr___main___closed__6();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__6);
 l_Lean_Elaborator_toPexpr___main___closed__7 = _init_l_Lean_Elaborator_toPexpr___main___closed__7();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__7);
 l_Lean_Elaborator_toPexpr___main___closed__8 = _init_l_Lean_Elaborator_toPexpr___main___closed__8();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__8);
 l_Lean_Elaborator_toPexpr___main___closed__9 = _init_l_Lean_Elaborator_toPexpr___main___closed__9();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__9);
 l_Lean_Elaborator_toPexpr___main___closed__10 = _init_l_Lean_Elaborator_toPexpr___main___closed__10();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__10);
 l_Lean_Elaborator_toPexpr___main___closed__11 = _init_l_Lean_Elaborator_toPexpr___main___closed__11();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__11);
 l_Lean_Elaborator_toPexpr___main___closed__12 = _init_l_Lean_Elaborator_toPexpr___main___closed__12();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__12);
 l_Lean_Elaborator_toPexpr___main___closed__13 = _init_l_Lean_Elaborator_toPexpr___main___closed__13();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__13);
 l_Lean_Elaborator_toPexpr___main___closed__14 = _init_l_Lean_Elaborator_toPexpr___main___closed__14();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__14);
 l_Lean_Elaborator_toPexpr___main___closed__15 = _init_l_Lean_Elaborator_toPexpr___main___closed__15();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__15);
 l_Lean_Elaborator_toPexpr___main___closed__16 = _init_l_Lean_Elaborator_toPexpr___main___closed__16();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__16);
 l_Lean_Elaborator_toPexpr___main___closed__17 = _init_l_Lean_Elaborator_toPexpr___main___closed__17();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__17);
 l_Lean_Elaborator_toPexpr___main___closed__18 = _init_l_Lean_Elaborator_toPexpr___main___closed__18();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__18);
 l_Lean_Elaborator_toPexpr___main___closed__19 = _init_l_Lean_Elaborator_toPexpr___main___closed__19();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__19);
 l_Lean_Elaborator_toPexpr___main___closed__20 = _init_l_Lean_Elaborator_toPexpr___main___closed__20();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__20);
 l_Lean_Elaborator_toPexpr___main___closed__21 = _init_l_Lean_Elaborator_toPexpr___main___closed__21();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__21);
 l_Lean_Elaborator_toPexpr___main___closed__22 = _init_l_Lean_Elaborator_toPexpr___main___closed__22();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__22);
 l_Lean_Elaborator_toPexpr___main___closed__23 = _init_l_Lean_Elaborator_toPexpr___main___closed__23();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__23);
 l_Lean_Elaborator_toPexpr___main___closed__24 = _init_l_Lean_Elaborator_toPexpr___main___closed__24();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__24);
 l_Lean_Elaborator_toPexpr___main___closed__25 = _init_l_Lean_Elaborator_toPexpr___main___closed__25();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__25);
 l_Lean_Elaborator_toPexpr___main___closed__26 = _init_l_Lean_Elaborator_toPexpr___main___closed__26();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__26);
 l_Lean_Elaborator_toPexpr___main___closed__27 = _init_l_Lean_Elaborator_toPexpr___main___closed__27();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__27);
 l_Lean_Elaborator_toPexpr___main___closed__28 = _init_l_Lean_Elaborator_toPexpr___main___closed__28();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__28);
 l_Lean_Elaborator_toPexpr___main___closed__29 = _init_l_Lean_Elaborator_toPexpr___main___closed__29();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__29);
 l_Lean_Elaborator_toPexpr___main___closed__30 = _init_l_Lean_Elaborator_toPexpr___main___closed__30();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__30);
 l_Lean_Elaborator_toPexpr___main___closed__31 = _init_l_Lean_Elaborator_toPexpr___main___closed__31();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__31);
 l_Lean_Elaborator_toPexpr___main___closed__32 = _init_l_Lean_Elaborator_toPexpr___main___closed__32();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__32);
 l_Lean_Elaborator_toPexpr___main___closed__33 = _init_l_Lean_Elaborator_toPexpr___main___closed__33();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__33);
 l_Lean_Elaborator_toPexpr___main___closed__34 = _init_l_Lean_Elaborator_toPexpr___main___closed__34();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__34);
 l_Lean_Elaborator_toPexpr___main___closed__35 = _init_l_Lean_Elaborator_toPexpr___main___closed__35();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__35);
 l_Lean_Elaborator_toPexpr___main___closed__36 = _init_l_Lean_Elaborator_toPexpr___main___closed__36();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__36);
 l_Lean_Elaborator_toPexpr___main___closed__37 = _init_l_Lean_Elaborator_toPexpr___main___closed__37();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__37);
 l_Lean_Elaborator_toPexpr___main___closed__38 = _init_l_Lean_Elaborator_toPexpr___main___closed__38();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__38);
 l_Lean_Elaborator_toPexpr___main___closed__39 = _init_l_Lean_Elaborator_toPexpr___main___closed__39();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__39);
 l_Lean_Elaborator_toPexpr___main___closed__40 = _init_l_Lean_Elaborator_toPexpr___main___closed__40();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__40);
 l_Lean_Elaborator_toPexpr___main___closed__41 = _init_l_Lean_Elaborator_toPexpr___main___closed__41();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__41);
 l_Lean_Elaborator_toPexpr___main___closed__42 = _init_l_Lean_Elaborator_toPexpr___main___closed__42();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__42);
 l_Lean_Elaborator_toPexpr___main___closed__43 = _init_l_Lean_Elaborator_toPexpr___main___closed__43();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__43);
 l_Lean_Elaborator_toPexpr___main___closed__44 = _init_l_Lean_Elaborator_toPexpr___main___closed__44();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__44);
 l_Lean_Elaborator_toPexpr___main___closed__45 = _init_l_Lean_Elaborator_toPexpr___main___closed__45();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__45);
 l_Lean_Elaborator_toPexpr___main___closed__46 = _init_l_Lean_Elaborator_toPexpr___main___closed__46();
lean::mark_persistent(l_Lean_Elaborator_toPexpr___main___closed__46);
 l_Lean_Elaborator_declModifiersToPexpr___closed__1 = _init_l_Lean_Elaborator_declModifiersToPexpr___closed__1();
lean::mark_persistent(l_Lean_Elaborator_declModifiersToPexpr___closed__1);
 l_Lean_Elaborator_declModifiersToPexpr___closed__2 = _init_l_Lean_Elaborator_declModifiersToPexpr___closed__2();
lean::mark_persistent(l_Lean_Elaborator_declModifiersToPexpr___closed__2);
 l_Lean_Elaborator_declModifiersToPexpr___closed__3 = _init_l_Lean_Elaborator_declModifiersToPexpr___closed__3();
lean::mark_persistent(l_Lean_Elaborator_declModifiersToPexpr___closed__3);
 l_Lean_Elaborator_declModifiersToPexpr___closed__4 = _init_l_Lean_Elaborator_declModifiersToPexpr___closed__4();
lean::mark_persistent(l_Lean_Elaborator_declModifiersToPexpr___closed__4);
 l_Lean_Elaborator_declModifiersToPexpr___closed__5 = _init_l_Lean_Elaborator_declModifiersToPexpr___closed__5();
lean::mark_persistent(l_Lean_Elaborator_declModifiersToPexpr___closed__5);
 l_Lean_Elaborator_declModifiersToPexpr___closed__6 = _init_l_Lean_Elaborator_declModifiersToPexpr___closed__6();
lean::mark_persistent(l_Lean_Elaborator_declModifiersToPexpr___closed__6);
 l_Lean_Elaborator_declModifiersToPexpr___closed__7 = _init_l_Lean_Elaborator_declModifiersToPexpr___closed__7();
lean::mark_persistent(l_Lean_Elaborator_declModifiersToPexpr___closed__7);
 l_Lean_Elaborator_elabDefLike___closed__1 = _init_l_Lean_Elaborator_elabDefLike___closed__1();
lean::mark_persistent(l_Lean_Elaborator_elabDefLike___closed__1);
 l_Lean_Elaborator_elabDefLike___closed__2 = _init_l_Lean_Elaborator_elabDefLike___closed__2();
lean::mark_persistent(l_Lean_Elaborator_elabDefLike___closed__2);
 l_Lean_Elaborator_inferModToPexpr___closed__1 = _init_l_Lean_Elaborator_inferModToPexpr___closed__1();
lean::mark_persistent(l_Lean_Elaborator_inferModToPexpr___closed__1);
 l_Lean_Elaborator_inferModToPexpr___closed__2 = _init_l_Lean_Elaborator_inferModToPexpr___closed__2();
lean::mark_persistent(l_Lean_Elaborator_inferModToPexpr___closed__2);
 l_Lean_Elaborator_inferModToPexpr___closed__3 = _init_l_Lean_Elaborator_inferModToPexpr___closed__3();
lean::mark_persistent(l_Lean_Elaborator_inferModToPexpr___closed__3);
 l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__2___closed__1 = _init_l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__2___closed__1();
lean::mark_persistent(l_List_mmap___main___at_Lean_Elaborator_Declaration_elaborate___spec__2___closed__1);
 l_Lean_Elaborator_Declaration_elaborate___lambda__3___closed__1 = _init_l_Lean_Elaborator_Declaration_elaborate___lambda__3___closed__1();
lean::mark_persistent(l_Lean_Elaborator_Declaration_elaborate___lambda__3___closed__1);
 l_Lean_Elaborator_Declaration_elaborate___lambda__3___closed__2 = _init_l_Lean_Elaborator_Declaration_elaborate___lambda__3___closed__2();
lean::mark_persistent(l_Lean_Elaborator_Declaration_elaborate___lambda__3___closed__2);
 l_Lean_Elaborator_Declaration_elaborate___closed__1 = _init_l_Lean_Elaborator_Declaration_elaborate___closed__1();
lean::mark_persistent(l_Lean_Elaborator_Declaration_elaborate___closed__1);
 l_Lean_Elaborator_Declaration_elaborate___closed__2 = _init_l_Lean_Elaborator_Declaration_elaborate___closed__2();
lean::mark_persistent(l_Lean_Elaborator_Declaration_elaborate___closed__2);
 l_Lean_Elaborator_Declaration_elaborate___closed__3 = _init_l_Lean_Elaborator_Declaration_elaborate___closed__3();
lean::mark_persistent(l_Lean_Elaborator_Declaration_elaborate___closed__3);
 l_Lean_Elaborator_Declaration_elaborate___closed__4 = _init_l_Lean_Elaborator_Declaration_elaborate___closed__4();
lean::mark_persistent(l_Lean_Elaborator_Declaration_elaborate___closed__4);
 l_Lean_Elaborator_Declaration_elaborate___closed__5 = _init_l_Lean_Elaborator_Declaration_elaborate___closed__5();
lean::mark_persistent(l_Lean_Elaborator_Declaration_elaborate___closed__5);
 l_Lean_Elaborator_variables_elaborate___closed__1 = _init_l_Lean_Elaborator_variables_elaborate___closed__1();
lean::mark_persistent(l_Lean_Elaborator_variables_elaborate___closed__1);
 l_Lean_Elaborator_variables_elaborate___closed__2 = _init_l_Lean_Elaborator_variables_elaborate___closed__2();
lean::mark_persistent(l_Lean_Elaborator_variables_elaborate___closed__2);
 l_Lean_Elaborator_Module_header_elaborate___closed__1 = _init_l_Lean_Elaborator_Module_header_elaborate___closed__1();
lean::mark_persistent(l_Lean_Elaborator_Module_header_elaborate___closed__1);
 l_List_mfoldl___main___at_Lean_Elaborator_CommandParserConfig_registerNotationTokens___spec__1___closed__1 = _init_l_List_mfoldl___main___at_Lean_Elaborator_CommandParserConfig_registerNotationTokens___spec__1___closed__1();
lean::mark_persistent(l_List_mfoldl___main___at_Lean_Elaborator_CommandParserConfig_registerNotationTokens___spec__1___closed__1);
 l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__1 = _init_l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__1();
lean::mark_persistent(l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__1);
 l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__2 = _init_l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__2();
lean::mark_persistent(l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__2);
 l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__3 = _init_l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__3();
lean::mark_persistent(l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__3);
 l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__4 = _init_l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__4();
lean::mark_persistent(l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__4);
 l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__5 = _init_l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__5();
lean::mark_persistent(l_List_mmap___main___at_Lean_Elaborator_CommandParserConfig_registerNotationParser___spec__2___closed__5);
 l_Lean_Elaborator_CommandParserConfig_registerNotationParser___closed__1 = _init_l_Lean_Elaborator_CommandParserConfig_registerNotationParser___closed__1();
lean::mark_persistent(l_Lean_Elaborator_CommandParserConfig_registerNotationParser___closed__1);
 l_Lean_Elaborator_postprocessNotationSpec___closed__1 = _init_l_Lean_Elaborator_postprocessNotationSpec___closed__1();
lean::mark_persistent(l_Lean_Elaborator_postprocessNotationSpec___closed__1);
 l_Lean_Elaborator_matchSpec___closed__1 = _init_l_Lean_Elaborator_matchSpec___closed__1();
lean::mark_persistent(l_Lean_Elaborator_matchSpec___closed__1);
 l_Lean_Elaborator_notation_elaborateAux___closed__1 = _init_l_Lean_Elaborator_notation_elaborateAux___closed__1();
lean::mark_persistent(l_Lean_Elaborator_notation_elaborateAux___closed__1);
 l_Lean_Elaborator_mkNotationKind___rarg___closed__1 = _init_l_Lean_Elaborator_mkNotationKind___rarg___closed__1();
lean::mark_persistent(l_Lean_Elaborator_mkNotationKind___rarg___closed__1);
 l_Lean_Elaborator_notation_elaborate___closed__1 = _init_l_Lean_Elaborator_notation_elaborate___closed__1();
lean::mark_persistent(l_Lean_Elaborator_notation_elaborate___closed__1);
 l_Lean_Elaborator_notation_elaborate___closed__2 = _init_l_Lean_Elaborator_notation_elaborate___closed__2();
lean::mark_persistent(l_Lean_Elaborator_notation_elaborate___closed__2);
 l_Lean_Elaborator_universe_elaborate___closed__1 = _init_l_Lean_Elaborator_universe_elaborate___closed__1();
lean::mark_persistent(l_Lean_Elaborator_universe_elaborate___closed__1);
 l_Lean_Elaborator_universe_elaborate___closed__2 = _init_l_Lean_Elaborator_universe_elaborate___closed__2();
lean::mark_persistent(l_Lean_Elaborator_universe_elaborate___closed__2);
 l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1___closed__1 = _init_l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1___closed__1();
lean::mark_persistent(l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1___closed__1);
 l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1___closed__2 = _init_l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1___closed__2();
lean::mark_persistent(l_List_mmap___main___at_Lean_Elaborator_attribute_elaborate___spec__1___closed__2);
 l_Lean_Elaborator_attribute_elaborate___closed__1 = _init_l_Lean_Elaborator_attribute_elaborate___closed__1();
lean::mark_persistent(l_Lean_Elaborator_attribute_elaborate___closed__1);
 l_Lean_Elaborator_attribute_elaborate___closed__2 = _init_l_Lean_Elaborator_attribute_elaborate___closed__2();
lean::mark_persistent(l_Lean_Elaborator_attribute_elaborate___closed__2);
 l_Lean_Elaborator_check_elaborate___closed__1 = _init_l_Lean_Elaborator_check_elaborate___closed__1();
lean::mark_persistent(l_Lean_Elaborator_check_elaborate___closed__1);
 l_Lean_Elaborator_initQuot_elaborate___closed__1 = _init_l_Lean_Elaborator_initQuot_elaborate___closed__1();
lean::mark_persistent(l_Lean_Elaborator_initQuot_elaborate___closed__1);
 l_Lean_Elaborator_noKind_elaborate___closed__1 = _init_l_Lean_Elaborator_noKind_elaborate___closed__1();
lean::mark_persistent(l_Lean_Elaborator_noKind_elaborate___closed__1);
 l_Lean_Elaborator_end_elaborate___closed__1 = _init_l_Lean_Elaborator_end_elaborate___closed__1();
lean::mark_persistent(l_Lean_Elaborator_end_elaborate___closed__1);
 l_Lean_Elaborator_end_elaborate___closed__2 = _init_l_Lean_Elaborator_end_elaborate___closed__2();
lean::mark_persistent(l_Lean_Elaborator_end_elaborate___closed__2);
 l_Lean_Elaborator_end_elaborate___closed__3 = _init_l_Lean_Elaborator_end_elaborate___closed__3();
lean::mark_persistent(l_Lean_Elaborator_end_elaborate___closed__3);
 l_Lean_Elaborator_end_elaborate___closed__4 = _init_l_Lean_Elaborator_end_elaborate___closed__4();
lean::mark_persistent(l_Lean_Elaborator_end_elaborate___closed__4);
 l_Lean_Elaborator_section_elaborate___closed__1 = _init_l_Lean_Elaborator_section_elaborate___closed__1();
lean::mark_persistent(l_Lean_Elaborator_section_elaborate___closed__1);
 l_Lean_Elaborator_section_elaborate___closed__2 = _init_l_Lean_Elaborator_section_elaborate___closed__2();
lean::mark_persistent(l_Lean_Elaborator_section_elaborate___closed__2);
 l_Lean_Elaborator_namespace_elaborate___closed__1 = _init_l_Lean_Elaborator_namespace_elaborate___closed__1();
lean::mark_persistent(l_Lean_Elaborator_namespace_elaborate___closed__1);
 l_Lean_Elaborator_eoi_elaborate___closed__1 = _init_l_Lean_Elaborator_eoi_elaborate___closed__1();
lean::mark_persistent(l_Lean_Elaborator_eoi_elaborate___closed__1);
 l_Lean_Elaborator_elaborators = _init_l_Lean_Elaborator_elaborators();
lean::mark_persistent(l_Lean_Elaborator_elaborators);
 l_Lean_Elaborator_resolveContext___main___closed__1 = _init_l_Lean_Elaborator_resolveContext___main___closed__1();
lean::mark_persistent(l_Lean_Elaborator_resolveContext___main___closed__1);
 l_Lean_Elaborator_mkState___closed__1 = _init_l_Lean_Elaborator_mkState___closed__1();
lean::mark_persistent(l_Lean_Elaborator_mkState___closed__1);
 l_Lean_Elaborator_mkState___closed__2 = _init_l_Lean_Elaborator_mkState___closed__2();
lean::mark_persistent(l_Lean_Elaborator_mkState___closed__2);
 l_Lean_Elaborator_mkState___closed__3 = _init_l_Lean_Elaborator_mkState___closed__3();
lean::mark_persistent(l_Lean_Elaborator_mkState___closed__3);
 l_Lean_Elaborator_mkState___closed__4 = _init_l_Lean_Elaborator_mkState___closed__4();
lean::mark_persistent(l_Lean_Elaborator_mkState___closed__4);
 l_Lean_Elaborator_processCommand___lambda__1___closed__1 = _init_l_Lean_Elaborator_processCommand___lambda__1___closed__1();
lean::mark_persistent(l_Lean_Elaborator_processCommand___lambda__1___closed__1);
 l_Lean_Elaborator_processCommand___lambda__1___closed__2 = _init_l_Lean_Elaborator_processCommand___lambda__1___closed__2();
lean::mark_persistent(l_Lean_Elaborator_processCommand___lambda__1___closed__2);
 l_Lean_Elaborator_processCommand___closed__1 = _init_l_Lean_Elaborator_processCommand___closed__1();
lean::mark_persistent(l_Lean_Elaborator_processCommand___closed__1);
return w;
}
