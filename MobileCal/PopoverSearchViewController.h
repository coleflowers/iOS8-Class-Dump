/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:52:29 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <MobileCal/SearchViewPopoverContentDelegate.h>
#import <MobileCal/PopoverContentView.h>

@class CalendarModel, PopoverSearchViewContainedController, UINavigationController, UIToolbar, UISearchBar, UINavigationItem, NSString;

@interface PopoverSearchViewController : UIViewController <UISearchBarDelegate, SearchViewPopoverContentDelegate, PopoverContentView> {

	CalendarModel* _model;
	PopoverSearchViewContainedController* _containedController;
	UINavigationController* _embeddedNavigationController;
	UIToolbar* _toolbar;
	/*^block*/id _doneBlock;
	UISearchBar* _searchBar;
	UINavigationItem* _popoverNavigationItem;

}

@property (nonatomic,retain) CalendarModel * model;                                                   //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) PopoverSearchViewContainedController * containedController;              //@synthesize containedController=_containedController - In the implementation block
@property (nonatomic,retain) UINavigationController * embeddedNavigationController;                   //@synthesize embeddedNavigationController=_embeddedNavigationController - In the implementation block
@property (nonatomic,retain) UIToolbar * toolbar;                                                     //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,copy) id doneBlock;                                                              //@synthesize doneBlock=_doneBlock - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                                 //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) UINavigationItem * popoverNavigationItem;                                //@synthesize popoverNavigationItem=_popoverNavigationItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)doneBlock;
-(void)setDoneBlock:(id)arg1 ;
-(void)todayPressed;
-(id)initWithModel:(id)arg1 doneBlock:(/*^block*/id)arg2 ;
-(id)noContentString;
-(UINavigationController *)embeddedNavigationController;
-(void)setEmbeddedNavigationController:(UINavigationController *)arg1 ;
-(void)_searchResultsUpdated:(id)arg1 ;
-(PopoverSearchViewContainedController *)containedController;
-(void)clearSearchString;
-(void)scrollToTodayAnimated:(BOOL)arg1 ;
-(void)setContainedController:(PopoverSearchViewContainedController *)arg1 ;
-(UINavigationItem *)popoverNavigationItem;
-(void)setPopoverNavigationItem:(UINavigationItem *)arg1 ;
-(void)_setSearchString:(id)arg1 ;
-(void)dealloc;
-(id)navigationItem;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UISearchBar *)searchBar;
-(UIToolbar *)toolbar;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(CalendarModel *)model;
-(BOOL)canDismiss;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)setModel:(CalendarModel *)arg1 ;
-(void)donePressed;
-(void)dismissPopover;
@end

