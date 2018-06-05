/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/_UISettingsKeyObserver.h>
#import <SpringBoard/SBVolumePressBandit.h>
#import <SpringBoard/SBAssertionDelegate.h>
#import <SpringBoard/BBObserverDelegate.h>

@class NSMutableArray, NSTimer, CPDistributedNotificationCenter, NSMutableSet, BBObserver, NSHashTable, SBAlertItemsSettings, SBAlertItem, NSArray, NSString;

@interface SBAlertItemsController : NSObject <_UISettingsKeyObserver, SBVolumePressBandit, SBAssertionDelegate, BBObserverDelegate> {

	NSMutableArray* _lockedAlertItems;
	NSMutableArray* _unlockedAlertItems;
	NSMutableArray* _pendingAlertItems;
	NSMutableArray* _superModalAlertItems;
	NSTimer* _autoDismissTimer;
	CPDistributedNotificationCenter* _notificationCenter;
	unsigned long long _notificationClientCount;
	BOOL _systemShuttingDown;
	BOOL _lockedButNotSetupYet;
	NSMutableSet* _forceAlertsToPendReasons;
	BBObserver* _bbObserver;
	NSHashTable* _observers;
	SBAlertItemsSettings* _settings;
	SBAlertItem* _testItem;
	NSMutableSet* _suppressionAssertions;

}

@property (nonatomic,readonly) NSArray * lockedAlertItems;              //@synthesize lockedAlertItems=_lockedAlertItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)safeCategoryTargetClass;
+(id)sharedInstance;
-(BOOL)_gaxShouldAllowSpringBoardAlert:(id)arg1 ;
-(BOOL)_gaxShouldAllowSpringBoardAlertWithClass:(Class)arg1 allowedAlertClassNames:(id)arg2 ;
-(BOOL)hasVisibleAlert;
-(void)noteSystemShuttingDown;
-(void)noteVolumeOrLockPressedOverLockedAlerts;
-(BOOL)deactivateAlertItemsOfClass:(Class)arg1 ;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(BOOL)hasAlerts;
-(BOOL)canDeactivateAlertForMenuClickOrSystemGesture;
-(BOOL)deactivateAlertForMenuClickOrSystemGestureWithAnimation:(BOOL)arg1 ;
-(void)deactivateAlertItem:(id)arg1 ;
-(void)deactivateAlertItemsForFullscreenAlertActivationAndPendMiniAlerts:(BOOL)arg1 ;
-(void)stopPendingAlertItemsForFullscreenAlert;
-(void)setForceAlertsToPend:(BOOL)arg1 forReason:(id)arg2 ;
-(void)moveActiveAlertsToPendingWithAnimation:(BOOL)arg1 ;
-(id)alertItemsOfClass:(Class)arg1 ;
-(id)visibleAlertItem;
-(BOOL)captureSuppressionAssertionWithPort:(unsigned)arg1 reason:(id)arg2 ;
-(BOOL)hasAlertOfClass:(Class)arg1 ;
-(void)deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(BOOL)arg3 ;
-(void)activateAlertItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_notificationClientStarted:(id)arg1 ;
-(void)_notificationClientEnded:(id)arg1 ;
-(void)_buddyDidExit;
-(void)_lockedButNotSetupYetChanged;
-(void)autoDismissAlertItem:(id)arg1 ;
-(void)_activateSuperModalAlertsIfNecessary;
-(void)activatePendedAlertsIfNecessary;
-(BOOL)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2 ;
-(BOOL)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2 animated:(BOOL)arg3 ;
-(void)_postAlertPresentedNotificationForType:(int)arg1 sender:(id)arg2 date:(id)arg3 ;
-(void)assertionExpired:(id)arg1 ;
-(BOOL)hasVisibleSuperModalAlert;
-(void)convertUnlockedAlertsToLockedAlerts;
-(void)resetAutoDismissTimer;
-(BOOL)dontLockOverAlertItems;
-(NSArray *)lockedAlertItems;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)removeObserver:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)activateAlertItem:(id)arg1 ;
-(void)notifySystemOfAlertItemActivation:(id)arg1 ;
-(void)deactivateAlertItem:(id)arg1 reason:(int)arg2 ;
-(void)_notifyObservers:(/*^block*/id)arg1 ;
@end

