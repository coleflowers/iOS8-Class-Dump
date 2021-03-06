/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:04:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ADSSession_RPC
@required
-(void)_remote_willResignActive;
-(void)_remote_didBecomeActive;
-(void)_remote_setClientLinkedOnVersion:(id)arg1;
-(void)_remote_determineAppInstallAttributionWithCompletionHandler:(/*^block*/id)arg1;
-(void)_remote_lookupAdConversionDetails:(/*^block*/id)arg1;
-(void)_remote_addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2;
-(void)_remote_enablePolicyEngine;
-(void)_remote_disablePolicyEngine;
-(void)_remote_setVisuallyEngaged:(BOOL)arg1;
-(void)_remote_didEnterStation:(id)arg1;
-(void)_remote_didBeginPlaybackOnStation:(id)arg1 song:(id)arg2;
-(void)_remote_didStopPlaybackOnStation:(id)arg1;
-(void)_remote_requestAdsForSlot:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_remote_willBeginAdPlaybackForSlot:(id)arg1 visuallyEngaged:(BOOL)arg2 adSpaceType:(int)arg3;
-(void)_remote_didFinishAdPlaybackForSlot:(id)arg1 skippedCount:(long long)arg2;
-(void)_remote_optimalTransmissionWindowDidOpen;
-(void)_remote_reportStationTileImpression:(id)arg1;
-(void)_remote_reportClientEvent:(id)arg1;
-(void)_remote_acquireMatchSlotWithBodyParameters:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_priv_removeRecordForAccountWithIdentifier:(id)arg1;

@end

