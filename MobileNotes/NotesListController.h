/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:43:31 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol NotesListControllerDelegate;
@class UITableView, NotesBackgroundView, NoteObject, UIBarButtonItem, ScrollViewKeyboardResizer, NSString;

@interface NotesListController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	BOOL _adjacentToDisplayController;
	UITableView* _tableView;
	NotesBackgroundView* _backgroundView;
	NoteObject* _selectedNote;
	id<NotesListControllerDelegate> _delegate;
	UIBarButtonItem* _cancelButtonItem;
	ScrollViewKeyboardResizer* _scrollViewResizer;

}

@property (nonatomic,retain) UITableView * tableView;                                                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NotesBackgroundView * backgroundView;                                               //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) NoteObject * selectedNote;                                                          //@synthesize selectedNote=_selectedNote - In the implementation block
@property (assign,nonatomic,__weak) id<NotesListControllerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isAdjacentToDisplayController,nonatomic) BOOL adjacentToDisplayController;              //@synthesize adjacentToDisplayController=_adjacentToDisplayController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButtonItem;                                                 //@synthesize cancelButtonItem=_cancelButtonItem - In the implementation block
@property (nonatomic,retain) ScrollViewKeyboardResizer * scrollViewResizer;                                      //@synthesize scrollViewResizer=_scrollViewResizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)tableViewClass;
-(void)reloadTable;
-(void)setSelectedNote:(id)arg1 animated:(BOOL)arg2 ;
-(void)prepareForDeselection;
-(void)scrollToSelectedNoteAnimated:(BOOL)arg1 ;
-(void)selectRowForSelectedNoteAnimated:(BOOL)arg1 ;
-(void)setAdjacentToDisplayController:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateVisibleRowsAnimated:(BOOL)arg1 ;
-(void)systemFontSizeChanged:(id)arg1 ;
-(void)setScrollViewResizer:(ScrollViewKeyboardResizer *)arg1 ;
-(ScrollViewKeyboardResizer *)scrollViewResizer;
-(void)updateCellMargins:(id)arg1 ;
-(id)rightBarButtonItemForEditingTableView:(BOOL)arg1 ;
-(NoteObject *)selectedNote;
-(id)indexPathForNote:(id)arg1 ;
-(void)updateNavigationBarRightButtonItemForEditingTableView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)numberOfNotes;
-(id)noteForIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg1 withNote:(id)arg2 animated:(BOOL)arg3 ;
-(void)updateCell:(id)arg1 withNote:(id)arg2 ;
-(BOOL)isAdjacentToDisplayController;
-(void)setSelectedNote:(NoteObject *)arg1 ;
-(void)setAdjacentToDisplayController:(BOOL)arg1 ;
-(void)dataSourceDidChange;
-(void)cancelEditing:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<NotesListControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<NotesListControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setBackgroundView:(NotesBackgroundView *)arg1 ;
-(NotesBackgroundView *)backgroundView;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)isDisplayed;
-(UITableView *)tableView;
-(UIBarButtonItem *)cancelButtonItem;
-(void)setCancelButtonItem:(UIBarButtonItem *)arg1 ;
@end
