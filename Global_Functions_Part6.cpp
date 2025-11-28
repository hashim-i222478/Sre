// Ghidra Global Functions - Part 6
#include "ghidra_types.h"

// --------------------------------------------------
// Name: FUN_1401f32aa
// Address: 1401f32aa
// --------------------------------------------------

bool FUN_1401f32aa(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



// --------------------------------------------------
// Name: FUN_1401f32c2
// Address: 1401f32c2
// --------------------------------------------------

void FUN_1401f32c2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    FUN_1401c99e8(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),
                  *(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x70));
  }
  return;
}



// --------------------------------------------------
// Name: FUN_1401f32ee
// Address: 1401f32ee
// --------------------------------------------------

void FUN_1401f32ee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    FUN_1401c99e8(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68),
                  *(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x78));
  }
  return;
}



// --------------------------------------------------
// Name: FUN_1401f331a
// Address: 1401f331a
// --------------------------------------------------

ulonglong FUN_1401f331a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30);
  if (**(int **)(param_2 + 0x28) == -0x1f928c9d) {
    puVar2 = (undefined8 *)FUN_1401cb934();
    *puVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
    puVar2 = (undefined8 *)FUN_1401cb948();
    *puVar2 = uVar1;
    uVar3 = FUN_1401dc0a8();
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = 0;
    uVar3 = (ulonglong)*(uint *)(param_2 + 0x20);
  }
  return uVar3;
}



// --------------------------------------------------
// Name: FUN_1401f3375
// Address: 1401f3375
// --------------------------------------------------

undefined8 FUN_1401f3375(void)

{
  return 0;
}



// --------------------------------------------------
// Name: FUN_1401f3393
// Address: 1401f3393
// --------------------------------------------------

void FUN_1401f3393(undefined8 *param_1)

{
  FUN_1401daf9c(*(undefined4 *)*param_1,param_1);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f33b1
// Address: 1401f33b1
// --------------------------------------------------

undefined4 FUN_1401f33b1(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_2 + 0x48) = param_1;
  lVar2 = __vcrt_getptd();
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  lVar2 = *(longlong *)(param_2 + 0x88);
  uVar1 = *(undefined8 *)(lVar2 + 8);
  lVar3 = __vcrt_getptd();
  *(undefined8 *)(lVar3 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  lVar3 = __vcrt_getptd();
  *(undefined8 *)(lVar3 + 0x68) = uVar1;
  thunk_FUN_1401cd660(**(undefined8 **)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x78),
                      *(undefined8 *)(param_2 + 0x80),lVar2,*(undefined8 *)(param_2 + 0x90),0,0,1);
  lVar2 = __vcrt_getptd();
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  *(undefined4 *)(param_2 + 0x44) = 1;
  return *(undefined4 *)(param_2 + 0x44);
}



// --------------------------------------------------
// Name: FUN_1401f3458
// Address: 1401f3458
// --------------------------------------------------

undefined4 FUN_1401f3458(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_2 + 0x48) = param_1;
  lVar2 = __vcrt_getptd();
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  lVar2 = *(longlong *)(param_2 + 0x88);
  uVar1 = *(undefined8 *)(lVar2 + 8);
  lVar3 = __vcrt_getptd();
  *(undefined8 *)(lVar3 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  lVar3 = __vcrt_getptd();
  *(undefined8 *)(lVar3 + 0x68) = uVar1;
  lVar3 = __vcrt_getptd();
  *(undefined4 *)(lVar3 + 0x78) = *(undefined4 *)(param_2 + 0xa8);
  FUN_1401cdb40(**(undefined8 **)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x78),
                *(undefined8 *)(param_2 + 0x80),lVar2,*(undefined8 *)(param_2 + 0x90),0,0,1);
  lVar2 = __vcrt_getptd();
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  *(undefined4 *)(param_2 + 0x44) = 1;
  return *(undefined4 *)(param_2 + 0x44);
}



// --------------------------------------------------
// Name: FUN_1401f350d
// Address: 1401f350d
// --------------------------------------------------

