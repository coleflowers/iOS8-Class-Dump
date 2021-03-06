/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:30:51 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache, NSURLSessionDataTask;

@interface TPSImageURLSessionManager : NSObject {

	NSCache* _inMemoryImageCache;
	unsigned long long _maxInMemorySize;
	NSURLSessionDataTask* _dataTask;

}

@property (assign,nonatomic) unsigned long long maxInMemorySize;              //@synthesize maxInMemorySize=_maxInMemorySize - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * dataTask;                 //@synthesize dataTask=_dataTask - In the implementation block
+(id)defaultManager;
-(id)imageFromCacheForPath:(id)arg1 ;
-(void)setImage:(id)arg1 forPath:(id)arg2 cost:(unsigned long long)arg3 ;
-(id)urlSessionWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)imageFromCacheForURL:(id)arg1 ;
-(unsigned long long)maxInMemorySize;
-(void)setMaxInMemorySize:(unsigned long long)arg1 ;
-(id)init;
-(NSURLSessionDataTask *)dataTask;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
@end

