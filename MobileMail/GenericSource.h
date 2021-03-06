/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MiniMallSource.h>
#import <MobileMail/NSCopying.h>

@class NSString;

@interface GenericSource : NSObject <MiniMallSource, NSCopying>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isProtectedDataAvailable) BOOL protectedDataAvailable; 
-(BOOL)representsMailboxUid:(id)arg1 ;
-(int)correspondingType;
-(BOOL)supportsSearch;
-(id)mailboxUids;
-(BOOL)isBaseSource;
-(void)setLastViewedMessage:(id)arg1 ;
-(BOOL)supportsDeleteAll;
-(BOOL)deleteMovesToTrash;
-(BOOL)supportsMoveAll;
-(BOOL)supportsMarkAll;
-(id)accountForAutoFetch;
-(BOOL)shouldShowUnreadCount;
-(BOOL)shouldCompactOnFetch;
-(id)lastViewedMessage;
-(id)messageForMessageID:(id)arg1 ;
-(id)uniqueIDForStorage;
-(BOOL)representsMailboxID:(unsigned)arg1 ;
-(void)reloadPreferences;
-(void)setProtectedDataAvailable:(BOOL)arg1 ;
-(void)emptyTrashAsNeeded;
-(unsigned long long)currentFetchWindow;
-(long long)fetchMobileSynchronously:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(CFDictionaryRef)copySendersByLibraryIDForConversation:(long long)arg1 ;
-(id)oldestKnownMessage;
-(id)messageForMessageInfo:(id)arg1 cacheIfNotAlready:(BOOL)arg2 ;
-(id)cachedMessageForMessageInfo:(id)arg1 ;
-(id)bulletinsContext;
-(unsigned long long)remoteMessageCount;
-(unsigned long long)onlyRemoteUnreadCount;
-(unsigned long long)remoteAndLocalUnreadCount;
-(BOOL)needsFetch;
-(BOOL)shouldThreadConversations;
-(id)copyMessageInfos;
-(BOOL)shouldArchiveByDefaultForMessageInfos:(id)arg1 ;
-(BOOL)deleteMovesToTrashForMessageInfos:(id)arg1 ;
-(BOOL)supportsArchivingForMessageInfos:(id)arg1 ;
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
-(/*function pointer*/void*)comparator;
-(unsigned long long)messageCount;
-(unsigned long long)type;
-(BOOL)isProtectedDataAvailable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)close;
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
-(id)mailboxName;
-(id)copyMessageInfosMatchingCriterion:(id)arg1 ;
-(long long)oldestKnownConversation;
@end

