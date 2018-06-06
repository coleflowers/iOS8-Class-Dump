/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MZUniversalPlaybackPositionMediaItem.h>

@class NSDictionary, NSString, MTEpisode;

@interface MTUniversalPlaybackPositionMediaItem : NSObject <MZUniversalPlaybackPositionMediaItem> {

	NSDictionary* _mediaItemDictionary;
	NSString* _episodeUuid;
	MTEpisode* _episode;

}

@property (nonatomic,retain) NSDictionary * mediaItemDictionary;              //@synthesize mediaItemDictionary=_mediaItemDictionary - In the implementation block
@property (nonatomic,retain) NSString * episodeUuid;                          //@synthesize episodeUuid=_episodeUuid - In the implementation block
@property (nonatomic,retain) MTEpisode * episode;                             //@synthesize episode=_episode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)episodeUuid;
-(MTEpisode *)episode;
-(void)setEpisodeUuid:(NSString *)arg1 ;
-(void)setEpisode:(MTEpisode *)arg1 ;
-(void)populateEpisodeDictionary;
-(NSDictionary *)mediaItemDictionary;
-(void)setMediaItemDictionary:(NSDictionary *)arg1 ;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSString *)description;
@end
