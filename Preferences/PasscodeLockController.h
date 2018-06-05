/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:48:34 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <Preferences/DevicePINControllerDelegate.h>

@class PSSpecifier, UIAlertView, NSString;

@interface PasscodeLockController : PSListController <DevicePINControllerDelegate> {

	int _policyDictatedMaxFailedAttempts;
	PSSpecifier* _voiceDialSpecifier;
	PSSpecifier* _voiceDialGroupSpecifier;
	UIAlertView* _enablePasscodeMesaChoice;
	UIAlertView* _disablePasscodeWarning;
	UIAlertView* _disableSafariPasswordsAlert;
	BOOL _canUnlockWatch;

}

@property (assign,nonatomic) BOOL canUnlockWatch;                   //@synthesize canUnlockWatch=_canUnlockWatch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)passcodeGracePeriod;
-(void)updateGracePeriodSpecifier;
-(void)profileNotification:(id)arg1 ;
-(void)setCanUnlockWatch:(BOOL)arg1 ;
-(void)_updateGracePeriodForSpecifier:(id)arg1 ;
-(void)_localizeGracePeriodTitlesForSpecifier:(id)arg1 ;
-(BOOL)shouldShowVoiceDial;
-(BOOL)isVoiceDialRestricted;
-(void)updateVoiceDialGroup;
-(void)_setWipeEnabled:(BOOL)arg1 ;
-(void)_didUpdatePasscode:(id)arg1 ;
-(id)isSimplePasscodeEnabled:(id)arg1 ;
-(void)showKeychainAlert;
-(void)setEnabledInLockScreen:(id)arg1 specifier:(id)arg2 ;
-(id)enabledInLockScreen:(id)arg1 ;
-(BOOL)isAssistantRestricted;
-(BOOL)isPassbookRestricted;
-(id)_makeWipeDeviceGroupFooter;
-(void)disablePasscodeRequiredSpecifiers:(id)arg1 ;
-(void)togglePasscode:(id)arg1 ;
-(void)setSimplePasscodeEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)graceValue:(id)arg1 ;
-(void)setGraceValue:(id)arg1 specifier:(id)arg2 ;
-(id)voiceDial:(id)arg1 ;
-(void)setVoiceDial:(id)arg1 specifier:(id)arg2 ;
-(id)assistantUnderLockEnabled:(id)arg1 ;
-(void)setAssistantUnderLockEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)passbook:(id)arg1 ;
-(void)setPassbook:(id)arg1 specifier:(id)arg2 ;
-(id)wipeEnabled:(id)arg1 ;
-(void)setWipeEnabled:(id)arg1 specifier:(id)arg2 ;
-(BOOL)canUnlockWatch;
-(void)dealloc;
-(id)init;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)suspend;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)showReplyWithMessage;
-(BOOL)isPasscodeSet;
-(id)specifiers;
-(BOOL)canBeShownFromSuspendedState;
-(void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2 ;
-(void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2 ;
-(void)didAcceptRemovePIN;
-(void)willAcceptEnteredPIN;
-(void)willCancelEnteringPIN;
@end
