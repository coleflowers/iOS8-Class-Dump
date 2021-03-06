/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:47:45 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <Reminders/CLLocationManagerDelegate.h>

@class CLGeocoder, CLLocationManager, NSArray, NSMutableArray, RemindersLocationItem, NSString;

@interface RemindersLocationPickerModel : NSObject <CLLocationManagerDelegate> {

	CLGeocoder* _geocoder;
	CLLocationManager* _locationManager;
	BOOL _needsUpdate;
	BOOL _isReverseGeocoding;
	void* _addressBook;
	NSArray* _locationItemsForMe;
	BOOL _meCardIsSet;
	int _operationCount;
	CFArrayRef _delegates;
	NSMutableArray* _itemsQueuedForGeocoding;
	BOOL _isReverseGeocodingQueued;
	long long _selectedMeCardItem;
	int _selectedItemType;
	RemindersLocationItem* _currentLocationItem;
	RemindersLocationItem* _customLocationItem;
	RemindersLocationItem* _itemBeingGeocoded;

}

@property (nonatomic,readonly) BOOL meCardIsSet;                                         //@synthesize meCardIsSet=_meCardIsSet - In the implementation block
@property (nonatomic,readonly) void* addressBook; 
@property (nonatomic,readonly) RemindersLocationItem * currentLocationItem;              //@synthesize currentLocationItem=_currentLocationItem - In the implementation block
@property (nonatomic,retain) RemindersLocationItem * customLocationItem;                 //@synthesize customLocationItem=_customLocationItem - In the implementation block
@property (nonatomic,retain) RemindersLocationItem * itemBeingGeocoded;                  //@synthesize itemBeingGeocoded=_itemBeingGeocoded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_killTimer;
-(id)_stringForAuthorizationStatus:(int)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(id)selectedLocationItem;
-(void)selectLocation:(id)arg1 ;
-(void)startUpdatingLocationItemsIfNecessary;
-(long long)selectedMeCardItem;
-(BOOL)isCurrentLocationSelected;
-(BOOL)isCustomLocationSelected;
-(void)selectCurrentLocation;
-(id)cachedLocationForAddressDictionary:(id)arg1 ;
-(void)_geocodeItem:(id)arg1 ;
-(void)_giveUpGettingCurrentLocation;
-(void)reloadMeCardLocationItems;
-(void)_reverseGeocodeCurrentLocation;
-(BOOL)_isGeocoding;
-(RemindersLocationItem *)currentLocationItem;
-(void)_beginOperation;
-(void)_didEncounterError:(id)arg1 ;
-(void)_didUpdateCurrentLocationItem;
-(RemindersLocationItem *)customLocationItem;
-(void)_didUpdateCustomLocationItem;
-(void)_endOperation;
-(void)_startNextGeocoderOperation;
-(void)setItemBeingGeocoded:(RemindersLocationItem *)arg1 ;
-(void)_cacheLocation:(id)arg1 forAddressDictionary:(id)arg2 ;
-(void)_didUpdateMeCardItem:(long long)arg1 ;
-(void)_handleCompletedGeocodeWithPlacemarks:(id)arg1 error:(id)arg2 ;
-(void)_endUpdatingCurrentLocation;
-(void)_cancelUpdatingCurrentLocation;
-(void)_handleGeocodingAllItems;
-(void)selectMeCardItem:(long long)arg1 ;
-(void)setCustomLocation:(id)arg1 withAddressDictionary:(id)arg2 ;
-(void)selectCustomLocation;
-(void)selectLocation:(id)arg1 withAddressDictionary:(id)arg2 ;
-(id)meCardItemAtIndex:(long long)arg1 ;
-(void)_didChangeSelection;
-(long long)numberOfPossibleLocationItems;
-(long long)numberOfMeCardItems;
-(BOOL)meCardIsSet;
-(void)setCustomLocationItem:(RemindersLocationItem *)arg1 ;
-(RemindersLocationItem *)itemBeingGeocoded;
-(void)dealloc;
-(id)init;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void*)addressBook;
@end

