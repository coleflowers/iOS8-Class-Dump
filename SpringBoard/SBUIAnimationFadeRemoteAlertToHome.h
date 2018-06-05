/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBAlertManager, SBRemoteAlertAdapter;

@interface SBUIAnimationFadeRemoteAlertToHome : SBUIMainScreenAnimationController {

	SBAlertManager* _alertManager;
	SBRemoteAlertAdapter* _alert;
	long long _targetStatusBarStyle;

}
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)initWithDeactivatingAlert:(id)arg1 alertManager:(id)arg2 ;
-(void)_startAnimation;
-(void)dealloc;
-(double)animationDuration;
@end
