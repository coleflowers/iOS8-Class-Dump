/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertManagerDelegate.h>
#import <SpringBoard/SBAlertManagerObserver.h>
#import <SpringBoard/SBAlertObserver.h>
#import <UIKit/UIStatusBarStyleDelegate.h>
#import <SpringBoard/_UISettingsKeyObserver.h>
#import <SpringBoard/AVExternalDeviceDelegate.h>
#import <SpringBoard/FBWindowContextManagerDelegate.h>
#import <SpringBoard/FBWindowContextManagerObserver.h>

@protocol SBStarkScreenControllerDelegate, SBDisplayProtocol;
@class FBSDisplay, UIScreen, SBCarDisplaySettings, NSMutableOrderedSet, NSMapTable, NSHashTable, SBStarkLockOutViewController, SBStarkLockOutWindow, SBStarkAnimationWindow, FBScene, SBStarkNowPlayingController, SBStarkNowPlayingWindow, SBStarkIconController, SBStarkIconWindow, SBStarkStatusBarViewController, SBStarkStatusBarWindow, SBStarkNotificationWindow, SBAssistantWindow, SBAlertManager, SBStarkScreenFocusController, SBStarkFakeIconOperationController, AVExternalDevice, SBWindow, UIWindow, SBStarkNotificationViewController, NSString;

@interface SBStarkScreenController : NSObject <SBAlertManagerDelegate, SBAlertManagerObserver, SBAlertObserver, UIStatusBarStyleDelegate, _UISettingsKeyObserver, AVExternalDeviceDelegate, FBWindowContextManagerDelegate, FBWindowContextManagerObserver> {

	FBSDisplay* _fbsDisplay;
	UIScreen* _screen;
	unsigned long long _interactionAffordances;
	long long _layoutJustification;
	SBCarDisplaySettings* _settings;
	id<SBStarkScreenControllerDelegate> _delegate;
	id<SBDisplayProtocol> _actualTopDisplay;
	id<SBDisplayProtocol> _effectiveTopDisplay;
	NSMutableOrderedSet* _alertSheets;
	NSMapTable* _alertSheetsToWindowMap;
	NSHashTable* _observers;
	long long _screenState;
	long long _lockOutMode;
	BOOL _delayUpdatingLockOutMode;
	SBStarkLockOutViewController* _lockOutViewController;
	SBStarkLockOutWindow* _lockOutWindow;
	SBStarkAnimationWindow* _animationWindow;
	FBScene* _nowPlayingScene;
	SBStarkNowPlayingController* _nowPlayingController;
	SBStarkNowPlayingWindow* _nowPlayingWindow;
	BOOL _showingNowPlaying;
	SBStarkIconController* _iconController;
	SBStarkIconWindow* _iconWindow;
	SBStarkStatusBarViewController* _statusBarViewController;
	SBStarkStatusBarWindow* _statusBarWindow;
	SBStarkNotificationWindow* _notificationWindow;
	SBAssistantWindow* _siriWindow;
	long long _siriState;
	SBAlertManager* _alertManager;
	id _alertBorrowScreenToken;
	id _siriBorrowScreenToken;
	SBStarkScreenFocusController* _focusController;
	SBStarkFakeIconOperationController* _fakeIconOperationController;
	AVExternalDevice* _externalDevice;
	BOOL _externalDeviceScreenAvailable;
	SBWindow* _mainWindow;

}

