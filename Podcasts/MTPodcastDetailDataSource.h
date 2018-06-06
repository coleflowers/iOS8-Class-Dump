/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTPodcastDetailEpisodeSectionDelegate.h>

@protocol MTPodcastDetailDataSourceDelegate;
@class NSArray, NSString;

@interface MTPodcastDetailDataSource : NSObject <MTPodcastDetailEpisodeSectionDelegate> {

	id<MTPodcastDetailDataSourceDelegate> _delegate;
	NSArray* _sections;
	NSString* _podcastUuid;

}

@property (assign,nonatomic,__weak) id<MTPodcastDetailDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * sections;                                               //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSString * podcastUuid;                                               //@synthesize podcastUuid=_podcastUuid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)useTabForSavedEpisodes;
+(id)sortDescriptorsForPodcastUuid:(id)arg1 ;
-(NSString *)podcastUuid;
-(id)initWithPodcastUuid:(id)arg1 ;
-(void)setPodcastUuid:(NSString *)arg1 ;
-(void)setPodcastTab:(unsigned long long)arg1 ;
-(unsigned long long)indexForSection:(id)arg1 ;
-(void)sectionWillChangeContent:(id)arg1 ;
-(void)sectionDidChangeContent:(id)arg1 ;
-(id)unplayedSections;
-(id)feedSections;
-(id)savedSections;
-(id)createSectionForLimitedUnplayed;
-(id)createSectionForOtherEpisodes;
-(id)createSectionForEmptyOverlay;
-(id)createSectionForPlayedToBeDeleted;
-(id)createSectionForFromiTunes;
-(id)createSectionForSaved;
-(id)createSectionForFeed;
-(void)episodeSection:(id)arg1 didChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 newIndex:(unsigned long long)arg5 ;
-(void)setDelegate:(id<MTPodcastDetailDataSourceDelegate>)arg1 ;
-(id<MTPodcastDetailDataSourceDelegate>)delegate;
-(NSArray *)sections;
-(id)podcast;
@end

