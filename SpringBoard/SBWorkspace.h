/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:53 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/BSTransactionObserver.h>
#import <SpringBoard/SBAlertManagerDelegate.h>
#import <SpringBoard/SBAlertManagerObserver.h>
#import <SpringBoard/SBStarkScreenManagerDelegate.h>
#import <SpringBoard/SBStarkScreenControllerObserver.h>
#import <SpringBoard/SBReachabilityObserver.h>
#import <SpringBoard/FBSystemServiceDelegate.h>
#import <SpringBoard/FBProcessManagerObserver.h>
#import <SpringBoard/FBApplicationProcessObserver.h>
#import <SpringBoard/BSWatchdogDelegate.h>
#import <SpringBoard/FBSceneManagerObserver.h>

@class FBSceneManager, SBAlertManager, SBScreenTimeTrackingController, SBWorkspaceTransaction, FBWorkspaceEventQueueLock, NSTimer, NSMutableArray, SBWindow, FBScene, BSWatchdog, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface SBWorkspace : NSObject <BSTransactionObserver, SBAlertManagerDelegate, SBAlertManagerObserver, SBStarkScreenManagerDelegate, SBStarkScreenControllerObserver, SBReachabilityObserver, FBSystemServiceDelegate, FBProcessManagerObserver, FBApplicationProcessObserver, BSWatchdogDelegate, FBSceneManagerObserver> {

	FBSceneManager* _sceneManager;
	SBAlertManager* _alertManager;
	BOOL _alertManagerIsDeactivatingAlert;
	BOOL _alertManagerIsActivatingLockAlert;
	SBScreenTimeTrackingController* _screenTimeTrackingController;
	SBWorkspaceTransaction* _currentTransaction;
	FBWorkspaceEventQueueLock* _eventQueueLock;
	NSTimer* _relaunchTimer;
	NSMutableArray* _applicationsToRelaunch;
	SBWindow* _reachabilityWindow;
	FBScene* _sceneForReachabilityApp;
	SBWindow* _reachabilityEffectWindow;
	BSWatchdog* _transactionWatchdog;
	NSMutableDictionary* _extensionHandlersByType;
	NSMutableSet* _foregroundAppPidsWhenDisplaySecureModeWasEnabled;

}

