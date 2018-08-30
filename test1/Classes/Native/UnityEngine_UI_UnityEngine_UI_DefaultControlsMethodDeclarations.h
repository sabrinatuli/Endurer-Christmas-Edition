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

// UnityEngine.GameObject
struct GameObject_t7_113;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t8_63;
// UnityEngine.UI.Selectable
struct Selectable_t8_55;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UI_UnityEngine_UI_DefaultControls_Resources.h"

// System.Void UnityEngine.UI.DefaultControls::.cctor()
extern "C" void DefaultControls__cctor_m8_363 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIElementRoot(System.String,UnityEngine.Vector2)
extern "C" GameObject_t7_113 * DefaultControls_CreateUIElementRoot_m8_364 (Object_t * __this /* static, unused */, String_t* ___name, Vector2_t7_65  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIObject(System.String,UnityEngine.GameObject)
extern "C" GameObject_t7_113 * DefaultControls_CreateUIObject_m8_365 (Object_t * __this /* static, unused */, String_t* ___name, GameObject_t7_113 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultTextValues(UnityEngine.UI.Text)
extern "C" void DefaultControls_SetDefaultTextValues_m8_366 (Object_t * __this /* static, unused */, Text_t8_63 * ___lbl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultColorTransitionValues(UnityEngine.UI.Selectable)
extern "C" void DefaultControls_SetDefaultColorTransitionValues_m8_367 (Object_t * __this /* static, unused */, Selectable_t8_55 * ___slider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetParentAndAlign(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" void DefaultControls_SetParentAndAlign_m8_368 (Object_t * __this /* static, unused */, GameObject_t7_113 * ___child, GameObject_t7_113 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetLayerRecursively(UnityEngine.GameObject,System.Int32)
extern "C" void DefaultControls_SetLayerRecursively_m8_369 (Object_t * __this /* static, unused */, GameObject_t7_113 * ___go, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreatePanel(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7_113 * DefaultControls_CreatePanel_m8_370 (Object_t * __this /* static, unused */, Resources_t8_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateButton(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7_113 * DefaultControls_CreateButton_m8_371 (Object_t * __this /* static, unused */, Resources_t8_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateText(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7_113 * DefaultControls_CreateText_m8_372 (Object_t * __this /* static, unused */, Resources_t8_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateImage(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7_113 * DefaultControls_CreateImage_m8_373 (Object_t * __this /* static, unused */, Resources_t8_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateRawImage(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7_113 * DefaultControls_CreateRawImage_m8_374 (Object_t * __this /* static, unused */, Resources_t8_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateSlider(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7_113 * DefaultControls_CreateSlider_m8_375 (Object_t * __this /* static, unused */, Resources_t8_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollbar(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7_113 * DefaultControls_CreateScrollbar_m8_376 (Object_t * __this /* static, unused */, Resources_t8_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateToggle(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7_113 * DefaultControls_CreateToggle_m8_377 (Object_t * __this /* static, unused */, Resources_t8_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateInputField(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7_113 * DefaultControls_CreateInputField_m8_378 (Object_t * __this /* static, unused */, Resources_t8_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateDropdown(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7_113 * DefaultControls_CreateDropdown_m8_379 (Object_t * __this /* static, unused */, Resources_t8_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollView(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7_113 * DefaultControls_CreateScrollView_m8_380 (Object_t * __this /* static, unused */, Resources_t8_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
