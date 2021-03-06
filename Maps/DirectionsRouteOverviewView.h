/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface DirectionsRouteOverviewView : UIView {

	BOOL _isDimmed;
	UILabel* _titleLabel;
	UILabel* _timeLabel;
	UILabel* _distanceLabel;
	UILabel* _nameLabel;

}

@property (assign,nonatomic) BOOL isDimmed;                        //@synthesize isDimmed=_isDimmed - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                  //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) UILabel * distanceLabel;              //@synthesize distanceLabel=_distanceLabel - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                  //@synthesize nameLabel=_nameLabel - In the implementation block
-(void)setIsDimmed:(BOOL)arg1 ;
-(UILabel *)distanceLabel;
-(void)setDistanceLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(BOOL)isDimmed;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
@end

