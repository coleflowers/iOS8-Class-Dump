/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:48:34 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <Preferences/FMFSessionDelegate.h>

@class NSDictionary, NSMutableArray, NSArray, UIActionSheet, UIAlertView, NSMutableDictionary, NSDate, ACAccountStore, ACAccount, NSOperationQueue, FMFSession, FMFDevice, NSNumber, NSString;

@interface LocationServicesListController : PSListController <FMFSessionDelegate> {

	NSDictionary* _locationEntitiesDetails;
	NSMutableArray* _coalescedSystemServices;
	NSArray* _ignoredLocationEntities;
	UIActionSheet* _locationConfirmationSheet;
	UIAlertView* _locationConfirmationAlert;
	BOOL _locationSwitchedAlertButtons;
	BOOL _deferredRefreshDueToConfirm;
	BOOL _locationNotificationsEnabled;
	BOOL _locationDetailSpecifiersGroupOptional;
	NSMutableDictionary* _coalesceAppKeys;
	NSDate* _twentyFourHoursAgo;
	ACAccountStore* _accountStore;
	ACAccount* _primaryAccount;
	NSOperationQueue* _locationSharingOperationQueue;
	FMFSession* _locationSharingSession;
	FMFDevice* _locationSharingDevice;
	NSNumber* _locationSharingEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isLocationRestricted;
+(BOOL)isCoreRoutineAuthorized;
+(void)setCoreRoutineAuthorized:(BOOL)arg1 ;
-(void)updateRecentlyUsedDate;
-(void)updateForApplicationDidBecomeActive:(id)arg1 ;
-(void)stopLocationStatusUpdates;
-(int)locationUsageForEntity:(id)arg1 ;
-(void)setUsage:(int)arg1 forCell:(id)arg2 ;
-(void)setAuthLevel:(unsigned long long)arg1 forCell:(id)arg2 ;
-(int)locationUsageBasedOnDetails:(id)arg1 ;
-(void)_setLocationServicesEnabled:(BOOL)arg1 ;
-(void)refreshLinkStatusInParent;
-(void)_cancelConfirmDisableForSpecifier:(id)arg1 ;
-(id)locationSharingSpecifiers;
-(id)locationDetailSpecifiers;
-(void)updateLocationSharingSpecifiersWithReload:(BOOL)arg1 ;
-(void)confirmationClickedButtonAtIndex:(long long)arg1 ;
-(void)disableLocationServicesAfterConfirm:(id)arg1 ;
-(void)confirmationActionWithSpecifier:(id)arg1 ;
-(BOOL)_isFindMyDeviceSpecifier:(id)arg1 ;
-(void)disableAfterLoginConfirmation:(id)arg1 ;
-(void)_setEntityAuthorized:(BOOL)arg1 specifier:(id)arg2 ;
-(void)updateSpecifiersForImposedSettingsWithReload:(BOOL)arg1 ;
-(void)updateMutableStateBasedOnRestriction;
-(void)updateMutableStateForLocationSharing;
-(void)updateSpecifiersForImposedSettings;
-(id)hiddenBundlesByIdentifier;
-(id)localizedDisplayNameForBundleID:(id)arg1 ;
-(void)startLocationStatusUpdates;
-(BOOL)_shouldEnableLocationSharingSpecifier;
-(void)_locationSharingSpecifierWasTapped:(id)arg1 ;
-(BOOL)isLocationSharingEnabled;
-(id)locationSharingDevice;
-(BOOL)isLocationSharingModificationAllowed;
-(void)setLocationServicesEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isLocationServicesEnabled:(id)arg1 ;
-(id)locationSharingOperationQueue;
-(id)locationSharingSession;
-(unsigned long long)locationSharingTimeout;
-(void)mainThreadDidChangeActiveLocationSharingDevice:(id)arg1 ;
-(void)mainThreadConnectionError:(id)arg1 ;
-(void)mainThreadDidUpdateHidingStatus:(BOOL)arg1 ;
-(void)updateLocationUsage;
-(id)isEntityAuthorized:(id)arg1 ;
-(void)setEntityAuthorized:(id)arg1 specifier:(id)arg2 ;
-(void)showLocationPrivacyPage;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)primaryAccount;
-(id)accountStore;
-(void)connectionError:(id)arg1 ;
-(void)didUpdateHidingStatus:(BOOL)arg1 ;
-(void)didChangeActiveLocationSharingDevice:(id)arg1 ;
-(id)specifiers;
-(void)willBecomeActive;
@end

