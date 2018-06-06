/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:47:44 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, RemindersRootViewController, EKEventStore, NSMutableArray, CLLocationManager, NSMutableDictionary, RemindersCardController, RemindersScheduledListController, NSString;

@interface RemindersApp : UIApplication <UIApplicationDelegate> {

	RemindersRootViewController* _rootViewController;
	EKEventStore* _eventStore;
	NSMutableArray* _sortedCalendars;
	CLLocationManager* _locationManager;
	UIWindow* _window;
	NSMutableDictionary* _cardControllersByCalendar;
	NSMutableDictionary* _contentControllersByCalendar;
	RemindersCardController* _scheduledCard;
	RemindersScheduledListController* _scheduledList;

}

@property (readonly) EKEventStore * eventStore;                     //@synthesize eventStore=_eventStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)startScrollRemindersCardStackTestWithName:(id)arg1 options:(id)arg2 ;
-(void)startShowScheduledRemindersCardTestWithName:(id)arg1 options:(id)arg2 ;
-(void)startScrollScheduledRemindersCardTestWithName:(id)arg1 simulateSync:(BOOL)arg2 options:(id)arg3 ;
-(void)startScrollListWithCompletedTestWithName:(id)arg1 options:(id)arg2 ;
-(void)_simulateExternalChange;
-(void)startSearchTestWithName:(id)arg1 options:(id)arg2 ;
-(id)_extendLaunchTest;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)eventStoreChanged:(id)arg1 ;
-(id)reminderURLFromLaunchURL:(id)arg1 openedViaBB:(BOOL*)arg2 isLocation:(BOOL*)arg3 ;
-(long long)interfaceIdiomToUse;
-(id)contentControllerForCalendarToDisplay:(id)arg1 useCache:(BOOL)arg2 ;
-(void)reenableLocationReminders;
-(void)didRemoveDeactivationReason:(id)arg1 ;
-(void)archive:(BOOL)arg1 ;
-(id)sortedCalendars;
-(CGRect)detailViewContentRect;
-(void)calendarsChangedWithChangedObjectIDs:(id)arg1 ;
-(id)sortedDisplayOrders:(id)arg1 ;
-(int)highestDisplayOrderInSource:(id)arg1 ;
-(void)removeUnnecessaryCachedControllers;
-(void)_displayCalendar:(id)arg1 ;
-(void)_displayScheduledCard;
-(void)_displayInvitationForUserActivity:(id)arg1 ;
-(id)cardControllerForCalendarToDisplay:(id)arg1 useCache:(BOOL)arg2 ;
-(id)createReminderInCalendar:(id)arg1 ;
-(void)_alarmsDidFire;
-(void)deleteCalendar:(id)arg1 ;
-(void)moveCalendar:(id)arg1 toSortedIndex:(long long)arg2 ;
-(void)assignDisplayOrders:(id)arg1 ;
-(void)calendarsChanged;
-(id)archivedSortedLists;
-(EKEventStore *)eventStore;
-(void)dealloc;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(void)applicationDidResume;
-(void)addCalendar:(id)arg1 ;
@end
