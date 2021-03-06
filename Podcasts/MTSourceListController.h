/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:47 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTToolbarHeaderViewController.h>
#import <Podcasts/MTSearchDisplayControllerDelegate.h>
#import <Podcasts/MTTableViewDataSource.h>

@protocol MTSourceListDelegate, MTRefreshControlDelegate;
@class NSString, NSAttributedString;

@interface MTSourceListController : MTToolbarHeaderViewController <MTSearchDisplayControllerDelegate, MTTableViewDataSource> {

	BOOL _endRefreshWhenDraggingEnds;
	BOOL _refreshing;
	id<MTSourceListDelegate> _delegate;
	id<MTRefreshControlDelegate> _refreshDelegate;
	NSString* _selectedUuid;
	NSAttributedString* _attributedTitleForRefreshControl;
	SEL _selectorForRefreshControl;
	id _targetForRefreshControl;

}

@property (assign,nonatomic,__weak) id<MTRefreshControlDelegate> refreshDelegate;                //@synthesize refreshDelegate=_refreshDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MTSourceListDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * selectedUuid;                                            //@synthesize selectedUuid=_selectedUuid - In the implementation block
@property (assign,getter=isRefreshing,nonatomic) BOOL refreshing;                                //@synthesize refreshing=_refreshing - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedTitleForRefreshControl;              //@synthesize attributedTitleForRefreshControl=_attributedTitleForRefreshControl - In the implementation block
@property (assign,nonatomic) SEL selectorForRefreshControl;                                      //@synthesize selectorForRefreshControl=_selectorForRefreshControl - In the implementation block
@property (assign,nonatomic,__weak) id targetForRefreshControl;                                  //@synthesize targetForRefreshControl=_targetForRefreshControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultsKey;
-(id)_selectItemWithUuid:(id)arg1 ;
-(id)storedUuid;
-(void)setSelectedUuid:(NSString *)arg1 ;
-(NSString *)selectedUuid;
-(void)selectItemWithUuid:(id)arg1 forceScroll:(BOOL)arg2 ;
-(void)didEndDraggingScrollView;
-(void)restoreSelection;
-(void)updatedDefaults:(id)arg1 ;
-(NSAttributedString *)attributedTitleForRefreshControl;
-(id)targetForRefreshControl;
-(SEL)selectorForRefreshControl;
-(void)configureRowHeight;
-(void)endRefreshingWhenDraggingCompletes;
-(id<MTRefreshControlDelegate>)refreshDelegate;
-(void)getObjectId:(id*)arg1 andIndexPath:(id*)arg2 forItemWithUuid:(id)arg3 ;
-(id)firstValidIndexPath;
-(id)newCellInstanceWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setAttributedTitleForRefreshControl:(NSAttributedString *)arg1 ;
-(long long)flattenedCellIndexForIndexPath:(id)arg1 ;
-(void)setRefreshDelegate:(id<MTRefreshControlDelegate>)arg1 ;
-(void)setSelectorForRefreshControl:(SEL)arg1 ;
-(void)setTargetForRefreshControl:(id)arg1 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MTSourceListDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(id<MTSourceListDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)tableView;
-(BOOL)isRefreshing;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setRefreshing:(BOOL)arg1 ;
-(id)reuseIdentifierForRow:(id)arg1 ;
@end

