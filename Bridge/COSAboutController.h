/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@protocol OS_dispatch_semaphore;
@class NSSManager, NRDevice, NSObject, NSNumber;

@interface COSAboutController : PSListController {

	BOOL _hasFetchedAboutInfo;
	BOOL _errorHasOccurred;
	NSSManager* _nssManager;
	NRDevice* _device;
	NSObject*<OS_dispatch_semaphore> _registrySemaphore;
	NSNumber* _numberOfApps;
	NSNumber* _numberOfSongs;
	NSNumber* _numberOfPhotos;
	unsigned long long _storageAvailable;

}

@property (nonatomic,retain) NSSManager * nssManager;                                         //@synthesize nssManager=_nssManager - In the implementation block
@property (nonatomic,retain) NRDevice * device;                                               //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> registrySemaphore;              //@synthesize registrySemaphore=_registrySemaphore - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedAboutInfo;                                        //@synthesize hasFetchedAboutInfo=_hasFetchedAboutInfo - In the implementation block
@property (assign,nonatomic) BOOL errorHasOccurred;                                           //@synthesize errorHasOccurred=_errorHasOccurred - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfApps;                                         //@synthesize numberOfApps=_numberOfApps - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfSongs;                                        //@synthesize numberOfSongs=_numberOfSongs - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfPhotos;                                       //@synthesize numberOfPhotos=_numberOfPhotos - In the implementation block
@property (assign,nonatomic) unsigned long long storageAvailable;                             //@synthesize storageAvailable=_storageAvailable - In the implementation block
-(BOOL)errorHasOccurred;
-(void)setErrorHasOccurred:(BOOL)arg1 ;
-(void)setHasFetchedAboutInfo:(BOOL)arg1 ;
-(void)setNumberOfApps:(NSNumber *)arg1 ;
-(void)setNumberOfSongs:(NSNumber *)arg1 ;
-(void)setStorageAvailable:(unsigned long long)arg1 ;
-(id)guardedUint64StringValue:(unsigned long long)arg1 ;
-(id)getNumberOfSongs:(id)arg1 ;
-(id)getNumberOfPhotos:(id)arg1 ;
-(id)getNumberOfApps:(id)arg1 ;
-(id)getStorageAvailable:(id)arg1 ;
-(id)getDeviceName:(id)arg1 ;
-(void)setDeviceName:(id)arg1 specifier:(id)arg2 ;
-(id)getStorageCapacity:(id)arg1 ;
-(id)getSystemVersion:(id)arg1 ;
-(id)getDeviceModel:(id)arg1 ;
-(id)getWiFiAddress:(id)arg1 ;
-(id)getBTAddress:(id)arg1 ;
-(void)tappedAppleLegalLink;
-(void)showUserManual:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)registrySemaphore;
-(void)setRegistrySemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(BOOL)hasFetchedAboutInfo;
-(NSNumber *)numberOfApps;
-(NSNumber *)numberOfSongs;
-(unsigned long long)storageAvailable;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSSManager *)nssManager;
-(void)setNssManager:(NSSManager *)arg1 ;
-(NSNumber *)numberOfPhotos;
-(id)getSerialNumber:(id)arg1 ;
-(id)dash;
-(void)setNumberOfPhotos:(NSNumber *)arg1 ;
-(id)specifiers;
-(NRDevice *)device;
-(void)setDevice:(NRDevice *)arg1 ;
@end

