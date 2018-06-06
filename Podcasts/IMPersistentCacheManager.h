/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSCountedSet, NSMutableSet, NSObject;

@interface IMPersistentCacheManager : NSObject {

	NSMutableDictionary* _caches;
	NSCountedSet* _pathRequestCount;
	NSMutableSet* _excludedCachesForCleanup;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
+(id)sharedInstance;
-(void)cleanUpCacheFilesInPath:(id)arg1 withExtension:(id)arg2 ;
-(void)_cleanCachesInPath:(id)arg1 ;
-(id)cacheForPath:(id)arg1 maxSize:(unsigned long long)arg2 ;
-(void)purgeFromCache:(id)arg1 ;
-(void)addCleanupExclusionPath:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
