/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:47:45 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, RemindersListModelDelegate;
#import <Reminders/Reminders-Structs.h>
@class EKEventStore, NSMutableSet, NSMutableArray, NSMutableDictionary, NSObject, NSMutableIndexSet, EKCalendar, EKCalendarDate, NSArray;

@interface RemindersListModel : NSObject {

	EKEventStore* _eventStore;
	NSMutableSet* _remindersToSave;
	NSMutableArray* _recentlyCheckedReminders;
	NSMutableArray* _recentlyUncheckedReminders;
	NSMutableDictionary* _recentlyUncheckedDates;
	NSObject*<OS_dispatch_queue> _dataLock;
	NSMutableArray* _reminders;
	BOOL _hasPerformedFirstReload;
	BOOL _showsCompletedReminders;
	NSMutableIndexSet* _alreadyFaultedIndexes;
	NSMutableIndexSet* _indexesForFaulting;
	NSRange _lastSeenReminderRange;
	unsigned long long _reloadCount;
	BOOL _isPaused;
	BOOL _needsReloadOnResume;
	BOOL _isPausedByForce;
	BOOL _isReloadInProgress;
	BOOL _isListEmpty;
	BOOL _isListEmptyIsValid;
	long long _numberOfIncompleteReminders;
	BOOL _needsReload;
	EKCalendar* _calendar;
	EKCalendarDate* _dueDate;
	id<RemindersListModelDelegate> _delegate;
	long long _numberOfCompletedReminders;
	long long _displayedNumberOfCompletedReminders;
	NSArray* _recentlyAddedReminders;

}

@property (nonatomic,retain) EKCalendar * calendar;                                       //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) EKCalendarDate * dueDate;                                    //@synthesize dueDate=_dueDate - In the implementation block
@property (assign,nonatomic,__weak) id<RemindersListModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsCompletedReminders;                                //@synthesize showsCompletedReminders=_showsCompletedReminders - In the implementation block
@property (assign,nonatomic) BOOL needsReload;                                            //@synthesize needsReload=_needsReload - In the implementation block
@property (assign,nonatomic) long long numberOfCompletedReminders;                        //@synthesize numberOfCompletedReminders=_numberOfCompletedReminders - In the implementation block
@property (assign,nonatomic) long long displayedNumberOfCompletedReminders;               //@synthesize displayedNumberOfCompletedReminders=_displayedNumberOfCompletedReminders - In the implementation block
@property (readonly) long long numberOfIncompleteReminders; 
@property (readonly) long long displayedNumberOfIncompleteReminders; 
@property (retain) NSArray * recentlyAddedReminders;                                      //@synthesize recentlyAddedReminders=_recentlyAddedReminders - In the implementation block
@property (readonly) NSArray * recentlyCheckedReminders;                                  //@synthesize recentlyCheckedReminders=_recentlyCheckedReminders - In the implementation block
@property (readonly) NSArray * recentlyUncheckedReminders;                                //@synthesize recentlyUncheckedReminders=_recentlyUncheckedReminders - In the implementation block
-(void)saveUnsavedReminders;
-(long long)displayedNumberOfIncompleteReminders;
-(void)setNeedsReload:(BOOL)arg1 ;
-(BOOL)needsReloadForChangedObjectIDs:(id)arg1 ;
-(BOOL)hasPerformedFirstReload;
-(BOOL)invalidateMaintainedReminders;
-(void)setPausedByForce:(BOOL)arg1 ;
-(BOOL)hasRequestedFirstReload;
-(BOOL)deleteReminder:(id)arg1 ;
-(void)checkOrUncheckReminder:(id)arg1 ;
-(long long)numberOfReminders;
-(long long)numberOfIncompleteReminders;
-(void)moveReminderAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(BOOL)showsCompletedReminders;
-(NSArray *)recentlyAddedReminders;
-(id)reminderAtIndex:(long long)arg1 ;
-(BOOL)canAccessPropertiesOfReminderAtIndex:(long long)arg1 ;
-(long long)indexOfReminder:(id)arg1 protected:(BOOL)arg2 ;
-(long long)numberOfCompletedReminders;
-(void)setShowsCompletedReminders:(BOOL)arg1 ;
-(void)clearRecentlyAddedReminders;
-(BOOL)saveReminderImmediately:(id)arg1 ;
-(void)addReminder:(id)arg1 ;
-(BOOL)willDisplayRemindersInRange:(NSRange)arg1 ;
-(void)faultReminder:(id)arg1 ;
-(void)setNumberOfCompletedReminders:(long long)arg1 ;
-(id)storeProtectedData:(id)arg1 rangeAlreadyFaulted:(NSRange)arg2 ;
-(BOOL)protectedCanReminderBeInserted:(id)arg1 ;
-(void)protectedRemoveReminderAtIndex:(long long)arg1 ;
-(BOOL)matchesReminder:(id)arg1 ;
-(id)predicateForCountingReminders;
-(id)fetchProtectedData;
-(BOOL)shouldInvalidateReminder:(id)arg1 ;
-(BOOL)_hasBeenCanceled:(unsigned long long)arg1 ;
-(void)_fetchPropertiesForReminders:(id)arg1 ;
-(BOOL)hasBeenCanceled:(unsigned long long)arg1 ;
-(NSRange)_faultStartingChunk:(id)arg1 ;
-(void)loadRemindersInRange:(NSRange)arg1 reloadNumber:(unsigned long long)arg2 ;
-(BOOL)_protectedNeedsLoadAheadForRange:(NSRange)arg1 inForwardDirection:(BOOL)arg2 ;
-(void)_protectedLoadAheadForRange:(NSRange)arg1 reloadNumber:(unsigned long long)arg2 inForwardDirection:(BOOL)arg3 ;
-(BOOL)_protectedWillDisplayRemindersInRange:(NSRange)arg1 ;
-(void)_scheduleSaveForReminder:(id)arg1 ;
-(void)_protectedInsertReminder:(id)arg1 atIndex:(long long)arg2 ;
-(void)addRecentlyAddedReminder:(id)arg1 ;
-(void)_attemptToResumeReloads;
-(void)removeRecentlyAddedReminder:(id)arg1 ;
-(void)_adjustOrderOnReminders:(id)arg1 boundaryOrder:(unsigned long long)arg2 reverse:(BOOL)arg3 ;
-(void)_adjustOrderOnReminders:(id)arg1 reverse:(BOOL)arg2 ;
-(void)_reorderReminder:(id)arg1 betweenEarlier:(id)arg2 later:(id)arg3 ;
-(BOOL)isListEmpty;
-(long long)displayedNumberOfCompletedReminders;
-(BOOL)reminderWasSavedAtIndex:(long long)arg1 ;
-(void)setDisplayedNumberOfCompletedReminders:(long long)arg1 ;
-(void)setRecentlyAddedReminders:(NSArray *)arg1 ;
-(NSArray *)recentlyCheckedReminders;
-(NSArray *)recentlyUncheckedReminders;
-(id)propertiesToFetch;
-(id)initWithEventStore:(id)arg1 ;
-(EKCalendarDate *)dueDate;
-(void)setDueDate:(EKCalendarDate *)arg1 ;
-(void)setDelegate:(id<RemindersListModelDelegate>)arg1 ;
-(id)init;
-(void)reload;
-(id<RemindersListModelDelegate>)delegate;
-(void)resume;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(id)timeZone;
-(EKCalendar *)calendar;
-(void)pause;
-(BOOL)needsReload;
@end

