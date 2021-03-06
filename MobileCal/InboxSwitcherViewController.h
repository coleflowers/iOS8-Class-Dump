/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:52:29 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileCal/InboxNewSectionViewControllerDelegate.h>
#import <MobileCal/InboxRepliedSectionViewControllerDelegate.h>

@protocol InboxSwitcherViewControllerDelegate;
@class CalendarModel, UISegmentedControl, UIViewController, InboxNewSectionViewController, InboxRepliedSectionViewController, NSString;

@interface InboxSwitcherViewController : UIViewController <InboxNewSectionViewControllerDelegate, InboxRepliedSectionViewControllerDelegate> {

	CalendarModel* _model;
	UISegmentedControl* _segmentedControl;
	UIViewController* _currentViewController;
	InboxNewSectionViewController* _newSectionViewController;
	InboxRepliedSectionViewController* _repliedSectionViewController;
	id<InboxSwitcherViewControllerDelegate> _switcherDelegate;

}

@property (assign,nonatomic,__weak) id<InboxSwitcherViewControllerDelegate> switcherDelegate;              //@synthesize switcherDelegate=_switcherDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSwitcherDelegate:(id<InboxSwitcherViewControllerDelegate>)arg1 ;
-(void)inboxWillDismiss;
-(id)_showViewControllerAtIndex:(long long)arg1 ;
-(id)_viewControllerForIndex:(long long)arg1 ;
-(void)inboxNewSectionViewController:(id)arg1 shouldCloseAnimated:(BOOL)arg2 ;
-(void)inboxNewSectionViewController:(id)arg1 inspectEvent:(id)arg2 ;
-(void)inboxNewSectionViewController:(id)arg1 viewCommentsForEvent:(id)arg2 ;
-(void)inboxRepliedSectionViewController:(id)arg1 inspectEvent:(id)arg2 ;
-(id)showNewSection;
-(id)showRepliedSection;
-(id<InboxSwitcherViewControllerDelegate>)switcherDelegate;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)segmentedControlValueChanged:(id)arg1 ;
@end

