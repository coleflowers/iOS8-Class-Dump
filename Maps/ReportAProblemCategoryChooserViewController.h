/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol RAPCategoryChooserDelegate;
@class UISearchBar, UISearchDisplayController, NSMutableArray, NSIndexPath, UIActionSheet, NSArray, NSString;

@interface ReportAProblemCategoryChooserViewController : UITableViewController <UISearchBarDelegate, UISearchDisplayDelegate, UIActionSheetDelegate> {

	UISearchBar* _searchBar;
	UISearchDisplayController* _searchController;
	NSMutableArray* _fullCategoryIsChecked;
	NSIndexPath* _indexPath;
	UIActionSheet* _contactMergeSheet;
	BOOL _showDeleteButton;
	id<RAPCategoryChooserDelegate> delegate;
	NSArray* _fullCategoryList;
	NSMutableArray* _searchList;
	NSString* _previouslySelectedCategory;
	NSString* _currentlySelectedCategory;

}

@property (assign,nonatomic,__weak) id<RAPCategoryChooserDelegate> delegate; 
@property (nonatomic,copy) NSString * previouslySelectedCategory;                         //@synthesize previouslySelectedCategory=_previouslySelectedCategory - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                                     //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) BOOL showDeleteButton;                                       //@synthesize showDeleteButton=_showDeleteButton - In the implementation block
@property (nonatomic,retain) NSArray * fullCategoryList;                                  //@synthesize fullCategoryList=_fullCategoryList - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchList;                                 //@synthesize searchList=_searchList - In the implementation block
@property (nonatomic,copy) NSString * currentlySelectedCategory;                          //@synthesize currentlySelectedCategory=_currentlySelectedCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPreviouslySelectedCategory:(NSString *)arg1 ;
-(void)setShowDeleteButton:(BOOL)arg1 ;
-(NSString *)previouslySelectedCategory;
-(void)setFullCategoryList:(NSArray *)arg1 ;
-(NSString *)currentlySelectedCategory;
-(void)_resetCheckedState;
-(void)deleteCategory:(id)arg1 ;
-(void)fetchLocalizedCategories;
-(NSArray *)fullCategoryList;
-(void)setCurrentlySelectedCategory:(NSString *)arg1 ;
-(NSMutableArray *)searchList;
-(void)setSearchList:(NSMutableArray *)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<RAPCategoryChooserDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<RAPCategoryChooserDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(NSIndexPath *)indexPath;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)done;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(BOOL)showDeleteButton;
@end
