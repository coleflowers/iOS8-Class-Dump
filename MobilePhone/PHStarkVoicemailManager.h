/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:40:25 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PHStarkVoicemailManager : NSObject
+(BOOL)isVisualVoicemailAvailable;
+(id)sharedVoicemailManager;
-(id)voicemails;
-(void)_phoneApplicationAddressBookChangedNotification:(id)arg1 ;
-(id)voicemailWithID:(long long)arg1 ;
-(void)voicemailsAddedNotification:(id)arg1 ;
-(void)onlineStateChangedNotification:(id)arg1 ;
-(void)voicemailFlagsChangedNotification:(id)arg1 ;
-(void)voicemailStoreContentsRemovedNotification:(id)arg1 ;
-(id)trashedVoicemails;
-(void)dealloc;
-(id)init;
-(id)badgeString;
@end

