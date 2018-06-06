/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MCSChange.h>

@class MCSMailboxOperation;

@interface MailMailboxChangeSet : MCSChange {

	MCSMailboxOperation* _mailboxOperation;

}
-(id)applyPendingChangeToObjects:(id)arg1 ;
-(id)localizedErrorDescription;
-(id)localizedErrorTitle;
-(id)localizedChangeDescription;
-(long long)localizedChangeDescriptionPriority;
-(id)copyChangeSetForFullPath:(id)arg1 ;
-(unsigned long long)adjustUnreadCount:(unsigned long long)arg1 withCriterion:(id)arg2 ;
-(id)mailboxToRemove;
-(id)modifiedMailboxName;
-(id)mailboxToMoveOrRename;
-(id)mailboxParentForMove;
-(id)stores;
-(BOOL)revert;
-(void)dealloc;
-(id)description;
-(BOOL)commit;
-(id)initWithOperation:(id)arg1 ;
-(id)accounts;
-(id)URLStrings;
@end

