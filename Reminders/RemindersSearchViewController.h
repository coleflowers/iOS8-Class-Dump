/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:47:45 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol RemindersSearchViewControllerDelegate;
@class RemindersSearchView, EKEventStore, RemindersSearchListController, NSString;

@interface RemindersSearchViewController : UIViewController <UISearchBarDelegate> {

	RemindersSearchView* _searchBarView;
	EKEventStore* _eventStore;
	long long _idiom;
	RemindersSearchListController* _searchListController;
	id<RemindersSearchViewControllerDelegate> _searchDelegate;
	/*^block*/id _showScheduleCardHandler;

}

@property (retain) RemindersSearchListController * searchListController;                                   //@synthesize searchListController=_searchListController - In the implementation block
@property (assign,nonatomic,__weak) id<RemindersSearchViewControllerDelegate> searchDelegate;              //@synthesize searchDelegate=_searchDelegate - In the implementation block
@property (nonatomic,copy) id showScheduleCardHandler;                                                     //@synthesize showScheduleCardHandler=_showScheduleCardHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)eventStoreChanged:(id)arg1 ;
-(void)useInterfaceIdiom:(long long)arg1 ;
-(void)setShowScheduleCardHandler:(id)arg1 ;
-(void)endSearching;
-(void)selectReminder:(id)arg1 ;
-(long long)interfaceIdiom;
-(id)showScheduleCardHandler;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)setSearchDelegate:(id<RemindersSearchViewControllerDelegate>)arg1 ;
-(id<RemindersSearchViewControllerDelegate>)searchDelegate;
-(RemindersSearchListController *)searchListController;
-(void)setSearchListController:(RemindersSearchListController *)arg1 ;
@end
