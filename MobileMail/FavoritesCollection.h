/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray, NSString;

@interface FavoritesCollection : NSObject {

	unsigned long long _type;
	NSMutableArray* _items;
	NSArray* _visibleItems;
	BOOL _isEditing;
	BOOL _transient;

}

@property (assign,nonatomic) BOOL transient;                           //@synthesize transient=_transient - In the implementation block
@property (assign,nonatomic) BOOL isEditing;                           //@synthesize isEditing=_isEditing - In the implementation block
@property (getter=doesSync,readonly) BOOL doesSync; 
@property (getter=hidesHeader,readonly) BOOL hidesHeader; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSArray * items;                        //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSArray * visibleItems; 
@property (nonatomic,readonly) BOOL isOutboxCollection; 
+(id)mailboxesCollection;
+(id)accountsCollection;
+(id)outboxCollection;
+(id)accountMailboxesCollection;
+(id)displayOrder;
-(BOOL)isShowingSharedMailboxOfType:(unsigned long long)arg1 ;
-(BOOL)isShowingAllInboxes;
-(id)itemsOfType:(unsigned long long)arg1 ;
-(BOOL)isMailboxesCollection;
-(BOOL)isOutboxCollection;
-(BOOL)isAccountMailboxesCollection;
-(BOOL)hidesHeader;
-(id)initWithtype:(unsigned long long)arg1 ;
-(void)invalidateVisibleItems;
-(BOOL)addItem:(id)arg1 ordered:(BOOL)arg2 ;
-(long long)indexForNewItem:(id)arg1 ;
-(id)itemWithSyncKey:(id)arg1 ;
-(BOOL)isAccountsCollection;
-(id)_displayNameForCollectionOfType:(unsigned long long)arg1 ;
-(void)prepareForWriting;
-(void)addOrUpdateItem:(id)arg1 replacedItem:(id*)arg2 ;
-(id)removeItemWithSyncKey:(id)arg1 ;
-(BOOL)doesSync;
-(void)setIsEditing:(BOOL)arg1 ;
-(void)setTransient:(BOOL)arg1 ;
-(NSArray *)visibleItems;
-(void)dealloc;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)isVisible;
-(BOOL)addItem:(id)arg1 ;
-(id)removeItem:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)uniqueId;
-(NSString *)displayName;
-(id)removeItemAtIndex:(long long)arg1 ;
-(BOOL)transient;
@end

