/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBCardItemsControllerRemoteInterface <NSObject>
@required
-(void)cardItemsDidChange:(id)arg1 forControllerWithIdentifier:(id)arg2;
-(void)addCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2;
-(void)removeCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2;
-(void)setCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2;
-(void)clearCardItemsForControllerWithIdentifier:(id)arg1;
-(void)getCardItemsForControllerWithIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2;

@end
