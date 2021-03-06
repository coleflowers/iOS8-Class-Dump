/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:32:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIView, MTStopwatchController;

@interface StopwatchPadControls : UIView {

	double _timeValue;
	UILabel* _timeLabel;
	double _currentLapTimeInterval;
	UILabel* _currentLapTimeLabel;
	UIView* _middleKeylineView;
	UIView* _bottomKeylineView;
	UIView* _buttonsBackgroundView;
	BOOL _rotating;
	MTStopwatchController* _controller;

}
+(float)defaultHeight;
-(void)handleLocaleChange;
-(void)hostViewWillRotate;
-(void)hostViewDidRotate;
-(void)setCurrentLapTime:(double)arg1 ;
-(void)_configureAndAddButton:(id)arg1 ;
-(void)_setControlsBackgroundColor;
-(void)setButtonSize:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)target;
-(id)initWithTarget:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setTime:(double)arg1 ;
@end

