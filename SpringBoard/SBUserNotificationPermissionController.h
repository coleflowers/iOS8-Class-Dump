/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUserNotificationCapable.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, SBApplication;

@interface SBUserNotificationPermissionController : NSObject <SBUserNotificationCapable> {

	BOOL _queueSuspended;
	BOOL _showingAlert;
	BOOL _canPerformQueuedActions;
	NSString* _bundleIdentifier;
	NSObject*<OS_dispatch_queue> _performQueue;

}

@property (nonatomic,retain,readonly) SBApplication * application; 
@property (nonatomic,copy) NSString * bundleIdentifier;                                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> performQueue;                //@synthesize performQueue=_performQueue - In the implementation block
@property (assign,getter=isQueueSuspended,nonatomic) BOOL queueSuspended;              //@synthesize queueSuspended=_queueSuspended - In the implementation block
@property (assign,getter=isShowingAlert,nonatomic) BOOL showingAlert;                  //@synthesize showingAlert=_showingAlert - In the implementation block
@property (assign,nonatomic) BOOL canPerformQueuedActions;                             //@synthesize canPerformQueuedActions=_canPerformQueuedActions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)migratePushSettings:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 ;
+(void)evictControllerFromCache:(id)arg1 ;
+(id)controllerForApplication:(id)arg1 ;
+(id)controllerForBundleIdentifier:(id)arg1 ;
+(void)createCacheIfNecessary;
-(void)noteBadgeSetLocally;
-(void)setBadge:(id)arg1 onBehalfOfSystem:(BOOL)arg2 ;
-(id)effectiveUserNotificationSettings;
-(void)registerUserNotificationSettings:(id)arg1 makeAppDelegateCallback:(BOOL)arg2 ;
-(void)notePermissionAlertAccepted:(BOOL)arg1 withSettings:(id)arg2 makeAppDelegateCallback:(BOOL)arg3 ;
-(void)didDeactivateAlert:(id)arg1 reason:(int)arg2 ;
-(BOOL)haveRegisteredBefore;
-(void)setQueueSuspended:(BOOL)arg1 ;
-(void)installedApplicationsChanged:(id)arg1 ;
-(void)tearDownQueue;
-(id)settingsForRequestedSettings:(id)arg1 systemDesiredTypes:(unsigned long long)arg2 ;
-(void)setShowingAlert:(BOOL)arg1 ;
-(void)saveRegisteredUserNotificationSettings:(id)arg1 ;
-(BOOL)isShowingAlert;
-(void)registerSupportedNotificationTypes:(unsigned long long)arg1 withEnabledNotificationSettings:(id)arg2 makeAppDelegateCallback:(BOOL)arg3 bypassAlert:(BOOL)arg4 ;
-(void)saveRegisteredUserNotificationSettings:(id)arg1 userDeniedNotifications:(BOOL)arg2 ;
-(void)setHaveRegisteredBefore:(BOOL)arg1 ;
-(BOOL)canPerformQueuedActions;
-(void)registerPrivilegedForAdditionalTypes:(unsigned long long)arg1 ;
-(void)enqueueAction:(/*^block*/id)arg1 ;
-(void)unregisterUserNotificationSettings;
-(BOOL)isQueueSuspended;
-(NSObject*<OS_dispatch_queue>)performQueue;
-(void)setPerformQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCanPerformQueuedActions:(BOOL)arg1 ;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setBadge:(id)arg1 ;
-(void)scheduleLocalNotifications:(id)arg1 replaceExistingNotifications:(BOOL)arg2 ;
-(SBApplication *)application;
@end

