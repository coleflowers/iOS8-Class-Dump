/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:42:46 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol StockUpdateObserver <NSObject>
@optional
-(void)stockUpdateManager:(id)arg1 didUpdateStocks:(id)arg2 updates:(long long)arg3;
-(void)stockUpdateManager:(id)arg1 didRequestUpdateForStocks:(id)arg2 updates:(long long)arg3;
-(void)stockUpdateManager:(id)arg1 failedToUpdateStocks:(id)arg2 updates:(long long)arg3;

@end
