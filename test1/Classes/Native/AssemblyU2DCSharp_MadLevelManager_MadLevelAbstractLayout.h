#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MadLevelManager.MadLevelIcon
struct MadLevelIcon_t11_44;
// UnityEngine.GameObject
struct GameObject_t7_113;
// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t7_150;
// UnityEngine.AudioListener
struct AudioListener_t7_151;
// MadLevelManager.MadLevelConfiguration
struct MadLevelConfiguration_t11_48;
// MadLevelManager.MadLevelAbstractLayout/IconActivationEvent
struct IconActivationEvent_t11_43;
// System.Func`2<MadLevelManager.MadLevelConfiguration/Level,System.Int32>
struct Func_2_t4_22;
// MadLevelManager.MadTransform/Predicate`1<MadLevelManager.MadLevelIcon>
struct Predicate_1_t11_49;

#include "AssemblyU2DCSharp_MadLevelManager_MadNode.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelAbstractLayout_Loo.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelAbstractLayout_Lev.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelAbstractLayout_Two.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelAbstractLayout_Loa.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelAbstractLayout_OnM.h"

// MadLevelManager.MadLevelAbstractLayout
struct  MadLevelAbstractLayout_t11_46  : public MadNode_t11_47
{
	// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelAbstractLayout::iconTemplate
	MadLevelIcon_t11_44 * ___iconTemplate_4;
	// System.Boolean MadLevelManager.MadLevelAbstractLayout::lookAtLastLevel
	bool ___lookAtLastLevel_5;
	// MadLevelManager.MadLevelAbstractLayout/LookLevelType MadLevelManager.MadLevelAbstractLayout::lookAtLevel
	int32_t ___lookAtLevel_6;
	// MadLevelManager.MadLevelAbstractLayout/LevelsEnumerationType MadLevelManager.MadLevelAbstractLayout::enumerationType
	int32_t ___enumerationType_7;
	// System.Int32 MadLevelManager.MadLevelAbstractLayout::enumerationOffset
	int32_t ___enumerationOffset_8;
	// MadLevelManager.MadLevelAbstractLayout/TwoStepActivationType MadLevelManager.MadLevelAbstractLayout::twoStepActivationType
	int32_t ___twoStepActivationType_9;
	// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelAbstractLayout::activeIcon
	MadLevelIcon_t11_44 * ___activeIcon_10;
	// MadLevelManager.MadLevelAbstractLayout/LoadLevel MadLevelManager.MadLevelAbstractLayout::loadLevel
	int32_t ___loadLevel_11;
	// System.Single MadLevelManager.MadLevelAbstractLayout::loadLevelLoadLevelDelay
	float ___loadLevelLoadLevelDelay_12;
	// UnityEngine.GameObject MadLevelManager.MadLevelAbstractLayout::loadLevelMessageReceiver
	GameObject_t7_113 * ___loadLevelMessageReceiver_13;
	// System.String MadLevelManager.MadLevelAbstractLayout::loadLevelMessageName
	String_t* ___loadLevelMessageName_14;
	// System.Boolean MadLevelManager.MadLevelAbstractLayout::loadLevelMessageIncludeChildren
	bool ___loadLevelMessageIncludeChildren_15;
	// System.Boolean MadLevelManager.MadLevelAbstractLayout::onIconActivatePlayAudio
	bool ___onIconActivatePlayAudio_16;
	// UnityEngine.AudioClip MadLevelManager.MadLevelAbstractLayout::onIconActivatePlayAudioClip
	AudioClip_t7_150 * ___onIconActivatePlayAudioClip_17;
	// System.Single MadLevelManager.MadLevelAbstractLayout::onIconActivatePlayAudioVolume
	float ___onIconActivatePlayAudioVolume_18;
	// System.Boolean MadLevelManager.MadLevelAbstractLayout::onIconDeactivatePlayAudio
	bool ___onIconDeactivatePlayAudio_19;
	// UnityEngine.AudioClip MadLevelManager.MadLevelAbstractLayout::onIconDeactivatePlayAudioClip
	AudioClip_t7_150 * ___onIconDeactivatePlayAudioClip_20;
	// System.Single MadLevelManager.MadLevelAbstractLayout::onIconDeactivatePlayAudioVolume
	float ___onIconDeactivatePlayAudioVolume_21;
	// UnityEngine.AudioListener MadLevelManager.MadLevelAbstractLayout::cachedAudioListener
	AudioListener_t7_151 * ___cachedAudioListener_22;
	// System.Boolean MadLevelManager.MadLevelAbstractLayout::onIconActivateMessage
	bool ___onIconActivateMessage_23;
	// UnityEngine.GameObject MadLevelManager.MadLevelAbstractLayout::onIconActivateMessageReceiver
	GameObject_t7_113 * ___onIconActivateMessageReceiver_24;
	// System.String MadLevelManager.MadLevelAbstractLayout::onIconActivateMessageMethodName
	String_t* ___onIconActivateMessageMethodName_25;
	// System.Boolean MadLevelManager.MadLevelAbstractLayout::onIconActivateMessageIncludeChildren
	bool ___onIconActivateMessageIncludeChildren_26;
	// System.Boolean MadLevelManager.MadLevelAbstractLayout::onIconDeactivateMessage
	bool ___onIconDeactivateMessage_27;
	// UnityEngine.GameObject MadLevelManager.MadLevelAbstractLayout::onIconDeactivateMessageReceiver
	GameObject_t7_113 * ___onIconDeactivateMessageReceiver_28;
	// System.String MadLevelManager.MadLevelAbstractLayout::onIconDeactivateMessageMethodName
	String_t* ___onIconDeactivateMessageMethodName_29;
	// System.Boolean MadLevelManager.MadLevelAbstractLayout::onIconDeactivateMessageIncludeChildren
	bool ___onIconDeactivateMessageIncludeChildren_30;
	// System.Boolean MadLevelManager.MadLevelAbstractLayout::handleMobileBackButton
	bool ___handleMobileBackButton_31;
	// MadLevelManager.MadLevelAbstractLayout/OnMobileBack MadLevelManager.MadLevelAbstractLayout::handleMobileBackButtonAction
	int32_t ___handleMobileBackButtonAction_32;
	// System.String MadLevelManager.MadLevelAbstractLayout::handleMobileBackButtonLevelName
	String_t* ___handleMobileBackButtonLevelName_33;
	// MadLevelManager.MadLevelConfiguration MadLevelManager.MadLevelAbstractLayout::configuration
	MadLevelConfiguration_t11_48 * ___configuration_34;
	// System.Int32 MadLevelManager.MadLevelAbstractLayout::configurationGroup
	int32_t ___configurationGroup_35;
	// System.Boolean MadLevelManager.MadLevelAbstractLayout::useCurrentlyActiveConfiguration
	bool ___useCurrentlyActiveConfiguration_36;
	// System.Boolean MadLevelManager.MadLevelAbstractLayout::fullyInitialized
	bool ___fullyInitialized_37;
	// MadLevelManager.MadLevelAbstractLayout/IconActivationEvent MadLevelManager.MadLevelAbstractLayout::onIconActivate
	IconActivationEvent_t11_43 * ___onIconActivate_38;
	// MadLevelManager.MadLevelAbstractLayout/IconActivationEvent MadLevelManager.MadLevelAbstractLayout::onIconDeactivate
	IconActivationEvent_t11_43 * ___onIconDeactivate_39;
};
struct MadLevelAbstractLayout_t11_46_StaticFields{
	// System.Func`2<MadLevelManager.MadLevelConfiguration/Level,System.Int32> MadLevelManager.MadLevelAbstractLayout::<>f__am$cache24
	Func_2_t4_22 * ___U3CU3Ef__amU24cache24_40;
	// System.Func`2<MadLevelManager.MadLevelConfiguration/Level,System.Int32> MadLevelManager.MadLevelAbstractLayout::<>f__am$cache25
	Func_2_t4_22 * ___U3CU3Ef__amU24cache25_41;
	// MadLevelManager.MadTransform/Predicate`1<MadLevelManager.MadLevelIcon> MadLevelManager.MadLevelAbstractLayout::<>f__am$cache26
	Predicate_1_t11_49 * ___U3CU3Ef__amU24cache26_42;
};
