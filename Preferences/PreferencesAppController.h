/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:48:34 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKit/UIApplication.h>
#import <Preferences/PSSplitViewControllerNavigationDelegate.h>
#import <UIKit/UIApplicationDelegate.h>
#import <Preferences/EAAccessoryDelegate.h>
#import <Preferences/MCProfileConnectionObserver.h>
#import <UIKit/UISplitViewControllerDelegate.h>

@class UIWindow, PSSplitViewController, PrefsRootController, NSMutableSet, EAAccessory, NSString;

@interface PreferencesAppController : UIApplication <PSSplitViewControllerNavigationDelegate, UIApplicationDelegate, EAAccessoryDelegate, MCProfileConnectionObserver, UISplitViewControllerDelegate> {

	PSSplitViewController* _splitViewController;
	PrefsRootController* _controller;
	UIWindow* _window;
	BOOL _isLocked;
	NSMutableSet* _busyControllers;
	BOOL _dontSelectGeneralOnLaunch;
	BOOL _loadingExternalURL;
	unsigned long long _backgroundTaskHandle;
	double _timeoutLimit;
	BOOL _settingsWasResigned;
	unsigned _rootDomainConnect;
	unsigned _pmNotifier;
	IONotificationPortRef _systemPowerPortRef;
	CFRunLoopSourceRef _pmSource;
	EAAccessory* _speakerAccessory;

}

@property (assign) unsigned rootDomainConnect;                      //@synthesize rootDomainConnect=_rootDomainConnect - In the implementation block
@property (assign) BOOL dontSelectGeneralOnLaunch;                  //@synthesize dontSelectGeneralOnLaunch=_dontSelectGeneralOnLaunch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)popToRootOfSettingsSelectGeneral:(BOOL)arg1 ;
-(void)popToRootOfSettingsSelectGeneral:(BOOL)arg1 performWithoutDeferringTransitions:(BOOL)arg2 ;
-(void)runScrollTest:(id)arg1 withOptions:(id)arg2 ;
-(void)processURL:(id)arg1 ;
-(void)updateFamilyInviteBadge;
-(void)_registerForPowerNotifications;
-(void)systemDidWake:(id)arg1 ;
-(void)updateSoftwareUpdateBadgeOnSpecifier:(id)arg1 ;
-(id)oneTimeJumpURL;
-(void)_clearSavedPositionURL;
-(void)handleFamilyInviteChanged;
-(void)_handleBusyControllers;
-(void)clearControllersForSuspendedState;
-(void)generateURL;
-(id)keyValueDictionaryForURL:(id)arg1 ;
-(void)_deregisterForPowerNotifications;
-(void)processURL:(id)arg1 animated:(BOOL)arg2 fromSearch:(BOOL)arg3 ;
-(void)processAppPrefsURL:(id)arg1 ;
-(id)currentSpecifierIDPath;
-(void)setDontSelectGeneralOnLaunch:(BOOL)arg1 ;
-(void)_setOffsetForController:(id)arg1 fromObjectPair:(id)arg2 ;
-(void)_performURLHandlingForController:(id)arg1 dictionary:(id)arg2 items:(id)arg3 controllerNeedsPush:(BOOL)arg4 ;
-(void)addBusyControllersFromRootController:(id)arg1 ;
-(void)_suspendControllers;
-(void)_resetSnapshotImage;
-(void)endAndInvalidateBackgroundTask;
-(void)_handleExternalApplicationChange;
-(BOOL)dontSelectGeneralOnLaunch;
-(void)accessoryDidDisconnect:(id)arg1 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceivePasscodeChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)applicationWillSuspendForEventsOnly;
-(void)applicationDidResumeForEventsOnly;
-(double)defaultImageSnapshotExpiration;
-(void)applicationOpenURL:(id)arg1 ;
-(void)userDefaultsDidChange:(id)arg1 ;
-(id)preferredContentSizeCategory;
-(void)significantTimeChange;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(void)_accessoryDidConnect:(id)arg1 ;
-(unsigned)rootDomainConnect;
-(void)setRootDomainConnect:(unsigned)arg1 ;
-(id)rootController;
-(void)controllerFinished:(id)arg1 ;
-(void)splitViewControllerDidPopToRootController:(id)arg1 ;
-(id)appWindow;
-(void)resetLocale;
-(void)stopPlayback;
@end
