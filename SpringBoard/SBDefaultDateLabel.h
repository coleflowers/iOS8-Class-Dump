/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UILabel.h>
#import <SpringBoard/SBBulletinDateLabel.h>

@protocol SBDateLabelDelegate;
@class NSDate, NSTimer, NSString;

@interface SBDefaultDateLabel : UILabel <SBBulletinDateLabel> {

	NSDate* _timeZoneRelativeStartDate;
	NSDate* _timeZoneRelativeEndDate;
	BOOL _allDay;
	BOOL _isTimestamp;
	NSDate* _effectiveAllDayStartDate;
	NSDate* _effectiveAllDayLastValidDate;
	NSDate* _effectiveAllDayEndDate;
	BOOL _effectiveAllDay;
	BOOL _isCoalescingUpdates;
	BOOL _needsUpdateFromCoalesce;
	NSTimer* _updateTimer;
	int _labelType;
	id<SBDateLabelDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                   //@synthesize allDay=_allDay - In the implementation block
@property (assign,nonatomic) id<SBDateLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int labelType;                                 //@synthesize labelType=_labelType - In the implementation block
@property (assign,nonatomic) BOOL isTimestamp;                              //@synthesize isTimestamp=_isTimestamp - In the implementation block
+(id)_currentCalendar;
-(void)setEndDate:(id)arg1 withTimeZone:(id)arg2 ;
-(void)setStartDate:(id)arg1 withTimeZone:(id)arg2 ;
-(void)startCoalescingUpdates;
-(void)stopCoalescingUpdates;
-(int)labelType;
-(void)setLabelType:(int)arg1 ;
-(BOOL)isTimestamp;
-(void)setIsTimestamp:(BOOL)arg1 ;
-(void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2 ;
-(id)constructLabelString;
-(BOOL)isEffectiveAllDay;
-(void)updateTextIfNecessary;
-(void)_forceUpdate;
-(void)_resetEffectiveAllDayState:(BOOL)arg1 ;
-(void)_configureTimer;
-(id)_localDateForDate:(id)arg1 inTimeZone:(id)arg2 ;
-(void)setTimeZoneRelativeEndDate:(id)arg1 ;
-(BOOL)isDateWithinEffectiveAllDayRange:(id)arg1 ;
-(id)_constructNonAllDayLabelStringWithDate:(id)arg1 startTime:(double)arg2 startIsToday:(BOOL)arg3 sameDayDates:(BOOL)arg4 eventOngoing:(BOOL)arg5 withCurrentDate:(id)arg6 forStartLabel:(BOOL)arg7 ;
-(void)updateTextIfNecessary:(BOOL)arg1 ;
-(void)_updateEffectiveAllDayTimes;
-(void)_invalidateTimer;
-(BOOL)isAllDay;
-(void)dealloc;
-(void)setDelegate:(id<SBDateLabelDelegate>)arg1 ;
-(id)init;
-(id<SBDateLabelDelegate>)delegate;
-(void)prepareForReuse;
-(void)update;
-(void)setAllDay:(BOOL)arg1 ;
-(void)_updateTimerFired:(id)arg1 ;
@end

