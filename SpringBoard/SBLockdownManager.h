/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBDismissOnlyAlertItem, NSString;

@interface SBLockdownManager : NSObject {

	int _state;
	BOOL _settingUpActivationState;
	BOOL _isBricked;
	BOOL _isDeveloperDevice;
	BOOL _hasShownMismatchedSIM;
	SBDismissOnlyAlertItem* _activatingAlertItem;
	NSString* _unqiueDeviceIdentifier;

}
+(id)sharedInstance;
-(BOOL)brickedDevice;
-(void)_postAlertsIfNeeded;
-(BOOL)_shouldShowTelephonyAlerts;
-(BOOL)_hasEverRegistered;
-(BOOL)_isRegisteredToNetwork;
-(void)_setHasEverRegistered:(BOOL)arg1 ;
-(void)_setCurrentAlertItem:(id)arg1 ;
-(void)_activationFailed;
-(BOOL)isDeveloperDevice;
-(id)developerBuildExpirationDate;
-(void)_serviceAvailabilityChanged:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_setupActivationState;
-(int)lockdownState;
-(void)_resetActivationState;
@end

