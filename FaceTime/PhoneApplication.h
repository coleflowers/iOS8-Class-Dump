/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:25:15 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@protocol PhoneBaseViewController;
@class UIWindow, PhoneRootViewController, UIViewController, CUTWeakReference, NSString, UIColor;

@interface PhoneApplication : UIApplication <UIApplicationDelegate> {

	PhoneRootViewController* _rootController;
	UIWindow* _window;
	UIViewController*<PhoneBaseViewController> _currentController;
	CUTWeakReference* _currentActionSheetWeakReference;
	double _launchTime;
	unsigned _applicationResumedViaURL : 1;
	NSString* _cachedApplicationBadgeString;
	BOOL _headerViewShowsAllRecentCalls;
	BOOL _audioButtonAllowsPhoneCallsAndFaceTimeAudio;
	BOOL _suspendingApplication;
	BOOL _resumingApplication;
	long long _headerViewNumberOfCallsToShow;

}

@property (nonatomic,readonly) unsigned userInterfaceStyle; 
@property (nonatomic,readonly) long long backdropStyle; 
@property (nonatomic,readonly) long long wizardGlobalAppearanceStyle; 
@property (nonatomic,readonly) int addressBookUIStyle; 
@property (nonatomic,readonly) BOOL usesBlendModes; 
@property (nonatomic,readonly) BOOL alwaysShowLocalVideo; 
@property (nonatomic,readonly) BOOL contentViewCanRotate; 
@property (nonatomic,readonly) BOOL tabBarFillsScreen; 
@property (nonatomic,readonly) BOOL tabBarCanSlide; 
@property (nonatomic,readonly) BOOL showSplashScreenOnSignin; 
@property (nonatomic,readonly) int defaultAction; 
@property (nonatomic,readonly) BOOL defaultActionIsTelephonyCall; 
@property (nonatomic,readonly) BOOL defaultActionIsFaceTimeAudio; 
@property (nonatomic,readonly) BOOL defaultActionIsFaceTimeVideo; 
@property (nonatomic,readonly) BOOL showsTelephonyCalls; 
@property (nonatomic,readonly) BOOL showsFaceTimeAudio; 
@property (nonatomic,readonly) BOOL showsFaceTimeVideo; 
@property (nonatomic,readonly) BOOL showsTelephonyFavorites; 
@property (nonatomic,readonly) BOOL showsFaceTimeAudioFavorites; 
@property (nonatomic,readonly) BOOL showsFaceTimeVideoFavorites; 
@property (nonatomic,readonly) BOOL showsTelephonyRecents; 
@property (nonatomic,readonly) BOOL showsFaceTimeAudioRecents; 
@property (nonatomic,readonly) BOOL showsFaceTimeVideoRecents; 
@property (nonatomic,readonly) BOOL badgesMissedTelephonyCalls; 
@property (nonatomic,readonly) BOOL badgesMissedFaceTimeAudio; 
@property (nonatomic,readonly) BOOL badgesMissedFaceTimeVideo; 
@property (nonatomic,readonly) BOOL showsPhoneDialer; 
@property (nonatomic,readonly) BOOL dialerIsNumericOnly; 
@property (nonatomic,readonly) BOOL showsPhoneVoicemail; 
@property (nonatomic,readonly) BOOL usesUnifiedInterface; 
@property (nonatomic,readonly) BOOL headerViewShowsAllRecentCalls;                                      //@synthesize headerViewShowsAllRecentCalls=_headerViewShowsAllRecentCalls - In the implementation block
@property (nonatomic,readonly) long long headerViewNumberOfCallsToShow;                                 //@synthesize headerViewNumberOfCallsToShow=_headerViewNumberOfCallsToShow - In the implementation block
@property (nonatomic,readonly) BOOL audioButtonAllowsPhoneCallsAndFaceTimeAudio;                        //@synthesize audioButtonAllowsPhoneCallsAndFaceTimeAudio=_audioButtonAllowsPhoneCallsAndFaceTimeAudio - In the implementation block
@property (nonatomic,readonly) BOOL applicationResumedViaURL; 
@property (nonatomic,readonly) BOOL suspendingApplication;                                              //@synthesize suspendingApplication=_suspendingApplication - In the implementation block
@property (nonatomic,readonly) BOOL resumingApplication;                                                //@synthesize resumingApplication=_resumingApplication - In the implementation block
@property (readonly) UIColor * applicationTintColor; 
@property (assign,nonatomic) UIViewController*<PhoneBaseViewController> currentController;              //@synthesize currentController=_currentController - In the implementation block
@property (nonatomic,readonly) unsigned contentViewOffscreenEdge; 
@property (nonatomic,readonly) BOOL contentViewAnimationsFadeInsteadOfMove; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
+(id)viewControllerForRootViewType:(int)arg1 ;
+(id)viewControllerForTabViewType:(int)arg1 ;
+(Class)controllerClassForTabViewType:(int)arg1 ;
+(id)sharedNumberFormatter;
-(BOOL)inFaceTime;
-(BOOL)_faceTimeInvitationExists;
-(BOOL)_activeFaceTimeCallExists;
-(BOOL)faceTimeInvitationExists;
-(BOOL)activeFaceTimeCallExists;
-(void)_forceWindowFront;
-(void)requestSuspendWithTransparencyAfterLastCall;
-(void)requestSuspendAfterLastCall;
-(void)setShouldSuspendAfterLastCall:(BOOL)arg1 ;
-(BOOL)callInterruptedAnApplication;
-(void)promptUpgradeCurrentPhoneCallToFaceTimeIfNecessary;
-(BOOL)shouldSuspendAfterLastCall;
-(id)localizedCarrierName;
-(BOOL)setMuted:(BOOL)arg1 ;
-(BOOL)inCall;
-(BOOL)toggleMute;
-(CTServerConnectionRef)_serverConnection;
-(BOOL)inAirplaneMode;
-(BOOL)isMuted;
-(unsigned)userInterfaceStyle;
-(BOOL)usesBlendModes;
-(BOOL)showsTelephonyFavorites;
-(BOOL)showsFaceTimeAudioFavorites;
-(BOOL)showsTelephonyRecents;
-(BOOL)showsFaceTimeAudioRecents;
-(BOOL)showsFaceTimeVideoRecents;
-(BOOL)contentViewCanRotate;
-(BOOL)shouldSnapshot;
-(int)addressBookUIStyle;
-(void)dismissActionSheet;
-(BOOL)dialRecentCall:(id)arg1 ;
-(BOOL)tabBarFillsScreen;
-(BOOL)isDisplayingSheet;
-(void)presentActionSheet:(id)arg1 fromToolBarItem:(id)arg2 ;
-(void)presentActionSheet:(id)arg1 ;
-(BOOL)authorizedToUseAddressBook;
-(long long)wizardGlobalAppearanceStyle;
-(void)_localeChangedNotification:(id)arg1 ;
-(void)_ftcServiceAvailabilityChanged:(id)arg1 ;
-(void)handleApplicationFinishedSnapshottingNotification:(id)arg1 ;
-(void)accessibilitySettingsChangedNotification:(id)arg1 ;
-(void)_initializeUI;
-(BOOL)alwaysShowLocalVideo;
-(BOOL)tabBarCanSlide;
-(void)_resetCurrentViewController;
-(void)showInitialView;
-(BOOL)usesUnifiedInterface;
-(UIColor *)applicationTintColor;
-(void)_releaseAddressBook;
-(BOOL)telephonyCallingIsAvailable;
-(BOOL)showsFaceTimeAudio;
-(BOOL)faceTimeAudioIsAvailable;
-(BOOL)showsFaceTimeVideo;
-(BOOL)faceTimeVideoIsAvailable;
-(void)_revertAddressBook;
-(void)_scroll;
-(void)startScrollTest;
-(void)startSwitchTest;
-(BOOL)shouldAttemptPhoneCallForService:(int)arg1 viewController:(id)arg2 ;
-(void)showAirplaneViewForController:(id)arg1 ;
-(BOOL)shouldAttemptPhoneCallForService:(int)arg1 ;
-(BOOL)defaultActionIsFaceTimeAudio;
-(BOOL)dialPhoneNumber:(id)arg1 forUID:(int)arg2 service:(int)arg3 dialAssist:(BOOL)arg4 wasAlreadyAssisted:(BOOL)arg5 ;
-(BOOL)dialPhoneNumber:(id)arg1 forUID:(int)arg2 dialAssist:(BOOL)arg3 wasAlreadyAssisted:(BOOL)arg4 ;
-(BOOL)dialPhoneNumber:(id)arg1 forUID:(int)arg2 dialAssist:(BOOL)arg3 ;
-(BOOL)dialPhoneNumber:(id)arg1 dialAssist:(BOOL)arg2 ;
-(id)destinationForCall:(id)arg1 wasDialAssisted:(BOOL*)arg2 ;
-(BOOL)isDeviceCapableOfFaceTimeVideo;
-(BOOL)isDeviceCapableOfTelephonyCalls;
-(BOOL)isDeviceCapableOfFaceTimeAudio;
-(BOOL)showSplashScreenOnSignin;
-(BOOL)showsFaceTimeVideoFavorites;
-(BOOL)badgesMissedTelephonyCalls;
-(BOOL)badgesMissedFaceTimeAudio;
-(BOOL)badgesMissedFaceTimeVideo;
-(BOOL)showsPhoneDialer;
-(BOOL)dialerIsNumericOnly;
-(BOOL)showsPhoneVoicemail;
-(BOOL)applicationResumedViaURL;
-(CGRect)phoneViewTabBarContentFrame;
-(double)launchTime;
-(void)_logSwitch;
-(id)currentViewController;
-(BOOL)shouldHangUpOnLock;
-(BOOL)dialPhoneNumber:(id)arg1 ;
-(int)userInterfaceScreenType;
-(BOOL)isLowGraphicsPerformanceDevice;
-(BOOL)defaultActionIsTelephonyCall;
-(BOOL)defaultActionIsFaceTimeVideo;
-(BOOL)showsCallsFromService:(int)arg1 ;
-(unsigned)contentViewOffscreenEdge;
-(BOOL)contentViewAnimationsFadeInsteadOfMove;
-(void)setCurrentController:(UIViewController*<PhoneBaseViewController>)arg1 ;
-(BOOL)headerViewShowsAllRecentCalls;
-(long long)headerViewNumberOfCallsToShow;
-(BOOL)audioButtonAllowsPhoneCallsAndFaceTimeAudio;
-(BOOL)suspendingApplication;
-(BOOL)resumingApplication;
-(void*)existingAddressBook;
-(void)dealloc;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)applicationWillSuspendForEventsOnly;
-(void)applicationDidResumeForEventsOnly;
-(id)nameOfDefaultImageToUpdateAtSuspension;
-(BOOL)applicationSuspendWithSettings:(id)arg1 ;
-(BOOL)openURL:(id)arg1 ;
-(void)applicationOpenURL:(id)arg1 ;
-(void)userDefaultsDidChange:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)rootViewController;
-(BOOL)handleDoubleHeightStatusBarTap:(long long)arg1 ;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3 ;
-(void)setIgnoresInteractionEvents:(BOOL)arg1 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(long long)backdropStyle;
-(void)clearActionSheet;
-(int)defaultAction;
-(BOOL)showsTelephonyCalls;
-(UIViewController*<PhoneBaseViewController>)currentController;
-(void*)addressBook;
-(BOOL)dialVoicemail;
@end

