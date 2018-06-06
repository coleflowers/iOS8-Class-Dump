/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:47:45 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>

@class RemindersCardStackViewController, RemindersSplitViewController;

@interface RemindersRootViewController : UIViewController <UISplitViewControllerDelegate> {

	RemindersCardStackViewController* _stackViewController;
	RemindersSplitViewController* _splitViewController;
	long long _currentHorizontalSizeClass;
	long long _currentVerticalSizeClass;
	BOOL _isInSizeTransition;
	long long _transitionToHorizontalSizeClass;
	long long _transitionToVerticalSizeClass;
	CGSize _transitionToSize;

}

@property (readonly) RemindersCardStackViewController * stackViewController;              //@synthesize stackViewController=_stackViewController - In the implementation block
@property (readonly) RemindersSplitViewController * splitViewController;                  //@synthesize splitViewController=_splitViewController - In the implementation block
@property (readonly) BOOL isInSizeTransition;                                             //@synthesize isInSizeTransition=_isInSizeTransition - In the implementation block
@property (readonly) long long transitionToHorizontalSizeClass;                           //@synthesize transitionToHorizontalSizeClass=_transitionToHorizontalSizeClass - In the implementation block
@property (readonly) long long transitionToVerticalSizeClass;                             //@synthesize transitionToVerticalSizeClass=_transitionToVerticalSizeClass - In the implementation block
@property (readonly) CGSize transitionToSize;                                             //@synthesize transitionToSize=_transitionToSize - In the implementation block
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(RemindersCardStackViewController *)stackViewController;
-(BOOL)isInSizeTransition;
-(CGSize)transitionToSize;
-(long long)transitionToHorizontalSizeClass;
-(long long)transitionToVerticalSizeClass;
-(void)addStackViewController;
-(void)addSplitViewController;
-(id)init;
-(long long)preferredStatusBarStyle;
-(BOOL)shouldAutorotate;
-(RemindersSplitViewController *)splitViewController;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
@end
