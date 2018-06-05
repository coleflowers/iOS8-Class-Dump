/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <Maps/StarkDistanceLabel.h>

@class UILabel, UIFont, NSString;

@interface StarkNavigationDistanceLabel : UIView <StarkDistanceLabel> {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	int _detail;
	double _remainingDistance;
	UIFont* _topFont;
	UIFont* _bottomFont;

}

@property (nonatomic,retain) UIFont * topFont;                      //@synthesize topFont=_topFont - In the implementation block
@property (nonatomic,retain) UIFont * bottomFont;                   //@synthesize bottomFont=_bottomFont - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double remainingDistance;              //@synthesize remainingDistance=_remainingDistance - In the implementation block
@property (assign,nonatomic) int detail;                            //@synthesize detail=_detail - In the implementation block
-(void)setRemainingDistance:(double)arg1 ;
-(double)remainingDistance;
-(void)_updateValues;
-(UIFont *)topFont;
-(UIFont *)bottomFont;
-(double)_labelOffset;
-(void)setTopFont:(UIFont *)arg1 ;
-(void)setBottomFont:(UIFont *)arg1 ;
-(void)_updateStyling;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(void)setDetail:(int)arg1 ;
-(int)detail;
@end
