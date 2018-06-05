/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:48:34 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/AdvertisingController.h>

@class PSSpecifier;

@interface AdvertisingRestrictionsController : AdvertisingController {

	PSSpecifier* _allowedGroup;
	id _restrictionsChangedObserver;
	id _effectiveSettingsChangedObserver;

}

@property (nonatomic,retain) id restrictionsChangedObserver;                   //@synthesize restrictionsChangedObserver=_restrictionsChangedObserver - In the implementation block
@property (nonatomic,retain) id effectiveSettingsChangedObserver;              //@synthesize effectiveSettingsChangedObserver=_effectiveSettingsChangedObserver - In the implementation block
-(id)featureValue:(id)arg1 ;
-(void)setFeatureValue:(id)arg1 specifier:(id)arg2 ;
-(void)setRestrictionsChangedObserver:(id)arg1 ;
-(void)setEffectiveSettingsChangedObserver:(id)arg1 ;
-(id)effectiveSettingsChangedObserver;
-(id)restrictionsChangedObserver;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)specifiers;
@end
