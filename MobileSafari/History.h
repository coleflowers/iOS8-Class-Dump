/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <WebUI/WBUHistory.h>

@protocol HistoryDelegate;
@class NSMutableArray, NSCalendar;

@interface History : WBUHistory {

	NSMutableArray* _deferredUpdates;
	BOOL _savePending;
	NSCalendar* _calendar;
	CFDateFormatterRef _weekdayMonthDateFormatter;
	CFDateFormatterRef _weekdayDateFormatter;
	id<HistoryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HistoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)dayWithPeriodOfDayStringForDate:(id)arg1 ;
+(id)sharedHistory;
-(void)localeChanged:(CFLocaleRef)arg1 ;
-(void)cancelDeferredUpdates;
-(void)commitDeferredUpdates;
-(id)_weekdayStringForDate:(id)arg1 ;
-(CFDateFormatterRef)newDateFormatterForLocale:(CFLocaleRef)arg1 formatType:(id)arg2 ;
-(id)_weekdayMonthDateStringForDate:(id)arg1 ;
-(id)browsingSessions;
-(id)titleForItem:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<HistoryDelegate>)arg1 ;
-(id)init;
-(id<HistoryDelegate>)delegate;
-(void)removeItem:(id)arg1 ;
-(void)clearHistory;
-(Class)_historyItemClass;
-(void)_removeAllVisitedLinks;
-(BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg1 ;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1 ;
@end

