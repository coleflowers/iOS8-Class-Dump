/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/TKBaseComponent.h>

@class NSMutableArray;

@interface TKBaseListComponent : TKBaseComponent {

	NSMutableArray* _itemsArray;

}

@property (retain) NSMutableArray * itemsArray;              //@synthesize itemsArray=_itemsArray - In the implementation block
-(void)setItemsArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)itemsArray;
-(id)init;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)items;
-(void)setItems:(id)arg1 ;
-(void)addItem:(id)arg1 ;
@end

