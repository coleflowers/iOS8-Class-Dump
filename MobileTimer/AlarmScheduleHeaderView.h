/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:32:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSDateFormatter;

@interface AlarmScheduleHeaderView : UIView {

	NSMutableArray* _dateLabels;
	NSDateFormatter* _formatter;
	long long _firstDayOfWeek;
	long long _currentDayOfWeek;
	double _leftMargin;
	double _columnWidth;

}

@property (assign,nonatomic) long long firstDayOfWeek;                //@synthesize firstDayOfWeek=_firstDayOfWeek - In the implementation block
@property (assign,nonatomic) long long currentDayOfWeek;              //@synthesize currentDayOfWeek=_currentDayOfWeek - In the implementation block
@property (assign,nonatomic) double leftMargin;                       //@synthesize leftMargin=_leftMargin - In the implementation block
@property (assign,nonatomic) double columnWidth;                      //@synthesize columnWidth=_columnWidth - In the implementation block
+(double)defaultHeight;
-(void)handleLocaleChange;
-(long long)currentDayOfWeek;
-(void)setCurrentDayOfWeek:(long long)arg1 ;
-(void)updateDayLabelValues;
-(id)newDateLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(double)columnWidth;
-(void)setColumnWidth:(double)arg1 ;
-(void)setFirstDayOfWeek:(long long)arg1 ;
-(long long)firstDayOfWeek;
-(double)leftMargin;
-(void)setLeftMargin:(double)arg1 ;
@end
