/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:32:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@protocol AlarmActiveDelegate;
@class Alarm, NSCalendar, NSDate, MTDateLabel, AlarmTitleAndRepeatView, UISwitch, UIView, _UIContentUnavailableView, NSMutableArray, NSLayoutConstraint;

@interface AlarmDetailView : UIView {

	Alarm* _alarm;
	NSCalendar* _calendar;
	NSDate* _baseDate;
	MTDateLabel* _timeLabel;
	AlarmTitleAndRepeatView* _titleAndRepeatView;
	UISwitch* _enabledSwitch;
	UIView* _keylineView;
	id<AlarmActiveDelegate> _delegate;
	_UIContentUnavailableView* _noAlarmsView;
	NSMutableArray* _spacerViews;
	NSDate* _time;
	NSLayoutConstraint* _timeLabelBaselineOffsetConstraint;
	NSLayoutConstraint* _timeLabelHorizontalCenteringConstraint;
	NSLayoutConstraint* _switchTopPaddingConstraint;

}

@property (nonatomic,retain) Alarm * alarm;                                                            //@synthesize alarm=_alarm - In the implementation block
@property (assign,nonatomic) id<AlarmActiveDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isShowingNoAlarms,nonatomic) BOOL showingNoAlarms; 
@property (nonatomic,retain) NSDate * time;                                                            //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * timeLabelBaselineOffsetConstraint;                   //@synthesize timeLabelBaselineOffsetConstraint=_timeLabelBaselineOffsetConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * timeLabelHorizontalCenteringConstraint;              //@synthesize timeLabelHorizontalCenteringConstraint=_timeLabelHorizontalCenteringConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * switchTopPaddingConstraint;                          //@synthesize switchTopPaddingConstraint=_switchTopPaddingConstraint - In the implementation block
+(id)colorForBackground;
-(void)handleSignificantTimeChange:(id)arg1 ;
-(void)setShowingNoAlarms:(BOOL)arg1 ;
-(void)refreshUIAnimated:(BOOL)arg1 ;
-(void)handleEnabledChanged:(id)arg1 ;
-(void)configureAutolayout;
-(BOOL)isShowingNoAlarms;
-(void)updateLabelConstraints:(BOOL)arg1 ;
-(NSLayoutConstraint *)timeLabelBaselineOffsetConstraint;
-(NSLayoutConstraint *)switchTopPaddingConstraint;
-(void)setTimeLabelBaselineOffsetConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSwitchTopPaddingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)refreshTimeView;
-(double)defaultHeightForInterfaceOrientation:(long long)arg1 ;
-(NSLayoutConstraint *)timeLabelHorizontalCenteringConstraint;
-(void)setTimeLabelHorizontalCenteringConstraint:(NSLayoutConstraint *)arg1 ;
-(Alarm *)alarm;
-(void)setAlarm:(Alarm *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<AlarmActiveDelegate>)arg1 ;
-(id<AlarmActiveDelegate>)delegate;
-(void)updateConstraints;
-(void)setTime:(NSDate *)arg1 ;
-(NSDate *)time;
@end
