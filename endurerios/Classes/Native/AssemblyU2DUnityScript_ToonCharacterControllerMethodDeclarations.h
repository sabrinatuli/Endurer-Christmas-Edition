#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ToonCharacterController
struct ToonCharacterController_t10_7;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// UnityEngine.Collider
struct Collider_t7_128;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ToonCharacterController::.ctor()
extern "C" void ToonCharacterController__ctor_m10_33 (ToonCharacterController_t10_7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ToonCharacterController::LateUpdate()
extern "C" void ToonCharacterController_LateUpdate_m10_34 (ToonCharacterController_t10_7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ToonCharacterController::Start()
extern "C" void ToonCharacterController_Start_m10_35 (ToonCharacterController_t10_7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ToonCharacterController::Blink(System.Int32,System.Single,System.Single,System.Single,System.Single)
extern "C" void ToonCharacterController_Blink_m10_36 (ToonCharacterController_t10_7 * __this, int32_t ___times, float ___speed, float ___red, float ___green, float ___blue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ToonCharacterController::Blink(System.Int32,System.Single)
extern "C" void ToonCharacterController_Blink_m10_37 (ToonCharacterController_t10_7 * __this, int32_t ___times, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ToonCharacterController::BlinkInvoke()
extern "C" void ToonCharacterController_BlinkInvoke_m10_38 (ToonCharacterController_t10_7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ToonCharacterController::disableRagdoll()
extern "C" void ToonCharacterController_disableRagdoll_m10_39 (ToonCharacterController_t10_7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ToonCharacterController::enableRagdoll(System.Single,UnityEngine.Vector3)
extern "C" Object_t * ToonCharacterController_enableRagdoll_m10_40 (ToonCharacterController_t10_7 * __this, float ___delay, Vector3_t7_66  ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ToonCharacterController::Decapitate(System.Boolean,System.Single,UnityEngine.Vector3)
extern "C" void ToonCharacterController_Decapitate_m10_41 (ToonCharacterController_t10_7 * __this, bool ___explode, float ___delay, Vector3_t7_66  ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ToonCharacterController::EnableCollisions(UnityEngine.Collider,UnityEngine.Collider)
extern "C" Object_t * ToonCharacterController_EnableCollisions_m10_42 (ToonCharacterController_t10_7 * __this, Collider_t7_128 * ___c1, Collider_t7_128 * ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ToonCharacterController::Main()
extern "C" void ToonCharacterController_Main_m10_43 (ToonCharacterController_t10_7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
