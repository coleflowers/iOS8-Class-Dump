/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:40:25 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MobilePhone/TPStarkInCallViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UIViewController, UIView, TPStarkInCallViewController, PHStarkHardwareControlsBroadcaster, NSString;

@interface PHStarkInCallViewController : SBUIRemoteAlertServiceViewController <UIGestureRecognizerDelegate, TPStarkInCallViewControllerDelegate, UINavigationControllerDelegate> {

	BOOL _nextBackDismissesNavController;
	UIViewController* _contactsViewController;
	UIView* _flippyViewContainer;
	TPStarkInCallViewController* _mainInCallViewController;
	PHStarkHardwareControlsBroadcaster* _hardwareControlBroadcaster;

}

@property (retain) UIView * flippyViewContainer;                                                 //@synthesize flippyViewContainer=_flippyViewContainer - In the implementation block
@property (retain) TPStarkInCallViewController * mainInCallViewController;                       //@synthesize mainInCallViewController=_mainInCallViewController - In the implementation block
@property (retain) PHStarkHardwareControlsBroadcaster * hardwareControlBroadcaster;              //@synthesize hardwareControlBroadcaster=_hardwareControlBroadcaster - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)latestInCallViewController;
-(void)updateTPInCallControllerPhoneCalls;
-(void)setFlippyViewContainer:(UIView *)arg1 ;
-(UIView *)flippyViewContainer;
-(void)setMainInCallViewController:(TPStarkInCallViewController *)arg1 ;
-(TPStarkInCallViewController *)mainInCallViewController;
-(void)currentCallsChangedNotification:(id)arg1 ;
-(void)conferencedCallsChangedNotification:(id)arg1 ;
-(void)incomingCallChangedNotification:(id)arg1 ;
-(void)queueUpdateToTPIncallControllerPhoneCalls;
-(void)animateOutIfNecessary;
-(BOOL)activePhoneCallExists;
-(void)cancelAddCallViewController:(id)arg1 ;
-(void)backPressed:(id)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)muteStateChangedNotification:(id)arg1 ;
-(void)presentAddCallViewControllerRequestedFromInCallViewController:(id)arg1 ;
-(void)presentKeypadViewControllerRequestedFromInCallViewController:(id)arg1 ;
-(void)dismissalRequestedFromInCallViewController:(id)arg1 ;
-(void)hardwareControlEventNotification:(id)arg1 ;
-(PHStarkHardwareControlsBroadcaster *)hardwareControlBroadcaster;
-(void)setHardwareControlBroadcaster:(PHStarkHardwareControlsBroadcaster *)arg1 ;
@end
