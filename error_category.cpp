// Ghidra Decompiled Class: error_category
#include "ghidra_types.h"

// Class Definition (Pseudo)
class error_category {
    // Detected Methods: 1
};

// --------------------------------------------------
// Name: equivalent
// Address: 1401c8a90
// --------------------------------------------------

/* Library Function - Single Match
    public: virtual bool __cdecl std::error_category::equivalent(int,class std::error_condition
   const & __ptr64)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
std::error_category::equivalent(error_category *this,int param_1,error_condition *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined1 local_18 [16];
  
  piVar2 = (int *)(*(code *)PTR__guard_dispatch_icall_1401f6068)(this,local_18,param_1);
  if ((*(longlong *)(*(longlong *)(piVar2 + 2) + 8) == *(longlong *)(*(longlong *)(param_2 + 8) + 8)
      ) && (*piVar2 == *(int *)param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



