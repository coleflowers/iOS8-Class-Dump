/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/TKView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString;

@interface TKOverlayShieldView : TKView <UIGestureRecognizerDelegate> {

	/*^block*/id _callback;

}

@property (copy) id callback;                                       //@synthesize callback=_callback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)onClick:(id)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end
