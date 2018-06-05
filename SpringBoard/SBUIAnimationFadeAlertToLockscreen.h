/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBLockScreenViewController, SBAlert, SBAlertManager;

@interface SBUIAnimationFadeAlertToLockscreen : SBUIMainScreenAnimationController {

	SBLockScreenViewController* _lockScreenViewController;
	SBAlert* _deactivatingAlert;
	SBAlertManager* _alertManager;

}
-(double)animationDelay;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)initWithLockScreenController:(id)arg1 deactivatingAlert:(id)arg2 alertManager:(id)arg3 ;
-(void)_startAnimation;
-(void)dealloc;
-(double)animationDuration;
@end
