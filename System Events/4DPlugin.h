/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : System Events
 #	author : Mehdi Mhiri
 #	18/05/2016
 #
 # --------------------------------------------------------------------------------*/


void InitPlugin();
void DeinitPlugin();
void CloseProcess();

// --- Sleep
void sleepSetCallback(sLONG_PTR *pResult, PackagePtr pParams);
void sleepRegisterCallback(sLONG_PTR *pResult, PackagePtr pParams);
void sleepUnregisterCallback(sLONG_PTR *pResult, PackagePtr pParams);
void sleepPrevent(sLONG_PTR *pResult, PackagePtr pParams);
void sleepUnprevent(sLONG_PTR *pResult, PackagePtr pParams);

// --- Wake
void wakeSetCallback(sLONG_PTR *pResult, PackagePtr pParams);
void wakeRegisterCallback(sLONG_PTR *pResult, PackagePtr pParams);
void wakeUnregisterCallback(sLONG_PTR *pResult, PackagePtr pParams);

#if VERSIONWIN
// --- Shutdown
void shutdownSetCallback(sLONG_PTR *pResult, PackagePtr pParams);
void shutdownRegisterCallback(sLONG_PTR *pResult, PackagePtr pParams);
void shutdownUnregisterCallback(sLONG_PTR *pResult, PackagePtr pParams);
void shutdownPrevent(sLONG_PTR *pResult, PackagePtr pParams);
void shutdownUnprevent(sLONG_PTR *pResult, PackagePtr pParams);
#endif