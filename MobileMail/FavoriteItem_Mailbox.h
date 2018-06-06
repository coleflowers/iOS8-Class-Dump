/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/FavoriteItem.h>

@class MFMailboxUid, MailAccount, NSString;

@interface FavoriteItem_Mailbox : FavoriteItem {

	MFMailboxUid* _mailbox;
	MailAccount* _account;
	int _mailboxType;
	NSString* _accountRelativePath;
	NSString* _displayName;
	BOOL _originalPushState;

}

@property (assign,nonatomic) BOOL originalPushState;              //@synthesize originalPushState=_originalPushState - In the implementation block
@property (nonatomic,retain) MFMailboxUid * mailbox;              //@synthesize mailbox=_mailbox - In the implementation block
+(BOOL)_defaultShouldSync;
-(id)representingMailbox;
-(void)wasSelected:(id)arg1 accessoryTapped:(BOOL)arg2 ;
-(void)wasAddedToCollection:(id)arg1 ;
-(void)wasRemovedFromCollecion:(id)arg1 ;
-(id)syncValue;
-(void)wasChangedExternally;
-(long long)_defaultCellAccessoryType;
-(void)setOriginalPushState:(BOOL)arg1 ;
-(BOOL)originalPushState;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isVisible;
-(id)dictionaryRepresentation;
-(id)displayName;
-(void)configureCell:(id)arg1 ;
-(void)_postNotification;
-(id)syncKey;
-(id)account;
-(void)setMailbox:(MFMailboxUid *)arg1 ;
-(id)initWithMailbox:(id)arg1 ;
-(MFMailboxUid *)mailbox;
-(BOOL)isDeletable;
@end
