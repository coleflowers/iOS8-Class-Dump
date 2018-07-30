/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVSConversationItemList <NSObject>
@required
-(id)itemWithIdentifier:(id)arg1;
-(void)addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3;
-(void)addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3 asChildrenOfItemAtIndex:(long long)arg4;
-(void)removeItemsWithIdentifiers:(id)arg1;
-(id)identifiersForItemsAtIndexes:(id)arg1;
-(long long)numberOfItems;
-(id)itemAtIndex:(long long)arg1;
-(void)removeItemsAtIndexes:(id)arg1;

@end
