/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/_MFResultsGenerator.h>

@class MFMailboxUid, NSSet;

@interface MFMailboxResultsGenerator : _MFResultsGenerator {

	MFMailboxUid* _mailboxUid;
	NSSet* _pushedMailboxUids;

}

@property (nonatomic,retain) MFMailboxUid * mailboxUid;              //@synthesize mailboxUid=_mailboxUid - In the implementation block
@property (nonatomic,retain) NSSet * pushedMailboxUids;              //@synthesize pushedMailboxUids=_pushedMailboxUids - In the implementation block
+(id)resultsDictionaryFromMailboxUid:(id)arg1 forKeys:(id)arg2 ;
-(id)_displayName:(id)arg1 ;
-(id)_relativePath:(id)arg1 ;
-(id)_type:(id)arg1 ;
-(id)_level:(id)arg1 ;
-(id)_pushState:(id)arg1 ;
-(SEL)selectorForKey:(id)arg1 ;
-(void)setPushedMailboxUids:(NSSet *)arg1 ;
-(void)dealloc;
-(void)setMailboxUid:(MFMailboxUid *)arg1 ;
-(MFMailboxUid *)mailboxUid;
-(NSSet *)pushedMailboxUids;
@end

