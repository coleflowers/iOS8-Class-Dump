/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMCloudSyncTransactionProcessing <NSObject>
@optional
-(id)keysForTransaction:(id)arg1;
-(BOOL)requiresUserOptInForTransaction:(id)arg1;
-(void)transactionDidFinish:(id)arg1 success:(BOOL)arg2 error:(id)arg3;

@required
-(id)versionForGetTransaction:(id)arg1 key:(id)arg2;
-(id)dataForSetTransaction:(id)arg1 key:(id)arg2 version:(id*)arg3;
-(void)transaction:(id)arg1 mergeData:(id)arg2 forKey:(id)arg3 version:(id)arg4 mismatch:(BOOL)arg5 finishedBlock:(/*^block*/id)arg6;

@end

