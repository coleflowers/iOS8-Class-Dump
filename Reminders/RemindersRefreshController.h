/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:47:45 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSDate, ACAccountStore, NSMutableSet;

@interface RemindersRefreshController : NSObject {

	NSMutableArray* _calendarsPendingRefresh;
	BOOL _isPendingRefreshForCalendarList;
	NSMutableDictionary* _lastCalendarRefreshDates;
	NSDate* _lastCalendarListRefreshDate;
	ACAccountStore* _accountStore;
	NSMutableSet* _allRemindersSyncingAccountIDs;
	BOOL _paused;

}

@property (nonatomic,retain) NSDate * lastCalendarListRefreshDate;              //@synthesize lastCalendarListRefreshDate=_lastCalendarListRefreshDate - In the implementation block
+(id)sharedRefreshController;
-(void)scheduleRefreshForCalendarList;
-(void)pauseScheduledRefreshes;
-(void)resumeScheduledRefreshes;
-(void)scheduleRefreshForAllCalendars;
-(void)scheduleRefreshForCalendarWithIdentifier:(id)arg1 ;
-(id)_allRemindersSyncingAccountIDs;
-(void)setLastCalendarListRefreshDate:(NSDate *)arg1 ;
-(BOOL)_needsRefreshForCalendarWithIdentifier:(id)arg1 ;
-(void)_refreshCalendarWithIdentifier:(id)arg1 ;
-(BOOL)_needsRefreshForCalendarList;
-(void)_refreshCalendarList;
-(NSDate *)lastCalendarListRefreshDate;
-(void)dealloc;
-(id)_accountStore;
-(void)_accountStoreDidChange:(id)arg1 ;
@end

