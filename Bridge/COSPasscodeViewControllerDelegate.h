/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:05 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol COSPasscodeViewControllerDelegate <NSObject>
@optional
-(void)passcodeViewController:(id)arg1 passcodeViewIsVisible:(BOOL)arg2;
-(void)passcodeViewController:(id)arg1 wasDismissedWithReason:(int)arg2;
-(BOOL)shouldShowCancelButtonForPasscodeViewController:(id)arg1;
-(BOOL)passcodeViewController:(id)arg1 passcodeIsCorrect:(id)arg2;
-(void)passcodeViewController:(id)arg1 didFinishSettingUpPasscode:(id)arg2;

@end

