/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/NSCopying.h>

@class NSString;

@interface IMUniversalPlaybackPositionMetadata : NSObject <NSCopying> {

	BOOL _hasBeenPlayed;
	BOOL _isNew;
	NSString* _itemIdentifier;
	double _timestamp;
	double _bookmarkTime;
	unsigned long long _playCount;

}

@property (nonatomic,copy) NSString * itemIdentifier;                   //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double bookmarkTime;                       //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (assign,nonatomic) BOOL hasBeenPlayed;                        //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
@property (assign,nonatomic) unsigned long long playCount;              //@synthesize playCount=_playCount - In the implementation block
@property (assign,nonatomic) BOOL isNew;                                //@synthesize isNew=_isNew - In the implementation block
+(id)metadataWithValuesItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 ;
+(id)keyValueStoreItemIdentifierForItem:(id)arg1 ;
+(id)metadataWithValuesFromDataSourceItem:(id)arg1 ;
-(BOOL)isNew;
-(double)bookmarkTime;
-(BOOL)hasBeenPlayed;
-(void)setHasBeenPlayed:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBookmarkTime:(double)arg1 ;
-(void)setPlayCount:(unsigned long long)arg1 ;
-(unsigned long long)playCount;
-(NSString *)itemIdentifier;
-(void)setIsNew:(BOOL)arg1 ;
-(id)keyValueStorePayload;
-(void)setItemIdentifier:(NSString *)arg1 ;
@end

