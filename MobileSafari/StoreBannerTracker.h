/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface StoreBannerTracker : NSObject {

	NSMutableDictionary* _blockedProducts;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedTracker;
-(void)save;
-(id)init;
-(void)load;
-(void)clear;
-(id)filePath;
-(void)isProductBannerBlocked:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)blockProductBanner:(id)arg1 ;
@end
