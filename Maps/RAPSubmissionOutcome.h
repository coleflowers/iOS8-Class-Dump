/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSError;

@interface RAPSubmissionOutcome : NSObject {

	/*^block*/id _retry;
	NSString* _submissionID;
	NSData* _pushToken;
	NSString* _emailAddress;
	BOOL _contactBackIsInitiallySelected;
	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;                                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL canRetry; 
@property (nonatomic,readonly) BOOL shouldShowContactBack; 
@property (nonatomic,readonly) BOOL contactBackIsInitiallySelected;                                    //@synthesize contactBackIsInitiallySelected=_contactBackIsInitiallySelected - In the implementation block
@property (nonatomic,readonly) NSString * contactBackEmailAddress;                                     //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSString * localizedRetryPromptTitle; 
@property (nonatomic,readonly) NSString * localizedRetryPromptMessage; 
@property (nonatomic,readonly) NSString * localizedRetryPromptTryAgainCommand; 
@property (nonatomic,readonly) NSString * localizedRetryPromptCancelCommand; 
@property (nonatomic,readonly) NSString * localizedAcknowledgementTitle; 
@property (nonatomic,readonly) BOOL shouldAccomodateForNotificationAcknowledgmentMessage; 
@property (nonatomic,readonly) NSString * localizedAcknowledgementMessage; 
@property (nonatomic,readonly) NSString * localizedContactBackSelectionLabel; 
@property (nonatomic,readonly) NSString * localizedContactBackExplanation; 
@property (nonatomic,readonly) NSData * pushNotificationsToken;                                        //@synthesize pushToken=_pushToken - In the implementation block
-(BOOL)shouldShowContactBack;
-(id)localizedAcknowledgementMessageWithDefaultAttributes:(id)arg1 thankYouAttributes:(id)arg2 notificationAttributes:(id)arg3 ;
-(NSString *)localizedAcknowledgementTitle;
-(BOOL)shouldAccomodateForNotificationAcknowledgmentMessage;
-(void)submitOptInForNotifications:(BOOL)arg1 contactBack:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)localizedContactBackSelectionLabel;
-(NSString *)localizedContactBackExplanation;
-(NSData *)pushNotificationsToken;
-(BOOL)shouldShowNotifications;
-(id)_initWithError:(id)arg1 retryBlock:(/*^block*/id)arg2 ;
-(id)_initWithSubmissionID:(id)arg1 allowsNotifications:(BOOL)arg2 ;
-(BOOL)canRetry;
-(NSString *)localizedRetryPromptTitle;
-(NSString *)localizedRetryPromptMessage;
-(NSString *)localizedRetryPromptCancelCommand;
-(NSString *)localizedRetryPromptTryAgainCommand;
-(NSString *)localizedAcknowledgementMessage;
-(id)localizedNotificationsSelectionLabel;
-(id)localizedNotificationExplanation;
-(NSString *)contactBackEmailAddress;
-(BOOL)contactBackIsInitiallySelected;
-(void)_commonInit;
-(NSError *)error;
-(void)retry;
@end

