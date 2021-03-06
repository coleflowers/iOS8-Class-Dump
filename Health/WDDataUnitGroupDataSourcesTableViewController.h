/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:34:35 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Health/HKSwitchTableViewCellDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>

@class HKDataCategory, HKDataUnitGroup, WDControllerManager, HKHealthStore, WDDataProviderOrderController, NSMutableArray, NSArray, NSMutableDictionary, WDTitledIconView;

@interface WDDataUnitGroupDataSourcesTableViewController : UITableViewController <HKSwitchTableViewCellDelegate, UIViewControllerRestoration> {

	HKDataCategory* _dataCategory;
	HKDataUnitGroup* _dataUnitGroup;
	WDControllerManager* _controllerManager;
	HKHealthStore* _healthStore;
	WDDataProviderOrderController* _dataProviderOrderController;
	NSMutableArray* _dataProviderSources;
	NSMutableArray* _dataProviderSourcesOrdered;
	NSArray* _preEditSourcesOrdered;
	NSMutableArray* _sharingSources;
	NSMutableDictionary* _authorizationRecordsBySource;
	WDTitledIconView* _headerView;

}
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(id)initWithDataUnitGroup:(id)arg1 dataCategory:(id)arg2 dataProviderOrderController:(id)arg3 controllerManager:(id)arg4 ;
-(void)_gatherDataAndRefreshUI;
-(void)_reloadAuthorizationRecords;
-(void)_updateDataProviderSourcesFromArray:(id)arg1 ;
-(void)_sortDataProviderSources;
-(void)_updateSharingSourcesFromArray:(id)arg1 ;
-(BOOL)_sourceIsEnabled:(id)arg1 ;
-(void)_updateOrderedSources;
-(id)_noneTableViewCell;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
@end

