/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MZUniversalPlaybackPositionTransactionContext.h>

@class NSMutableDictionary, NSString;

@interface MTUniversalPlaybackPositionTransactionContext : NSObject <MZUniversalPlaybackPositionTransactionContext> {

	NSMutableDictionary* _mediaItems;

}

@property (nonatomic,retain) NSMutableDictionary * mediaItems;              //@synthesize mediaItems=_mediaItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setUPPDomainVersion:(id)arg1 ;
+(id)UPPDomainVersion;
-(NSMutableDictionary *)mediaItems;
-(void)setMediaItems:(NSMutableDictionary *)arg1 ;
-(id)lastSyncedDomainVersion;
@end

