/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MessageMiniMallObserver.h>
#import <MobileMail/MessageSelectionDataSource.h>

@class NSMutableArray, NSIndexSet, NSDictionary, MessageSelectionStrategy, SourceSearchContext, MFActivityMonitor, MFMailMessage, NSString;

@interface MessageMegaMall : NSObject <MessageMiniMallObserver, MessageSelectionDataSource> {

	int _lock;
	NSMutableArray* _malls;
	NSIndexSet* _sectionsNeedingVisibleMailboxNames;
	NSDictionary* _maximumIndexPathsBySource;
	CFDictionaryRef _sourceShouldGrowCache;
	MessageSelectionStrategy* _selectionStrategy;
	/*^block*/id _comparator;
	SourceSearchContext* _searchContext;
	unsigned long long _searchOptions;
	MFActivityMonitor* _fetchActivity;
	CFDictionaryRef _growingMailboxesByActivity;
	int _lastChangeDirection;
	MFMailMessage* _currentMessage;
	id _context;

}

@property (nonatomic,copy) id comparator; 
@property (nonatomic,retain) MFMailMessage * currentMessage;                 //@synthesize currentMessage=_currentMessage - In the implementation block
@property (nonatomic,retain) MFMailMessage * lastViewedMessage; 
@property (assign,nonatomic) int lastChangeDirection;                        //@synthesize lastChangeDirection=_lastChangeDirection - In the implementation block
@property (nonatomic,retain) id context;                                     //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)messageInfosTransformForConversationID:(long long)arg1 ;
-(void)_dumpDiagnosticInformation:(id)arg1 ;
-(void)removeAllSources;
-(id)sourcesForSection:(unsigned long long)arg1 ;
-(void)addSource:(id)arg1 toSection:(unsigned long long)arg2 ;
-(id)bulletinsContexts;
-(unsigned long long)messageCountForConversationWithMessage:(id)arg1 ;
-(unsigned long long)unreadCountForDisplay;
-(unsigned long long)messageCountForSection:(unsigned long long)arg1 ;
-(void)loadMoreMessagesWithMaxVisibleIndexPath:(id)arg1 ;
-(id)tableIndexPathOfFlattenedCurrentMessage;
-(id)tableIndexPathOfConversationWithID:(long long)arg1 preferredSection:(unsigned long long)arg2 ;
-(id)flattenedIndexPathOfMessage:(id)arg1 ;
-(BOOL)shouldPopOnZeroMessages;
-(id)tableIndexPathOfMessage:(id)arg1 ;
-(unsigned long long)mallCount;
-(id)noMessagesTextForSection:(long long)arg1 ;
-(void)setLastViewedMessage:(MFMailMessage *)arg1 ;
-(BOOL)archivesByDefault;
-(BOOL)deleteMovesToTrash;
-(id)supplementaryRelatedSourcesForMessage:(id)arg1 ;
-(void)markAllMessagesAsDeletedOrArchived:(unsigned long long)arg1 ;
-(id)messageToSelectAfterDeletedMessage:(id)arg1 ;
-(void)markMessages:(id)arg1 asDeletedOrArchived:(unsigned long long)arg2 ;
-(void)markMessages:(id)arg1 inSection:(unsigned long long)arg2 asDeletedOrArchived:(unsigned long long)arg3 ;
-(id)copyAllMessages;
-(void)markAllMessagesAsViewed;
-(void)markAllMessagesAsNotViewed;
-(void)markMessagesAsViewed:(id)arg1 ;
-(void)markMessagesAsNotViewed:(id)arg1 ;
-(void)markAllMessagesAsFlagged;
-(void)markAllMessagesAsNotFlagged;
-(void)markMessagesAsFlagged:(id)arg1 ;
-(void)markMessagesAsNotFlagged:(id)arg1 ;
-(void)markMessagesAsJunk:(id)arg1 ;
-(void)markMessagesAsNotJunk:(id)arg1 ;
-(void)moveAllMessagesToMailbox:(id)arg1 ;
-(void)transferMessages:(id)arg1 toMailbox:(id)arg2 ;
-(id)messageToSelectAfterDeletedMessages:(id)arg1 ;
-(BOOL)shouldShowMailboxNameForMessage:(id)arg1 ;
-(id)tableIndexPathOfMessageOrConversation:(id)arg1 ;
-(id)sourcesForMessagesAtTableIndexPath:(id)arg1 ;
-(void)setSectionsNeedingVisibleMailboxNames:(id)arg1 ;
-(id)messageAtTableIndexPath:(id)arg1 ;
-(id)titleWithUnreadCount:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(BOOL)shouldShowUnreadCount;
-(id)sourceForMailbox:(id)arg1 ;
-(id)currentRemoteIDForMailbox:(id)arg1 ;
-(void)trackFetchVisibleMailbox:(id)arg1 activity:(id)arg2 options:(unsigned long long)arg3 ;
-(id)messagesAtTableIndexPath:(id)arg1 ;
-(unsigned long long)localMessageCount;
-(void)updateEntry:(id)arg1 atTableIndexPath:(id)arg2 addressList:(id*)arg3 options:(unsigned long long)arg4 ;
-(id)allMessagesForConversation:(long long)arg1 ;
-(MFMailMessage *)lastViewedMessage;
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
-(void)performSearchInMallAtIndex:(unsigned long long)arg1 ;
-(BOOL)prepareSearchUsingContext:(id)arg1 options:(unsigned long long)arg2 ;
-(void)cancelSearchInMallAtIndex:(unsigned long long)arg1 ;
-(id)sourcesBySection;
-(unsigned long long)messageCountAtTableIndexPath:(id)arg1 ;
-(void)miniMallMessageCountChanged:(id)arg1 ;
-(void)miniMallMessagesAtIndexPathsChanged:(id)arg1 ;
-(void)miniMallStartFetch:(id)arg1 ;
-(void)miniMallCurrentMessageRemoved:(id)arg1 ;
-(void)miniMallDidFinishSearch:(id)arg1 ;
-(void)miniMallDidLoadMessages:(id)arg1 ;
-(void)_fetchCompleted:(id)arg1 ;
-(BOOL)allSourcesThreadMessages;
-(unsigned long long)flattenedIndexOfMessage:(id)arg1 ;
-(id)messageToSelectFromMessage:(id)arg1 withDirection:(int)arg2 ;
-(void)_addChangeSetToManager:(id)arg1 ;
-(void)_currentMessageRemovedWithMessageToSelect:(id)arg1 ;
-(/*^block*/id)comparatorForMallContainingMessage:(id)arg1 ;
-(int)lastChangeDirection;
-(unsigned long long)flattenedIndexOfWhereMessageShouldGo:(id)arg1 ;
-(id)messageAtFlattenedIndex:(unsigned long long)arg1 ;
-(id)conversationContainingMessage:(id)arg1 ;
-(void)getIndex:(unsigned long long*)arg1 andCount:(unsigned long long*)arg2 ofMessageInConversation:(id)arg3 ;
-(void)setLastChangeDirection:(int)arg1 ;
-(BOOL)deleteMovesToTrashForMessage:(id)arg1 ;
-(BOOL)supportsArchivingForMessage:(id)arg1 ;
-(BOOL)archiveByDefaultForMessage:(id)arg1 ;
-(BOOL)isInCombinedInbox;
-(BOOL)hasSearchCriterion;
-(void)_cancelGrowingMailboxes;
-(id)_copyMalls;
-(/*^block*/id)_nts_comparator;
-(void)_clearFetchActivity;
-(void)_invalidateMaximumIndexPathsBySource;
-(id)_mallForSection:(long long)arg1 baseSection:(long long*)arg2 ;
-(void)_notifyGrowingMailboxesChanged;
-(BOOL)_nts_isGrowingFetchWindowForAnySourceInSection:(long long)arg1 ;
-(id)_nts_growingMailboxActivityMonitorForSource:(id)arg1 ;
-(id)_megaMallIndexPathFromIndexPath:(id)arg1 baseSection:(long long)arg2 ;
-(BOOL)shouldGrowFetchWindowForSource:(id)arg1 ;
-(BOOL)isGrowingFetchWindowForSource:(id)arg1 ;
-(void)loadOlderMessages;
-(void)growFetchWindowForSources:(id)arg1 ;
-(id)maximumIndexPathsBySource;
-(void)_loadMoreMessagesWithMaxVisibleIndexPath:(id)arg1 maximumIndexPathsBySource:(id)arg2 ;
-(id)_mallForMessageInfo:(id)arg1 ;
-(id)_nts_mallForSection:(long long)arg1 baseSection:(long long*)arg2 ;
-(id)_miniMallIndexPathFromIndexPath:(id)arg1 baseSection:(long long)arg2 ;
-(unsigned long long)_baseSectionForMiniMall:(id)arg1 ;
-(id)messageInfosForConversationID:(long long)arg1 ;
-(void)_enumerateMessagesBySection:(id)arg1 enumerator:(/*^block*/id)arg2 ;
-(id)_megaMallIndexPathsFromIndexPaths:(id)arg1 baseSection:(unsigned long long)arg2 ;
-(void)_filterTaskCompleted;
-(unsigned long long)_indexOfMiniMall:(id)arg1 ;
-(BOOL)isGrowingFetchWindowForAnySourceInSection:(long long)arg1 ;
-(id)comparator;
-(unsigned long long)messageCount;
-(void)dealloc;
-(id)init;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(void)suspend;
-(void)removeObserver:(id)arg1 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)resume;
-(unsigned long long)sourceType;
-(void)addObserver:(id)arg1 ;
-(void)setCurrentMessage:(MFMailMessage *)arg1 ;
-(unsigned long long)sectionCount;
-(void)flushCaches;
-(MFMailMessage *)currentMessage;
-(id)sources;
-(id)initWithObserver:(id)arg1 ;
-(BOOL)supportsArchiving;
-(void)setComparator:(id)arg1 ;
-(void)cancelSearch;
-(id)titleForHeaderInSection:(long long)arg1 ;
@end

