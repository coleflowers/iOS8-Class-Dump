/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVSConversationDelegate <NSObject>
@required
-(void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
-(void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;
-(void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4;
-(void)conversation:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;

@end

