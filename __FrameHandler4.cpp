// Ghidra Decompiled Class: __FrameHandler4
#include "ghidra_types.h"

// Class Definition (Pseudo)
class __FrameHandler4 {
    // Detected Methods: 1
};

// --------------------------------------------------
// Name: FrameUnwindToEmptyState
// Address: 1401ca7ac
// --------------------------------------------------

/* Library Function - Single Match
    public: static void __cdecl __FrameHandler4::FrameUnwindToEmptyState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct FH4::FuncInfo4 * __ptr64)
   
   Library: Visual Studio 2019 Release */

void __cdecl
__FrameHandler4::FrameUnwindToEmptyState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,FuncInfo4 *param_3)

{
  __uint64 local_res8 [4];
  
  local_res8[0] = *param_1;
  if (((byte)*param_3 & 1) != 0) {
    local_res8[0] = *(__uint64 *)(*(uint *)(param_3 + 0x14) + local_res8[0]);
  }
  FUN_1401ce56c(local_res8,param_2,param_3,0xffffffff);
  return;
}



