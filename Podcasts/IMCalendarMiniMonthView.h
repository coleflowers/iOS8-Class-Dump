/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIControl.h>

@class NSMutableArray;

@interface IMCalendarMiniMonthView : UIControl {

	id _delegate;
	SCD_Struct_IM23 _displayedDate;
	SCD_Struct_IM23 _displayedMonth;
	NSMutableArray* _calendarDayItems;
	int _frameCount;
	int _currentStartIndex;
	int _touchDate;
	int _rowsNeededForCurrentMonth;
	BOOL _maskTouches;

}

@property (assign,nonatomic) id delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL maskTouches;                             //@synthesize maskTouches=_maskTouches - In the implementation block
@property (nonatomic,readonly) int touchDate;                              //@synthesize touchDate=_touchDate - In the implementation block
@property (nonatomic,readonly) int rowsNeededForCurrentMonth;              //@synthesize rowsNeededForCurrentMonth=_rowsNeededForCurrentMonth - In the implementation block
-(void)_drawBox:(CGRect)arg1 fill:(BOOL)arg2 ;
-(id)MiniDayFont;
-(id)boxColor;
-(CGRect)rectForDay:(int)arg1 ;
-(CGRect)highlightRectForDayRect:(CGRect)arg1 ;
-(id)MiniDayNumberFont;
-(int)RowsNeededForMiniMonth:(SCD_Struct_IM23)arg1 ;
-(void)setDisplayedMonth:(SCD_Struct_IM23)arg1 ;
-(int)dayForPoint:(CGPoint)arg1 ;
-(void)hideTouchFeedback;
-(void)updateTrackWithPoint:(CGPoint)arg1 ;
-(id)defaultNumberColor;
-(void)_drawBox:(CGRect)arg1 ;
-(SCD_Struct_IM23)displayedMonth;
-(SCD_Struct_IM23)displayedDate;
-(void)setDisplayedDate:(SCD_Struct_IM23)arg1 ;
-(int)touchDate;
-(BOOL)maskTouches;
-(void)setMaskTouches:(BOOL)arg1 ;
-(int)rowsNeededForCurrentMonth;
-(void)_localeChanged;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)darkTextColor;
-(id)todayTextColor;
-(id)defaultTextColor;
@end