@property (nonatomic,retain,readonly) UIScreen * screen;                                                       //@synthesize screen=_screen - In the implementation block
@property (nonatomic,retain,readonly) FBSDisplay * fbsDisplay;                                                 //@synthesize fbsDisplay=_fbsDisplay - In the implementation block
@property (nonatomic,readonly) unsigned long long interactionAffordances;                                      //@synthesize interactionAffordances=_interactionAffordances - In the implementation block
@property (nonatomic,readonly) long long layoutJustification;                                                  //@synthesize layoutJustification=_layoutJustification - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (assign,nonatomic) id<SBStarkScreenControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<SBDisplayProtocol> effectiveTopDisplay; 
@property (nonatomic,retain,readonly) SBAlertManager * alertManager;                                           //@synthesize alertManager=_alertManager - In the implementation block
@property (nonatomic,retain,readonly) SBWindow * mainWindow;                                                   //@synthesize mainWindow=_mainWindow - In the implementation block
@property (nonatomic,retain,readonly) SBWindow * animationWindow; 
@property (nonatomic,retain,readonly) UIWindow * focusWindow; 
@property (nonatomic,retain,readonly) SBWindow * iconWindow; 
@property (nonatomic,retain,readonly) SBWindow * lockoutWindow; 
@property (nonatomic,retain,readonly) SBStarkIconController * iconController; 
@property (nonatomic,retain,readonly) SBStarkNotificationViewController * notificationController; 
@property (nonatomic,retain,readonly) SBStarkStatusBarViewController * statusBarController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_launchNowPlaying;
-(void)handleACHomeUp;
-(UIWindow *)focusWindow;
-(SBAlertManager *)alertManager;
-(SBStarkIconController *)iconController;
-(CGRect)sceneFrameForAlerts:(id)arg1 ;
-(double)sceneLevelForAlerts;
-(BOOL)alertManager:(id)arg1 shouldDeactivateDismissedAlert:(id)arg2 ;
-(id)alertManager:(id)arg1 newAlertWindowForScene:(id)arg2 ;
-(void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3 ;
-(void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(BOOL)arg3 ;
-(void)alertManager:(id)arg1 didCreateAlertWindow:(id)arg2 ;
-(void)alertManager:(id)arg1 willTearDownAlertWindow:(id)arg2 ;
-(void)alertBannerSuppressionChanged:(id)arg1 ;
-(void)handleLongBackPress;
-(id<SBDisplayProtocol>)effectiveTopDisplay;
-(void)updateStatusBarStateForDisplay:(id)arg1 withAnimationFactory:(id)arg2 ;
-(BOOL)isShowingNowPlaying;
-(void)handleUnhandledBack;
-(SBWindow *)animationWindow;
-(unsigned long long)interactionAffordances;
-(SBStarkStatusBarViewController *)statusBarController;
-(SBStarkNotificationViewController *)notificationController;
-(SBWindow *)iconWindow;
-(id)nowPlayingContextHostManager;
-(long long)layoutJustification;
-(void)dismissSiriWithAnimation:(long long)arg1 factory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_viewController:(id)arg1 willAnimateAppearanceWithContext:(id)arg2 ;
-(void)_viewController:(id)arg1 animateAppearanceWithContext:(id)arg2 ;
-(void)_viewController:(id)arg1 willAnimateDisappearanceWithContext:(id)arg2 ;
-(void)_viewController:(id)arg1 animateDisappearanceWithContext:(id)arg2 ;
-(BOOL)presentSiri:(BOOL)arg1 viewController:(id)arg2 ;
-(id)nowPlayingSnapshot;
-(void)notifyWhenNowPlayingIsActive:(/*^block*/id)arg1 withTimeout:(double)arg2 ;
-(void)_updateLockOutMode;
-(void)_alertSheetPresented:(id)arg1 ;
-(void)_alertSheetDismissed:(id)arg1 ;
-(void)_externalDeviceScreenBecameAvailable:(id)arg1 ;
-(void)_tearDownAndInvalidate:(BOOL)arg1 ;
-(void)_didChangeFromState:(long long)arg1 ;
-(void)setEffectiveTopDisplay:(id)arg1 actualTopDisplay:(id)arg2 withAnimationFactory:(id)arg3 ;
-(void)_toggleNotificationSuspendedState;
-(void)_toggleNowPlayingVisible:(BOOL)arg1 ;
-(void)_takeScreenIfNecessaryForTopDisplayActivation;
-(void)_handleMenuEventAndTakeScreen:(BOOL)arg1 ;
-(void)_setSiriState:(long long)arg1 ;
-(void)_dismissSiriWithFactory:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_hideWindowsForSetup:(BOOL)arg1 ;
-(CGRect)_defaultScreenFrameOffsetForStatusBar:(id)arg1 ;
-(void)_updateAlertSheetFocus;
-(id)_newNowPlayingScene;
-(void)_createFakeIconOperationController;
-(BOOL)_allowInCallOverrideStyle;
-(BOOL)_allowNavigationOverrideStyle;
-(void)setEffectiveTopDisplay:(id<SBDisplayProtocol>)arg1 ;
-(void)setEffectiveTopDisplay:(id)arg1 withAnimationFactory:(id)arg2 ;
-(void)handleUncompletedAppLaunch;
-(void)setNowPlayingBundleID:(id)arg1 ;
-(SBWindow *)lockoutWindow;
-(void)cleanupForTopDisplayIfNecessaryWithAnimationFactory:(id)arg1 ;
-(void)_noteInitializationCompleted;
-(void)_noteSetupCompleted;
-(void)iOSUIRequestedForApplicationURL:(id)arg1 ;
-(void)siriRequestedWithAction:(long long)arg1 ;
-(id)initWithScreen:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SBStarkScreenControllerDelegate>)arg1 ;
-(id)init;
-(id<SBStarkScreenControllerDelegate>)delegate;
-(long long)state;
-(void)invalidate;
-(FBSDisplay *)fbsDisplay;
-(UIScreen *)screen;
-(long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3 ;
-(void)statusBar:(id)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5 ;
-(void)statusBar:(id)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4 ;
-(void)removeObserver:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3 ;
-(void)addObserver:(id)arg1 ;
-(void)windowContextManagerWillStartTrackingContexts:(id)arg1 ;
-(void)windowContextManagerDidStopTrackingContexts:(id)arg1 ;
-(BOOL)windowContextManager:(id)arg1 shouldAddContext:(id)arg2 ;
-(SBWindow *)mainWindow;
-(void)_externalDeviceScreenBecameUnavailable:(id)arg1 ;
@end

