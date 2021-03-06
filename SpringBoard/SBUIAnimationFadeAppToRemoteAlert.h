/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBRemoteAlertAdapter, SBAlertManager, UIView, NSArray;

@interface SBUIAnimationFadeAppToRemoteAlert : SBUIMainScreenAnimationController {

	SBRemoteAlertAdapter* _alert;
	SBAlertManager* _alertManager;
	UIView* _appContextHostView;
	UIView* _alertContextHostView;
	NSArray* _accessoryHostViews;

}
-(void)_prepareAnimation;
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(void)_animationFinished;
-(id)initWithAlert:(id)arg1 deactivatingApp:(id)arg2 alertManager:(id)arg3 ;
-(void)_startAnimation;
-(void)dealloc;
-(double)animationDuration;
-(void)_setHidden:(BOOL)arg1 ;
@end

