/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSManagedObjectContext, NSPredicate, NSMutableSet, NSString;

@interface MTEntityUpdaterCache : NSObject {

	NSArray* _properties;
	NSArray* _objectsByProperty;
	NSArray* _propertiesToFetch;
	NSManagedObjectContext* _ctx;
	NSPredicate* _predicate;
	NSMutableSet* _unvisited;
	NSString* _entityName;
	BOOL _includeObjectId;
	/*^block*/id _allowKeyForValue;

}

@property (nonatomic,copy) id allowKeyForValue;                 //@synthesize allowKeyForValue=_allowKeyForValue - In the implementation block
@property (assign,nonatomic) BOOL includeObjectId;              //@synthesize includeObjectId=_includeObjectId - In the implementation block
+(id)updaterCacheForEntityName:(id)arg1 ctx:(id)arg2 searchProperties:(id)arg3 fetchProperties:(id)arg4 predicateFormat:(id)arg5 ;
-(id)initWithPredicate:(id)arg1 entityName:(id)arg2 ctx:(id)arg3 properties:(id)arg4 fetchProperties:(id)arg5 ;
-(void)_buildMap;
-(BOOL)includeObjectId;
-(id)propertyDictionaryForSearchItem:(id)arg1 ;
-(void)enumerateUnvisitedItemUuids:(/*^block*/id)arg1 ;
-(id)allowKeyForValue;
-(void)setAllowKeyForValue:(id)arg1 ;
-(void)setIncludeObjectId:(BOOL)arg1 ;
@end

