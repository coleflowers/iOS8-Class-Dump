/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:55:36 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPVideoOverlayDelegate <NSObject>
@optional
-(double)overlay:(id)arg1 interpretCurrentTime:(double)arg2;
-(void)overlayDidBeginScrubbing:(id)arg1;
-(void)overlayDidEndScrubbing:(id)arg1;
-(void)overlayTappedBackButton:(id)arg1;
-(void)overlayTappedFullscreenButton:(id)arg1;
-(BOOL)overlayShouldAcceptSkipBackwardEvent:(id)arg1;
-(BOOL)overlayShouldAcceptSkipForwardEvent:(id)arg1;
-(double)overlay:(id)arg1 interpretDuration:(double)arg2;
-(void)overlay:(id)arg1 didBeginUserEvent:(long long)arg2;
-(void)overlay:(id)arg1 didCancelUserEvent:(long long)arg2;
-(void)overlay:(id)arg1 didEndUserEvent:(long long)arg2;
-(void)overlayTappedScaleModeButton:(id)arg1;
-(void)overlayDidDismissAlternateTracksPopover:(id)arg1;

@end
