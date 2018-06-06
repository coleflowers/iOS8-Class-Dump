/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURLRequest, NSURLConnection;

@interface IMURLOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	BOOL _isStarted;
	NSURLRequest* _request;
	NSURLConnection* _connection;
	/*^block*/id _successCallback;
	/*^block*/id _errorCallback;

}

@property (readonly) NSURLRequest * request;                    //@synthesize request=_request - In the implementation block
@property (assign) BOOL isFinished;                             //@synthesize isFinished=_isFinished - In the implementation block
@property (assign) BOOL isExecuting;                            //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign) BOOL isStarted;                              //@synthesize isStarted=_isStarted - In the implementation block
@property (readonly) NSURLConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) id successCallback;                        //@synthesize successCallback=_successCallback - In the implementation block
@property (readonly) id errorCallback;                          //@synthesize errorCallback=_errorCallback - In the implementation block
-(id)initWithRequest:(id)arg1 withSuccessCallback:(/*^block*/id)arg2 withErrorCallback:(/*^block*/id)arg3 ;
-(id)initWithRequest:(id)arg1 withSuccessCallback:(/*^block*/id)arg2 ;
-(id)successCallback;
-(id)errorCallback;
-(void)cancel;
-(NSURLRequest *)request;
-(void)start;
-(NSURLConnection *)connection;
-(void)cleanup;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isStarted;
-(BOOL)isConcurrent;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setIsStarted:(BOOL)arg1 ;
-(void)setIsExecuting:(BOOL)arg1 ;
@end

