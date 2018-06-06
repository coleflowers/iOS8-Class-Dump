/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:44 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, GKPlayer;

@interface GKPendingFriendRequest : NSObject {

	NSString* _recipient;
	int _recipientKind;
	NSString* _originator;
	GKPlayer* _originatorPlayer;
	NSString* _originatorEmail;
	NSString* _requestID;
	NSString* _message;
	NSString* _handle;
	BOOL _shouldBadge;
	unsigned long long _friendRequestCount;
	BOOL _purpleBuddyAccount;

}

@property (nonatomic,retain) NSString * recipient;                               //@synthesize recipient=_recipient - In the implementation block
@property (assign,nonatomic) int recipientKind;                                  //@synthesize recipientKind=_recipientKind - In the implementation block
@property (nonatomic,retain) NSString * originator;                              //@synthesize originator=_originator - In the implementation block
@property (nonatomic,retain) GKPlayer * originatorPlayer;                        //@synthesize originatorPlayer=_originatorPlayer - In the implementation block
@property (nonatomic,retain) NSString * originatorEmail;                         //@synthesize originatorEmail=_originatorEmail - In the implementation block
@property (nonatomic,retain) NSString * requestID;                               //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,retain) NSString * message;                                 //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * handle;                                  //@synthesize handle=_handle - In the implementation block
@property (assign,nonatomic) BOOL shouldBadge;                                   //@synthesize shouldBadge=_shouldBadge - In the implementation block
@property (assign,nonatomic) unsigned long long friendRequestCount;              //@synthesize friendRequestCount=_friendRequestCount - In the implementation block
@property (assign,nonatomic) BOOL purpleBuddyAccount;                            //@synthesize purpleBuddyAccount=_purpleBuddyAccount - In the implementation block
+(id)pushDictionaryForQuery:(id)arg1 ;
-(NSString *)originatorEmail;
-(unsigned long long)friendRequestCount;
-(void)setFriendRequestCount:(unsigned long long)arg1 ;
-(void)setRecipientKind:(int)arg1 ;
-(void)setOriginatorEmail:(NSString *)arg1 ;
-(void)setOriginatorPlayer:(GKPlayer *)arg1 ;
-(id)initWithURLQuery:(id)arg1 ;
-(int)recipientKind;
-(BOOL)purpleBuddyAccount;
-(NSString *)requestID;
-(void)dealloc;
-(id)description;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setOriginator:(NSString *)arg1 ;
-(NSString *)originator;
-(void)setRecipient:(NSString *)arg1 ;
-(NSString *)recipient;
-(BOOL)shouldBadge;
-(void)setShouldBadge:(BOOL)arg1 ;
-(void)setRequestID:(NSString *)arg1 ;
-(id)initWithPushDictionary:(id)arg1 ;
-(void)setPurpleBuddyAccount:(BOOL)arg1 ;
-(GKPlayer *)originatorPlayer;
-(NSString *)handle;
-(void)setHandle:(NSString *)arg1 ;
@end
