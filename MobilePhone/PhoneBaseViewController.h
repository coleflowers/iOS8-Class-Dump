/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:40:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PhoneBaseViewController <NSObject>
@optional
-(void)prepareToHandleURL:(id)arg1;
-(void)updateViewControllerForOrientation:(long long)arg1;
-(void)prepareForTransitionInFromViewType:(int)arg1 animated:(BOOL)arg2;
-(void)transitionInFromViewType:(int)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3;

@required
+(long long)statusBarStyle;
+(id)defaultPNGName;
+(int)viewType;
-(BOOL)shouldDisableEdgeClip;
-(BOOL)shouldSnapshot;
-(void)prepareForSnapshot;
-(void)handleURL:(id)arg1;

@end
