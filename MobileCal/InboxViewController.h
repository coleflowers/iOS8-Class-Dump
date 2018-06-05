/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:52:29 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileCal/InboxSwitcherViewControllerDelegate.h>
#import <MobileCal/ABPersonViewControllerDelegate.h>
#import <MobileCal/EKEventViewDelegate.h>
#import <MobileCal/PopoverContentView.h>

@class CalendarModel, UINavigationController, InboxSwitcherViewController, NSString;

@interface InboxViewController : UIViewController <InboxSwitcherViewControllerDelegate, ABPersonViewControllerDelegate, EKEventViewDelegate, PopoverContentView> {

	CalendarModel* _model;
	UINavigationController* _embeddedNavigationController;
	InboxSwitcherViewController* _switcherViewController;
	BOOL _isShowingDetailView;
	BOOL _hasDismissed;
	/*^block*/id _doneBlock;

}

@property (nonatomic,copy) id doneBlock;                                                          //@synthesize doneBlock=_doneBlock - In the implementation block
@property (nonatomic,readonly) InboxSwitcherViewController * switcherViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_dismissMessagesViewController;
-(void)_pushDetailViewControllerForEvent:(id)arg1 showComments:(BOOL)arg2 ;
-(void)_dismissMessagesViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_inspectEvent:(id)arg1 showComments:(BOOL)arg2 ;
-(id)doneBlock;
-(void)inboxSwitcherViewController:(id)arg1 shouldCloseAnimated:(BOOL)arg2 ;
-(void)inboxSwitcherViewController:(id)arg1 inspectEvent:(id)arg2 ;
-(void)inboxSwitcherViewController:(id)arg1 viewCommentsForEvent:(id)arg2 ;
-(id)inboxSwitcherViewControllerRightBarButtonItem:(id)arg1 ;
-(InboxSwitcherViewController *)switcherViewController;
-(void)setDoneBlock:(id)arg1 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)canDismiss;
-(id)initWithModel:(id)arg1 ;
-(BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
@end
