/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:23:39 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIApplication.h>

@class MARemoteController;

@interface MAApplication : UIApplication {

	MARemoteController* _remoteController;

}

@property (nonatomic,readonly) MARemoteController * remoteController;              //@synthesize remoteController=_remoteController - In the implementation block
-(MARemoteController *)remoteController;
-(id)init;
-(void)sendEvent:(id)arg1 ;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
@end

