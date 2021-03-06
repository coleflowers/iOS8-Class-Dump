/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTPodcastAndEpisodeProcessor.h>
#import <Podcasts/MTReachabilityObserver.h>

@class MTUuidQueryObserver, NSString;

@interface MTAutoDownloadProcessor : MTPodcastAndEpisodeProcessor <MTReachabilityObserver> {

	MTUuidQueryObserver* _savedObserver;

}

@property (nonatomic,retain) MTUuidQueryObserver * savedObserver;              //@synthesize savedObserver=_savedObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reachabilityChangedFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(id)podcastPredicate;
-(id)defaultPropertiesThatAffectPredicate;
-(void)setSavedObserver:(MTUuidQueryObserver *)arg1 ;
-(MTUuidQueryObserver *)savedObserver;
-(void)autodownloadEpisodesChanged:(id)arg1 ;
-(id)episodePredicateForPodcast:(id)arg1 ;
-(void)episodeResultsChangedForPodcast:(id)arg1 withDeletedIds:(id)arg2 andInsertIds:(id)arg3 ;
-(void)start;
@end

