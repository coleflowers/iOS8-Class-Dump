/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:47 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface MTNowPlayingTitleView : UIView {

	UILabel* _episode;
	UILabel* _podcast;
	UILabel* _scrubbingRate;
	UILabel* _scrubbingInstructions;

}

@property (nonatomic,retain) UILabel * episode;                            //@synthesize episode=_episode - In the implementation block
@property (nonatomic,retain) UILabel * podcast;                            //@synthesize podcast=_podcast - In the implementation block
@property (nonatomic,retain) UILabel * scrubbingRate;                      //@synthesize scrubbingRate=_scrubbingRate - In the implementation block
@property (nonatomic,retain) UILabel * scrubbingInstructions;              //@synthesize scrubbingInstructions=_scrubbingInstructions - In the implementation block
-(UILabel *)episode;
-(void)setEpisode:(UILabel *)arg1 ;
-(void)setScrubbingRate:(UILabel *)arg1 ;
-(void)setScrubbingInstructions:(UILabel *)arg1 ;
-(UILabel *)scrubbingRate;
-(UILabel *)scrubbingInstructions;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPodcast:(UILabel *)arg1 ;
-(UILabel *)podcast;
@end

