/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:04:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ADSAdSpace_RPC
@required
-(void)_priv_cycleImpressionImmediately;
-(void)_remote_reportPreRollDidStart;
-(void)_remote_reportPreRollDidStop;
-(void)_remote_setShouldNotCycle:(BOOL)arg1;
-(void)_remote_playbackStartedForImpressionSource:(int)arg1;
-(void)_remote_playbackPaused;
-(void)_remote_playbackResumed;
-(void)_remote_playbackFinishedForContentHash:(id)arg1;
-(void)_remote_playbackFailedForURL:(id)arg1;
-(void)_priv_adSpaceDidAppear;
-(void)_priv_adSpaceDidDisappear;
-(void)_remote_interstitialCreativeWasDismissed;
-(void)_remote_close;
-(void)_remote_setVisibility:(long long)arg1;
-(void)_remote_configureForClientAdSpace:(id)arg1 configuration:(id)arg2;
-(void)_remote_setupComplete;
-(void)_priv_loadAd:(id)arg1;
-(void)_remote_setIdentifier:(id)arg1;
-(void)_priv_setServerURL:(id)arg1;
-(void)_remote_setSection:(id)arg1;
-(void)_remote_setAuthenticationUserName:(id)arg1;
-(void)_remote_setContext:(id)arg1;
-(void)_remote_setAdSpaceType:(int)arg1;
-(void)_remote_bannerBeginActionFromFrame:(id)arg1 tapLocation:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)_remote_bannerRefuseAction;
-(void)_remote_bannerCancelAction;
-(void)_remote_interstitialRemovedFromSuperview;

@end
