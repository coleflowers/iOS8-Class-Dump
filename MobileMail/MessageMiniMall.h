/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MessageSelectionDataSource.h>
#import <MobileMail/SearchOrderCacheDelegate.h>
#import <MobileMail/MiniMallSourceBulkOperationsDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableArray, NSCache, NSMutableIndexSet, MFActivityMonitor, MessageSelectionStrategy, MFMailMessage, SourceSearchContext, SearchOrderCache, NSString;

@interface MessageMiniMall : NSObject <MessageSelectionDataSource, SearchOrderCacheDelegate, MiniMallSourceBulkOperationsDelegate> {

	int _suspendCount;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _sources;
	NSMutableSet* _emptiedSources;
	NSMutableArray* _messageInfos;
	CFDictionaryRef _conversations;
	NSCache* _sendersByConversation;
	unsigned long long _threadedMessageCount;
	NSMutableIndexSet* _sectionOffsets;
	NSMutableArray* _sectionTitles;
	MFActivityMonitor* _fetchActivity;
	BOOL _userRefresh;
	MessageSelectionStrategy* _selectionStrategy;
	MFMailMessage* _currentMessage;
	int _lastChangeDirection;
	SourceSearchContext* _searchContext;
	SearchOrderCache* _orderValueCache;
	/*^block*/id _comparator;

}

