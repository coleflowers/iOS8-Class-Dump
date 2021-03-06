/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, IMKeyValueStoreController, IMKeyValueStoreError;

@interface MZKeyValueStoreErrorHandle : NSObject {

	NSMutableDictionary* _userInfo;
	IMKeyValueStoreController* _controller;
	IMKeyValueStoreError* _error;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) NSMutableDictionary * userInfo;                      //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) IMKeyValueStoreController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) IMKeyValueStoreError * error;                        //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id completionBlock;                                    //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)resolveError;
-(void)handleError:(id)arg1 withController:(id)arg2 ;
-(void)dealloc;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)userInfo;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(IMKeyValueStoreController *)controller;
-(void)setController:(IMKeyValueStoreController *)arg1 ;
-(void)cleanup;
-(void)setError:(IMKeyValueStoreError *)arg1 ;
-(IMKeyValueStoreError *)error;
@end

