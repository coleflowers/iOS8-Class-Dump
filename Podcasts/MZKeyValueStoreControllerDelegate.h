/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MZKeyValueStoreControllerDelegate <NSObject>
@optional
-(BOOL)keyValueStoreController:(id)arg1 shouldScheduleTransaction:(id)arg2;

@required
-(BOOL)keyValueStoreController:(id)arg1 transaction:(id)arg2 didFailWithError:(id)arg3;
-(void)keyValueStoreController:(id)arg1 transaction:(id)arg2 didCancelWithError:(id)arg3;
-(void)keyValueStoreController:(id)arg1 transactionDidFinish:(id)arg2;

@end
