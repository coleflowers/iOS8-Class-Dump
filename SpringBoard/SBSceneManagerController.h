/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/FBSceneManagerDelegate.h>
#import <SpringBoard/FBSceneManagerObserver.h>
#import <SpringBoard/FBProcessManagerObserver.h>
#import <SpringBoard/FBWorkspaceDelegate.h>
#import <SpringBoard/FBDisplayManagerObserver.h>
#import <SpringBoard/SBSceneManagerDelegate.h>

@class FBSceneManager, NSMutableDictionary, UIApplicationSceneClientSettingsDiffInspector, NSString;

@interface SBSceneManagerController : NSObject <FBSceneManagerDelegate, FBSceneManagerObserver, FBProcessManagerObserver, FBWorkspaceDelegate, FBDisplayManagerObserver, SBSceneManagerDelegate> {

	FBSceneManager* _sceneManager;
	NSMutableDictionary* _displayToSceneManagers;
	UIApplicationSceneClientSettingsDiffInspector* _clientSettingsDiffInspector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)safeCategoryTargetClass;
+(id)mainDisplaySceneManager;
+(id)sharedInstance;
-(id)sceneManagerForDisplay:(id)arg1 ;
-(void)sceneManager:(id)arg1 scene:(id)arg2 willTransitionToState:(unsigned long long)arg3 ;
-(id)_sceneManagerForDisplay:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
-(Class)_sceneManagerClassForDisplay:(id)arg1 ;
-(id)_clientSettingsDiffInspector;
-(void)_destroySceneManagerIfNecessary:(id)arg1 ;
-(void)_updateExternalDisplayScenesIfNecessaryForMainDisplayScene:(id)arg1 forTransitionToState:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3 ;
-(void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 ;
-(void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)processManager:(id)arg1 didAddProcess:(id)arg2 ;
-(void)processManager:(id)arg1 didRemoveProcess:(id)arg2 ;
-(void)workspace:(id)arg1 didReceiveCreateSceneRequestWithInitialClientSettings:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)workspace:(id)arg1 didReceiveDestroySceneRequestForIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)displayManager:(id)arg1 didDisconnectDisplay:(id)arg2 ;
-(void)displayManager:(id)arg1 willConnectDisplay:(id)arg2 ;
-(void)displayManager:(id)arg1 didConnectDisplay:(id)arg2 ;
-(void)sceneManager:(id)arg1 deviceOrientationChangedTo:(long long)arg2 ;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5 ;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3 ;
@end

