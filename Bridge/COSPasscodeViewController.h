/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/DevicePINController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegatePrivate.h>

@protocol COSPasscodeViewControllerDelegate;
@class UIPopoverController, NSString, UIViewController, UINavigationController, UIStatusBar, UIView;

@interface COSPasscodeViewController : DevicePINController <UINavigationControllerDelegate, UIPopoverControllerDelegatePrivate> {

	BOOL _passcodeViewVisible;
	id<COSPasscodeViewControllerDelegate> _delegate;
	UIPopoverController* _hostingPopoverController;
	NSString* _passcode;
	UIViewController* _presentorViewController;
	UINavigationController* _hostingNavigationController;
	UIStatusBar* _statusBar;
	UIView* _statusBarContainerView;

}

@property (assign,nonatomic,__weak) id<COSPasscodeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isPasscodeViewVisible,nonatomic) BOOL passcodeViewVisible;              //@synthesize passcodeViewVisible=_passcodeViewVisible - In the implementation block
@property (nonatomic,readonly) UIPopoverController * hostingPopoverController;                   //@synthesize hostingPopoverController=_hostingPopoverController - In the implementation block
@property (nonatomic,copy) NSString * passcode;                                                  //@synthesize passcode=_passcode - In the implementation block
@property (nonatomic,retain) UIViewController * presentorViewController;                         //@synthesize presentorViewController=_presentorViewController - In the implementation block
@property (nonatomic,retain) UINavigationController * hostingNavigationController;               //@synthesize hostingNavigationController=_hostingNavigationController - In the implementation block
@property (nonatomic,retain) UIStatusBar * statusBar;                                            //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,retain) UIView * statusBarContainerView;                                    //@synthesize statusBarContainerView=_statusBarContainerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHostingNavigationController:(UINavigationController *)arg1 ;
-(void)setPresentorViewController:(UIViewController *)arg1 ;
-(void)setStatusBarContainerView:(UIView *)arg1 ;
-(UIPopoverController *)hostingPopoverController;
-(UINavigationController *)hostingNavigationController;
-(void)_presentPasscodeViewWithParentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dismissPasscodeViewAnimated:(BOOL)arg1 withReason:(int)arg2 notifyDelegate:(BOOL)arg3 ;
-(void)setPasscodeViewVisible:(BOOL)arg1 ;
-(void)_notifyDelegateOfPasscodeViewVisibilityChange;
-(BOOL)_shouldShowCancelButton;
-(UIViewController *)presentorViewController;
-(UIView *)statusBarContainerView;
-(void)_didFinishDismissingPasscodeViewWithReason:(int)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_notifyDelegateOfPasscodeViewDismissalWithReason:(int)arg1 ;
-(BOOL)isPasscodeViewVisible;
-(void)presentPasscodeViewWithParentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissPasscodeViewAnimated:(BOOL)arg1 reason:(int)arg2 ;
-(BOOL)switchFromKeypadToKeyboard;
-(void)dealloc;
-(void)setDelegate:(id<COSPasscodeViewControllerDelegate>)arg1 ;
-(id)init;
-(id<COSPasscodeViewControllerDelegate>)delegate;
-(UIStatusBar *)statusBar;
-(void)setStatusBar:(UIStatusBar *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)setPane:(id)arg1 ;
-(BOOL)requiresKeyboard;
-(BOOL)useProgressiveDelays;
-(BOOL)validatePIN:(id)arg1 ;
-(id)stringsBundle;
-(void)_updateErrorTextAndFailureCount:(BOOL)arg1 ;
-(void)cancelButtonTapped;
-(BOOL)simplePIN;
-(BOOL)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(void)_slidePasscodeField;
-(void)didAcceptSetPIN;
-(void)setPIN:(id)arg1 ;
-(void)didAcceptEnteredPIN;
-(int)pinLength;
-(void)setPasscode:(NSString *)arg1 ;
-(NSString *)passcode;
@end
