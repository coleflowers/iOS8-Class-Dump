/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MCSMailboxOperation.h>

@class MFMailboxUid;

@interface MCSDeleteMailboxOperation : MCSMailboxOperation {

	MFMailboxUid* _mailboxToDelete;

}
-(id)localizedErrorDescription;
-(id)localizedErrorTitle;
-(id)mailboxToRemove;
-(id)accountForErrorHandling;
-(BOOL)revert;
-(void)dealloc;
-(BOOL)commit;
-(id)initWithMailboxToDelete:(id)arg1 ;
@end

