/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSearchResultsActionManagerDelegate <NSObject>
@required
-(void)actionManager:(id)arg1 dismissAnimated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3;
-(void)actionManager:(id)arg1 dismissViewController:(id)arg2 completion:(/*^block*/id)arg3 animated:(BOOL)arg4;
-(UIEdgeInsets*)actionManagerDetailsViewEdgeInsets:(id)arg1;
-(void)actionManager:(id)arg1 presentViewController:(id)arg2 completion:(/*^block*/id)arg3 modally:(BOOL)arg4;

@end

