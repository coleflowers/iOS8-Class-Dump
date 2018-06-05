/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/StarkSuggestionSource.h>

@class EKEventStore;

@interface StarkEvents : StarkSuggestionSource {

	EKEventStore* _eventStore;
	unsigned long long _entityType;

}
-(void)requestForLocation:(id)arg1 timePeriod:(id)arg2 suggestionHandler:(/*^block*/id)arg3 finishedHandler:(/*^block*/id)arg4 ;
-(id)initWithEntityType:(unsigned long long)arg1 eventStore:(id)arg2 ;
-(void)_handleReminder:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_clLocationForEKStructuredLocation:(id)arg1 ;
-(id)_addressDictionaryForLocationString:(id)arg1 ;
-(void)_handleSortedCalendarItems:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchReminderEventsWithPredicate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_requestReminderEventsMatchTimePeriod:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_handleEventMapItem:(id)arg1 location:(id)arg2 suggestionType:(int)arg3 eventTitle:(id)arg4 eventURL:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 dispatchGroup:(id)arg8 handler:(/*^block*/id)arg9 ;
-(void)_requestEventsMatchingTimePeriod:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchCalendarEventsWithPredicate:(id)arg1 timePeriod:(id)arg2 handler:(/*^block*/id)arg3 ;
@end
