/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSString;

@interface AESyncValue : NSObject {

	id<NSObject> _value;
	NSString* _syncVersion;

}

@property (nonatomic,retain) id<NSObject> value;                  //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSString * syncVersion;              //@synthesize syncVersion=_syncVersion - In the implementation block
-(void)setSyncVersion:(NSString *)arg1 ;
-(NSString *)syncVersion;
-(void)dealloc;
-(void)setValue:(id<NSObject>)arg1 ;
-(id<NSObject>)value;
@end
