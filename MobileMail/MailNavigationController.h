/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class NSArray;

@interface MailNavigationController : UINavigationController {

	NSArray* _previousViewControllers;
	BOOL _hasAppeared;
	BOOL _poppingFromLeft;
	BOOL _transferNavigationControllerShown;

}
-(id)mf_statusBarSubtitleString;
-(void)removeViewController:(id)arg1 ;
-(BOOL)isPopping;
-(unsigned long long)mf_unreadCountForDisplay;
-(void)becomePreparedForTransferOfMessages:(id)arg1 options:(int)arg2 animated:(BOOL)arg3 ;
-(void)resignPreparedForTransferOfMessages:(BOOL)arg1 ;
-(BOOL)canShowTransferNavigationController;
-(void)showTransferNavigationController:(id)arg1 fromViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)hideTransferNavigationControllerFromViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)pushViewControllersFromLeft:(id)arg1 animated:(BOOL)arg2 ;
-(id)popViewControllersPushedFromLeftAnimated:(BOOL)arg1 ;
-(void)_didPopFromLeft;
-(void)dealloc;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_viewControllerUnderlapsStatusBar;
-(void)removeChildViewController:(id)arg1 notifyDidMove:(BOOL)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)removeChildViewController:(id)arg1 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
@end

