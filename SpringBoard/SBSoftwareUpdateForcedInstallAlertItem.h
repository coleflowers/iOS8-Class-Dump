/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBBaseSoftwareUpdateAlertItem.h>

@class NSTimer;

@interface SBSoftwareUpdateForcedInstallAlertItem : SBBaseSoftwareUpdateAlertItem {

	NSTimer* _timer;
	unsigned long long _timeLeftUntilInstall;
	BOOL _delayOnDismissForNonUserAction;
	BOOL _delayAfterNextUnlock;
	BOOL _countdown;

}

@property (assign,nonatomic) BOOL countdown;                                   //@synthesize countdown=_countdown - In the implementation block
@property (assign,nonatomic) BOOL delayOnDismissForNonUserAction;              //@synthesize delayOnDismissForNonUserAction=_delayOnDismissForNonUserAction - In the implementation block
@property (assign,nonatomic) BOOL delayAfterNextUnlock;                        //@synthesize delayAfterNextUnlock=_delayAfterNextUnlock - In the implementation block
-(void)setDelayOnDismissForNonUserAction:(BOOL)arg1 ;
-(void)_installUpdate;
-(void)updateBodyText;
-(void)setDelayAfterNextUnlock:(BOOL)arg1 ;
-(BOOL)delayOnDismissForNonUserAction;
-(BOOL)delayAfterNextUnlock;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)willPresentAlertView:(id)arg1 ;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(void)performUnlockAction;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(id)lockLabel;
-(BOOL)shouldShowInLockScreen;
-(void)_timerFired;
-(id)initWithDescriptor:(id)arg1 ;
-(BOOL)allowLockScreenDismissal;
-(BOOL)undimsScreen;
-(id)shortLockLabel;
-(void)willDeactivateForReason:(int)arg1 ;
-(BOOL)countdown;
-(void)setCountdown:(BOOL)arg1 ;
@end

