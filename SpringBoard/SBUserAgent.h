/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBUIUserAgent.h>

@class SBBulletinAlertHandlerRegistry, NSString;

@interface SBUserAgent : NSObject <SBUIUserAgent> {

	SBBulletinAlertHandlerRegistry* _modalAlertRegistry;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedUserAgent;
-(BOOL)_openApplication:(id)arg1 withURL:(id)arg2 fromSource:(int)arg3 animated:(BOOL)arg4 options:(id)arg5 ;
-(BOOL)canLaunchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 ;
-(id)_safeValue:(id)arg1 forKey:(id)arg2 ofType:(Class)arg3 ;
-(void)_cleanupFromBannerLaunch;
-(BOOL)_launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(BOOL)arg4 animate:(BOOL)arg5 ;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)arg1 andDimScreen:(BOOL)arg2 ;
-(void)activateRemoteAlertService:(id)arg1 options:(id)arg2 activationHandler:(/*^block*/id)arg3 deactivationHandler:(/*^block*/id)arg4 ;
-(id)foregroundDisplayID;
-(BOOL)isApplicationForegroundObscured:(id)arg1 ;
-(BOOL)applicationInstalledForDisplayID:(id)arg1 ;
-(BOOL)deviceIsPasscodeLockedRemotely;
-(BOOL)deviceIsTethered;
-(int)networkUsageTypeForAppWithDisplayID:(id)arg1 ;
-(BOOL)canUserLaunchIcon;
-(void)openURL:(id)arg1 animateIn:(BOOL)arg2 scale:(float)arg3 start:(double)arg4 duration:(float)arg5 animateOut:(BOOL)arg6 ;
-(BOOL)launchApplicationFromSource:(int)arg1 withURL:(id)arg2 options:(id)arg3 ;
-(BOOL)launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(BOOL)arg4 ;
-(BOOL)canLaunchFromAwayViewPluginWithURL:(id)arg1 bundleID:(id)arg2 ;
-(BOOL)launchFromAwayViewPluginWithURL:(id)arg1 bundleID:(id)arg2 allowUnlock:(BOOL)arg3 animate:(BOOL)arg4 ;
-(CGRect)defaultContentRegionForAwayViewPlugin:(id)arg1 withOrientation:(long long)arg2 ;
-(void)adjustLockScreenContentByOffset:(double)arg1 forAwayViewPlugin:(id)arg2 withAnimationDuration:(double)arg3 ;
-(void)updateLockScreenInterfaceIfNecessary;
-(void)dimScreen:(BOOL)arg1 ;
-(BOOL)isIdleTimerDisabledForReason:(id)arg1 ;
-(void)lockAndDimDevice;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)arg1 ;
-(BOOL)isScreenOn;
-(BOOL)launchDisplayWithURL:(id)arg1 forCall:(BOOL)arg2 sender:(id)arg3 ;
-(void)addActiveInterfaceOrientationObserver:(id)arg1 ;
-(void)removeActiveInterfaceOrientationObserver:(id)arg1 ;
-(void)setMinimumBacklightLevel:(float)arg1 animated:(BOOL)arg2 ;
-(id)topSuspendedEventsOnlyDisplayID;
-(BOOL)deviceIsLocked;
-(void)dealloc;
-(id)init;
-(long long)activeInterfaceOrientation;
-(void)setIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)openURL:(id)arg1 allowUnlock:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)deviceIsPasscodeLocked;
-(BOOL)launchApplicationFromSource:(int)arg1 withDisplayID:(id)arg2 options:(id)arg3 ;
-(void)setWallpaperTunnelActive:(BOOL)arg1 forFullscreenAlertController:(id)arg2 ;
-(void)updateInterfaceOrientationIfNecessary;
-(BOOL)springBoardIsActive;
-(BOOL)canLaunchFromBulletinWithURL:(id)arg1 bundleID:(id)arg2 ;
-(BOOL)launchFromPushOrLocalBulletin:(id)arg1 actionIdentifier:(id)arg2 origin:(int)arg3 ;
-(BOOL)launchFromBulletinWithURL:(id)arg1 bundleID:(id)arg2 allowUnlock:(BOOL)arg3 animate:(BOOL)arg4 launchOrigin:(int)arg5 ;
-(BOOL)isSBUILoggingEnabled;
-(id)localizedDisplayNameForDisplayID:(id)arg1 ;
-(BOOL)lockScreenIsShowing;
-(void)notifyOnNextUserEvent;
-(id)modalBulletinAlertHandlerRegistry;
-(void)activateModalBulletinAlert:(id)arg1 ;
-(void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(id)arg2 ;
-(void)prepareToAnswerCall;
-(void)activateRemoteAlertService:(id)arg1 options:(id)arg2 ;
-(void)enableLockScreenBundleNamed:(id)arg1 activationContext:(id)arg2 ;
-(void)disableLockScreenBundleNamed:(id)arg1 deactivationContext:(id)arg2 ;
-(BOOL)deviceIsBlocked;
-(id)foregroundApplicationDisplayID;
-(BOOL)alertIsActive;
-(void)setIdleText:(id)arg1 ;
-(void)undimScreen;
-(void)updateCustomSubtitleTextForAwayViewPlugin:(id)arg1 ;
@end
