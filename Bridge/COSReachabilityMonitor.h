/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface COSReachabilityMonitor : NSObject {

	BOOL _isNetworkReachable;
	BOOL _isConnectedOverWifi;

}

@property (assign,nonatomic) BOOL isNetworkReachable;               //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (assign,nonatomic) BOOL isConnectedOverWifi;              //@synthesize isConnectedOverWifi=_isConnectedOverWifi - In the implementation block
+(id)sharedMonitor;
-(BOOL)isConnectedOverWifi;
-(void)setIsConnectedOverWifi:(BOOL)arg1 ;
-(void)startMonitoring;
-(void)stopMonitoring;
-(id)init;
-(BOOL)isNetworkReachable;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)setIsNetworkReachable:(BOOL)arg1 ;
@end
