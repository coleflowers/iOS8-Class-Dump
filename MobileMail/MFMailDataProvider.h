/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MFMessageBulletinsObserverDelegate.h>
#import <MobileMail/MFDelayedMessagesPresenterDelegate.h>
#import <MobileMail/BBRemoteDataProvider.h>

@protocol OS_dispatch_queue;
@class MFMessageBulletinsObserver, BBDataProviderConnection, BBDataProviderProxy, NSArray, NSMutableSet, MFDelayedMessagesPresenter, NSObject, NSLock, NSCondition, NSMutableArray, NSMutableDictionary, MFMailDataProviderAutoFetchData, NSString;

@interface MFMailDataProvider : NSObject <MFMessageBulletinsObserverDelegate, MFDelayedMessagesPresenterDelegate, BBRemoteDataProvider> {

	MFMessageBulletinsObserver* _bulletinsObserver;
	id _lockStateObservationToken;
	BBDataProviderConnection* _connection;
	BBDataProviderProxy* _proxy;
	NSArray* _accounts;
	NSMutableSet* _accountsUsingExternalSync;
	MFDelayedMessagesPresenter* _delayedMessages;
	NSObject*<OS_dispatch_queue> _queue;
	NSLock* _lock;
	NSCondition* _fetchSoundDataCondition;
	NSMutableArray* _accountIDsOfSoundsToPlay;
	NSMutableArray* _pushFetchTimestamps;
	NSLock* _pushFetchTimestampsLock;
	NSMutableDictionary* _summaryFetchTimes;
	int _summaryFetchTimeLock;
	MFMailDataProviderAutoFetchData* _autoFetchData;
	unsigned long long _autoFetchPushCount;
	unsigned long long _accountIDsOfSoundsToPlayWaitTimeoutTS;

}

@property (retain) NSArray * accounts; 
@property (retain) MFMailDataProviderAutoFetchData * autoFetchData;                       //@synthesize autoFetchData=_autoFetchData - In the implementation block
@property (assign) unsigned long long autoFetchPushCount;                                 //@synthesize autoFetchPushCount=_autoFetchPushCount - In the implementation block
@property (assign) unsigned long long accountIDsOfSoundsToPlayWaitTimeoutTS;              //@synthesize accountIDsOfSoundsToPlayWaitTimeoutTS=_accountIDsOfSoundsToPlayWaitTimeoutTS - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_lockStateChanged:(BOOL)arg1 ;
-(id)delayedMessagesPresenter:(id)arg1 bulletinRequestForMessage:(id)arg2 context:(id)arg3 ;
-(void)delayedMessagesPresenter:(id)arg1 handleBulletinRequest:(id)arg2 message:(id)arg3 context:(id)arg4 ;
-(void)_swipeActionsChanged:(id)arg1 ;
-(void)_autoFetchStarted:(id)arg1 ;
-(void)_autoFetchJobCompleted:(id)arg1 ;
-(void)_autoFetchFinished:(id)arg1 ;
-(void)_autoFetchPushStarted:(id)arg1 ;
-(void)_autoFetchPushFinished:(id)arg1 ;
-(void)_nts_setAccounts:(id)arg1 shouldCache:(BOOL)arg2 ;
-(id)_copyCachedAccounts;
-(void)_cacheAccounts:(id)arg1 ;
-(void)_nts_recalculateAccountsUsingExternalSync;
-(BOOL)usingExternalSyncForAccountWithID:(id)arg1 ;
-(MFMailDataProviderAutoFetchData *)autoFetchData;
-(unsigned long long)autoFetchPushCount;
-(void)setAccountIDsOfSoundsToPlayWaitTimeoutTS:(unsigned long long)arg1 ;
-(id)bulletinRequestForMessage:(id)arg1 showsLoading:(BOOL)arg2 ;
-(id)_currentClearedInfoVersion;
-(id)_mutableMigratedClearedInfoWithClearedInfo:(id)arg1 ;
-(void)setAutoFetchData:(MFMailDataProviderAutoFetchData *)arg1 ;
-(void)_fetchJobCompleted:(id)arg1 autoFetchData:(id)arg2 ;
-(unsigned long long)accountIDsOfSoundsToPlayWaitTimeoutTS;
-(void)_fetchFinished:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(void)setAutoFetchPushCount:(unsigned long long)arg1 ;
-(void)_setSummaryRequestTimestamp:(id)arg1 forIdentifier:(id)arg2 ;
-(void)_removeSummaryRequestTimestampsForIdentifiers:(id)arg1 ;
-(void)addSoundToRequestIfNeeded:(id)arg1 ;
-(id)_summaryRequestTimestampForIdentifier:(id)arg1 ;
-(void)protectedDataBecameAvailableForNotificationService:(id)arg1 ;
-(void)messagesInvalidatedForNotificationService:(id)arg1 ;
-(void)invalidateSectionParametersForNotificationService:(id)arg1 ;
-(void)notificationService:(id)arg1 didChangeAccounts:(id)arg2 error:(id)arg3 ;
-(void)notificationService:(id)arg1 didFetchMessages:(id)arg2 ;
-(void)notificationService:(id)arg1 didFetchSummaryForMessages:(id)arg2 ;
-(void)notificationService:(id)arg1 didRemoveMessageIds:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)sortDescriptors;
-(void)start;
-(void)stop;
-(id)sectionIdentifier;
-(id)universalSectionIdentifier;
-(BOOL)syncsBulletinDismissal;
-(id)sectionParameters;
-(id)defaultSectionInfo;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(unsigned long long)arg1 lastClearedInfo:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)defaultSubsectionInfos;
-(id)displayNameForSubsectionID:(id)arg1 ;
-(BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2 ;
-(void)handleBulletinActionResponse:(id)arg1 ;
-(NSArray *)accounts;
-(void)setAccounts:(NSArray *)arg1 ;
@end
