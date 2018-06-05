/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:53 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBReachabilityTrigger.h>

@class NSTimer;

@interface SBReachabilityHoldTrigger : SBReachabilityTrigger {

	NSTimer* _fingerOnMesaTimer;

}
-(void)clearPendingReachabilityTrigger;
-(void)_clearFingerOnMesaTimer;
-(void)_fingerOnMesaTimerFired:(id)arg1 ;
-(void)_setFingerOnMesaTimer;
-(void)dealloc;
-(void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned long long)arg2 ;
@end

