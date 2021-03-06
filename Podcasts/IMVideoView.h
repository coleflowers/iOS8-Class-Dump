/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class AVPlayerLayer, UIView, UIImageView, UILabel, NSString, IMAVPlayer;

@interface IMVideoView : UIView {

	AVPlayerLayer* _videoLayer;
	UIView* _airplayBackground;
	UIImageView* _airplayTVImage;
	UILabel* _airplayLabel;
	UILabel* _airplayRouteLabel;
	NSString* _airplayRouteName;
	BOOL _airplayActive;
	BOOL _externalDisplay;
	IMAVPlayer* _player;

}

@property (assign,nonatomic) BOOL airplayActive;                         //@synthesize airplayActive=_airplayActive - In the implementation block
@property (assign,nonatomic) BOOL externalDisplay;                       //@synthesize externalDisplay=_externalDisplay - In the implementation block
@property (nonatomic,readonly) BOOL smallAirplayBackground; 
@property (nonatomic,retain) AVPlayerLayer * videoLayer;                 //@synthesize videoLayer=_videoLayer - In the implementation block
@property (nonatomic,retain) NSString * airplayRouteName;                //@synthesize airplayRouteName=_airplayRouteName - In the implementation block
@property (assign,nonatomic) IMAVPlayer * player;                        //@synthesize player=_player - In the implementation block
-(BOOL)externalDisplay;
-(void)setAirplayRouteName:(NSString *)arg1 ;
-(void)layout:(BOOL)arg1 ;
-(void)setAirplayActive:(BOOL)arg1 ;
-(void)updateAirplayNoContentView;
-(BOOL)smallAirplayBackground;
-(BOOL)airplayActive;
-(void)setExternalDisplay:(BOOL)arg1 ;
-(NSString *)airplayRouteName;
-(void)dealloc;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)setVideoLayer:(AVPlayerLayer *)arg1 ;
-(void)setPlayer:(IMAVPlayer *)arg1 ;
-(IMAVPlayer *)player;
-(AVPlayerLayer *)videoLayer;
@end

