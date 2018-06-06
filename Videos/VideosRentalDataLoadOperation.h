/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:55:36 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <Videos/SSRequestDelegate.h>

@class NSLock, VideosRentalData, NSDictionary, NSRunLoop, NSString;

@interface VideosRentalDataLoadOperation : NSOperation <SSRequestDelegate> {

	BOOL _didCheckOutKeys;
	NSLock* _lock;
	long long _reason;
	VideosRentalData* _rentalData;
	NSDictionary* _rentalInformation;
	NSRunLoop* _runLoop;

}

@property (readonly) long long loadReason; 
@property (readonly) VideosRentalData * rentalData; 
@property (readonly) NSDictionary * rentalInformation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRentalData:(id)arg1 reason:(long long)arg2 ;
-(VideosRentalData *)rentalData;
-(NSDictionary *)rentalInformation;
-(id)_rentalInformationFromMedia;
-(BOOL)_checkOutRentalKeys;
-(void)_setRentalInformation:(id)arg1 ;
-(void)_setDidCheckOutKeys:(BOOL)arg1 ;
-(id)_newRentalCheckoutRequest;
-(void)_runCheckoutRequest:(id)arg1 ;
-(BOOL)_didCheckOutKeys;
-(void)_setRunLoop:(id)arg1 ;
-(void)_timer:(id)arg1 ;
-(void)_startCheckoutRequest:(id)arg1 ;
-(id)_runLoop;
-(void)_delayedStopRunLoop:(id)arg1 ;
-(id)initWithRentalData:(id)arg1 ;
-(long long)loadReason;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(void)cancel;
-(id)init;
-(void)main;
-(void)_stopRunLoop;
@end

