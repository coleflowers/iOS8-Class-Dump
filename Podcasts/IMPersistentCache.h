/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@class IMDatabaseHandle, IMAdminTable, NSMutableSet, NSTimer, NSString;

@interface IMPersistentCache : NSObject {

	IMDatabaseHandle* _db;
	IMAdminTable* _adminTable;
	NSMutableSet* _accessedIds;
	unsigned long long _cacheSize;
	unsigned long long _maxSize;
	unsigned long long _count;
	NSMutableSet* _unknownKeys;
	NSTimer* _scanTimer;
	NSString* _path;
	int _accessedIdsLock;
	int _unknownKeysLock;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(BOOL)hasItemForKey:(id)arg1 ;
-(BOOL)_createStorageForDb:(id)arg1 ;
-(unsigned long long)_cacheSize;
-(void)setLastAccessDate:(id)arg1 ;
-(void)_updateCaches:(id)arg1 ;
-(void)_setCacheSize:(long long)arg1 ;
-(void)_unknownKeysRemoveObject:(id)arg1 ;
-(void)_sizeCleanup;
-(BOOL)_insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 ;
-(BOOL)insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 mimeType:(id)arg3 scale:(double)arg4 properties:(id)arg5 ;
-(BOOL)insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 mimeType:(id)arg3 properties:(id)arg4 ;
-(CGImageRef)copyCGImageForKey:(id)arg1 size:(long long*)arg2 ;
-(BOOL)_unknownKeysContainsObject:(id)arg1 ;
-(void)_unknownKeysAddObject:(id)arg1 ;
-(void)_accessedIdsAddObject:(id)arg1 ;
-(CGImageRef)copyCGImageForKey:(id)arg1 size:(long long*)arg2 scale:(double*)arg3 ;
-(void)deleteItemsWithAllKeysContaining:(id)arg1 ;
-(void)deleteItemForKey:(id)arg1 ;
-(void)insertData:(id)arg1 forKey:(id)arg2 mimeType:(id)arg3 ;
-(void)_accessedIdsRemoveAllObjects;
-(void)_LRUCleanupForMimeType:(id)arg1 ;
-(id)initWithPath:(id)arg1 maxSize:(unsigned long long)arg2 ;
-(BOOL)enableCaseSensitiveLike;
-(BOOL)insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 mimeType:(id)arg3 ;
-(BOOL)insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 ;
-(CGImageRef)copyCGImageForKey:(id)arg1 ;
-(id)largestImageKeyWithRootKey:(id)arg1 ;
-(id)itemsForMimeType:(id)arg1 ;
-(id)deleteItemsForMimeType:(id)arg1 ;
-(void)deleteItemsWithKeyLike:(id)arg1 ;
-(void)replaceDataForKey:(id)arg1 withData:(id)arg2 mimeType:(id)arg3 ;
-(id)dataForKey:(id)arg1 mimeType:(id)arg2 ;
-(unsigned long long)resourceSizeForKey:(id)arg1 ;
-(id)metadataForKey:(id)arg1 ;
-(id)allKeys;
-(void)dealloc;
-(NSString *)path;
-(void)clear;
-(long long)version;
-(id)dataForKey:(id)arg1 ;
@end

