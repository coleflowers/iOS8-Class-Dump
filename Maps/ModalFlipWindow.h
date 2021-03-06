/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWindow.h>
#import <Maps/FlipViewControllerDelegate.h>

@class NSString;

@interface ModalFlipWindow : UIWindow <FlipViewControllerDelegate> {

	/*^block*/id _dismissal;

}

@property (nonatomic,copy) id dismissal;                            //@synthesize dismissal=_dismissal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flipViewControllerDidDismiss:(id)arg1 ;
-(void)setDismissal:(id)arg1 ;
-(void)presentViewController:(id)arg1 flippingView:(id)arg2 dismissal:(/*^block*/id)arg3 ;
-(id)dismissal;
-(id)init;
-(void)dismiss;
@end

