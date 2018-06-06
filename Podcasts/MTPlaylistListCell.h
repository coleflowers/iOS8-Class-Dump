/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTTableViewCell.h>

@protocol MTPlaylistListCellDelegate;
@class UILabel, UIButton;

@interface MTPlaylistListCell : MTTableViewCell {

	BOOL _emptyStation;
	id<MTPlaylistListCellDelegate> _delegate;
	UILabel* _playlistTitleLabel;
	UILabel* _unplayedLabel;
	UILabel* _upNextLabel;
	UIButton* _playButton;

}

@property (assign,nonatomic,__weak) id<MTPlaylistListCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UILabel * playlistTitleLabel;                              //@synthesize playlistTitleLabel=_playlistTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * unplayedLabel;                                     //@synthesize unplayedLabel=_unplayedLabel - In the implementation block
@property (nonatomic,retain) UILabel * upNextLabel;                                       //@synthesize upNextLabel=_upNextLabel - In the implementation block
@property (nonatomic,retain) UIButton * playButton;                                       //@synthesize playButton=_playButton - In the implementation block
@property (assign,nonatomic) BOOL emptyStation;                                           //@synthesize emptyStation=_emptyStation - In the implementation block
+(double)rowHeight;
+(id)titleFont;
+(id)detailFont;
+(double)verticalPadding;
-(void)setupCell;
-(UILabel *)unplayedLabel;
-(void)setUnplayedLabel:(UILabel *)arg1 ;
-(void)updateWithObject:(id)arg1 ;
-(UILabel *)upNextLabel;
-(void)updateSeparatorInset;
-(id)iTunesStationsText:(id)arg1 ;
-(id)textForUnplayed:(id)arg1 ;
-(id)textForNext:(id)arg1 ;
-(void)playTapped:(id)arg1 ;
-(UILabel *)playlistTitleLabel;
-(void)setUpNextLabel:(UILabel *)arg1 ;
-(void)setPlayButton:(UIButton *)arg1 ;
-(BOOL)emptyStation;
-(void)setEmptyStation:(BOOL)arg1 ;
-(double)_rowHeightForWidth:(double)arg1 ;
-(void)_updateFonts;
-(void)setDelegate:(id<MTPlaylistListCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MTPlaylistListCellDelegate>)delegate;
-(UIButton *)playButton;
@end

