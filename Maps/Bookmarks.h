/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MapsSyncedClient.h>

@protocol OS_dispatch_queue, BookmarksDelegate;
@class NSMutableArray, NSObject, MapsSyncManager, NSString, NSArray;

@interface Bookmarks : NSObject <MapsSyncedClient> {

	NSMutableArray* _bookmarks;
	BOOL _savingEnabled;
	BOOL _hasPendingChanges;
	NSObject*<OS_dispatch_queue> _saveQ;
	id<BookmarksDelegate> _delegate;
	MapsSyncManager* _syncManager;

}

@property (assign,nonatomic,__weak) id<BookmarksDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MapsSyncManager * syncManager;                      //@synthesize syncManager=_syncManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSArray * syncedItems; 
@property (nonatomic,readonly) BOOL syncSupportsKVO; 
@property (nonatomic,readonly) BOOL syncInvertedOrdering; 
@property (nonatomic,readonly) BOOL syncShouldUseItemPositions; 
@property (nonatomic,readonly) BOOL syncShouldUseCustomStore; 
+(id)sharedBookmarks;
-(void)resetSyncState;
-(void)mergeWithLocalStoreOnNextLaunch;
-(NSString *)syncIdentifier;
-(void)_madeChanges;
-(id)newSyncedItemForSyncData:(id)arg1 ;
-(BOOL)shouldAddSyncedItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertSyncedItems:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeSyncedItemsAtIndexes:(id)arg1 ;
-(void)updateSyncedItemAtIndexes:(id)arg1 ;
-(void)syncManagerDidUpdateSyncedItems:(id)arg1 ;
-(NSArray *)syncedItems;
-(BOOL)syncSupportsKVO;
-(BOOL)syncShouldUseCustomStore;
-(id)orderedBookmarks;
-(void)_cleanBookmark:(id)arg1 ;
-(void)addBookmark:(id)arg1 ;
-(void)replaceBookmark:(id)arg1 withBookmark:(id)arg2 ;
-(void)removeBookmarkAtIndex:(unsigned long long)arg1 ;
-(void)moveBookmarkAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<BookmarksDelegate>)arg1 ;
-(id)init;
-(id<BookmarksDelegate>)delegate;
-(void)setSyncManager:(MapsSyncManager *)arg1 ;
-(MapsSyncManager *)syncManager;
-(void)beginChanges;
-(void)endChanges;
-(void)_saveBookmarks;
@end

