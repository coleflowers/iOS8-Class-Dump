/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView;

@interface GKRatingControl : UIControl {

	double _value;
	UIImageView* _dotsImageView;
	UIImageView* _starsImageView;
	double _trackingValue;
	CGPoint _lastLocation;

}

@property (assign,nonatomic) double value;                              //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) UIImageView * dotsImageView;               //@synthesize dotsImageView=_dotsImageView - In the implementation block
@property (nonatomic,retain) UIImageView * starsImageView;              //@synthesize starsImageView=_starsImageView - In the implementation block
@property (assign,nonatomic) CGPoint lastLocation;                      //@synthesize lastLocation=_lastLocation - In the implementation block
@property (assign,nonatomic) double trackingValue;                      //@synthesize trackingValue=_trackingValue - In the implementation block
-(void)setupImages;
-(double)trackingValue;
-(double)valueForPoint:(CGPoint)arg1 ;
-(void)setTrackingValue:(double)arg1 ;
-(UIImageView *)dotsImageView;
-(void)setDotsImageView:(UIImageView *)arg1 ;
-(UIImageView *)starsImageView;
-(void)setStarsImageView:(UIImageView *)arg1 ;
-(void)setLastLocation:(CGPoint)arg1 ;
-(CGPoint)lastLocation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setValue:(double)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(double)value;
-(CGSize)intrinsicContentSize;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end
