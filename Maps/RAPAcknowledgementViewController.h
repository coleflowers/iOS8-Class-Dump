/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class RAPReport, UIView, NSLayoutConstraint, UITableView, UISwitch, NSString;

@interface RAPAcknowledgementViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	RAPReport* _report;
	/*^block*/id _completion;
	BOOL _hasSetUpViews;
	BOOL _reportBeganSubmitting;
	BOOL _showsProgress;
	UIView* _standaloneThankYouView;
	NSLayoutConstraint* _standaloneTopToThankYouConstraint;
	BOOL _showsNotifications;
	BOOL _showsContactBack;
	UIView* _headerView;
	NSLayoutConstraint* _headerTopToThankYouConstraint;
	UIView* _footerView;
	UIView* _progressView;
	UITableView* _table;
	UISwitch* _contactBackSwitch;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithReport:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeSuccessViews;
-(id)_standaloneThankYouView;
-(id)_attributedAcknowledgementMessage;
-(double)_headerHeightRatio;
-(double)_headerTopToThankYouBaselineRatio;
-(void)_invokeCompletion;
-(long long)_contactBackSectionIndex;
-(id)_footerView;
-(id)_progressView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)_tableView;
-(void)_update;
-(void)viewDidLoad;
-(void)_done;
-(void)_removeProgressView;
-(id)_headerView;
@end

