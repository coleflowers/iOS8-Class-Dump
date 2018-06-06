/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTTableViewCell.h>

@class MTTouchInsetsButton, UILabel, UIImageView, NSString, NSArray;

@interface MTPlaylistGroupCell : MTTableViewCell {

	MTTouchInsetsButton* _infoButton;
	UILabel* _podcast;
	UILabel* _episode;
	UILabel* _info;
	UILabel* _datetime;
	UIImageView* _unplayed;
	UIImageView* _playing;
	BOOL _empty;
	BOOL _wasShowingDeleteConfirmation;
	BOOL _local;
	BOOL _hasEpisodes;
	BOOL _reachable;
	/*^block*/id _infoAction;
	UIImageView* _podcastImageView;
	NSString* _playingUuid;
	NSArray* _episodeUuids;

}

@property (assign,nonatomic) BOOL reachable;                                //@synthesize reachable=_reachable - In the implementation block
@property (nonatomic,copy) id infoAction;                                   //@synthesize infoAction=_infoAction - In the implementation block
@property (nonatomic,readonly) UIImageView * podcastImageView;              //@synthesize podcastImageView=_podcastImageView - In the implementation block
@property (nonatomic,copy) NSString * playingUuid;                          //@synthesize playingUuid=_playingUuid - In the implementation block
@property (nonatomic,retain) NSArray * episodeUuids;                        //@synthesize episodeUuids=_episodeUuids - In the implementation block
+(id)infoTextColor;
+(id)datetimeTextColor;
+(id)detailTextColor;
+(id)dateFormatter;
+(double)rowHeight;
+(id)titleFont;
+(id)detailFont;
+(double)verticalPadding;
-(void)setupCell;
-(void)performInfoAction:(id)arg1 ;
-(id)infoAction;
-(void)setInfoAction:(id)arg1 ;
-(void)setPlayingUuid:(NSString *)arg1 ;
-(NSString *)playingUuid;
-(void)updateEnabled;
-(void)setEpisodeUuids:(NSArray *)arg1 ;
-(void)_updatePlayingIndex:(id)arg1 ;
-(void)updateWithObject:(id)arg1 ;
-(BOOL)reachable;
-(UIImageView *)podcastImageView;
-(NSArray *)episodeUuids;
-(void)_updateFonts;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(void)didTransitionToState:(unsigned long long)arg1 ;
-(void)setReachable:(BOOL)arg1 ;
@end
