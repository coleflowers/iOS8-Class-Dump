/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <Message/MFMailMessageStore.h>

@class NSArray, NSDictionary, NSData;

@interface StaticStore : MFMailMessageStore {

	NSArray* _messages;
	NSDictionary* _bodiesForMessages;
	NSData* _body;
	NSData* _headers;

}
-(void)_cacheBodyAndHeaders;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(int)fetchSynchronously;
-(void)dealloc;
-(id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)openAsynchronously;
-(long long)fetchMobileSynchronously:(unsigned long long)arg1 ;
-(unsigned)nonDeletedCount;
-(id)copyOfMessagesInRange:(NSRange)arg1 options:(unsigned)arg2 generation:(unsigned long long*)arg3 ;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(id)bodyDataForMessage:(id)arg1 ;
@end

