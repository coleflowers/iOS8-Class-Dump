/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MZKeyValueStoreDeserializeOperationDelegate;
@class IMKeyValueStoreTransaction, NSDictionary, NSObject, IMKeyValueStoreController, NSMutableArray, NSError;

@interface IMKeyValueStoreDeserializer : NSObject {

	IMKeyValueStoreTransaction* _transaction;
	NSDictionary* _serverResponse;
	NSObject*<MZKeyValueStoreDeserializeOperationDelegate> _delegate;
	long long _status;
	unsigned long long _retrySeconds;
	BOOL _isDirty;
	IMKeyValueStoreController* _keyValueStoreController;
	NSMutableArray* _pendingDeserializations;

}

@property (nonatomic,retain) IMKeyValueStoreTransaction * transaction;                                     //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) IMKeyValueStoreController * keyValueStoreController;                          //@synthesize keyValueStoreController=_keyValueStoreController - In the implementation block
@property (nonatomic,retain) NSDictionary * serverResponse;                                                //@synthesize serverResponse=_serverResponse - In the implementation block
@property (assign,nonatomic) NSObject*<MZKeyValueStoreDeserializeOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long status;                                                             //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL unsupportedClient; 
@property (nonatomic,readonly) BOOL authenticationError; 
@property (nonatomic,readonly) BOOL validationError; 
@property (nonatomic,readonly) BOOL genericError; 
@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) BOOL versionMismatch; 
@property (nonatomic,readonly) BOOL hasBackoff; 
@property (nonatomic,readonly) unsigned long long retrySeconds;                                            //@synthesize retrySeconds=_retrySeconds - In the implementation block
@property (nonatomic,readonly) NSError * requestError; 
@property (retain) NSMutableArray * pendingDeserializations;                                               //@synthesize pendingDeserializations=_pendingDeserializations - In the implementation block
-(id)initWithTransaction:(id)arg1 response:(id)arg2 ;
-(BOOL)versionMismatch;
-(void)deserialize;
-(BOOL)hasBackoff;
-(BOOL)unsupportedClient;
-(BOOL)validationError;
-(BOOL)authenticationError;
-(NSDictionary *)serverResponse;
-(void)setPendingDeserializations:(NSMutableArray *)arg1 ;
-(void)finishedDeserializationForKey:(id)arg1 ;
-(void)_delegateOperationDidFinish;
-(NSMutableArray *)pendingDeserializations;
-(IMKeyValueStoreController *)keyValueStoreController;
-(void)setKeyValueStoreController:(IMKeyValueStoreController *)arg1 ;
-(void)setServerResponse:(NSDictionary *)arg1 ;
-(void)setTransaction:(IMKeyValueStoreTransaction *)arg1 ;
-(BOOL)success;
-(IMKeyValueStoreTransaction *)transaction;
-(void)dealloc;
-(void)setDelegate:(NSObject*<MZKeyValueStoreDeserializeOperationDelegate>)arg1 ;
-(NSObject*<MZKeyValueStoreDeserializeOperationDelegate>)delegate;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(unsigned long long)retrySeconds;
-(NSError *)requestError;
-(BOOL)genericError;
@end

