/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSString, NSOperationQueue, NSObject;

@interface IMMemoryCache : NSObject {

	NSMutableArray* _itemsArray;
	NSMutableDictionary* _items;
	unsigned long long _totalCost;
	NSString* _name;
	unsigned long long _count;
	unsigned long long _countLimit;
	unsigned long long _totalCostLimit;
	BOOL _evictsItemsWithDiscardedContent;
	id _delegate;
	NSOperationQueue* _queue;
	double _lastCheckTime;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) id delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL evictsItemsWithDiscardedContent;              //@synthesize evictsItemsWithDiscardedContent=_evictsItemsWithDiscardedContent - In the implementation block
@property (assign,nonatomic) unsigned long long totalCostLimit;                 //@synthesize totalCostLimit=_totalCostLimit - In the implementation block
@property (assign,nonatomic) unsigned long long countLimit;                     //@synthesize countLimit=_countLimit - In the implementation block
-(void)_addItem:(id)arg1 forKey:(id)arg2 ;
-(void)_checkLimitsAndEvictObjects;
-(BOOL)_shouldRemoveIndex:(unsigned long long)arg1 ;
-(void)_checkLimits;
-(void)checkLimitsAndEvictObjects;
-(unsigned long long)totalCost;
-(unsigned long long)costForObjectWithKey:(id)arg1 ;
-(long long)numberOfCachedItems;
-(BOOL)evictsItemsWithDiscardedContent;
-(void)setEvictsItemsWithDiscardedContent:(BOOL)arg1 ;
-(void)removeObjectsForKeyWithPrefix:(id)arg1 ;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(unsigned long long)totalCostLimit;
-(unsigned long long)countLimit;
-(id)allKeys;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(id)delegate;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(void)_removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end