undefined4 FUN_1401f350d(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_2 + 0x30) = param_1;
  if (*(char *)(param_2 + 0x58) != '\0') {
    *(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30);
    if (((**(int **)(param_2 + 0x28) == -0x1f928c9d) &&
        (*(int *)(*(longlong *)(param_2 + 0x28) + 0x18) == 4)) &&
       ((*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930520 ||
        ((*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930521 ||
         (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930522)))))) {
      lVar2 = __vcrt_getptd();
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x28);
      uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
      lVar2 = __vcrt_getptd();
      *(undefined8 *)(lVar2 + 0x28) = uVar1;
      FUN_1401dc0a8();
    }
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  return *(undefined4 *)(param_2 + 0x20);
}



// --------------------------------------------------
// Name: FUN_1401f359f
// Address: 1401f359f
// --------------------------------------------------

void FUN_1401f359f(void)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  *(undefined4 *)(lVar1 + 0x78) = 0xfffffffe;
  return;
}



// --------------------------------------------------
// Name: FUN_1401f35bb
// Address: 1401f35bb
// --------------------------------------------------

void FUN_1401f35bb(undefined8 param_1,longlong param_2)

{
  FUN_1401ce318(param_1,*(undefined8 *)(param_2 + 0xb8),param_2 + 0x20);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f35dc
// Address: 1401f35dc
// --------------------------------------------------

void FUN_1401f35dc(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  _FindAndUnlinkFrame(*(undefined8 *)(param_2 + 0x38));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0xb8), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    iVar3 = _IsExceptionObjectToBeDestroyed(*(undefined8 *)(piVar1 + 10));
    if (iVar3 != 0) {
      FUN_1401cb800(piVar1,1);
    }
  }
  lVar2 = __vcrt_getptd();
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0xc0);
  lVar2 = __vcrt_getptd();
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x40);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3662
// Address: 1401f3662
// --------------------------------------------------

void FUN_1401f3662(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ExFilterRethrowFH4(param_1,*(EHExceptionRecord **)(param_2 + 0xd8),*(int *)(param_2 + 200),
                     (int *)(param_2 + 0x20));
  return;
}



// --------------------------------------------------
// Name: FUN_1401f368a
// Address: 1401f368a
// --------------------------------------------------

void FUN_1401f368a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  _FindAndUnlinkFrame(*(undefined8 *)(param_2 + 0x40));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0xd8), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    iVar3 = _IsExceptionObjectToBeDestroyed(*(undefined8 *)(piVar1 + 10));
    if (iVar3 != 0) {
      FUN_1401cb800(piVar1,1);
    }
  }
  lVar2 = __vcrt_getptd();
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x30);
  lVar2 = __vcrt_getptd();
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x48);
  lVar2 = __vcrt_getptd();
  *(undefined4 *)(lVar2 + 0x78) = *(undefined4 *)(param_2 + 0xc0);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f371b
// Address: 1401f371b
// --------------------------------------------------

void FUN_1401f371b(void)

