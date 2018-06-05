/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Maps/MNTraceDelegate.h>

@protocol MNTraceBookmarkSelectorDelegate;
@class MNTracePlayer, UITableViewCell, NSCache, NSArray, NSString;

@interface MNTraceBookmarkSelector : UITableViewController <MNTraceDelegate> {

	MNTracePlayer* _tracePlayer;
	UITableViewCell* _noBookmarksCell;
	NSCache* _bookmarkImageCache;
	id<MNTraceBookmarkSelectorDelegate> _delegate;
	NSArray* _bookmarks;

}

@property (nonatomic,retain) MNTracePlayer * tracePlayer;                                      //@synthesize tracePlayer=_tracePlayer - In the implementation block
@property (assign,nonatomic,__weak) id<MNTraceBookmarkSelectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTracePlayer:(MNTracePlayer *)arg1 ;
-(void)reloadBookmarks;
-(id)_noBookmarksCell;
-(void)traceDidRecordBookmark:(id)arg1 ;
-(MNTracePlayer *)tracePlayer;
-(void)dealloc;
-(void)setDelegate:(id<MNTraceBookmarkSelectorDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNTraceBookmarkSelectorDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithStyle:(long long)arg1 ;
-(void)_done;
@end

