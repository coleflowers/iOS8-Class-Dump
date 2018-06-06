/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:57 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MailboxContentSelectionModelDataSource <NSObject>
@required
-(id)sourcesForSelectionModel:(id)arg1;
-(id)selectionModel:(id)arg1 sourceForMessageInfo:(id)arg2;
-(id)selectionModel:(id)arg1 indexPathForMessageInfo:(id)arg2;
-(id)selectionModel:(id)arg1 messagesForMessageInfos:(id)arg2;
-(id)selectionModel:(id)arg1 messageInfosAtTableIndexPath:(id)arg2;
-(BOOL)selectionModel:(id)arg1 deleteMovesToTrashForTableIndexPath:(id)arg2;
-(BOOL)selectionModel:(id)arg1 supportsArchivingForTableIndexPath:(id)arg2;
-(BOOL)selectionModel:(id)arg1 shouldArchiveByDefaultForTableIndexPath:(id)arg2;
-(void)selectionModel:(id)arg1 getConversationStateAtTableIndexPath:(id)arg2 hasUnread:(BOOL*)arg3 hasUnflagged:(BOOL*)arg4;
-(void)selectionModel:(id)arg1 getSourceStateHasUnread:(BOOL*)arg2 hasUnflagged:(BOOL*)arg3;

@end

