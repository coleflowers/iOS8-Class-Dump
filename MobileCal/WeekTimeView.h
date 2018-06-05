/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:52:29 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <MobileCal/EKCurrentTimeMarkerViewUpdating.h>

@class UIScrollView, EKDayTimeView, UIView, UILabel, NSString;

@interface WeekTimeView : UIView <UIScrollViewDelegate, EKCurrentTimeMarkerViewUpdating> {

	UIScrollView* _timeScroller;
	EKDayTimeView* _timeView;
	UIView* _rightBorderView;
	UILabel* _monthLabel;
	UILabel* _overlayMonthLabel;
	UILabel* _weekNumberLabel;
	UILabel* _allDayLabel;
	UIView* _allDayBackgroundColorView;
	UIView* _topAllDaySeparatorView;
	UIView* _bottomAllDaySeparatorView;
	UIView* _headerBackground;
	double _headerHeight;
	long long _orientation;

}

@property (assign,nonatomic) double headerHeight;                      //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) BOOL usesLightText; 
@property (assign,nonatomic) BOOL showsTimeMarker; 
@property (assign,nonatomic) BOOL allDayHighlighted; 
@property (assign,nonatomic) BOOL allDayVisible; 
@property (nonatomic,retain) NSString * monthText; 
@property (nonatomic,retain) NSString * overlayMonthText; 
@property (nonatomic,retain) NSString * weekNumberText; 
@property (assign,nonatomic) long long orientation;                    //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;              //@synthesize timeScroller=_timeScroller - In the implementation block
@property (nonatomic,readonly) EKDayTimeView * timeView;               //@synthesize timeView=_timeView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)widthForOrientation:(long long)arg1 ;
-(BOOL)_showRightBorder;
-(double)allDayBackgroundColorOriginY;
-(BOOL)allDayVisible;
-(void)setAllDayHighlighted:(BOOL)arg1 ;
-(BOOL)allDayHighlighted;
-(void)setDayTimeViewDelegate:(id)arg1 ;
-(void)contentSizeCategoryChanged;
-(void)setAllDayVisible:(BOOL)arg1 ;
-(void)setMonthText:(NSString *)arg1 ;
-(NSString *)monthText;
-(void)setWeekNumberText:(NSString *)arg1 ;
-(NSString *)weekNumberText;
-(void)setOverlayMonthText:(NSString *)arg1 ;
-(NSString *)overlayMonthText;
-(EKDayTimeView *)timeView;
-(void)setUsesLightText:(BOOL)arg1 ;
-(void)setShowsTimeMarker:(BOOL)arg1 ;
-(void)updateMarkerPosition;
-(BOOL)showsTimeMarker;
-(void)setHourHeightScale:(double)arg1 ;
-(BOOL)usesLightText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)orientation;
-(void)sizeToFit;
-(UIScrollView *)scrollView;
-(void)setOrientation:(long long)arg1 ;
-(double)headerHeight;
-(void)setHeaderHeight:(double)arg1 ;
@end

