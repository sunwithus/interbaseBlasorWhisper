#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
234,
242,
243,
244,
245,
246,
247,
248,
250,
251,
302,
303,
304,
328,
329,
330,
340,
341,
342,
343,
430,
431,
432,
433,
436,
470,
471,
473,
475,
477,
479,
484,
492,
493,
494,
495,
496,
497,
498,
499,
500,
579,
580,
632,
638,
641,
643,
648,
649,
651,
652,
656,
657,
659,
661,
662,
665,
666,
667,
670,
672,
674,
676,
685,
741,
743,
745,
755,
756,
757,
759,
765,
766,
767,
768,
769,
777,
778,
779,
783,
784,
786,
788,
963,
1110,
1111,
6455,
6456,
6458,
6459,
6460,
6461,
6462,
6464,
6466,
6468,
6469,
6477,
6479,
6484,
6486,
6488,
6490,
6541,
6542,
6544,
6545,
6546,
6547,
6548,
6550,
6552,
7426,
7430,
7432,
7433,
7434,
7435,
7626,
7627,
7628,
7629,
7647,
7648,
7649,
7651,
7653,
7702,
7773,
7775,
7784,
7785,
7786,
7787,
8087,
8089,
8090,
8113,
8127,
8134,
8141,
8152,
8155,
8175,
8246,
8253,
8255,
8261,
8275,
8295,
8296,
8304,
8306,
8313,
8314,
8317,
8319,
8324,
8330,
8331,
8338,
8340,
8352,
8355,
8356,
8357,
8368,
8377,
8383,
8384,
8385,
8387,
8388,
8405,
8407,
8421,
8438,
8465,
8490,
8491,
8907,
8988,
8989,
9131,
9132,
9136,
9139,
9200,
9694,
9695,
10105,
10115,
10615,
10636,
10638,
10640,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
int ves_icall_System_Environment_GetCommandLineArgs_raw (int);
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureInternal_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 234,
ves_icall_System_Array_InternalCreate,
// token 242,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 243,
ves_icall_System_Array_CanChangePrimitive,
// token 244,
ves_icall_System_Array_FastCopy,
// token 245,
ves_icall_System_Array_GetLengthInternal_raw,
// token 246,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 247,
ves_icall_System_Array_GetGenericValue_icall,
// token 248,
ves_icall_System_Array_GetValueImpl_raw,
// token 250,
ves_icall_System_Array_SetValueImpl_raw,
// token 251,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 302,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 303,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 304,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 328,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 329,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 330,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 340,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 341,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 342,
ves_icall_System_Enum_InternalGetCorElementType,
// token 343,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 430,
ves_icall_System_Environment_get_ProcessorCount,
// token 431,
ves_icall_System_Environment_get_TickCount,
// token 432,
ves_icall_System_Environment_get_TickCount64,
// token 433,
ves_icall_System_Environment_GetCommandLineArgs_raw,
// token 436,
ves_icall_System_Environment_FailFast_raw,
// token 470,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 471,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 473,
ves_icall_System_GC_SuppressFinalize_raw,
// token 475,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 477,
ves_icall_System_GC_GetGCMemoryInfo,
// token 479,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 484,
ves_icall_System_Object_MemberwiseClone_raw,
// token 492,
ves_icall_System_Math_Ceiling,
// token 493,
ves_icall_System_Math_Cos,
// token 494,
ves_icall_System_Math_Floor,
// token 495,
ves_icall_System_Math_Log10,
// token 496,
ves_icall_System_Math_Pow,
// token 497,
ves_icall_System_Math_Sin,
// token 498,
ves_icall_System_Math_Sqrt,
// token 499,
ves_icall_System_Math_Tan,
// token 500,
ves_icall_System_Math_ModF,
// token 579,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 580,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 632,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 638,
ves_icall_RuntimeType_make_array_type_raw,
// token 641,
ves_icall_RuntimeType_make_byref_type_raw,
// token 643,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 648,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 649,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 651,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 652,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 656,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 657,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 659,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 661,
ves_icall_System_RuntimeType_getFullName_raw,
// token 662,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 665,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 666,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 667,
ves_icall_RuntimeType_GetFields_native_raw,
// token 670,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 672,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 674,
ves_icall_RuntimeType_GetName_raw,
// token 676,
ves_icall_RuntimeType_GetNamespace_raw,
// token 685,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 741,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 743,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 745,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 755,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 756,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 757,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 759,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 765,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 766,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 767,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 768,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 769,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 777,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 778,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 779,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 783,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 784,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 786,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 788,
ves_icall_System_String_FastAllocateString_raw,
// token 963,
ves_icall_System_Type_internal_from_handle_raw,
// token 1110,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1111,
ves_icall_System_ValueType_Equals_raw,
// token 6455,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6456,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6458,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6459,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6460,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6461,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6462,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6464,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6466,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6468,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6469,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 6477,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6479,
mono_monitor_exit_icall_raw,
// token 6484,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6486,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6488,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6490,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6541,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6542,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6544,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6545,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6546,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6547,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6548,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6550,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6552,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7426,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7430,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7432,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7433,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7434,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7435,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7626,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7627,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7628,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7629,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7647,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7648,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7649,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7651,
ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureInternal_raw,
// token 7653,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7702,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7773,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 7775,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 7784,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7785,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7786,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 7787,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8087,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8089,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8090,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8113,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8127,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8134,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8141,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8152,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8155,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8175,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8246,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8253,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8255,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8261,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8275,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8295,
ves_icall_reflection_get_token_raw,
// token 8296,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8304,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8306,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8313,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8314,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8317,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8319,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8324,
ves_icall_reflection_get_token_raw,
// token 8330,
ves_icall_get_method_info_raw,
// token 8331,
ves_icall_get_method_attributes,
// token 8338,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8340,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8352,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8355,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8356,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8357,
ves_icall_reflection_get_token_raw,
// token 8368,
ves_icall_InternalInvoke_raw,
// token 8377,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8383,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8384,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8385,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8387,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8388,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8405,
ves_icall_InvokeClassConstructor_raw,
// token 8407,
ves_icall_InternalInvoke_raw,
// token 8421,
ves_icall_reflection_get_token_raw,
// token 8438,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8465,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8490,
ves_icall_reflection_get_token_raw,
// token 8491,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 8907,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 8988,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 8989,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9131,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9132,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9136,
ves_icall_ModuleBuilder_getToken_raw,
// token 9139,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9200,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9694,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9695,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10105,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10115,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 10615,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10636,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10638,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10640,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
