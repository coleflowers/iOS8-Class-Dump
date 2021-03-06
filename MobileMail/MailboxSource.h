/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/GenericSource.h>

@class MFMailMessageStore, NSString, NSArray;

@interface MailboxSource : GenericSource {

	MFMailMessageStore* _store;
	NSString* _uniqueID;
	NSString* _originalPath;
	CFDictionaryRef _messageCache;
	CFSetRef _messagesRemovedByUser;
	unsigned _protectedDataIsAvailable : 1;
	unsigned _shouldThread : 1;
	NSArray* _generalObservationTokens;
	NSArray* _storeObservationTokens;

}

@property (nonatomic,retain) MFMailMessageStore * store;              //@synthesize store=_store - In the implementation block
-(BOOL)representsMailboxUid:(id)arg1 ;
-(int)correspondingType;
-(BOOL)supportsSearch;
-(id)mailboxUids;
-(BOOL)isBaseSource;
-(void)setLastViewedMessage:(id)arg1 ;
-(BOOL)supportsDeleteAll;
-(BOOL)deleteMovesToTrash;
-(BOOL)supportsMarkAll;
-(id)accountForAutoFetch;
-(void)markAllMessagesAsViewed;
-(void)markAllMessagesAsNotViewed;
-(void)markAllMessagesAsFlagged;
-(void)markAllMessagesAsNotFlagged;
-(BOOL)shouldShowUnreadCount;
-(BOOL)shouldCompactOnFetch;
-(id)lastViewedMessage;
-(id)messageForMessageID:(id)arg1 ;
-(id)uniqueIDForStorage;
-(BOOL)representsMailboxID:(unsigned)arg1 ;
-(void)reloadPreferences;
-(void)setProtectedDataAvailable:(BOOL)arg1 ;
-(void)_conversationHasMerged:(id)arg1 ;
-(void)emptyTrashAsNeeded;
-(unsigned long long)currentFetchWindow;
-(long long)fetchMobileSynchronously:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(CFDictionaryRef)copySendersByLibraryIDForConversation:(long long)arg1 ;
-(id)messageForMessageInfo:(id)arg1 cacheIfNotAlready:(BOOL)arg2 ;
-(id)cachedMessageForMessageInfo:(id)arg1 ;
-(id)bulletinsContext;
-(unsigned long long)remoteMessageCount;
-(unsigned long long)onlyRemoteUnreadCount;
-(unsigned long long)remoteAndLocalUnreadCount;
-(void)markAllMessagesAsDeletedOrArchived:(unsigned long long)arg1 withObserver:(id)arg2 ;
-(BOOL)needsFetch;
-(BOOL)shouldThreadConversations;
-(void)registerForGeneralNotifications;
-(void)unregisterForStoreNotifications;
-(void)unregisterForGeneralNotifications;
-(void)_resetSourceAfterAccountsChange;
-(void)_conversationFlagsChanged:(id)arg1 ;
-(void)_storeMessageFlagsChanged:(id)arg1 ;
-(void)_storeAddedMessages:(id)arg1 ;
-(void)_storeRemovedMessages:(id)arg1 ;
-(void)_forwardNotification:(id)arg1 ;
-(void)registerForNotificationsForStore:(id)arg1 ;
-(id)_copyObjectsByApplyingPendingChangesToObjects:(id)arg1 ;
-(id)_copyMessageInfosByApplyingPendingChangesToMessageInfos:(id)arg1 ;
-(id)_messageWithLibraryID:(unsigned)arg1 ;
-(unsigned long long)_messageCountForFetch;
-(void)_reallyDeleteAllMessagesWithObserver:(id)arg1 ;
-(void)_addAllMessageChangeSetWithOperation:(id)arg1 ;
-(void)_forwardNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_updateCachedMessage:(id)arg1 ;
-(id)_copyMessagesByApplyingPendingChangesToMessages:(id)arg1 ;
-(id)copyMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1 ;
-(long long)fetchNumOlderMessages:(unsigned long long)arg1 preservingUID:(id)arg2 ;
-(id)remoteIDsUsingSearchContext:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)equivalentCriterion;
-(id)uniqueIDForStatus;
-(BOOL)supportsFlagging;
-(id)noMessagesLabelText;
-(BOOL)shouldIncludeWholeThreads;
-(BOOL)shouldPlayNewMailSound;
-(BOOL)canLoadOlderMessages;
-(MFMailMessageStore *)store;
-(void)setStore:(MFMailMessageStore *)arg1 ;
-(unsigned long long)messageCount;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isProtectedDataAvailable;
-(void)close;
-(id)_store;
-(void)applyChanges;
-(void)open;
-(void)flushCaches;
-(id)diagnosticDescription;
-(id)lastViewedMessageDate;
-(BOOL)supportsArchiving;
-(BOOL)shouldArchiveByDefault;
-(BOOL)shouldGrowFetchWindow;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 ;
-(BOOL)canFetchSearchResults;
-(long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned)arg2 ;
-(BOOL)supportsThreadNotifications;
-(id)initWithMailbox:(id)arg1 ;
-(id)mailboxName;
-(id)copyMessageInfosMatchingCriterion:(id)arg1 ;
-(long long)oldestKnownConversation;
@end

