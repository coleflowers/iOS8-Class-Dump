/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:31:52 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKit.framework/Support/calaccessd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CalSearchDataSink <NSObject>
@optional
-(BOOL)calSearchShouldStopSearching:(id)arg1;
-(void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2;

@required
-(void)calSearchComplete:(id)arg1;
-(void)calSearch:(id)arg1 foundOccurrences:(CFArrayRef)arg2 cachedDays:(CFArrayRef)arg3 cachedDaysIndexes:(CFArrayRef)arg4;

@end

