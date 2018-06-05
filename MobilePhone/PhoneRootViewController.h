/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:40:25 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobilePhone/CNFRegWizardControllerDelegate.h>
#import <UIKit/UITabBarControllerDelegate.h>

@class PhoneContentView, PhoneTabBarController, CNFRegWizardController, PHLocalVideoViewController, PHEmergencyDialerViewController, PHFrecentViewController, _UIBackdropView, UIViewController, NSString;

@interface PhoneRootViewController : UIViewController <CNFRegWizardControllerDelegate, UITabBarControllerDelegate> {

	int _currentViewType;
	PhoneContentView* _contentView;
	PhoneTabBarController* _tabBarViewController;
	CNFRegWizardController* _faceTimeRegistrationViewController;
	PHLocalVideoViewController* _localVideoViewController;
	PHEmergencyDialerViewController* _emergencyDialerViewController;
	PHFrecentViewController* _faceTimeRecentViewController;
	BOOL _faceTimeRegistrationViewIsShowing;
	BOOL _disableAutomaticAppearEvents;
	BOOL _inTransitionBetweenViewTypes;
	BOOL _returnToTabViewOnSuspendIfNeeded;
	_UIBackdropView* _backdropView;
	UIViewController* _detailsViewController;

}

@property (nonatomic,retain,readonly) PhoneContentView * contentView; 
@property (nonatomic,retain,readonly) _UIBackdropView * backdropView;                                               //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain,readonly) PhoneTabBarController * tabBarViewController;                                 //@synthesize tabBarViewController=_tabBarViewController - In the implementation block
@property (nonatomic,retain,readonly) CNFRegWizardController * faceTimeRegistrationViewController;                  //@synthesize faceTimeRegistrationViewController=_faceTimeRegistrationViewController - In the implementation block
@property (nonatomic,retain,readonly) PHLocalVideoViewController * localVideoViewController; 
@property (nonatomic,retain,readonly) PHEmergencyDialerViewController * emergencyDialerViewController;              //@synthesize emergencyDialerViewController=_emergencyDialerViewController - In the implementation block
@property (nonatomic,retain,readonly) PHFrecentViewController * faceTimeRecentViewController;                       //@synthesize faceTimeRecentViewController=_faceTimeRecentViewController - In the implementation block
@property (assign,nonatomic) BOOL disableAutomaticAppearEvents;                                                     //@synthesize disableAutomaticAppearEvents=_disableAutomaticAppearEvents - In the implementation block
@property (assign,nonatomic) int currentViewType;                                                                   //@synthesize currentViewType=_currentViewType - In the implementation block
@property (nonatomic,readonly) BOOL inTransitionBetweenViewTypes;                                                   //@synthesize inTransitionBetweenViewTypes=_inTransitionBetweenViewTypes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Ph0 applicationBadge; 
@property (retain) UIViewController * detailsViewController;                                                        //@synthesize detailsViewController=_detailsViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(int)currentViewType;
-(BOOL)inTransitionBetweenViewTypes;
-(id)viewControllerForRootViewType:(int)arg1 ;
-(PHLocalVideoViewController *)localVideoViewController;
-(void)transitionToView:(int)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(PhoneTabBarController *)tabBarViewController;
-(void)animateInUI;
-(PHEmergencyDialerViewController *)emergencyDialerViewController;
-(void)showFaceTimeFirstRunViewIfNeeded;
-(void)resetCurrentViewType;
-(PHFrecentViewController *)faceTimeRecentViewController;
-(void)setupContentViewFullSize;
-(void)setupContentViewSidebar;
-(void)updateFacetimeFirstRunViewKnockouts;
-(void)setDisableAutomaticAppearEvents:(BOOL)arg1 ;
-(UIViewController *)detailsViewController;
-(void)_unloadChildViewControllers;
-(void)_ensureProperPositionForContentView;
-(void)_unloadViewsForController:(id)arg1 ;
-(void)setContentViewHiddenPosition;
-(BOOL)isContentViewLoaded;
-(void)setContentViewNormalPosition;
-(void)removeViewControllerFromHierarchyIfNecessary:(id)arg1 ;
-(void)showContentViewAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldSwitchRootViewToViewType:(int)arg1 ;
-(void)setCurrentViewType:(int)arg1 ;
-(void)initializeToTabViewAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)initializeToEmergencyDialerViewAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)destroyFirstRunController;
-(void)createFaceTimeFirstRunViewIfNeeded;
-(SCD_Struct_Ph0)applicationBadge;
-(void)hideContentViewAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)showVideoConferenceBackgroundViewAnimated:(BOOL)arg1 ;
-(void)hideVideoConferenceBackgroundViewAnimated:(BOOL)arg1 ;
-(void)returnToTabViewForSuspendIfNeeded;
-(BOOL)disableAutomaticAppearEvents;
-(CNFRegWizardController *)faceTimeRegistrationViewController;
-(void)setDetailsViewController:(UIViewController *)arg1 ;
-(void)_applicationSuspended:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(PhoneContentView *)contentView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidUnload;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_Ph5*)arg1 ;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2 ;
-(_UIBackdropView *)backdropView;
-(void)firstRunControllerDidFinish:(id)arg1 finished:(BOOL)arg2 ;
@end
