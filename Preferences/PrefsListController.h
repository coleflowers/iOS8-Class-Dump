/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:48:34 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSListController.h>
#import <Preferences/PSSearchControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Preferences/RadiosPreferencesDelegate.h>
#import <Preferences/DevicePINControllerDelegate.h>

@protocol OS_dispatch_queue;
@class EAAccessory, PSSpecifier, NSArray, NSDictionary, NSSet, NSObject, UIActionSheet, ACAccountStore, PSSearchController, NSString;

@interface PrefsListController : PSListController <PSSearchControllerDelegate, UIActionSheetDelegate, RadiosPreferencesDelegate, DevicePINControllerDelegate> {

	BOOL _didFirstLoad;
	EAAccessory* _speakerAccessory;
	PSSpecifier* _eqSpecifier;
	NSArray* _thirdPartySpecifiers;
	NSDictionary* _movedThirdPartySpecifiers;
	BOOL _initiallyLoadingThirdPartySpecifiers;
	BOOL _refreshingThirdPartySpecifiers;
	BOOL _victoriaCapable;
	PSSpecifier* _victoriaSpecifier;
	PSSpecifier* _notificationsSpecifier;
	PSSpecifier* _castleSpecifier;
	PSSpecifier* _twitterSpecifier;
	PSSpecifier* _facebookSpecifier;
	PSSpecifier* _flickrSpecifier;
	PSSpecifier* _vimeoSpecifier;
	PSSpecifier* _weiboSpecifier;
	PSSpecifier* _tencentweiboSpecifier;
	PSSpecifier* _messagesSpecifier;
	PSSpecifier* _faceTimeSpecifier;
	PSSpecifier* _gameCenterSpecifier;
	PSSpecifier* _carrierSelectionSpecifier;
	PSSpecifier* _personalHotspotSpecifier;
	BOOL _wifiValueIsClean;
	BOOL _bluetoothValueIsClean;
	NSArray* _originalSpecifiers;
	NSSet* _originalDisplayIdentifiers;
	NSObject*<OS_dispatch_queue> _iconCacheQueue;
	NSDictionary* _iconCache;
	UIActionSheet* _airplaneSheet;
	ACAccountStore* _accountStore;
	PSSearchController* _searchController;
	NSString* _wifiString;
	NSString* _bluetoothString;

}

@property (nonatomic,readonly) UIViewController*<PSController> categoryController; 
@property (nonatomic,retain,readonly) PSSearchController * searchController;                    //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,copy) NSString * wifiString;                                               //@synthesize wifiString=_wifiString - In the implementation block
@property (nonatomic,copy) NSString * bluetoothString;                                          //@synthesize bluetoothString=_bluetoothString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)radiosPreferences;
+(BOOL)airplaneMode;
+(void)setAirplaneMode:(BOOL)arg1 ;
+(void)formatSearchEntries:(id)arg1 parent:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)selectGeneralCategoryForced:(BOOL)arg1 ;
-(void)loadPPTTestSpecifiers:(int)arg1 ;
-(void)selectGeneralCategory;
-(id)generalViewController;
-(id)specifierForBundle:(id)arg1 ;
-(void)refresh3rdPartyBundles;
-(void)updateWeiboState;
-(UIViewController*<PSController>)categoryController;
-(void)loadThirdPartySpecifierForBundleID:(id)arg1 ;
-(void)setSpeakerAccessory:(id)arg1 eqAvailable:(BOOL)arg2 ;
-(void)_newCarrierNotification;
-(void)rerootNavigationController;
-(void)updateRestrictedSettings;
-(void)updateWifi;
-(void)iMessageSupportMayHaveChanged;
-(void)checkDeveloperSettingsState;
-(void)_showDetailTargetDidChange:(id)arg1 ;
-(void)bluetoothPowerChanged:(id)arg1 ;
-(void)displayIdentifiersChanged;
-(void)setWifiString:(NSString *)arg1 ;
-(void)setBluetoothString:(NSString *)arg1 ;
-(void)selectGeneralCategoryForced:(BOOL)arg1 showController:(BOOL)arg2 ;
-(id)_sidebarSpecifierForCategoryController;
-(void)_showControllerFromSpecifier:(id)arg1 ;
-(void)insertMovedThirdPartySpecifiersAtStartIndex:(unsigned long long)arg1 usingInsertBlock:(/*^block*/id)arg2 andExistenceBlock:(/*^block*/id)arg3 ;
-(void)_loadThirdPartySpecifiersIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadThirdPartySpecifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)updateAccountSpecifiers;
-(id)_specifierDictionaryForDeveloperBundlePath:(id)arg1 identifier:(id)arg2 ;
-(id)_specifierDictionaryForBundlePath:(id)arg1 identifier:(id)arg2 internalIcon:(BOOL)arg3 searchPlist:(id)arg4 ;
-(BOOL)_showCarrier;
-(void)updatePersonalHotspotWithState:(int)arg1 andReason:(int)arg2 ;
-(void)configurePasscodeSpecifierFromSpecifiers:(id)arg1 ;
-(void)_reallyLoadThirdPartySpecifiersForProxies:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)reloadCellularRelatedSpecifiers;
-(void)updateShowsCarrierSettingsMenuVisibility;
-(void)wifiNetworkFetch:(id)arg1 ;
-(NSString *)wifiString;
-(void)_setupiCloudSpecifier:(id)arg1 ;
-(void)appleAccountsDidChange;
-(void)_setAirplaneMode:(BOOL)arg1 ;
-(id)cellularDisabledStatusForSpecifier:(id)arg1 ;
-(void)bluetoothValueFetch:(id)arg1 ;
-(NSString *)bluetoothString;
-(id)identifierForSelectedIndex;
-(id)dndGlobalState:(id)arg1 ;
-(id)wifiNetwork:(id)arg1 ;
-(void)setupAppleAccountCategory:(id)arg1 ;
-(void)setAirplaneMode:(id)arg1 specifier:(id)arg2 ;
-(void)confirmationSpecifierConfirmed:(id)arg1 ;
-(void)confirmationSpecifierCancelled:(id)arg1 ;
-(id)getAirplaneMode:(id)arg1 ;
-(id)phoneStatusForSpecifier:(id)arg1 ;
-(id)cellularDataStatusForSpecifier:(id)arg1 ;
-(void)_localeChanged;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)suspend;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willEnterForeground;
-(PSSearchController *)searchController;
-(void)clearCache;
-(id)currentNetwork:(id)arg1 ;
-(id)bluetoothValue:(id)arg1 ;
-(void)setShowsCarrierSettingsMenu:(BOOL)arg1 ;
-(void)MISStateChangedNotification:(id)arg1 ;
-(id)getTetheringStatus:(id)arg1 ;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)lazyLoadSpecialBundleForSpecifier:(id)arg1 ;
-(void)_simStatusChanged:(CFStringRef)arg1 ;
-(void)networkChanged;
-(void)airplaneModeChanged;
-(id)_accountStore;
-(id)specifiers;
-(void)reloadSpecifiers;
-(id)specifierForID:(id)arg1 ;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(void)searchController:(id)arg1 openURL:(id)arg2 ;
-(id)rootSpecifiersForSearchController:(id)arg1 ;
@end

