/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMAVPlayerDelegate <NSObject>
@optional
-(void)playerStateChanged:(id)arg1;
-(void)playerLoadStateChanged:(id)arg1;
-(void)playerDurationAvailable:(id)arg1;
-(void)playerLoadedDurationChanged:(id)arg1;
-(void)playerMediaTypeAvailable:(id)arg1;
-(void)playerCurrentItemChanged:(id)arg1;
-(void)playerCurrentItemStopped:(id)arg1;
-(void)playerCurrentItemEnded:(id)arg1;
-(BOOL)playerShouldPlayMore:(id)arg1;
-(void)playerErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)player:(id)arg1 callbackForTime:(double)arg2;
-(void)playerPeriodicUpdate:(id)arg1 elapsed:(double)arg2 duration:(double)arg3 isFinished:(BOOL)arg4;

@end

