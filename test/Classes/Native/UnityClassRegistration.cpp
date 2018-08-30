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
	//Total: 89 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//6. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//7. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//8. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//9. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//10. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//11. GUITexture
	void RegisterClass_GUITexture();
	RegisterClass_GUITexture();

	//12. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//13. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//14. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//15. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//16. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//17. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//18. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//19. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//20. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//21. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//22. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//23. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//24. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//25. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//26. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//27. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//28. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//29. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//30. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//31. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//32. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//33. NavMeshAgent
	void RegisterClass_NavMeshAgent();
	RegisterClass_NavMeshAgent();

	//34. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//35. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//36. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//37. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//38. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//39. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//40. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//41. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//42. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//43. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//44. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//45. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//46. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//47. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//48. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//49. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//50. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//51. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//52. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//53. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//54. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//55. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//56. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//57. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//58. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//59. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//60. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//61. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//62. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//63. Projector
	void RegisterClass_Projector();
	RegisterClass_Projector();

	//64. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//65. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//66. CharacterJoint
	void RegisterClass_CharacterJoint();
	RegisterClass_CharacterJoint();

	//67. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//68. NavMeshSettings
	void RegisterClass_NavMeshSettings();
	RegisterClass_NavMeshSettings();

	//69. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//70. NavMeshData
	void RegisterClass_NavMeshData();
	RegisterClass_NavMeshData();

	//71. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//72. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//73. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//74. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//75. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//76. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//77. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//78. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//79. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//80. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//81. NavMeshAreas
	void RegisterClass_NavMeshAreas();
	RegisterClass_NavMeshAreas();

	//82. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//83. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//84. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//85. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//86. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//87. UnityAdsSettings
	void RegisterClass_UnityAdsSettings();
	RegisterClass_UnityAdsSettings();

	//88. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