{
  __FrameUnwindFilter();
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3731
// Address: 1401f3731
// --------------------------------------------------

void FUN_1401f3731(void)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = __vcrt_getptd();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3754
// Address: 1401f3754
// --------------------------------------------------

void FUN_1401f3754(void)

{
  __FrameUnwindFilter();
  return;
}



// --------------------------------------------------
// Name: fin$1
// Address: 1401f376a
// --------------------------------------------------

/* Library Function - Multiple Matches With Same Base Name
    int `public: static void __cdecl __FrameHandler4::FrameUnwindToState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct FuncInfo4 * __ptr64,int)'::`1'::fin$1
    int `public: static void __cdecl __FrameHandler4::FrameUnwindToState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct FH4::FuncInfo4 * __ptr64,int)'::`1'::fin$1
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void fin_1(void)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = __vcrt_getptd();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}



// --------------------------------------------------
// Name: FUN_1401f378d
// Address: 1401f378d
// --------------------------------------------------

void FUN_1401f378d(undefined8 param_1,longlong param_2)

{
  FUN_1401dae38(*(undefined8 *)(param_2 + 0x40));
  return;
}



// --------------------------------------------------
// Name: FUN_1401f37a5
// Address: 1401f37a5
// --------------------------------------------------

void FUN_1401f37a5(undefined8 param_1,longlong param_2)

{
  FUN_1401dae38(*(undefined8 *)(param_2 + 0x58));
  return;
}



// --------------------------------------------------
// Name: FUN_1401f37bf
// Address: 1401f37bf
// --------------------------------------------------

void FUN_1401f37bf(undefined8 param_1,longlong param_2)

{
  FUN_1401dae38(**(undefined8 **)(param_2 + 0x48));
  return;
}



// --------------------------------------------------
// Name: FUN_1401f37da
// Address: 1401f37da
// --------------------------------------------------

void FUN_1401f37da(undefined8 *param_1)

{
  FUN_1401daf9c(*(undefined4 *)*param_1,param_1);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f37f8
// Address: 1401f37f8
// --------------------------------------------------

void FUN_1401f37f8(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  if (*(int *)(param_2 + 0x40) != 0) {
    if (*(int *)(param_2 + 0x44) != 0) {
      puVar1 = *(uint **)(param_2 + 0x80);
      *(byte *)((&DAT_14029ffd0)[(longlong)(int)*puVar1 >> 6] + 0x38 +
               (ulonglong)(*puVar1 & 0x3f) * 0x48) =
           *(byte *)((&DAT_14029ffd0)[(longlong)(int)*puVar1 >> 6] + 0x38 +
                    (ulonglong)(*puVar1 & 0x3f) * 0x48) & 0xfe;
    }
    __acrt_lowio_unlock_fh(**(undefined4 **)(param_2 + 0x80));
  }
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3870
// Address: 1401f3870
// --------------------------------------------------

void FUN_1401f3870(undefined8 param_1,longlong param_2)

{
  __acrt_lowio_unlock_fh(*(undefined4 *)(param_2 + 0x60));
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3887
// Address: 1401f3887
// --------------------------------------------------

void FUN_1401f3887(undefined8 param_1,longlong param_2)

{
  __acrt_lowio_unlock_fh(*(undefined4 *)(param_2 + 0x40));
  return;
}



// --------------------------------------------------
// Name: FUN_1401f389e
// Address: 1401f389e
// --------------------------------------------------

void FUN_1401f389e(undefined8 param_1,longlong param_2)

{
  __acrt_lowio_unlock_fh(*(undefined4 *)(param_2 + 0x50));
  return;
}



// --------------------------------------------------
// Name: FUN_1401f38b5
// Address: 1401f38b5
// --------------------------------------------------

void FUN_1401f38b5(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) == 0) {
    __acrt_stdio_free_stream(*(undefined8 *)(param_2 + 0x40));
  }
  FUN_1401dae38(*(undefined8 *)(param_2 + 0x40));
  return;
}



// --------------------------------------------------
// Name: FUN_1401f38e0
// Address: 1401f38e0
// --------------------------------------------------

void FUN_1401f38e0(void)

{
  __acrt_unlock(0xb);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f38f9
// Address: 1401f38f9
// --------------------------------------------------

void FUN_1401f38f9(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(undefined4 **)(param_2 + 0x98));
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3916
// Address: 1401f3916
// --------------------------------------------------

void FUN_1401f3916(undefined8 param_1,longlong param_2)

{
  FUN_1401dae38(*(undefined8 *)(param_2 + 0x60));
  return;
}



// --------------------------------------------------
// Name: FUN_1401f392e
// Address: 1401f392e
// --------------------------------------------------

void FUN_1401f392e(undefined8 param_1,longlong param_2)

{
  FUN_1401dae38(*(undefined8 *)(param_2 + 0x40));
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3950
// Address: 1401f3950
// --------------------------------------------------

void FUN_1401f3950(void)

{
  __acrt_unlock(0);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3966
// Address: 1401f3966
// --------------------------------------------------

void FUN_1401f3966(void)

{
  __acrt_unlock(0);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f397c
// Address: 1401f397c
// --------------------------------------------------

void FUN_1401f397c(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(undefined4 **)(param_2 + 0x48));
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3996
// Address: 1401f3996
// --------------------------------------------------

undefined4 FUN_1401f3996(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined8 **)(param_2 + 0x28) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 0x24) = iVar1;
  *(uint *)(param_2 + 0x20) = (uint)(iVar1 == -0x1f928c9d);
  return *(undefined4 *)(param_2 + 0x20);
}



// --------------------------------------------------
// Name: FUN_1401f39c3
// Address: 1401f39c3
// --------------------------------------------------

void FUN_1401f39c3(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(undefined4 **)(param_2 + 0x58));
  return;
}



// --------------------------------------------------
// Name: FUN_1401f39dd
// Address: 1401f39dd
// --------------------------------------------------

void FUN_1401f39dd(undefined8 param_1,longlong param_2)

{
  __acrt_lowio_unlock_fh(**(undefined4 **)(param_2 + 0x48));
  return;
}



// --------------------------------------------------
// Name: FUN_1401f39f7
// Address: 1401f39f7
// --------------------------------------------------

void FUN_1401f39f7(void)

{
  __acrt_unlock(7);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3a10
// Address: 1401f3a10
// --------------------------------------------------

void FUN_1401f3a10(void)

{
  __acrt_unlock(8);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3a29
// Address: 1401f3a29
// --------------------------------------------------

void FUN_1401f3a29(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) != '\0') {
    __acrt_unlock(3);
  }
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3a4a
// Address: 1401f3a4a
// --------------------------------------------------

void FUN_1401f3a4a(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(undefined4 **)(param_2 + 0x68));
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3a64
// Address: 1401f3a64
// --------------------------------------------------

void FUN_1401f3a64(void)

{
  __acrt_unlock(5);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3a7d
// Address: 1401f3a7d
// --------------------------------------------------

void FUN_1401f3a7d(void)

{
  __acrt_unlock(4);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3aa0
// Address: 1401f3aa0
// --------------------------------------------------

undefined8 FUN_1401f3aa0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined8 **)(param_2 + 0x10) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 8) = iVar1;
  if ((iVar1 == -0x3ffffffb) || (iVar1 == -0x3fffffe3)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// --------------------------------------------------
// Name: _ctrlfp$filt$0
// Address: 1401f3ad0
// --------------------------------------------------

/* Library Function - Single Match
    _ctrlfp$filt$0
   
   Library: Visual Studio 2005 Release */

undefined8 _ctrlfp_filt_0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)*param_1 == -0x3ffffffb) || (*(int *)*param_1 == -0x3fffffe3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// --------------------------------------------------
// Name: FUN_1401f3b00
// Address: 1401f3b00
// --------------------------------------------------

bool FUN_1401f3b00(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



// --------------------------------------------------
// Name: FUN_1401f3b20
// Address: 1401f3b20
// --------------------------------------------------

void FUN_1401f3b20(void)

{
  FUN_140007084(&DAT_140249000);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3b30
// Address: 1401f3b30
// --------------------------------------------------

void FUN_1401f3b30(void)

{
  FUN_140007084(&DAT_140249088);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3b40
// Address: 1401f3b40
// --------------------------------------------------

void FUN_1401f3b40(void)

{
  FUN_140007084(&DAT_1402490a8);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3b50
// Address: 1401f3b50
// --------------------------------------------------

void FUN_1401f3b50(void)

{
  FUN_1400138d4(s_utf8__1402490c8);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3b60
// Address: 1401f3b60
// --------------------------------------------------

void FUN_1401f3b60(void)

{
  FUN_1400723b8(&DAT_140267700);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3b70
// Address: 1401f3b70
// --------------------------------------------------

void FUN_1401f3b70(void)

{
  FUN_14002837c(&DAT_1402680f0);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3b80
// Address: 1401f3b80
// --------------------------------------------------

void FUN_1401f3b80(void)

{
  FUN_140007084(&DAT_140249d98);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3b90
// Address: 1401f3b90
// --------------------------------------------------

void FUN_1401f3b90(void)

{
  FUN_140030cc8(&DAT_140266bd0);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3ba0
// Address: 1401f3ba0
// --------------------------------------------------

void FUN_1401f3ba0(void)

{
  FUN_140007084(&DAT_140267ce8);
  FUN_140007084(&DAT_140267cc8);
  FUN_140007084(&DAT_140267ca8);
  FUN_140007084(&DAT_140267c88);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3be0
// Address: 1401f3be0
// --------------------------------------------------

void FUN_1401f3be0(void)

{
  FUN_140072488(&DAT_140267dc0);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3bf0
// Address: 1401f3bf0
// --------------------------------------------------

void FUN_1401f3bf0(void)

{
  FUN_140007084(&DAT_140249db8);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3c00
// Address: 1401f3c00
// --------------------------------------------------

void FUN_1401f3c00(void)

{
  FUN_140030cc8(&DAT_1402655e0);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3c10
// Address: 1401f3c10
// --------------------------------------------------

void FUN_1401f3c10(void)

{
  FUN_140007084(&DAT_140267d98);
  FUN_140007084(&DAT_140267d78);
  FUN_140007084(&DAT_140267d58);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3c40
// Address: 1401f3c40
// --------------------------------------------------

void FUN_1401f3c40(void)

{
  FUN_140142384(&DAT_140268180);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3c50
// Address: 1401f3c50
// --------------------------------------------------

void FUN_1401f3c50(void)

{
  FUN_140030cc8(&DAT_140266120);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3c60
// Address: 1401f3c60
// --------------------------------------------------

void FUN_1401f3c60(void)

{
  FUN_140013778(&DAT_1402651c0);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3c70
// Address: 1401f3c70
// --------------------------------------------------

void FUN_1401f3c70(void)

{
  if (DAT_140249d30 != 0) {
    FUN_140073a8c();
  }
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3c90
// Address: 1401f3c90
// --------------------------------------------------

void FUN_1401f3c90(void)

{
  FUN_140072194(&DAT_140249d40);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3ca0
// Address: 1401f3ca0
// --------------------------------------------------

void FUN_1401f3ca0(void)

{
  FUN_140007084(&DAT_140249f60);
  FUN_140007084(&DAT_140249f08);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3cd0
// Address: 1401f3cd0
// --------------------------------------------------

void FUN_1401f3cd0(void)

{
  FUN_1401114b4(&DAT_140268578);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3ce0
// Address: 1401f3ce0
// --------------------------------------------------

void FUN_1401f3ce0(void)

{
  FUN_1401114b4(&DAT_140268538);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3cf0
// Address: 1401f3cf0
// --------------------------------------------------

void FUN_1401f3cf0(void)

{
  FUN_1401114b4(&DAT_140268558);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3d00
// Address: 1401f3d00
// --------------------------------------------------

void FUN_1401f3d00(void)

{
  FUN_1400e2ab8(&DAT_140270c60);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3d10
// Address: 1401f3d10
// --------------------------------------------------

void FUN_1401f3d10(void)

{
  FUN_14010ca80(&DAT_140270c50);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3d20
// Address: 1401f3d20
// --------------------------------------------------

void FUN_1401f3d20(void)

{
  FUN_14010a3d0(&DAT_140270d10);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3d30
// Address: 1401f3d30
// --------------------------------------------------

void FUN_1401f3d30(void)

{
  FUN_1400e4274(&DAT_140270da0);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3d40
// Address: 1401f3d40
// --------------------------------------------------

void FUN_1401f3d40(void)

{
  DAT_140270de8 = 1;
  FUN_14010c964(&DAT_140270dd8,&DAT_140270dd8,*(undefined8 *)(DAT_140270dd8 + 8));
  thunk_FUN_14004ca00(DAT_140270dd8,0x48);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3d80
// Address: 1401f3d80
// --------------------------------------------------

void FUN_1401f3d80(void)

{
  if (DAT_140277f10 != (HMODULE)0x0) {
    FreeLibrary(DAT_140277f10);
  }
  DAT_140277f10 = (HMODULE)0x0;
  DAT_140277f20 = 0;
  DAT_140277f28 = 0;
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3dc0
// Address: 1401f3dc0
// --------------------------------------------------

void FUN_1401f3dc0(void)

{
  FUN_140007084(&DAT_140251650);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3dd0
// Address: 1401f3dd0
// --------------------------------------------------

void FUN_1401f3dd0(void)

{
  FUN_1401293a8(&DAT_140251bd0);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3de0
// Address: 1401f3de0
// --------------------------------------------------

void FUN_1401f3de0(void)

{
  FUN_140007084(&DAT_140252950);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3df0
// Address: 1401f3df0
// --------------------------------------------------

void FUN_1401f3df0(void)

{
  FUN_1401114b4(&DAT_140262b78);
  FUN_140007084(&DAT_140262b28);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3e20
// Address: 1401f3e20
// --------------------------------------------------

void FUN_1401f3e20(void)

{
  FUN_1401114b4(&DAT_14027afd0);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3e30
// Address: 1401f3e30
// --------------------------------------------------

void FUN_1401f3e30(void)

{
  FUN_140007084(&DAT_140263088);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3e40
// Address: 1401f3e40
// --------------------------------------------------

void FUN_1401f3e40(void)

{
  FUN_140007084(&DAT_140263110);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3e50
// Address: 1401f3e50
// --------------------------------------------------

void FUN_1401f3e50(void)

{
  FUN_140007084(&DAT_1402630f0);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3e60
// Address: 1401f3e60
// --------------------------------------------------

void FUN_1401f3e60(void)

{
  FUN_140007084(&DAT_140263130);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3e70
// Address: 1401f3e70
// --------------------------------------------------

void FUN_1401f3e70(void)

{
  FUN_140007084(&DAT_140263150);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3e80
// Address: 1401f3e80
// --------------------------------------------------

void FUN_1401f3e80(void)

{
  FUN_140007084(&DAT_1402630b0);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3e90
// Address: 1401f3e90
// --------------------------------------------------

void FUN_1401f3e90(void)

{
  FUN_140007084(&DAT_1402630d0);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3ea0
// Address: 1401f3ea0
// --------------------------------------------------

void FUN_1401f3ea0(void)

{
  FUN_140007084(&DAT_14027b920);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3eb0
// Address: 1401f3eb0
// --------------------------------------------------

void FUN_1401f3eb0(void)

{
  FUN_140007084(&DAT_140263198);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3ec0
// Address: 1401f3ec0
// --------------------------------------------------

void FUN_1401f3ec0(void)

{
  FUN_140007084(&DAT_140263178);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3ed0
// Address: 1401f3ed0
// --------------------------------------------------

void FUN_1401f3ed0(void)

{
  FUN_140007084(&DAT_1402631e8);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3ee0
// Address: 1401f3ee0
// --------------------------------------------------

void FUN_1401f3ee0(void)

{
  FUN_140007084(&DAT_1402631c8);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3ef0
// Address: 1401f3ef0
// --------------------------------------------------

void FUN_1401f3ef0(void)

{
  FUN_140007084(&DAT_140263288);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3f00
// Address: 1401f3f00
// --------------------------------------------------

void FUN_1401f3f00(void)

{
  FUN_140007084(&DAT_1402632a8);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3f10
// Address: 1401f3f10
// --------------------------------------------------

void FUN_1401f3f10(void)

{
  FUN_140007084(&DAT_140263268);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3f20
// Address: 1401f3f20
// --------------------------------------------------

void FUN_1401f3f20(void)

{
  FUN_140013858();
  FUN_140013858();
  FUN_140013858();
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3f60
// Address: 1401f3f60
// --------------------------------------------------

void FUN_1401f3f60(void)

{
  FUN_14010c964(&DAT_14027cae8,&DAT_14027cae8,*(undefined8 *)(DAT_14027cae8 + 8));
  thunk_FUN_14004ca00(DAT_14027cae8,0x48);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3fa0
// Address: 1401f3fa0
// --------------------------------------------------

void FUN_1401f3fa0(void)

{
  FUN_1401114b4(&DAT_14027cdb0);
  FUN_140007084(&DAT_14027cd80);
  FUN_140007084(&DAT_14027cd60);
  FUN_140007084(&DAT_14027cd38);
  FUN_140007084(&DAT_14027cd18);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f3ff0
// Address: 1401f3ff0
// --------------------------------------------------

void FUN_1401f3ff0(void)

{
  FUN_1401114b4(&DAT_14027ccd0);
  FUN_140007084(&DAT_14027cca0);
  FUN_140007084(&DAT_14027cc80);
  FUN_140007084(&DAT_14027cc58);
  FUN_140007084(&DAT_14027cc38);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f4040
// Address: 1401f4040
// --------------------------------------------------

void FUN_1401f4040(void)

{
  FUN_1401114b4(&DAT_14027ce90);
  FUN_140007084(&DAT_14027ce60);
  FUN_140007084(&DAT_14027ce40);
  FUN_140007084(&DAT_14027ce18);
  FUN_140007084(&DAT_14027cdf8);
  return;
}



// --------------------------------------------------
// Name: FUN_1401f4090
// Address: 1401f4090
// --------------------------------------------------

void FUN_1401f4090(void)

{
  FUN_140007084(&DAT_1402633b8);
  FUN_140007084(&DAT_140263398);
  return;
}



