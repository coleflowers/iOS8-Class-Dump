/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSOperationQueue;

@interface IMFileWatcherEntry : NSObject {

	NSString* _filePath;
	NSOperationQueue* _queue;
	/*^block*/id _block;

}

@property (nonatomic,copy) NSString * filePath;                       //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id block;                              //@synthesize block=_block - In the implementation block
-(void)dealloc;
-(unsigned long long)hash;
-(void)invalidate;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(id)initWithQueue:(id)arg1 andBlock:(/*^block*/id)arg2 ;
-(NSOperationQueue *)queue;
-(id)block;
@end
