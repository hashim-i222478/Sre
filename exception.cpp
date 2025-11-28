// Ghidra Decompiled Class: exception
#include "ghidra_types.h"

// Class Definition (Pseudo)
class exception {
    // Detected Methods: 2
};

// --------------------------------------------------
// Name: exception
// Address: 140004870
// --------------------------------------------------

/* Library Function - Single Match
    public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
   
   Library: Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  FUN_1401ca38c(param_1 + 8);
  return this;
}



// --------------------------------------------------
// Name: `scalar_deleting_destructor'
// Address: 140004a80
// --------------------------------------------------

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl std::exception::`scalar deleting destructor'(unsigned
   int) __ptr64
   
   Library: Visual Studio 2019 Release */

void * __thiscall std::exception::_scalar_deleting_destructor_(exception *this,uint param_1)

{
  *(undefined ***)this = vftable;
  FUN_1401ca40c(this + 8);
  if ((param_1 & 1) != 0) {
    thunk_FUN_14004ca00(this,0x18);
  }
  return this;
}



