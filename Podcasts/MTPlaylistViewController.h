/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTSourceListController.h>
#import <Podcasts/MTPlaylistListCellDelegate.h>
#import <Podcasts/MTSourceListDelegate.h>
#import <Podcasts/MTDetailListControllerDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>

@class MTPodcastPlaylistSheetViewController, NSString;

@interface MTPlaylistViewController : MTSourceListController <MTPlaylistListCellDelegate, MTSourceListDelegate, MTDetailListControllerDelegate, UIViewControllerRestoration> {

	MTPodcastPlaylistSheetViewController* _newPlaylistController;
	BOOL _folder;

}

@property (assign,getter=isFolder,nonatomic) BOOL folder;              //@synthesize folder=_folder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultsKey;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)sourceList:(id)arg1 didSelectItemUuid:(id)arg2 atIndexPath:(id)arg3 ;
-(void)sourceList:(id)arg1 didUpdateSelectedItemUuid:(id)arg2 ;
-(void)restoreSelection;
-(id)attributedTitleForRefreshControl;
-(void)getObjectId:(id*)arg1 andIndexPath:(id*)arg2 forItemWithUuid:(id)arg3 ;
-(id)firstValidIndexPath;
-(id)newCellInstanceWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(void)detailListController:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)edit:(id)arg1 ;
-(BOOL)showsNewStation;
-(long long)_minEditableRow;
-(void)addStation:(id)arg1 ;
-(void)createPlaylistWithName:(id)arg1 includesAll:(BOOL)arg2 podcasts:(id)arg3 ;
-(void)cancelNewPlaylist:(id)arg1 ;
-(void)doneNewPlaylist:(id)arg1 ;
-(void)setupDetailController:(id)arg1 playlistUuid:(id)arg2 ;
-(void)playPlaylist:(id)arg1 selectCell:(BOOL)arg2 ;
-(void)playPlaylist:(id)arg1 ;
-(void)finishedEditing:(id)arg1 ;
-(id)detailControllerForPlaylistWithItemUuid:(id)arg1 ;
-(void)updateEditButton;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)refresh:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setRefreshing:(BOOL)arg1 ;
-(void)setFolder:(BOOL)arg1 ;
-(BOOL)isFolder;
-(id)reuseIdentifierForRow:(id)arg1 ;
@end

