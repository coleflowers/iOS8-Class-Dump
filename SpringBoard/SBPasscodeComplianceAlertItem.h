/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBPasscodeComplianceAlertItem : SBAlertItem {

	NSString* _title;
	NSString* _message;
	NSString* _continueButtonTitle;
	NSString* _cancelButtonTitle;

}
-(id)initWithTitle:(id)arg1 message:(id)arg2 continueButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
@end
