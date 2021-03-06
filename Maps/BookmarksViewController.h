/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/CollectionsTableViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Maps/BookmarkViewControllerDelegate.h>

@protocol CollectionsViewControllerDelegate;
@class EditBookmarkViewController, UIBarButtonItem, NSIndexPath, NSString;

@interface BookmarksViewController : CollectionsTableViewController <UINavigationControllerDelegate, BookmarkViewControllerDelegate> {

	EditBookmarkViewController* _editController;
	UIBarButtonItem* _doneButtonItem;
	int _searchType;
	BOOL _isEditingBookmark;
	id<CollectionsViewControllerDelegate> _collectionsViewControllerDelegate;
	NSIndexPath* _editIndexPath;

}

@property (assign,nonatomic,__weak) id<CollectionsViewControllerDelegate> collectionsViewControllerDelegate;              //@synthesize collectionsViewControllerDelegate=_collectionsViewControllerDelegate - In the implementation block
@property (assign,nonatomic) int searchType;                                                                              //@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButtonItem;                                                            //@synthesize doneButtonItem=_doneButtonItem - In the implementation block
@property (nonatomic,retain) NSIndexPath * editIndexPath;                                                                 //@synthesize editIndexPath=_editIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataSourceChangedNotification;
+(id)title;
-(void)setCollectionsViewControllerDelegate:(id<CollectionsViewControllerDelegate>)arg1 ;
-(void)_replaceBookmark:(id)arg1 withBookmark:(id)arg2 ;
-(void)_handleSelectRow:(id)arg1 ;
-(void)setEditIndexPath:(NSIndexPath *)arg1 ;
-(id)editControllerWithBookmark:(id)arg1 ;
-(void)_removeBookmarkAtIndex:(unsigned long long)arg1 ;
-(BOOL)_canEditIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(void)_updateEditButtonEnabled;
-(void)_maps_backgroundCompositionStyleOverrideDidChange;
-(void)updateBookmarkWithEditController:(id)arg1 ;
-(void)view:(id)arg1 didDisappear:(BOOL)arg2 ;
-(void)view:(id)arg1 willDisappear:(BOOL)arg2 ;
-(id<CollectionsViewControllerDelegate>)collectionsViewControllerDelegate;
-(NSIndexPath *)editIndexPath;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIBarButtonItem *)doneButtonItem;
-(void)setDoneButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setSearchType:(int)arg1 ;
-(void)_addBookmark:(id)arg1 ;
-(int)searchType;
-(void)_moveBookmarkAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
@end

