// Ghidra Decompiled Class: _com_error
#include "ghidra_types.h"

// Class Definition (Pseudo)
class _com_error {
    // Detected Methods: 1
};

// --------------------------------------------------
// Name: _com_error
// Address: 1401c8e00
// --------------------------------------------------

/* Library Function - Single Match
    public: __cdecl _com_error::_com_error(class _com_error const & __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_com_error * __thiscall _com_error::_com_error(_com_error *this,_com_error *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this = &PTR_FUN_140214910;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(longlong *)(this + 0x10) = lVar1;
  *(undefined8 *)(this + 0x18) = 0;
  if (lVar1 != 0) {
    (*(code *)PTR__guard_dispatch_icall_1401f6068)();
  }
  return this;
}



