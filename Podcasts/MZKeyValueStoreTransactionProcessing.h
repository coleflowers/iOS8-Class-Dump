/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MZKeyValueStoreTransactionProcessing <NSObject>
@optional
-(id)keysForTransaction:(id)arg1;
-(id)sinceDomainVersionForTransaction:(id)arg1;

@required
-(id)versionForGetTransaction:(id)arg1 key:(id)arg2;
-(id)dataForSetTransaction:(id)arg1 key:(id)arg2 version:(id*)arg3;
-(void)transaction:(id)arg1 mergeData:(id)arg2 forKey:(id)arg3 domainVersion:(id)arg4 version:(id)arg5 mismatch:(BOOL)arg6 finishedBlock:(/*^block*/id)arg7;
-(void)transaction:(id)arg1 willProcessResponseWithDomainVersion:(id)arg2;
-(void)transaction:(id)arg1 didProcessResponseWithDomainVersion:(id)arg2;

@end

