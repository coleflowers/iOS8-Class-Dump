/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMCloudSyncOperationDelegate;
@class NSString, IMCloudSyncTransaction, IMCloudSyncSerializer;

@interface IMCloudSyncRequest : NSObject {

	NSString* _domain;
	IMCloudSyncTransaction* _transaction;
	NSString* _DSID;
	id<IMCloudSyncOperationDelegate> _delegate;
	BOOL _shouldAuthenticate;
	IMCloudSyncSerializer* _serializer;

}

@property (nonatomic,copy) NSString * domain;                                        //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) IMCloudSyncTransaction * transaction;                   //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,copy) NSString * DSID;                                          //@synthesize DSID=_DSID - In the implementation block
@property (assign,nonatomic) id<IMCloudSyncOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldAuthenticate;                                //@synthesize shouldAuthenticate=_shouldAuthenticate - In the implementation block
@property (nonatomic,retain) IMCloudSyncSerializer * serializer;                     //@synthesize serializer=_serializer - In the implementation block
-(void)postData:(id)arg1 ;
-(void)scheduleStoreURLOperation:(id)arg1 data:(id)arg2 ;
-(void)setTransaction:(IMCloudSyncTransaction *)arg1 ;
-(IMCloudSyncTransaction *)transaction;
-(void)dealloc;
-(void)setDelegate:(id<IMCloudSyncOperationDelegate>)arg1 ;
-(id<IMCloudSyncOperationDelegate>)delegate;
-(NSString *)domain;
-(void)start;
-(void)setDSID:(NSString *)arg1 ;
-(IMCloudSyncSerializer *)serializer;
-(void)setSerializer:(IMCloudSyncSerializer *)arg1 ;
-(id)initWithTransaction:(id)arg1 ;
-(NSString *)DSID;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)shouldAuthenticate;
-(void)setShouldAuthenticate:(BOOL)arg1 ;
@end
