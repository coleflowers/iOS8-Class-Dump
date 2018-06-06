/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView;

@interface IMQuickScroller : UIControl {

	float _value;
	UIImageView* _background;
	UIImageView* _foreground;
	BOOL _userScrolling;

}

@property (assign,nonatomic) float value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL userScrolling;              //@synthesize userScrolling=_userScrolling - In the implementation block
+(id)backgroundForSize:(CGSize)arg1 ;
+(id)foregroundForSize:(CGSize)arg1 ;
-(void)updateValueForTouch:(id)arg1 ;
-(BOOL)userScrolling;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setValue:(float)arg1 ;
-(float)value;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end
