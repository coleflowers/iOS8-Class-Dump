/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol MapsSyncedClient <NSObject>
@property (nonatomic,readonly) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSArray * syncedItems; 
@property (nonatomic,readonly) BOOL syncSupportsKVO; 
@property (nonatomic,readonly) BOOL syncInvertedOrdering; 
@property (nonatomic,readonly) BOOL syncShouldUseItemPositions; 
@property (nonatomic,readonly) BOOL syncShouldUseCustomStore; 
@optional
-(BOOL)syncInvertedOrdering;
-(BOOL)shouldAddSyncedItem:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)insertSyncedItems:(id)arg1 atIndexes:(id)arg2;
-(void)removeSyncedItemsAtIndexes:(id)arg1;
-(void)updateSyncedItemAtIndexes:(id)arg1;
-(void)syncManagerDidUpdateSyncedItems:(id)arg1;
-(BOOL)syncShouldUseItemPositions;
-(BOOL)syncShouldUseCustomStore;

@required
-(NSString *)syncIdentifier;
-(id)newSyncedItemForSyncData:(id)arg1;
-(NSArray *)syncedItems;
-(BOOL)syncSupportsKVO;

@end

