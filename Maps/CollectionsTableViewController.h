/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Maps/CustomSearchManagerObserver.h>

@protocol CollectionsTableViewControllerDelegate;
@class CollectionsViewController, UIActionSheet, SearchResult, NSSet, NSString;

@interface CollectionsTableViewController : UITableViewController <UIActionSheetDelegate, CustomSearchManagerObserver> {

	BOOL _needsReload;
	id<CollectionsTableViewControllerDelegate> _collectionsTableViewControllerDelegate;
	CollectionsViewController* _collectionsViewController;
	BOOL _showCurrentLocation;
	BOOL _showCustomSearchResult;
	BOOL _showDirectionsHome;
	UIActionSheet* _toOrFromSelectionActionSheet;
	SearchResult* _currentLocationSearchResult;
	SearchResult* _customSearchResult;

}

@property (assign,nonatomic) BOOL needsReload;                                                                                      //@synthesize needsReload=_needsReload - In the implementation block
@property (assign,nonatomic,__weak) id<CollectionsTableViewControllerDelegate> collectionsTableViewControllerDelegate;              //@synthesize collectionsTableViewControllerDelegate=_collectionsTableViewControllerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,readonly) NSSet * leftBarButtonItemPossibleTitles; 
@property (assign,nonatomic,__weak) CollectionsViewController * collectionsViewController;                                          //@synthesize collectionsViewController=_collectionsViewController - In the implementation block
@property (nonatomic,retain) SearchResult * currentLocationSearchResult;                                                            //@synthesize currentLocationSearchResult=_currentLocationSearchResult - In the implementation block
@property (nonatomic,retain) SearchResult * customSearchResult;                                                                     //@synthesize customSearchResult=_customSearchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataSourceChangedNotification;
+(id)title;
-(SearchResult *)currentLocationSearchResult;
-(void)dataSourceChanged:(id)arg1 ;
-(void)_locationManagerApprovalDidChange:(id)arg1 ;
-(void)setNeedsReload:(BOOL)arg1 ;
-(void)customSearchResultDidUpdate;
-(void)reloadTable;
-(void)reloadTableAndScrollToTop:(BOOL)arg1 ;
-(BOOL)_updateCurrentLocation;
-(void)setCurrentLocationSearchResult:(SearchResult *)arg1 ;
-(void)_updateCustomSearchResult;
-(SearchResult *)customSearchResult;
-(void)setCustomSearchResult:(SearchResult *)arg1 ;
-(BOOL)_updateDirectionsHome;
-(void)customSearchManager:(id)arg1 didReplaceCustomSearchResult:(id)arg2 animated:(BOOL)arg3 shouldSelectOnMap:(BOOL)arg4 ;
-(void)customSearchManager:(id)arg1 didModifyCustomSearchResult:(id)arg2 ;
-(NSSet *)leftBarButtonItemPossibleTitles;
-(void)_presentToOrFromSelectionAlert;
-(id<CollectionsTableViewControllerDelegate>)collectionsTableViewControllerDelegate;
-(void)setCollectionsTableViewControllerDelegate:(id<CollectionsTableViewControllerDelegate>)arg1 ;
-(CollectionsViewController *)collectionsViewController;
-(void)setCollectionsViewController:(CollectionsViewController *)arg1 ;
-(void)dealloc;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isVisible;
-(BOOL)needsReload;
@end

