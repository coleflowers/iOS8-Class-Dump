/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:40:25 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobilePhone/PHStarkGenericViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, _UIFilteredDataSource, PHStarkNoContentBannerView, NSString;

@interface PHStarkGenericTableViewController : PHStarkGenericViewController <UITableViewDataSource, UITableViewDelegate> {

	BOOL _tableViewReloadIsRequiredOnViewWillAppear;
	UITableView* _mainTableView;
	_UIFilteredDataSource* _mainTableViewDataSource;
	PHStarkNoContentBannerView* _noContentBannerView;

}

@property (retain) UITableView * mainTableView;                                   //@synthesize mainTableView=_mainTableView - In the implementation block
@property (retain) _UIFilteredDataSource * mainTableViewDataSource;               //@synthesize mainTableViewDataSource=_mainTableViewDataSource - In the implementation block
@property (assign) BOOL tableViewReloadIsRequiredOnViewWillAppear;                //@synthesize tableViewReloadIsRequiredOnViewWillAppear=_tableViewReloadIsRequiredOnViewWillAppear - In the implementation block
@property (readonly) NSString * badgeString; 
@property (retain) PHStarkNoContentBannerView * noContentBannerView;              //@synthesize noContentBannerView=_noContentBannerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)starkInCallViewControllerAppearedNotification:(id)arg1 ;
-(void)setTableViewReloadIsRequiredOnViewWillAppear:(BOOL)arg1 ;
-(void)setNoContentBannerShown:(BOOL)arg1 ;
-(void)programmaticallySelectRowAtIndexPath:(id)arg1 ;
-(id)titleForNoContentBanner;
-(id)subtitleForNoContentBanner;
-(void)applicationBadgeChangedNotification:(id)arg1 ;
-(void)limitedUIChanged:(id)arg1 ;
-(void)updateBadgeString;
-(_UIFilteredDataSource *)mainTableViewDataSource;
-(BOOL)tableViewReloadIsRequiredOnViewWillAppear;
-(PHStarkNoContentBannerView *)noContentBannerView;
-(void)setNoContentBannerView:(PHStarkNoContentBannerView *)arg1 ;
-(void)setMainTableViewDataSource:(_UIFilteredDataSource *)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_viewControllerWasSelected;
-(long long)filterType;
-(UITableView *)mainTableView;
-(void)setMainTableView:(UITableView *)arg1 ;
-(NSString *)badgeString;
-(double)defaultRowHeight;
-(void)hardwareControlEventNotification:(id)arg1 ;
@end

