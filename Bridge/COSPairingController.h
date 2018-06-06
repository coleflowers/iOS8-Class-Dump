/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NRPairedDeviceRegistry, NRDevice;

@interface COSPairingController : PSListController {

	NRPairedDeviceRegistry* _nanoRegistry;
	NRDevice* _device;

}

@property (nonatomic,retain) NRPairedDeviceRegistry * nanoRegistry;              //@synthesize nanoRegistry=_nanoRegistry - In the implementation block
@property (nonatomic,retain) NRDevice * device;                                  //@synthesize device=_device - In the implementation block
-(void)nanoRegistryStatusChanged:(id)arg1 ;
-(void)confirmUnpairing;
-(void)confirmedUnpair;
-(void)enableDisableUnpairButton:(unsigned long long)arg1 ;
-(NRPairedDeviceRegistry *)nanoRegistry;
-(void)setNanoRegistry:(NRPairedDeviceRegistry *)arg1 ;
-(void)_applicationResumed:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)specifiers;
-(NRDevice *)device;
-(void)setDevice:(NRDevice *)arg1 ;
@end
