/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBControlCenterObserver.h>
#import <SpringBoard/SBAlertManagerObserver.h>

@class SBAlertManager, NSString;

@interface SBScreenTimeTrackingController : NSObject <SBControlCenterObserver, SBAlertManagerObserver> {

	unsigned long long _thisCategoryStartTime;
	double _lastCategoryChangeTime;
	int _activeCategory;
	int _previousCategory;
	SBAlertManager* _alertManager;
	BOOL _lastCameraActivationWasForBottomCorner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)alertManager:(id)arg1 didActivateAlert:(id)arg2 overAlerts:(id)arg3 ;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidFinishTransition;
-(void)_noteLocked;
-(void)_noteLockScreenUndimmed;
-(void)_noteAppWillBecomeFrontmost:(id)arg1 ;
-(void)_noteAppDidBecomeFrontmost:(id)arg1 ;
-(void)_noteHomeScreen;
-(void)_noteSiriVisibilityChanged;
-(void)_noteAppSwitcherDidAppear;
-(void)_noteSearchVisibilityDidChange:(id)arg1 ;
-(void)_noteNotificationCenterTodayWillAppear;
-(void)_noteNotificationCenterAllWillAppear;
-(void)_noteNotificationCenterWillDismiss;
-(void)_noteLockScreenPasscodeDidAppear;
-(void)_noteLockScreenPasscodeDidDisappear;
-(void)_noteControlCenterControlDidActivate:(id)arg1 ;
-(void)_noteControlCenterControlDidDeactivate:(id)arg1 ;
-(void)_noteMediaControlsDidAppear;
-(void)_noteMediaControlsDidDisappear;
-(void)_noteBacklightDidTurnOn:(id)arg1 ;
-(void)_noteSignificantTimeChanged:(id)arg1 ;
-(BOOL)_isLockScreenNavigationActive;
-(void)_setActiveCategory:(int)arg1 ;
-(void)_resetCategoryForContext:(int)arg1 ;
-(id)_nameForCurrentContext;
-(void)_noteLockScreenCameraDidAppear;
-(void)_noteLockScreenCameraDidDisappear;
-(void)dealloc;
-(id)initWithAlertManager:(id)arg1 ;
-(int)_activeContext;
@end

