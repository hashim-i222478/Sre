// Ghidra Decompiled Class: __FrameHandler3
#include "ghidra_types.h"

// Class Definition (Pseudo)
class __FrameHandler3 {
    // Detected Methods: 5
};

// --------------------------------------------------
// Name: FrameUnwindToEmptyState
// Address: 1401ca748
// --------------------------------------------------

/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::FrameUnwindToEmptyState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
__FrameHandler3::FrameUnwindToEmptyState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar1 = FUN_1401ca7e0();
  uVar2 = FUN_1401cbbe4(param_3,param_2);
  lVar3 = FUN_1401ca584(param_3,uVar2);
  if (lVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(lVar3 + 4);
  }
  FUN_1401ce3e0(uVar1,param_2,param_3,uVar2);
  return;
}



// --------------------------------------------------
// Name: GetUnwindTryBlock
// Address: 1401cbb70
// --------------------------------------------------

/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__FrameHandler3::GetUnwindTryBlock
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1401ca7e0();
  return *(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1);
}



// --------------------------------------------------
// Name: SetState
// Address: 1401cbb9c
// --------------------------------------------------

/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::SetState(unsigned __int64 * __ptr64,struct
   _s_FuncInfo const * __ptr64,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __FrameHandler3::SetState(__uint64 *param_1,_s_FuncInfo *param_2,int param_3)

{
  *(int *)((longlong)param_2->dispUnwindHelp + *param_1) = param_3;
  return;
}



// --------------------------------------------------
// Name: SetUnwindTryBlock
// Address: 1401cbba8
// --------------------------------------------------

/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::SetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
__FrameHandler3::SetUnwindTryBlock
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3,int param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1401ca7e0();
  if (*(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1) < param_4) {
    *(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1) = param_4;
  }
  return;
}



// --------------------------------------------------
// Name: GetHandlerSearchState
// Address: 1401ce878
// --------------------------------------------------

/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetHandlerSearchState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__FrameHandler3::GetHandlerSearchState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  int iVar1;
  int iVar2;
  __uint64 local_res20;
  
  iVar1 = FUN_1401cbbe4(param_3);
  FUN_1401ca7e0(param_1,param_2,param_3,&local_res20);
  iVar2 = GetUnwindTryBlock(param_1,param_2,param_3);
  if (iVar2 < iVar1) {
    SetState(&local_res20,param_3,iVar1);
    SetUnwindTryBlock(param_1,param_2,param_3,iVar1);
  }
  else {
    iVar1 = GetUnwindTryBlock(param_1,param_2,param_3);
  }
  return iVar1;
}



