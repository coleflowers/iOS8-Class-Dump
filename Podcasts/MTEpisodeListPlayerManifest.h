/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTPlayerManifest.h>

@protocol IMMediaItem, MTEpisodeListPlayerManifestDelegate;
@class NSMutableDictionary, NSArray, MTAllPropertyChangesQueryObserver;

@interface MTEpisodeListPlayerManifest : MTPlayerManifest {

	NSMutableDictionary* _cachedItems;
	id<IMMediaItem> _currentItem;
	NSArray* _episodes;
	MTAllPropertyChangesQueryObserver* _currentItemObserver;
	id<MTEpisodeListPlayerManifestDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MTEpisodeListPlayerManifestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)episodes;
-(id)initWithInitialEpisodeUuid:(id)arg1 ;
-(id)_episodes;
-(void)updateEpisodes;
-(id)_mediaItemForEpisodeWithUUID:(id)arg1 ;
-(id)nextItem;
-(id)previousItem;
-(void)setDelegate:(id<MTEpisodeListPlayerManifestDelegate>)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id<MTEpisodeListPlayerManifestDelegate>)delegate;
-(unsigned long long)currentIndex;
-(void)setCurrentItem:(id)arg1 ;
-(id)currentItem;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
@end
