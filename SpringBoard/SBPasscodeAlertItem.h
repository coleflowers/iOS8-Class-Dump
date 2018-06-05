/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardUI/SBAlertItem.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface SBPasscodeAlertItem : SBAlertItem <UITextFieldDelegate> {

	int _mode;
	int _unlockScreenType;
	NSString* _errorString;
	BOOL _hasEmergencyCall;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPasscodeMode:(int)arg1 unlockScreenType:(int)arg2 ;
-(void)_setErrorString:(id)arg1 ;
-(void)didEndCall;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
-(void)returnKeyPressed:(id)arg1 ;
-(void)cleanPreviousConfiguration;
@end

