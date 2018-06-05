/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/_UILegibilityView.h>

@class UIImage;

@interface SBLegibilityView : _UILegibilityView {

	long long _tintColor;
	UIImage* _tintImage;
	UIEdgeInsets _hitTestEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets hitTestEdgeInsets;              //@synthesize hitTestEdgeInsets=_hitTestEdgeInsets - In the implementation block
@property (assign,nonatomic) long long tintColor;                         //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIImage * tintImage;                         //@synthesize tintImage=_tintImage - In the implementation block
-(id)_tintColorForSettings:(id)arg1 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 tintColor:(long long)arg4 ;
-(UIImage *)tintImage;
-(void)setTintImage:(UIImage *)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(long long)tintColor;
-(void)setTintColor:(long long)arg1 ;
-(void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(UIEdgeInsets)hitTestEdgeInsets;
-(void)setHitTestEdgeInsets:(UIEdgeInsets)arg1 ;
@end
