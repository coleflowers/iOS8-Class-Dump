/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:34:35 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface WDDateRange : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(id)dateRangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)dateRangeWithTimePeriod:(long long)arg1 anchorDate:(id)arg2 ;
-(id)initWithTimePeriod:(long long)arg1 anchorDate:(id)arg2 ;
-(id)_getStartDateFromAnchorDate:(id)arg1 timePeriod:(long long)arg2 ;
-(id)_getEndDateFromStartDate:(id)arg1 timePeriod:(long long)arg2 ;
-(BOOL)dateInRange:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end

