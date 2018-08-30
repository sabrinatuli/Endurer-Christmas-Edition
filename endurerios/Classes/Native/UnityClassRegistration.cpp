struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAds();
	RegisterModule_UnityAds();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 95 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//4. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//5. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//6. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//7. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//8. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//9. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//10. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//11. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//12. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//13. GUITexture
	void RegisterClass_GUITexture();
	RegisterClass_GUITexture();

	//14. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//15. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//16. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//17. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//18. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//19. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//20. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//21. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//22. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//23. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//24. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//25. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//26. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//27. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//28. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//29. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//30. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//31. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//32. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//33. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//34. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//35. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//36. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//37. NavMeshAgent
	void RegisterClass_NavMeshAgent();
	RegisterClass_NavMeshAgent();

	//38. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//39. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//40. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//41. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//42. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//43. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//44. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//45. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//46. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//47. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//48. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//49. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//50. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//51. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//52. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//53. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//54. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//55. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//56. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//57. ParticleAnimator
	void RegisterClass_ParticleAnimator();
	RegisterClass_ParticleAnimator();

	//58. EllipsoidParticleEmitter
	void RegisterClass_EllipsoidParticleEmitter();
	RegisterClass_EllipsoidParticleEmitter();

	//59. ParticleEmitter
	void RegisterClass_ParticleEmitter();
	RegisterClass_ParticleEmitter();

	//60. ParticleRenderer
	void RegisterClass_ParticleRenderer();
	RegisterClass_ParticleRenderer();

	//61. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//62. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//63. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//64. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//65. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//66. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//67. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//68. Projector
	void RegisterClass_Projector();
	RegisterClass_Projector();

	//69. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//70. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//71. CharacterJoint
	void RegisterClass_CharacterJoint();
	RegisterClass_CharacterJoint();

	//72. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//73. NavMeshSettings
	void RegisterClass_NavMeshSettings();
	RegisterClass_NavMeshSettings();

	//74. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//75. NavMeshData
	void RegisterClass_NavMeshData();
	RegisterClass_NavMeshData();

	//76. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//77. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//78. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//79. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//80. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//81. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//82. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//83. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//84. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//85. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//86. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//87. NavMeshAreas
	void RegisterClass_NavMeshAreas();
	RegisterClass_NavMeshAreas();

	//88. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//89. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//90. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//91. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//92. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//93. UnityAdsSettings
	void RegisterClass_UnityAdsSettings();
	RegisterClass_UnityAdsSettings();

	//94. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
