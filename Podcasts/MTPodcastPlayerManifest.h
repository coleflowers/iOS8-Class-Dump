/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTRefreshablePlayerManifst.h>

@class NSString, NSPredicate, MTUuidQueryObserver;

@interface MTPodcastPlayerManifest : MTRefreshablePlayerManifst {

	BOOL _sortAscending;
	BOOL _showHidden;
	NSString* _podcastUuid;
	NSPredicate* _predicateForEpisodes;
	MTUuidQueryObserver* _queryObserver;
	BOOL _playbackStartedWithUnplayedEpisode;

}

@property (assign) BOOL playbackStartedWithUnplayedEpisode;              //@synthesize playbackStartedWithUnplayedEpisode=_playbackStartedWithUnplayedEpisode - In the implementation block
-(id)episodes;
-(id)predicateForEpisodesIncludingCurrentlyPlayingEpisode;
-(void)episodesDidChange;
-(void)setPlaybackStartedWithUnplayedEpisode:(BOOL)arg1 ;
-(id)predicateForPlayableEpisode;
-(BOOL)playbackStartedWithUnplayedEpisode;
-(BOOL)isPodcastDeleted;
-(BOOL)isEpisodePlayable:(id)arg1 ;
-(id)initWithPodcastUuid:(id)arg1 episodesPredicate:(id)arg2 episodeUuid:(id)arg3 mode:(int)arg4 ;
-(unsigned long long)hash;
-(id)sortDescriptors;
-(void)setCurrentItem:(id)arg1 ;
@end

