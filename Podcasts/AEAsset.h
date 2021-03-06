/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/AEAsset.h>

@protocol AEAsset <NSObject>
@required
-(id)assetID;
-(id)url;
-(id)assetType;

@end


@class NSString, NSURL;

@interface AEAsset : NSObject <AEAsset> {

	NSString* _assetType;
	NSString* _assetID;
	NSURL* _url;

}

@property (nonatomic,readonly) NSString * assetType;                //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) NSString * assetID;                  //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) NSURL * url;                         //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)assetID;
-(id)initWithAssetType:(id)arg1 assetID:(id)arg2 url:(id)arg3 ;
-(void)dealloc;
-(NSString *)description;
-(NSURL *)url;
-(NSString *)assetType;
@end

