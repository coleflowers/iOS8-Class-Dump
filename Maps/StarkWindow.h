/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWindow.h>

@class StarkDisplayController;

@interface StarkWindow : UIWindow {

	StarkDisplayController* _owningStarkController;

}

@property (assign,nonatomic,__weak) StarkDisplayController * owningStarkController;              //@synthesize owningStarkController=_owningStarkController - In the implementation block
-(StarkDisplayController *)owningStarkController;
-(void)setOwningStarkController:(StarkDisplayController *)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(BOOL)_isConstrainedByScreenJail;
-(BOOL)_isClippedByScreenJail;
-(long long)interactionModel;
@end

