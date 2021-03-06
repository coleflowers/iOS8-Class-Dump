/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/StarkTableViewController.h>

@class UIBarButtonItem, StarkRouteLoadingLabel;

@interface StarkBookmarksViewController : StarkTableViewController {

	/*^block*/id _completion;
	UIBarButtonItem* _doneBarButtonItem;
	BOOL _loading;
	StarkRouteLoadingLabel* _loadingView;

}

@property (nonatomic,readonly) UIBarButtonItem * doneBarButtonItem; 
-(void)modeWillPop;
-(void)_bookmarksDidChange;
-(id)_bookmarkForCellIndex:(long long)arg1 ;
-(UIBarButtonItem *)doneBarButtonItem;
-(void)_updateLoading;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)noContentView;
-(void)_done;
@end

