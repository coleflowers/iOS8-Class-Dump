/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDefaultDateLabel.h>
#import <SpringBoard/SBRelativeDateTimerDelegate.h>

@class SBRelativeDateTimer, NSString;

@interface SBRelativeDateLabel : SBDefaultDateLabel <SBRelativeDateTimerDelegate> {

	SBRelativeDateTimer* _relativeDateTimer;
	unsigned long long _value;
	int _resolution;
	long long _comparedToNow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)timerFiredWithValue:(unsigned long long)arg1 forResolution:(int)arg2 comparedToNow:(long long)arg3 ;
-(void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2 ;
-(id)constructLabelString;
-(void)dealloc;
-(void)prepareForReuse;
@end
