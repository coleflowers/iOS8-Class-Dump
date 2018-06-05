/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:48:34 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, UISwitch, PSSpecifier, NSMutableArray, NSString;

@interface RestrictionsController : PSListController <UIAlertViewDelegate> {

	UIAlertView* _alert;
	UISwitch* _delayedSwitch;
	BOOL _delayedValue;
	PSSpecifier* _iBooksSpecifier;
	PSSpecifier* _iBooksExplicitSpecifier;
	BOOL _isObservingFaceTimeChanges;
	NSMutableArray* _mcRestrictionFeatures;

}

@property (nonatomic,retain) NSMutableArray * mcRestrictionFeatures;              //@synthesize mcRestrictionFeatures=_mcRestrictionFeatures - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresPIN;
+(void)formatSearchEntries:(id)arg1 parent:(id)arg2 ;
-(void)_handleExternalApplicationChange;
-(id)capabilityEnabled:(id)arg1 ;
-(void)profileNotification:(id)arg1 ;
-(void)_disableSpecifier:(id)arg1 ;
-(BOOL)_isInConference;
-(void)_disableFaceTimeRestrictions;
-(void)updateToggleStateAndReload;
-(id)featureValue:(id)arg1 ;
-(void)setFeatureValue:(id)arg1 specifier:(id)arg2 ;
-(BOOL)siriContentRestrictionsLockedDown;
-(BOOL)featureRestricted:(id)arg1 ;
-(void)updateToggleState;
-(BOOL)_isiBooksInstalled;
-(void)_handleFaceTimeConferenceStateChanged;
-(void)_observeFaceTimeChanges:(BOOL)arg1 ;
-(void)localizedRestrictionSourceDescriptionChanged:(id)arg1 ;
-(void)_setSettingsRestrictedByString;
-(id)_mcRestrictionFeaturesFromSpecifiers:(id)arg1 ;
-(void)setMcRestrictionFeatures:(NSMutableArray *)arg1 ;
-(BOOL)_isiTunesUInstalled;
-(id)localizedStringForiTunesStorePasswordDefaultTimeout;
-(id)currentCountryCode;
-(id)contentRatingsForMediaType:(id)arg1 ;
-(id)explicitEnabled;
-(id)countryCodes;
-(void)setCountryCode:(id)arg1 reload:(BOOL)arg2 ;
-(id)localizedContentRestrictionStringForRank:(id)arg1 mediaType:(id)arg2 ;
-(id)reversedBoolFeatureValue:(id)arg1 ;
-(void)setReversedBoolFeatureValue:(id)arg1 specifier:(id)arg2 ;
-(id)webContentRestrictionState:(id)arg1 ;
-(id)siriContentRestrictionState:(id)arg1 ;
-(void)setCapabilityEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)revertRestrictionPrefsIfNeeded;
-(id)currentCountryString:(id)arg1 ;
-(id)explicitEnabledString;
-(void)setExplicitEnabled:(id)arg1 ;
-(id)iBooksExplicitEnabledString:(id)arg1 ;
-(id)contentRestriction:(id)arg1 ;
-(NSMutableArray *)mcRestrictionFeatures;
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)specifiers;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)willResignActive;
-(void)willBecomeActive;
@end