@property (nonatomic,retain) SBWorkspaceTransaction * currentTransaction;                             //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (nonatomic,readonly) FBSceneManager * sceneManager;                                         //@synthesize sceneManager=_sceneManager - In the implementation block
@property (nonatomic,readonly) SBAlertManager * alertManager;                                         //@synthesize alertManager=_alertManager - In the implementation block
@property (nonatomic,readonly) BOOL alertManagerIsActivatingLockAlert;                                //@synthesize alertManagerIsActivatingLockAlert=_alertManagerIsActivatingLockAlert - In the implementation block
@property (nonatomic,readonly) NSSet * foregroundAppPidsWhenDisplaySecureModeWasEnabled;              //@synthesize foregroundAppPidsWhenDisplaySecureModeWasEnabled=_foregroundAppPidsWhenDisplaySecureModeWasEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)safeCategoryTargetClass;
+(id)debugDescription;
-(void)_axSendReachabilityToggledActionWithPayload:(id)arg1 ;
-(id)_axDictionaryOfAnimationProperties;
-(BOOL)_axReachabilityEnabled;
-(void)_axAddReachabilityProperty:(id)arg1 toDictionary:(id)arg2 ;
-(id)_axReachabilitySettings;
-(void)handleReachabilityModeDeactivated;
-(SBAlertManager *)alertManager;
-(id)_applicationForBundleIdentifier:(id)arg1 ;
-(id)_selectTransactionForAppActivationToApp:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)updateInterruptedByCallSettingsFrom:(id)arg1 to:(id)arg2 ;
-(id)_selectTransactionForAppActivationUnderMainScreenLock:(id)arg1 forRelaunch:(BOOL)arg2 withResult:(/*^block*/id)arg3 ;
-(BOOL)alertManagerIsActivatingLockAlert;
-(void)_handleOpenURLRequest:(id)arg1 application:(id)arg2 options:(id)arg3 activationSettings:(id)arg4 origin:(id)arg5 withResult:(/*^block*/id)arg6 ;
-(void)_registerHandler:(id)arg1 forExtensionPoint:(id)arg2 ;
-(void)_unregisterHandler:(id)arg1 forExtensionPoint:(id)arg2 ;
-(NSSet *)foregroundAppPidsWhenDisplaySecureModeWasEnabled;
-(void)_memoryPressureRelieved:(id)arg1 ;
-(void)_memoryPressureWarn:(id)arg1 ;
-(void)_deviceWillEnableDisplaySecureMode:(id)arg1 ;
-(void)_deviceWillDisableDisplaySecureMode:(id)arg1 ;
-(void)starkScreenManagerDidChangeActiveController:(id)arg1 ;
-(id)_selectTransactionForReturningToTheLockScreenFromApp:(id)arg1 forceToBuddy:(BOOL)arg2 withResult:(/*^block*/id)arg3 ;
-(id)_selectTransactionForAppActivationToApp:(id)arg1 canDeactivateAlerts:(BOOL)arg2 withResult:(/*^block*/id)arg3 ;
-(void)_launchNextPendedAutoLaunchApp;
-(void)_invalidateRelaunchTimer;
-(void)_scheduleRelaunchTimerIfNecessary;
-(BOOL)_handleSetupExited:(id)arg1 ;
-(void)_handleBuddyLaunchFinished;
-(BOOL)_applicationProcessExited:(id)arg1 withContext:(id)arg2 ;
-(id)_selectTransactionForAppExited:(id)arg1 ;
-(id)_selectTransactionForAppRelaunch:(id)arg1 ;
-(void)_handleOpenApplicationRequest:(id)arg1 options:(id)arg2 origin:(id)arg3 withResult:(/*^block*/id)arg4 ;
-(void)_promptUnlockWithHandler:(/*^block*/id)arg1 ;
-(id)_handlerForExtensionPoint:(id)arg1 ;
-(void)_updateStatusBarTimeItemEnabled;
-(void)alertManager:(id)arg1 topAlert:(id)arg2 requestsWallpaperStyleChangeWithAnimationFactory:(id)arg3 ;
-(void)starkScreenController:(id)arg1 didChangeStateFromState:(long long)arg2 ;
-(void)_exitReachabilityModeWithCompletion:(/*^block*/id)arg1 ;
-(void)handleCancelReachabilityRecognizer:(id)arg1 ;
-(void)handleRevealNotificationCenterGesture:(id)arg1 ;
-(CGRect)sceneFrameForAlerts:(id)arg1 ;
-(double)sceneLevelForAlerts;
-(BOOL)alertManager:(id)arg1 shouldDeactivateDismissedAlert:(id)arg2 ;
-(id)alertManager:(id)arg1 newAlertWindowForScene:(id)arg2 ;
-(void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3 ;
-(void)alertManager:(id)arg1 didActivateAlert:(id)arg2 overAlerts:(id)arg3 ;
-(void)alertManager:(id)arg1 willDeactivateAlert:(id)arg2 top:(BOOL)arg3 ;
-(void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(BOOL)arg3 ;
-(void)alertManager:(id)arg1 didChangeTopAlertFrom:(id)arg2 toAlert:(id)arg3 ;
-(void)alertManager:(id)arg1 willTearDownAlertWindow:(id)arg2 ;
-(void)alertManager:(id)arg1 didTearDownAlertWindow:(id)arg2 ;
-(void)alertManager:(id)arg1 didRemoveAlert:(id)arg2 fromWindow:(id)arg3 ;
-(void)starkScreenManagerWillChangeActiveController:(id)arg1 ;
-(id)_selectTransactionForReturningToTheLockScreenWithResult:(/*^block*/id)arg1 ;
-(void)_noteCurrentTransactionFailed:(const char*)arg1 ;
-(FBSceneManager *)sceneManager;
-(void)dealloc;
-(id)init;
-(NSString *)debugDescription;
-(void)handleReachabilityModeActivated;
-(void)_disableReachabilityImmediately:(BOOL)arg1 ;
-(void)transactionDidComplete:(id)arg1 ;
-(void)systemServicePrepareForShutdown:(id)arg1 andReboot:(BOOL)arg2 ;
-(void)systemServicePrepareForExit:(id)arg1 andRelaunch:(BOOL)arg2 ;
-(void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 options:(id)arg3 origin:(id)arg4 withResult:(/*^block*/id)arg5 ;
-(void)systemService:(id)arg1 handleOpenURLRequest:(id)arg2 application:(id)arg3 options:(id)arg4 origin:(id)arg5 withResult:(/*^block*/id)arg6 ;
-(void)systemService:(id)arg1 handleActions:(id)arg2 origin:(id)arg3 withResult:(/*^block*/id)arg4 ;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3 ;
-(void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 ;
-(void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)processManager:(id)arg1 didAddProcess:(id)arg2 ;
-(void)processManager:(id)arg1 didRemoveProcess:(id)arg2 ;
-(void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3 ;
-(void)processDidExit:(id)arg1 ;
-(void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2 ;
-(void)applicationProcessWillLaunch:(id)arg1 ;
-(void)applicationProcessDidLaunch:(id)arg1 ;
-(void)applicationProcessDebuggingStateDidChange:(id)arg1 ;
-(void)watchdogStarted:(id)arg1 ;
-(void)watchdogFired:(id)arg1 ;
-(SBWorkspaceTransaction *)currentTransaction;
-(void)setCurrentTransaction:(SBWorkspaceTransaction *)arg1 ;
@end

