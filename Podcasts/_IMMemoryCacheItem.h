/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _IMMemoryCacheItem : NSObject {

	id _item;
	unsigned long long _cost;
	unsigned long long _timeStamp;
	NSString* _keyString;
	BOOL _conformsToProtocol;

}

@property (nonatomic,retain) id item;                                   //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) unsigned long long cost;                   //@synthesize cost=_cost - In the implementation block
@property (assign,nonatomic) unsigned long long timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,copy) NSString * key;                              //@synthesize keyString=_keyString - In the implementation block
@property (assign,nonatomic) BOOL conformsToProtocol;                   //@synthesize conformsToProtocol=_conformsToProtocol - In the implementation block
+(id)cacheItemWithItem:(id)arg1 key:(id)arg2 cost:(unsigned long long)arg3 ;
-(void)setCost:(unsigned long long)arg1 ;
-(void)setConformsToProtocol:(BOOL)arg1 ;
-(BOOL)conformsToProtocol;
-(void)dealloc;
-(id)description;
-(id)item;
-(void)setItem:(id)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(unsigned long long)timeStamp;
-(void)setTimeStamp:(unsigned long long)arg1 ;
-(unsigned long long)cost;
@end

