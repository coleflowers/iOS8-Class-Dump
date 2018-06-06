/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBBridgeConnectionDelegate <NSObject>
@optional
-(void)connectionDidBecomeActive;
-(void)connectionDidBecomeInactive;
-(void)showTermsConfirmation;
-(void)setCrownOrientationRight:(BOOL)arg1;
-(BOOL)checkBrickedState;
-(void)remoteDidFailActivation:(id)arg1;
-(void)pushControllerType:(unsigned long long)arg1 withIntendedFireTime:(double)arg2;
-(void)popToControllerType:(unsigned long long)arg1 withIntendedFireTime:(double)arg2;
-(void)showLockedOnAnimation;
-(void)setSyncProgress:(double)arg1 andState:(long long)arg2;
-(void)prepareForInitialSync;
-(void)didHandlePerformanceResults;

@required
-(void)remoteDidBecomeAvailable;
-(void)transportBecameReachable;
-(void)transportBecameUnreachable;

@end

