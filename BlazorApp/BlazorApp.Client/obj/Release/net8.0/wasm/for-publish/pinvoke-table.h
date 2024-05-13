// GENERATED FILE, DO NOT MODIFY

int CompressionNative_Crc32 (int,int,int);
int CompressionNative_Deflate (int,int);
int CompressionNative_DeflateEnd (int);
int CompressionNative_DeflateInit2_ (int,int,int,int,int,int);
int CompressionNative_Inflate (int,int);
int CompressionNative_InflateEnd (int);
int CompressionNative_InflateInit2_ (int,int);
void GlobalizationNative_ChangeCase (int,int,int,int,int);
void GlobalizationNative_ChangeCaseInvariant (int,int,int,int,int);
void GlobalizationNative_ChangeCaseTurkish (int,int,int,int,int);
void GlobalizationNative_CloseSortHandle (int);
int GlobalizationNative_CompareString (int,int,int,int,int,int);
int GlobalizationNative_EndsWith (int,int,int,int,int,int,int);
int GlobalizationNative_EnumCalendarInfo (int,int,int,int,int);
int GlobalizationNative_GetCalendarInfo (int,int,int,int,int);
int GlobalizationNative_GetCalendars (int,int,int);
int GlobalizationNative_GetDefaultLocaleName (int,int);
int GlobalizationNative_GetJapaneseEraStartDate (int,int,int,int);
int GlobalizationNative_GetLatestJapaneseEra ();
int GlobalizationNative_GetLocaleInfoGroupingSizes (int,int,int,int);
int GlobalizationNative_GetLocaleInfoInt (int,int,int);
int GlobalizationNative_GetLocaleInfoString (int,int,int,int,int);
int GlobalizationNative_GetLocaleName (int,int,int);
int GlobalizationNative_GetLocaleTimeFormat (int,int,int,int);
int GlobalizationNative_GetSortHandle (int,int);
int GlobalizationNative_GetSortKey (int,int,int,int,int,int);
int GlobalizationNative_IndexOf (int,int,int,int,int,int,int);
void GlobalizationNative_InitICUFunctions (int,int,int,int);
void GlobalizationNative_InitOrdinalCasingPage (int,int);
int GlobalizationNative_IsPredefinedLocale (int);
int GlobalizationNative_LastIndexOf (int,int,int,int,int,int,int);
int GlobalizationNative_LoadICU ();
int GlobalizationNative_NormalizeString (int,int,int,int,int);
int GlobalizationNative_StartsWith (int,int,int,int,int,int,int);
int GlobalizationNative_ToAscii (int,int,int,int,int);
int GlobalizationNative_ToUnicode (int,int,int,int,int);
int SystemNative_CanGetHiddenFlag ();
int SystemNative_Close (int);
int SystemNative_CloseDir (int);
int SystemNative_ConvertErrorPalToPlatform (int);
int SystemNative_ConvertErrorPlatformToPal (int);
int SystemNative_Dup (int);
int SystemNative_FAllocate (int,int64_t,int64_t);
int SystemNative_FLock (int,int);
void SystemNative_Free (int);
int SystemNative_FStat (int,int);
int SystemNative_FSync (int);
int SystemNative_FTruncate (int,int64_t);
int SystemNative_FUTimens (int,int);
int SystemNative_GetCryptographicallySecureRandomBytes (int,int);
int SystemNative_GetCwd (int,int);
int SystemNative_GetEnv (int);
int SystemNative_GetErrNo ();
int SystemNative_GetFileSystemType (int);
void SystemNative_GetNonCryptographicallySecureRandomBytes (int,int);
int SystemNative_GetReadDirRBufferSize ();
int64_t SystemNative_GetSystemTimeAsTicks ();
uint64_t SystemNative_GetTimestamp ();
int SystemNative_GetTimeZoneData (int,int);
int SystemNative_LChflagsCanSetHiddenFlag ();
void SystemNative_LowLevelMonitor_Acquire (int);
int SystemNative_LowLevelMonitor_Create ();
void SystemNative_LowLevelMonitor_Destroy (int);
void SystemNative_LowLevelMonitor_Release (int);
void SystemNative_LowLevelMonitor_Signal_Release (int);
int SystemNative_LowLevelMonitor_TimedWait (int,int);
void SystemNative_LowLevelMonitor_Wait (int);
int64_t SystemNative_LSeek (int,int64_t,int);
int SystemNative_LStat (int,int);
int SystemNative_Malloc (int);
int SystemNative_MkDir (int,int);
int SystemNative_Open (int,int,int);
int SystemNative_OpenDir (int);
int SystemNative_PosixFAdvise (int,int64_t,int64_t,int);
int SystemNative_PRead (int,int,int,int64_t);
int64_t SystemNative_PReadV (int,int,int,int64_t);
int SystemNative_PWrite (int,int,int,int64_t);
int64_t SystemNative_PWriteV (int,int,int,int64_t);
int SystemNative_Read (int,int,int);
int SystemNative_ReadDirR (int,int,int,int);
int SystemNative_ReadLink (int,int,int);
int SystemNative_RmDir (int);
int SystemNative_SchedGetCpu ();
void SystemNative_SetErrNo (int);
int SystemNative_Stat (int,int);
int SystemNative_StrErrorR (int,int,int);
int SystemNative_Unlink (int);
int SystemNative_UTimensat (int,int);
int SystemNative_Write (int,int,int);
void whisper_free (int);
void whisper_free_params (int);
void whisper_free_state (int);
int whisper_full (int,int,int,int);
int whisper_full_default_params (int);
int whisper_full_default_params_by_ref (int);
int whisper_full_get_segment_speaker_turn_next (int,int);
int whisper_full_get_segment_speaker_turn_next_from_state (int,int);
int64_t whisper_full_get_segment_t0_from_state (int,int);
int64_t whisper_full_get_segment_t1_from_state (int,int);
int whisper_full_get_segment_text_from_state (int,int);
float whisper_full_get_token_p_from_state (int,int,int);
int whisper_full_lang_id (int);
int whisper_full_lang_id_from_state (int);
int whisper_full_n_segments_from_state (int);
int whisper_full_n_tokens_from_state (int,int);
int whisper_full_parallel (int,int,int,int,int);
int whisper_full_with_state (int,int,int,int,int);
int whisper_init_from_buffer_with_params_no_state (int,int,int);
int whisper_init_from_file_with_params_no_state (int,int);
int whisper_init_state (int);
int whisper_lang_auto_detect_with_state (int,int,int,int,int);
int whisper_lang_max_id ();
int whisper_lang_str (int);
void whisper_log_set (int,int);
int whisper_pcm_to_mel_phase_vocoder_with_state (int,int,int,int,int);
int whisper_pcm_to_mel_with_state (int,int,int,int,int);
int whisper_tokenize (int,int,int,int);
static PinvokeImport whisper_imports [] = {
{"whisper_free", whisper_free}, // Whisper.net
{"whisper_free_params", whisper_free_params}, // Whisper.net
{"whisper_free_state", whisper_free_state}, // Whisper.net
{"whisper_full", whisper_full}, // Whisper.net
{"whisper_full_default_params", whisper_full_default_params}, // Whisper.net
{"whisper_full_default_params_by_ref", whisper_full_default_params_by_ref}, // Whisper.net
{"whisper_full_get_segment_speaker_turn_next", whisper_full_get_segment_speaker_turn_next}, // Whisper.net
{"whisper_full_get_segment_speaker_turn_next_from_state", whisper_full_get_segment_speaker_turn_next_from_state}, // Whisper.net
{"whisper_full_get_segment_t0_from_state", whisper_full_get_segment_t0_from_state}, // Whisper.net
{"whisper_full_get_segment_t1_from_state", whisper_full_get_segment_t1_from_state}, // Whisper.net
{"whisper_full_get_segment_text_from_state", whisper_full_get_segment_text_from_state}, // Whisper.net
{"whisper_full_get_token_p_from_state", whisper_full_get_token_p_from_state}, // Whisper.net
{"whisper_full_lang_id", whisper_full_lang_id}, // Whisper.net
{"whisper_full_lang_id_from_state", whisper_full_lang_id_from_state}, // Whisper.net
{"whisper_full_n_segments_from_state", whisper_full_n_segments_from_state}, // Whisper.net
{"whisper_full_n_tokens_from_state", whisper_full_n_tokens_from_state}, // Whisper.net
{"whisper_full_parallel", whisper_full_parallel}, // Whisper.net
{"whisper_full_with_state", whisper_full_with_state}, // Whisper.net
{"whisper_init_from_buffer_with_params_no_state", whisper_init_from_buffer_with_params_no_state}, // Whisper.net
{"whisper_init_from_file_with_params_no_state", whisper_init_from_file_with_params_no_state}, // Whisper.net
{"whisper_init_state", whisper_init_state}, // Whisper.net
{"whisper_lang_auto_detect_with_state", whisper_lang_auto_detect_with_state}, // Whisper.net
{"whisper_lang_max_id", whisper_lang_max_id}, // Whisper.net
{"whisper_lang_str", whisper_lang_str}, // Whisper.net
{"whisper_log_set", whisper_log_set}, // Whisper.net
{"whisper_pcm_to_mel_phase_vocoder_with_state", whisper_pcm_to_mel_phase_vocoder_with_state}, // Whisper.net
{"whisper_pcm_to_mel_with_state", whisper_pcm_to_mel_with_state}, // Whisper.net
{"whisper_tokenize", whisper_tokenize}, // Whisper.net
{NULL, NULL}
};
static PinvokeImport libSystem_Native_imports [] = {
{"SystemNative_CanGetHiddenFlag", SystemNative_CanGetHiddenFlag}, // System.Private.CoreLib
{"SystemNative_Close", SystemNative_Close}, // System.Private.CoreLib
{"SystemNative_CloseDir", SystemNative_CloseDir}, // System.Private.CoreLib
{"SystemNative_ConvertErrorPalToPlatform", SystemNative_ConvertErrorPalToPlatform}, // System.Console, System.Private.CoreLib
{"SystemNative_ConvertErrorPlatformToPal", SystemNative_ConvertErrorPlatformToPal}, // System.Console, System.Private.CoreLib
{"SystemNative_Dup", SystemNative_Dup}, // System.Console
{"SystemNative_FAllocate", SystemNative_FAllocate}, // System.Private.CoreLib
{"SystemNative_FLock", SystemNative_FLock}, // System.Private.CoreLib
{"SystemNative_Free", SystemNative_Free}, // System.Private.CoreLib
{"SystemNative_FStat", SystemNative_FStat}, // System.Private.CoreLib
{"SystemNative_FSync", SystemNative_FSync}, // System.Private.CoreLib
{"SystemNative_FTruncate", SystemNative_FTruncate}, // System.Private.CoreLib
{"SystemNative_FUTimens", SystemNative_FUTimens}, // System.Private.CoreLib
{"SystemNative_GetCryptographicallySecureRandomBytes", SystemNative_GetCryptographicallySecureRandomBytes}, // System.Private.CoreLib
{"SystemNative_GetCwd", SystemNative_GetCwd}, // System.Private.CoreLib
{"SystemNative_GetEnv", SystemNative_GetEnv}, // System.Private.CoreLib
{"SystemNative_GetErrNo", SystemNative_GetErrNo}, // System.Private.CoreLib
{"SystemNative_GetFileSystemType", SystemNative_GetFileSystemType}, // System.Private.CoreLib
{"SystemNative_GetNonCryptographicallySecureRandomBytes", SystemNative_GetNonCryptographicallySecureRandomBytes}, // System.Private.CoreLib
{"SystemNative_GetReadDirRBufferSize", SystemNative_GetReadDirRBufferSize}, // System.Private.CoreLib
{"SystemNative_GetSystemTimeAsTicks", SystemNative_GetSystemTimeAsTicks}, // System.Private.CoreLib
{"SystemNative_GetTimestamp", SystemNative_GetTimestamp}, // System.Private.CoreLib
{"SystemNative_GetTimeZoneData", SystemNative_GetTimeZoneData}, // System.Private.CoreLib
{"SystemNative_LChflagsCanSetHiddenFlag", SystemNative_LChflagsCanSetHiddenFlag}, // System.Private.CoreLib
{"SystemNative_LowLevelMonitor_Acquire", SystemNative_LowLevelMonitor_Acquire}, // System.Private.CoreLib
{"SystemNative_LowLevelMonitor_Create", SystemNative_LowLevelMonitor_Create}, // System.Private.CoreLib
{"SystemNative_LowLevelMonitor_Destroy", SystemNative_LowLevelMonitor_Destroy}, // System.Private.CoreLib
{"SystemNative_LowLevelMonitor_Release", SystemNative_LowLevelMonitor_Release}, // System.Private.CoreLib
{"SystemNative_LowLevelMonitor_Signal_Release", SystemNative_LowLevelMonitor_Signal_Release}, // System.Private.CoreLib
{"SystemNative_LowLevelMonitor_TimedWait", SystemNative_LowLevelMonitor_TimedWait}, // System.Private.CoreLib
{"SystemNative_LowLevelMonitor_Wait", SystemNative_LowLevelMonitor_Wait}, // System.Private.CoreLib
{"SystemNative_LSeek", SystemNative_LSeek}, // System.Private.CoreLib
{"SystemNative_LStat", SystemNative_LStat}, // System.Private.CoreLib
{"SystemNative_Malloc", SystemNative_Malloc}, // System.Private.CoreLib
{"SystemNative_MkDir", SystemNative_MkDir}, // System.Private.CoreLib
{"SystemNative_Open", SystemNative_Open}, // System.Private.CoreLib
{"SystemNative_OpenDir", SystemNative_OpenDir}, // System.Private.CoreLib
{"SystemNative_PosixFAdvise", SystemNative_PosixFAdvise}, // System.Private.CoreLib
{"SystemNative_PRead", SystemNative_PRead}, // System.Private.CoreLib
{"SystemNative_PReadV", SystemNative_PReadV}, // System.Private.CoreLib
{"SystemNative_PWrite", SystemNative_PWrite}, // System.Private.CoreLib
{"SystemNative_PWriteV", SystemNative_PWriteV}, // System.Private.CoreLib
{"SystemNative_Read", SystemNative_Read}, // System.Private.CoreLib
{"SystemNative_ReadDirR", SystemNative_ReadDirR}, // System.Private.CoreLib
{"SystemNative_ReadLink", SystemNative_ReadLink}, // System.Private.CoreLib
{"SystemNative_RmDir", SystemNative_RmDir}, // System.Private.CoreLib
{"SystemNative_SchedGetCpu", SystemNative_SchedGetCpu}, // System.Private.CoreLib
{"SystemNative_SetErrNo", SystemNative_SetErrNo}, // System.Private.CoreLib
{"SystemNative_Stat", SystemNative_Stat}, // System.Private.CoreLib
{"SystemNative_StrErrorR", SystemNative_StrErrorR}, // System.Console, System.Private.CoreLib
{"SystemNative_Unlink", SystemNative_Unlink}, // System.Private.CoreLib
{"SystemNative_UTimensat", SystemNative_UTimensat}, // System.Private.CoreLib
{"SystemNative_Write", SystemNative_Write}, // System.Console, System.Private.CoreLib
{NULL, NULL}
};
static PinvokeImport libSystem_IO_Compression_Native_imports [] = {
{"CompressionNative_Crc32", CompressionNative_Crc32}, // System.IO.Compression
{"CompressionNative_Deflate", CompressionNative_Deflate}, // System.IO.Compression
{"CompressionNative_DeflateEnd", CompressionNative_DeflateEnd}, // System.IO.Compression
{"CompressionNative_DeflateInit2_", CompressionNative_DeflateInit2_}, // System.IO.Compression
{"CompressionNative_Inflate", CompressionNative_Inflate}, // System.IO.Compression
{"CompressionNative_InflateEnd", CompressionNative_InflateEnd}, // System.IO.Compression
{"CompressionNative_InflateInit2_", CompressionNative_InflateInit2_}, // System.IO.Compression
{NULL, NULL}
};
static PinvokeImport libSystem_Globalization_Native_imports [] = {
{"GlobalizationNative_ChangeCase", GlobalizationNative_ChangeCase}, // System.Private.CoreLib
{"GlobalizationNative_ChangeCaseInvariant", GlobalizationNative_ChangeCaseInvariant}, // System.Private.CoreLib
{"GlobalizationNative_ChangeCaseTurkish", GlobalizationNative_ChangeCaseTurkish}, // System.Private.CoreLib
{"GlobalizationNative_CloseSortHandle", GlobalizationNative_CloseSortHandle}, // System.Private.CoreLib
{"GlobalizationNative_CompareString", GlobalizationNative_CompareString}, // System.Private.CoreLib
{"GlobalizationNative_EndsWith", GlobalizationNative_EndsWith}, // System.Private.CoreLib
{"GlobalizationNative_EnumCalendarInfo", GlobalizationNative_EnumCalendarInfo}, // System.Private.CoreLib
{"GlobalizationNative_GetCalendarInfo", GlobalizationNative_GetCalendarInfo}, // System.Private.CoreLib
{"GlobalizationNative_GetCalendars", GlobalizationNative_GetCalendars}, // System.Private.CoreLib
{"GlobalizationNative_GetDefaultLocaleName", GlobalizationNative_GetDefaultLocaleName}, // System.Private.CoreLib
{"GlobalizationNative_GetJapaneseEraStartDate", GlobalizationNative_GetJapaneseEraStartDate}, // System.Private.CoreLib
{"GlobalizationNative_GetLatestJapaneseEra", GlobalizationNative_GetLatestJapaneseEra}, // System.Private.CoreLib
{"GlobalizationNative_GetLocaleInfoGroupingSizes", GlobalizationNative_GetLocaleInfoGroupingSizes}, // System.Private.CoreLib
{"GlobalizationNative_GetLocaleInfoInt", GlobalizationNative_GetLocaleInfoInt}, // System.Private.CoreLib
{"GlobalizationNative_GetLocaleInfoString", GlobalizationNative_GetLocaleInfoString}, // System.Private.CoreLib
{"GlobalizationNative_GetLocaleName", GlobalizationNative_GetLocaleName}, // System.Private.CoreLib
{"GlobalizationNative_GetLocaleTimeFormat", GlobalizationNative_GetLocaleTimeFormat}, // System.Private.CoreLib
{"GlobalizationNative_GetSortHandle", GlobalizationNative_GetSortHandle}, // System.Private.CoreLib
{"GlobalizationNative_GetSortKey", GlobalizationNative_GetSortKey}, // System.Private.CoreLib
{"GlobalizationNative_IndexOf", GlobalizationNative_IndexOf}, // System.Private.CoreLib
{"GlobalizationNative_InitICUFunctions", GlobalizationNative_InitICUFunctions}, // System.Private.CoreLib
{"GlobalizationNative_InitOrdinalCasingPage", GlobalizationNative_InitOrdinalCasingPage}, // System.Private.CoreLib
{"GlobalizationNative_IsPredefinedLocale", GlobalizationNative_IsPredefinedLocale}, // System.Private.CoreLib
{"GlobalizationNative_LastIndexOf", GlobalizationNative_LastIndexOf}, // System.Private.CoreLib
{"GlobalizationNative_LoadICU", GlobalizationNative_LoadICU}, // System.Private.CoreLib
{"GlobalizationNative_NormalizeString", GlobalizationNative_NormalizeString}, // System.Private.CoreLib
{"GlobalizationNative_StartsWith", GlobalizationNative_StartsWith}, // System.Private.CoreLib
{"GlobalizationNative_ToAscii", GlobalizationNative_ToAscii}, // System.Private.CoreLib
{"GlobalizationNative_ToUnicode", GlobalizationNative_ToUnicode}, // System.Private.CoreLib
{NULL, NULL}
};
static void *pinvoke_tables[] = { whisper_imports,libSystem_Native_imports,libSystem_IO_Compression_Native_imports,libSystem_Globalization_Native_imports,};
static char *pinvoke_names[] = { "whisper","libSystem.Native","libSystem.IO.Compression.Native","libSystem.Globalization.Native",};
InterpFtnDesc wasm_native_to_interp_ftndescs[9];
typedef void  (*WasmInterpEntrySig_0) (int*,int*,int*);
int wasm_native_to_interp_Whisper_net_WhisperProcessor_OnWhisperAbortStatic (int arg0) { 
int res;
((WasmInterpEntrySig_0)wasm_native_to_interp_ftndescs [0].func) ((int*)&res, (int*)&arg0, wasm_native_to_interp_ftndescs [0].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_1) (int*,int*,int*,int*,int*);
void wasm_native_to_interp_Whisper_net_WhisperProcessor_OnNewSegmentStatic (int arg0,int arg1,int arg2,int arg3) { 
((WasmInterpEntrySig_1)wasm_native_to_interp_ftndescs [1].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, wasm_native_to_interp_ftndescs [1].arg);
}
typedef void  (*WasmInterpEntrySig_2) (int*,int*,int*,int*,int*);
int wasm_native_to_interp_Whisper_net_WhisperProcessor_OnEncoderBeginStatic (int arg0,int arg1,int arg2) { 
int res;
((WasmInterpEntrySig_2)wasm_native_to_interp_ftndescs [2].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, wasm_native_to_interp_ftndescs [2].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_3) (int*,int*,int*,int*,int*);
void wasm_native_to_interp_Whisper_net_WhisperProcessor_OnProgressStatic (int arg0,int arg1,int arg2,int arg3) { 
((WasmInterpEntrySig_3)wasm_native_to_interp_ftndescs [3].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, wasm_native_to_interp_ftndescs [3].arg);
}
typedef void  (*WasmInterpEntrySig_4) (int*,int*,int*,int*);
void wasm_native_to_interp_Whisper_net_LogProvider_LogUnmanaged (int arg0,int arg1,int arg2) { 
((WasmInterpEntrySig_4)wasm_native_to_interp_ftndescs [4].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, wasm_native_to_interp_ftndescs [4].arg);
}
typedef void  (*WasmInterpEntrySig_5) (int*,int*,int*,int*,int*,int*,int*,int*);
int wasm_native_to_interp_System_Private_CoreLib_ComponentActivator_GetFunctionPointer (int arg0,int arg1,int arg2,int arg3,int arg4,int arg5) { 
int res;
((WasmInterpEntrySig_5)wasm_native_to_interp_ftndescs [5].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, wasm_native_to_interp_ftndescs [5].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_6) (int*,int*,int*);
void wasm_native_to_interp_System_Private_CoreLib_CalendarData_EnumCalendarInfoCallback (int arg0,int arg1) { 
((WasmInterpEntrySig_6)wasm_native_to_interp_ftndescs [6].func) ((int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [6].arg);
}
typedef void  (*WasmInterpEntrySig_7) (int*);
void wasm_native_to_interp_System_Private_CoreLib_TimerQueue_TimerHandler () { 
((WasmInterpEntrySig_7)wasm_native_to_interp_ftndescs [7].func) (wasm_native_to_interp_ftndescs [7].arg);
}
typedef void  (*WasmInterpEntrySig_8) (int*);
void wasm_native_to_interp_System_Private_CoreLib_ThreadPool_BackgroundJobHandler () { 
((WasmInterpEntrySig_8)wasm_native_to_interp_ftndescs [8].func) (wasm_native_to_interp_ftndescs [8].arg);
}
static void *wasm_native_to_interp_funcs[] = { wasm_native_to_interp_Whisper_net_WhisperProcessor_OnWhisperAbortStatic,wasm_native_to_interp_Whisper_net_WhisperProcessor_OnNewSegmentStatic,wasm_native_to_interp_Whisper_net_WhisperProcessor_OnEncoderBeginStatic,wasm_native_to_interp_Whisper_net_WhisperProcessor_OnProgressStatic,wasm_native_to_interp_Whisper_net_LogProvider_LogUnmanaged,wasm_native_to_interp_System_Private_CoreLib_ComponentActivator_GetFunctionPointer,wasm_native_to_interp_System_Private_CoreLib_CalendarData_EnumCalendarInfoCallback,wasm_native_to_interp_System_Private_CoreLib_TimerQueue_TimerHandler,wasm_native_to_interp_System_Private_CoreLib_ThreadPool_BackgroundJobHandler,};
static const char *wasm_native_to_interp_map[] = { "Whisper_net_WhisperProcessor_OnWhisperAbortStatic",
"Whisper_net_WhisperProcessor_OnNewSegmentStatic",
"Whisper_net_WhisperProcessor_OnEncoderBeginStatic",
"Whisper_net_WhisperProcessor_OnProgressStatic",
"Whisper_net_LogProvider_LogUnmanaged",
"System_Private_CoreLib_ComponentActivator_GetFunctionPointer",
"System_Private_CoreLib_CalendarData_EnumCalendarInfoCallback",
"System_Private_CoreLib_TimerQueue_TimerHandler",
"System_Private_CoreLib_ThreadPool_BackgroundJobHandler",
};
