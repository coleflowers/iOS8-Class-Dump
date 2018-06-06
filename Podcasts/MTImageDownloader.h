/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:47 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTSingleton.h>

@class NSOperationQueue;

@interface MTImageDownloader : MTSingleton {

	NSOperationQueue* _downloadQueue;

}

@property (nonatomic,retain) NSOperationQueue * downloadQueue;              //@synthesize downloadQueue=_downloadQueue - In the implementation block
-(void)downloadImageUrl:(id)arg1 forPodcastUuid:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)downloadImageUrl:(id)arg1 cacheKey:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)setDownloadQueue:(NSOperationQueue *)arg1 ;
-(id)init;
-(NSOperationQueue *)downloadQueue;
@end
