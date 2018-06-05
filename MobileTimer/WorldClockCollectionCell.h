/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:32:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class WorldClockView, UIView;

@interface WorldClockCollectionCell : UICollectionViewCell {

	WorldClockView* _clockView;
	BOOL _verticalLines;
	BOOL _horizontalLines;
	UIView* _verticalLineView;
	UIView* _horizontalLineView;

}

@property (nonatomic,retain) WorldClockView * clockView;              //@synthesize clockView=_clockView - In the implementation block
+(double)heightForOrientation:(long long)arg1 ;
-(WorldClockView *)clockView;
-(void)setClockView:(WorldClockView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
@end
