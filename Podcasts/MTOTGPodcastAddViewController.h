/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTSourceListController.h>

@class NSString, NSSet;

@interface MTOTGPodcastAddViewController : MTSourceListController {

	NSString* _playlistUuid;
	NSSet* _addedEpisodeUuids;

}

@property (nonatomic,copy) NSString * playlistUuid;                //@synthesize playlistUuid=_playlistUuid - In the implementation block
@property (nonatomic,copy) NSSet * addedEpisodeUuids;              //@synthesize addedEpisodeUuids=_addedEpisodeUuids - In the implementation block
-(void)restoreSelection;
-(id)newCellInstanceWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setPlaylistUuid:(NSString *)arg1 ;
-(NSString *)playlistUuid;
-(void)setAddedEpisodeUuids:(NSSet *)arg1 ;
-(NSSet *)addedEpisodeUuids;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
@end
