/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:40:25 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <MobilePhone/PhoneViewController.h>
#import <MobilePhone/ABUnknownPersonViewControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, PHRecentsToggleButton, CHRecentCall, NSArray, NSString;

@interface PHRecentsViewController : PhoneViewController <ABUnknownPersonViewControllerDelegate, UITableViewDelegate, UITableViewDataSource> {

	UITableView* _table;
	PHRecentsToggleButton* _toggleButton;
	int _tableFilterMode;
	CHRecentCall* _call;
	unsigned _isRegisteredForActiveNotifications : 1;
	NSArray* indexPathsForMissedCalls;
	NSArray* indexPathsForNormalCalls;

}

@property (assign) int _tableFilterMode;                                     //@synthesize tableFilterMode=_tableFilterMode - In the implementation block
@property (retain,readonly) NSArray * indexPathsForMissedCalls; 
@property (retain,readonly) NSArray * indexPathsForNormalCalls; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)tabBarSystemItem;
+(id)tabBarIconName;
+(int)tabViewType;
+(BOOL)requiresNavigationControllerContainer;
+(id)sharedRecentsManager;
+(SCD_Struct_Ph0)badge;
-(id)table;
-(BOOL)shouldSnapshot;
-(void)_handleContentSizeCategoryDidChange:(id)arg1 ;
-(void)savePreferences;
-(void)accessoryButtonTapped:(id)arg1 withEvent:(id)arg2 ;
-(void)_recentsManagerSignificantChangeNotification:(id)arg1 ;
-(void)_mapsCacheDidFinishNotification:(id)arg1 ;
-(void)_ftcServiceAvailabilityChangeNotification:(id)arg1 ;
-(NSArray *)indexPathsForNormalCalls;
-(NSArray *)indexPathsForMissedCalls;
-(void)_filterWasToggled:(id)arg1 ;
-(void)resetCachedIndexes;
-(void)_reloadTableViewAndNavigationBar;
-(void)_significantTimeChangeNotification:(id)arg1 ;
-(void)_applicationResumedNotification:(id)arg1 ;
-(void)_applicationSuspendedNotification:(id)arg1 ;
-(void)_phoneApplicationDidChangeTabBarSelectionNotification:(id)arg1 ;
-(long long)rowCountForCurrentTableMode;
-(id)_indexPathsForCallsWithStatus:(unsigned)arg1 includeUnknown:(BOOL)arg2 ;
-(id)callAtTableViewIndex:(long long)arg1 ;
-(void)showCallDetail:(id)arg1 animate:(BOOL)arg2 ;
-(void)_markAllCallsRead;
-(int)_tableFilterMode;
-(void)set_tableFilterMode:(int)arg1 ;
-(void)_clearButtonTapped:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)unloadView;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(void)_updateNavBarButtons;
@end
