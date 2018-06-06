/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MFDeliveryDelegate.h>
#import <MobileMail/MFContentProtectionObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, MFInvocationQueue, NSMutableDictionary, NSString;

@interface MFDeliveryQueue : NSObject <MFDeliveryDelegate, MFContentProtectionObserver> {

	NSObject*<OS_dispatch_queue> _stateQueue;
	MFInvocationQueue* _jobQueue;
	int _state;
	unsigned long long _messagesFromActiveAccounts;
	unsigned long long _messageWithUIFocus;
	NSMutableDictionary* _lastErrorForMessage;
	unsigned _resetDeliveryQueueWhenDoneWithCurrentMessage : 1;
	unsigned _suspendRequested : 1;
	unsigned _isReachable : 1;
	unsigned _deviceUnlockedAfterBoot : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDeliveryQueue;
-(void)processQueue;
-(unsigned long long)numberOfPendingMessages;
-(void)processQueueAndPlaySoundOnSuccess:(BOOL)arg1 forceAll:(BOOL)arg2 isUserRequested:(BOOL)arg3 ;
-(void)_messagesAdded:(id)arg1 ;
-(void)processQueueAndPlaySoundOnSuccess:(BOOL)arg1 forceAll:(BOOL)arg2 ;
-(id)_sortedMessages;
-(id)lastErrorForMessage:(id)arg1 ;
-(int)deliverSynchronously:(id)arg1 ;
-(id)_outboxStore;
-(id)_messagesInProgress;
-(void)_mailAccountsChanged:(id)arg1 ;
-(void)_focusedMessageDidChange:(id)arg1 ;
-(void)_queueProcessingDidFinish:(id)arg1 ;
-(void)_updateCounts;
-(void)_processQueueWithOptions:(id)arg1 ;
-(id)_append:(id)arg1 flags:(id)arg2 ;
-(void)_logDeliveryResult:(id)arg1 forMessage:(id)arg2 account:(id)arg3 ;
-(void)_setDeliveryFlag:(id)arg1 state:(BOOL)arg2 ;
-(void)_updateDeliveryInfoFromResult:(id)arg1 forMessage:(id)arg2 ;
-(void)_setErrorForMessageLibraryID:(id)arg1 error:(id)arg2 ;
-(void)_updateStateFile:(BOOL)arg1 ;
-(void)_sendProcessingStartedNotification;
-(BOOL)_shouldSend:(id)arg1 options:(id)arg2 ;
-(void)_setErrorForMessage:(id)arg1 error:(id)arg2 ;
-(void)_sendProcessingFinishedNotification:(int)arg1 failed:(int)arg2 playSound:(BOOL)arg3 ;
-(BOOL)isReady;
-(BOOL)isSuspended;
-(void)dealloc;
-(id)init;
-(void)suspend;
-(void)resume;
-(id)copyDiagnosticInformation;
-(void)setPercentDone:(double)arg1 ;
-(unsigned long long)append:(id)arg1 ;
-(void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)_flagsChanged:(id)arg1 ;
-(BOOL)isProcessing;
@end
