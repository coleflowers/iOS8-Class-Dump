/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:32:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class MTStopwatchController, UIView, StopwatchTimeView, UITableView;

@interface MTStopwatchControlsView : UIView {

	MTStopwatchController* _controller;
	UIView* _topKeylineView;
	UIView* _bottomKeylineView;
	StopwatchTimeView* _timeView;
	UITableView* _lapTimeTable;

}

@property (assign,nonatomic) int mode; 
@property (nonatomic,readonly) id<StopWatchControlsTarget> target; 
@property (nonatomic,retain,readonly) StopwatchTimeView * timeView;              //@synthesize timeView=_timeView - In the implementation block
@property (nonatomic,readonly) UITableView * lapTimeTable;                       //@synthesize lapTimeTable=_lapTimeTable - In the implementation block
+(double)timeViewHeight;
+(double)defaultHeight;
-(void)handleLocaleChange;
-(UITableView *)lapTimeTable;
-(StopwatchTimeView *)timeView;
-(void)_configureAndAddButton:(id)arg1 ;
-(void)setButtonSize:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<StopWatchControlsTarget>)target;
-(id)initWithTarget:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
@end

