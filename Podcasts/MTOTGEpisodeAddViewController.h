/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTDetailListController.h>

@class NSMutableSet, UIButton, UIBarButtonItem, NSSet;

@interface MTOTGEpisodeAddViewController : MTDetailListController {

	NSMutableSet* _selectedUuids;
	UIButton* _selectAllButton;
	UIButton* _selectNoneButton;
	UIBarButtonItem* _doneItem;
	NSSet* _existingUuids;

}

@property (nonatomic,copy) NSSet * selectedUuids; 
@property (nonatomic,copy) NSSet * existingUuids;                                                    //@synthesize existingUuids=_existingUuids - In the implementation block
@property (assign,nonatomic,__weak) id<MTOTGEpisodeAddViewControllerDelegate> delegate; 
-(id)newCellInstanceWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 withEpisode:(id)arg2 download:(id)arg3 atIndexPath:(id)arg4 ;
-(id)toolbarButtons;
-(id)emptyListMessage;
-(id)rightButtonItems;
-(void)setExistingUuids:(NSSet *)arg1 ;
-(void)setSelectedUuids:(NSSet *)arg1 ;
-(NSSet *)selectedUuids;
-(void)selectNone:(id)arg1 ;
-(id)selectAllButton;
-(id)selectNoneButton;
-(id)doneItem;
-(void)updateButtons;
-(NSSet *)existingUuids;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)done:(id)arg1 ;
@end
