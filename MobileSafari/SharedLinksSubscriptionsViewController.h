/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <MobileSafari/SharedLinksSubscriptionsTableViewCellDelegate.h>
#import <MobileSafari/BookmarksToolbarItemProvider.h>

@protocol SharedLinksSubscriptionsViewControllerDelegate;
@class NSArray, NSMutableArray, UIBarButtonItem, NSString;

@interface SharedLinksSubscriptionsViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, SharedLinksSubscriptionsTableViewCellDelegate, BookmarksToolbarItemProvider> {

	NSArray* _headerTitles;
	NSArray* _socialAccounts;
	NSMutableArray* _subscribedFeeds;
	UIBarButtonItem* _addCurrentFeedButton;
	id<SharedLinksSubscriptionsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SharedLinksSubscriptionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bookmarksRightBarButtonItem;
-(void)_feedSubscriptionsChangedNotification:(id)arg1 ;
-(void)_updateAccountsData;
-(void)_updateFeedsData;
-(BOOL)_canAddFeedFromCurrentSite;
-(void)_addFeedFromCurrentSite;
-(id)_socialAccountAtIndexPath:(id)arg1 ;
-(id)_displayNameForAccount:(id)arg1 ;
-(id)_socialSourceForSocialAccount:(id)arg1 ;
-(void)_didPressAddCurrentFeedButton;
-(void)sharedLinksSubscriptionsTableViewCell:(id)arg1 toggledSwitchControl:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<SharedLinksSubscriptionsViewControllerDelegate>)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<SharedLinksSubscriptionsViewControllerDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)preferredContentSize;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_accountsChangedNotification:(id)arg1 ;
@end

