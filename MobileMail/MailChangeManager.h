/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileMail/MobileMail-Structs.h>
@class MFConditionLock, NSMutableArray, MCSChange, MFInvocationQueue, MailboxHierarchyTree, NSUndoManager;

@interface MailChangeManager : NSObject {

	MFConditionLock* _processingLock;
	NSMutableArray* _pendingChanges;
	NSMutableArray* _committedChanges;
	MCSChange* _currentChange;
	MFInvocationQueue* _invocationQueue;
	MailboxHierarchyTree* _lastCalculatedMailboxTree;
	NSUndoManager* _undoManager;
	BOOL _isUndoing;
	CFDictionaryRef _mailboxPreChangeUnreadCounts;
	CFDictionaryRef _mailboxPostChangeUnreadCounts;

}

@property (readonly) NSUndoManager * undoManager;              //@synthesize undoManager=_undoManager - In the implementation block
+(id)sharedChangeManager;
-(id)allMailboxUidsSortedWithSpecialsAtTopForAccount:(id)arg1 includingLocals:(BOOL)arg2 client:(id)arg3 outbox:(id)arg4 ;
-(id)displayNameUsingSpecialNamesForMailbox:(id)arg1 ;
-(void)addChange:(id)arg1 ;
-(id)applyPendingChangesToMessages:(id)arg1 ;
-(void)purgeCommittedChanges;
-(unsigned long long)unreadCountForSource:(id)arg1 ;
-(id)applyPendingChangesToMessageInfos:(id)arg1 ;
-(void)_mailboxUserInfoDidChange:(id)arg1 ;
-(void)_mailMessageStoreMessagesCompacted:(id)arg1 ;
-(void)_invalidateUnreadCountsForKey:(id)arg1 onlyPostChange:(BOOL)arg2 ;
-(void)_revertCommittedChange:(id)arg1 ;
-(id)applyCommittedChanges:(id)arg1 toObjects:(id)arg2 ;
-(id)applyPendingChangesToObjects:(id)arg1 ;
-(unsigned long long)_serverUnreadCountForMailbox:(id)arg1 ;
-(void)_updateUnreadCountForMailbox:(id)arg1 ;
-(unsigned long long)_unreadCountAfterChangesForMailbox:(id)arg1 withKey:(id)arg2 criteria:(id)arg3 ;
-(unsigned long long)unreadCountForMailbox:(id)arg1 criteria:(id)arg2 ;
-(void)_modifyMailboxesForMailboxTree:(id)arg1 forChange:(id)arg2 ;
-(id)genericMailboxUidsSortedForAccount:(id)arg1 includingLocals:(BOOL)arg2 excludingMailbox:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSUndoManager *)undoManager;
-(void)resume;
-(void)pause;
-(id)parentForMailbox:(id)arg1 ;
-(int)levelForMailbox:(id)arg1 ;
-(id)displayNameForMailbox:(id)arg1 ;
-(BOOL)mailboxHasSubMailboxes:(id)arg1 ;
-(id)copyDiagnosticInformation;
-(unsigned long long)unreadCountForMailbox:(id)arg1 ;
-(void)processPendingChanges;
@end
