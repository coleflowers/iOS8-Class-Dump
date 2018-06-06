/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAGenericTermsUIRequest.h>

@class NRDevice, NSURLRequest;

@interface COSAAGenericTermsUIRequest : AAGenericTermsUIRequest {

	BOOL _showWarranty;
	NRDevice* _device;

}

@property (retain) NRDevice * device;                        //@synthesize device=_device - In the implementation block
@property (assign) BOOL showWarranty;                        //@synthesize showWarranty=_showWarranty - In the implementation block
@property (readonly) NSURLRequest * urlRequest; 
+(id)clientInfoHeaderForDevice:(id)arg1 ;
+(id)pairedClientInfoHeaderName;
+(id)deviceModelHeaderName;
-(id)initWithGizmoDevice:(id)arg1 showWarranty:(BOOL)arg2 ;
-(BOOL)showWarranty;
-(void)setShowWarranty:(BOOL)arg1 ;
-(NSURLRequest *)urlRequest;
-(NRDevice *)device;
-(void)setDevice:(NRDevice *)arg1 ;
@end