@property (nonatomic,copy) id comparator;                           //@synthesize comparator=_comparator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)threadedCount;
-(id)fetchActivity;
-(void)_dumpDiagnosticInformation:(id)arg1 ;
-(void)removeAllSources;
-(id)bulletinsContexts;
-(unsigned long long)messageCountForConversationWithMessage:(id)arg1 ;
-(unsigned long long)unreadCountForDisplay;
-(BOOL)shouldPopOnZeroMessages;
-(id)tableIndexPathOfMessage:(id)arg1 ;
-(void)setLastViewedMessage:(id)arg1 ;
-(BOOL)archivesByDefault;
-(BOOL)deleteMovesToTrash;
-(void)markAllMessagesAsDeletedOrArchived:(unsigned long long)arg1 ;
-(id)messageToSelectAfterDeletedMessage:(id)arg1 ;
-(void)markMessages:(id)arg1 asDeletedOrArchived:(unsigned long long)arg2 ;
-(id)copyAllMessages;
-(void)markAllMessagesAsViewed;
-(void)markAllMessagesAsNotViewed;
-(void)markAllMessagesAsFlagged;
-(void)markAllMessagesAsNotFlagged;
-(void)moveAllMessagesToMailbox:(id)arg1 ;
-(void)transferMessages:(id)arg1 toMailbox:(id)arg2 ;
-(id)messageToSelectAfterDeletedMessages:(id)arg1 ;
-(id)tableIndexPathOfMessageOrConversation:(id)arg1 ;
-(id)sourcesForMessagesAtTableIndexPath:(id)arg1 ;
-(id)messageAtTableIndexPath:(id)arg1 ;
-(id)titleWithUnreadCount:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(BOOL)shouldShowUnreadCount;
-(id)sourceForMailbox:(id)arg1 ;
-(id)currentRemoteIDForMailbox:(id)arg1 ;
-(id)messagesAtTableIndexPath:(id)arg1 ;
-(unsigned long long)localMessageCount;
-(void)updateEntry:(id)arg1 atTableIndexPath:(id)arg2 addressList:(id*)arg3 options:(unsigned long long)arg4 ;
-(id)lastViewedMessage;
-(id)messageForMessageID:(id)arg1 ;
-(id)defaultMessageIncludingUnread:(BOOL)arg1 ;
-(id)tableIndexPathOfConversationContainingMessage:(id)arg1 ;
-(id)tableIndexPathOfConversationContainingMessageInfo:(id)arg1 ;
-(id)messageForMessageInfo:(id)arg1 ;
-(id)messageInfosAtTableIndexPath:(id)arg1 ;
-(BOOL)deleteMovesToTrashForTableIndexPath:(id)arg1 ;
-(BOOL)supportsArchivingForTableIndexPath:(id)arg1 ;
-(BOOL)shouldArchiveByDefaultForTableIndexPath:(id)arg1 ;
-(void)getConversationStateAtTableIndexPath:(id)arg1 hasUnread:(BOOL*)arg2 hasUnflagged:(BOOL*)arg3 ;
-(void)getSourceStateHasUnread:(BOOL*)arg1 hasUnflagged:(BOOL*)arg2 ;
-(unsigned long long)messageCountAtTableIndexPath:(id)arg1 ;
-(void)_messagesAdded:(id)arg1 ;
-(void)_protectedDataWillBecomeUnavailable:(id)arg1 ;
-(void)_protectedDataWasReconciled:(id)arg1 ;
-(void)_messageFlagsChanged:(id)arg1 ;
-(void)_messagesCompacted:(id)arg1 ;
-(void)_checkServerCount:(id)arg1 ;
-(void)_conversationHasMerged:(id)arg1 ;
-(void)_sourceDidReload:(id)arg1 ;
-(void)_sourceDidFinishSearch:(id)arg1 ;
-(void)_purgeCachedMessageInfosWithReason:(id)arg1 ;
-(void)setSearchContext:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_fetchCompleted:(id)arg1 ;
-(void)_checkForNewMailAndNotifyOnFailure:(BOOL)arg1 ;
-(void)_checkForNewMailAndNotifyOnFailureBackground:(BOOL)arg1 userRefresh:(BOOL)arg2 foregroundRequest:(BOOL)arg3 sourcesToCheck:(id)arg4 remoteID:(id)arg5 ;
-(void)_handleFetchCompleted:(id)arg1 ;
-(void)_scheduleEnsureWeHaveLoadedMessages;
-(unsigned long long)_offsetForSection:(long long)arg1 ;
-(BOOL)ensureWeHaveLoadedMessages;
-(unsigned long long)messageCountInSection:(long long)arg1 ;
-(unsigned long long)_messageInfoIndexForIndexPath:(id)arg1 ;
-(BOOL)allSourcesThreadMessages;
-(CFDictionaryRef)copySendersByLibraryIDForConversation:(long long)arg1 ;
-(id)_messageForMessageInfo:(id)arg1 cache:(BOOL)arg2 ;
-(void)_nts_getConversationStateFromNewestMessageInfo:(id)arg1 shouldThread:(BOOL)arg2 hasUnread:(BOOL*)arg3 hasUnflagged:(BOOL*)arg4 ;
-(id)_sourceForMessageInfo:(id)arg1 ;
-(unsigned long long)flattenedIndexOfMessage:(id)arg1 ;
-(unsigned long long)_messageCount;
-(id)tableIndexPathOfMessageInfo:(id)arg1 ;
-(id)_indexPathForMessageInfoIndex:(unsigned long long)arg1 ;
-(id)tableIndexPathOfConversationWithID:(long long)arg1 ;
-(id)_copySources;
-(id)_tableIndexPathOfMessageOrConversationForInfo:(id)arg1 conversationMustContainMessage:(BOOL)arg2 ;
-(id)messageToSelectFromMessage:(id)arg1 withDirection:(int)arg2 ;
-(void)getLastViewedMessage:(id*)arg1 date:(id*)arg2 ;
-(BOOL)isInCombinedMailboxOfType:(int)arg1 ;
-(id)junkMailboxMessagesInMessages:(id)arg1 ;
-(void)_addChangeSetToManager:(id)arg1 ;
-(id)_removeMessages:(id)arg1 ;
-(void)_filterTaskCompletedWithContext:(id)arg1 ;
-(id)_indexPathsFromIndexes:(id)arg1 ;
-(void)_recalculateSectionOffsets;
-(/*^block*/id)_searchOrderComparator;
-(void)_synchronouslyFilterInMessages:(id)arg1 fromSource:(id)arg2 ;
-(void)enqueueWork:(/*^block*/id)arg1 ;
-(void)_synchronouslyFilterOutMessages:(id)arg1 fromSource:(id)arg2 ;
-(id)_copyAllMessageInfos;
-(id)_cachedMessageForMessageInfo:(id)arg1 ;
-(BOOL)areAnySourcesSearching;
-(void)_currentMessageRemovedWithMessageToSelect:(id)arg1 ;
-(CFDictionaryRef)_copyMessageInfosBySourceForTableIndexPath:(id)arg1 ;
-(BOOL)_hasOnlyThreadedSources;
-(/*^block*/id)comparatorForMallContainingMessage:(id)arg1 ;
-(int)lastChangeDirection;
-(unsigned long long)flattenedIndexOfWhereMessageShouldGo:(id)arg1 ;
-(id)messageAtFlattenedIndex:(unsigned long long)arg1 ;
-(id)conversationContainingMessage:(id)arg1 ;
-(id)searchOrderCache:(id)arg1 sectionDescriptionForRankValue:(unsigned long long)arg2 context:(id)arg3 ;
-(unsigned long long)searchOrderCache:(id)arg1 rankValueForMessage:(id)arg2 context:(id)arg3 ;
-(void)didDeleteAllMessagesInSource:(id)arg1 ;
-(void)trackFetchVisibleStoresActivity:(id)arg1 ;
-(void)checkForNewMailAndNotifyOnFailure:(BOOL)arg1 userRefresh:(BOOL)arg2 ;
-(void)getIndex:(unsigned long long*)arg1 andCount:(unsigned long long*)arg2 ofMessageInConversation:(id)arg3 ;
-(id)tableIndexPathOfOldestMessageInSource:(id)arg1 ;
-(void)setLastChangeDirection:(int)arg1 ;
-(BOOL)deleteMovesToTrashForMessage:(id)arg1 ;
-(BOOL)supportsArchivingForMessage:(id)arg1 ;
-(BOOL)archiveByDefaultForMessage:(id)arg1 ;
-(BOOL)isInCombinedInbox;
-(id)_orderValueCache;
-(id)titleForSection:(long long)arg1 ;
-(id)comparator;
-(void)addSource:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(void)suspend;
-(void)removeObserver:(id)arg1 ;
-(unsigned long long)numberOfSections;
-(void)resume;
-(unsigned long long)sourceType;
-(void)addObserver:(id)arg1 ;
-(void)setCurrentMessage:(id)arg1 ;
-(void)flushCaches;
-(id)currentMessage;
-(id)sources;
-(id)initWithObserver:(id)arg1 ;
-(unsigned long long)serverMessageCount;
-(BOOL)supportsArchiving;
-(unsigned long long)serverUnreadCount;
-(void)setComparator:(id)arg1 ;
@end

