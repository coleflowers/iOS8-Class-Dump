/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:52:29 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>

@class SearchResultsViewController, UISearchBar, CalendarModel, NSString;

@interface SearchResultsNavigationController : UINavigationController <UINavigationControllerDelegate, UISearchControllerDelegate> {

	BOOL _initialPresentationHasCompleted;
	SearchResultsViewController* _searchResultsViewController;
	UISearchBar* _searchBar;
	CalendarModel* _model;

}

@property (nonatomic,retain) SearchResultsViewController * searchResultsViewController;              //@synthesize searchResultsViewController=_searchResultsViewController - In the implementation block
@property (assign,nonatomic,__weak) UISearchBar * searchBar;                                         //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) CalendarModel * model;                                                  //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL initialPresentationHasCompleted;                                   //@synthesize initialPresentationHasCompleted=_initialPresentationHasCompleted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)todayPressed;
-(id)noContentString;
-(void)_updateTodayButtonPosition;
-(void)setInitialPresentationHasCompleted:(BOOL)arg1 ;
-(BOOL)initialPresentationHasCompleted;
-(void)animateShowingSearchBarWithCompletion:(/*^block*/id)arg1 ;
-(void)_setSearchBarEnabledState:(BOOL)arg1 ;
-(void)animateHidingSearchBar;
-(SearchResultsViewController *)searchResultsViewController;
-(void)setSearchResultsViewController:(SearchResultsViewController *)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(UISearchBar *)searchBar;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(CalendarModel *)model;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)setModel:(CalendarModel *)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)_showSearchBar;
-(void)_hideSearchBar;
@end

