/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/IMCache.h>

@class IMMemoryCache, IMImageDiskCache, NSString;

@interface IMImageStore : NSObject <IMCache> {

	IMMemoryCache* _memoryCache;
	IMImageDiskCache* _diskCache;

}

@property (nonatomic,retain) IMMemoryCache * memoryCache;               //@synthesize memoryCache=_memoryCache - In the implementation block
@property (nonatomic,retain) IMImageDiskCache * diskCache;              //@synthesize diskCache=_diskCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_memorySize;
+(id)defaultStore;
-(BOOL)hasItemForKey:(id)arg1 ;
-(void)addImage:(id)arg1 forKey:(id)arg2 ;
-(void)removeItemsWithPrefx:(id)arg1 ;
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 ;
-(id)_keyForSize:(CGSize)arg1 withBaseKey:(id)arg2 ;
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 resizeOptions:(int)arg3 ;
-(id)initWithName:(id)arg1 basePath:(id)arg2 ;
-(void)setMemoryCache:(IMMemoryCache *)arg1 ;
-(IMMemoryCache *)memoryCache;
-(void)setDiskCache:(IMImageDiskCache *)arg1 ;
-(void)memoryWarning;
-(IMImageDiskCache *)diskCache;
-(void)_addImage:(id)arg1 toMemoryCacheWithKey:(id)arg2 ;
-(id)_loadDiskCacheImageForKey:(id)arg1 ;
-(void)asyncAddImage:(id)arg1 forKey:(id)arg2 ;
-(void)asyncImageForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)asyncImageForKey:(id)arg1 size:(CGSize)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)asyncImageForKey:(id)arg1 size:(CGSize)arg2 resizeOptions:(int)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeItemForKey:(id)arg1 ;
-(BOOL)isEmpty;
-(id)initWithName:(id)arg1 ;
-(void)clearCache;
-(id)imageForKey:(id)arg1 ;
@end
