/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:25:15 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/PhoneViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <FaceTime/ABUnknownPersonViewControllerDelegate.h>
#import <FaceTime/ABPeoplePickerNavigationControllerPrivateMemberCellDelegate.h>

@class UITableView, _UIContentUnavailableView, ABPeoplePickerNavigationController, ABFavoritesEntry, NSString;

@interface PHFavoritesViewController : PhoneViewController <UITableViewDataSource, UITableViewDelegate, ABUnknownPersonViewControllerDelegate, ABPeoplePickerNavigationControllerPrivateMemberCellDelegate> {

	UITableView* _table;
	_UIContentUnavailableView* _noContentView;
	ABPeoplePickerNavigationController* _peoplePickerController;
	ABFavoritesEntry* _selectedABFavoritesEntry;
	unsigned _ignoreFavoritesDidChangeNotification : 1;
	unsigned _postponeTableReloadFromFavoritesChange : 1;
	unsigned _needsTableReloadFromFavoritesChange : 1;

}

@property (readonly) UITableView * table; 
@property (readonly) _UIContentUnavailableView * noContentView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)tabBarSystemItem;
+(id)tabBarIconName;
+(int)tabViewType;
+(BOOL)requiresNavigationControllerContainer;
-(void)_handleContentSizeCategoryDidChange:(id)arg1 ;
-(void)_handleFavoritesShowsContactPhotosChanged:(id)arg1 ;
-(void)savePreferences;
-(BOOL)shouldSnapshot;
-(void)accessoryButtonTapped:(id)arg1 withEvent:(id)arg2 ;
-(void)_addButtonClicked:(id)arg1 ;
-(BOOL)showsNoContentView;
-(void)_favoritesManagerSignificantChangeNotification:(id)arg1 ;
-(void)_updateNavButtons;
-(void)dismissPeoplePicker;
-(void)_addEntryFromPeoplePickerForPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 animateView:(id)arg4 favoritesEntryType:(int)arg5 ;
-(long long)absoluteIndexOfFilteredIndex:(long long)arg1 ;
-(void)deleteButtonPressedForIndexPath:(id)arg1 ;
-(void)showCardViewerForPerson:(void*)arg1 withTitle:(id)arg2 animate:(BOOL)arg3 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 withMemberCell:(id)arg5 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 withLinkedPeople:(CFArrayRef)arg3 memberCell:(id)arg4 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)unloadView;
-(long long)selectedIndex;
-(UITableView *)table;
-(_UIContentUnavailableView *)noContentView;
-(void)_updateContentView;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(int*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5 ;
-(void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(BOOL)arg2 forPerson:(void*)arg3 ;
-(void)restoreState;
@end
