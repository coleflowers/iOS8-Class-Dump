/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTSingleton.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface MTiTunesUpgradeController : MTSingleton <UIAlertViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showiTunesUpgradeDialogIfNeeded;
-(id)iTunesSyncVersion;
-(id)iTunesLastSyncDate;
-(BOOL)shouldNotifyToUpgradeiTunes;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end

