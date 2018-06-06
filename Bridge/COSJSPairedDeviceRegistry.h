/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <Bridge/COSJSPairedDeviceRegistry.h>

@protocol COSJSPairedDeviceRegistry <JSExport>
@property (nonatomic,readonly) long long numberOfPairedDevices; 
@required
-(long long)numberOfPairedDevices;

@end


@interface COSJSPairedDeviceRegistry : IKJSObject <COSJSPairedDeviceRegistry>

@property (nonatomic,readonly) long long numberOfPairedDevices; 
-(long long)numberOfPairedDevices;
-(void)dealloc;
-(id)initWithAppContext:(id)arg1 ;
-(void)sendOnUpdate;
@end
