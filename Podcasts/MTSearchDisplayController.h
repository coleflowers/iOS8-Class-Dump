/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:47 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Podcasts/MTReachabilityObserver.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Podcasts/MTLibraryViewControllerProtocol.h>

@protocol MTSearchDisplayControllerDelegate;
@class NSString, UILabel, MTLibrary, UIView, NSArray, MTTextQuery, UITableView, UISearchBar, UIViewController;

@interface MTSearchDisplayController : UIViewController <UITableViewDelegate, UITableViewDataSource, MTReachabilityObserver, UISearchBarDelegate, MTLibraryViewControllerProtocol> {

	struct {
		unsigned delegateWillBeginSearch : 1;
		unsigned delegateWillEndSearch : 1;
		unsigned delegateDidSelectPodcast : 1;
		unsigned delegateDidSelectEpisode : 1;
		unsigned delegateDidRecognize : 1;
	}  _delegateFlags;
	NSString* _urlString;
	UILabel* _noResults;
	BOOL _active;
	id<MTSearchDisplayControllerDelegate> _delegate;
	MTLibrary* _library;
	UIView* _dismissView;
	NSArray* _podcastResults;
	NSArray* _episodeResults;
	/*^block*/id _searchBeginBlock;
	/*^block*/id _searchEndBlock;
	MTTextQuery* _query;
	UITableView* _tableView;
	UISearchBar* _searchBar;
	UIViewController* _contentsController;

}

@property (nonatomic,copy) id searchBeginBlock;                                           //@synthesize searchBeginBlock=_searchBeginBlock - In the implementation block
@property (nonatomic,copy) id searchEndBlock;                                             //@synthesize searchEndBlock=_searchEndBlock - In the implementation block
@property (assign,nonatomic) id<MTSearchDisplayControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                     //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                     //@synthesize tableView=_tableView - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                 //@synthesize active=_active - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * contentsController;                //@synthesize contentsController=_contentsController - In the implementation block
@property (nonatomic,retain) NSArray * podcastResults;                                    //@synthesize podcastResults=_podcastResults - In the implementation block
@property (nonatomic,retain) NSArray * episodeResults;                                    //@synthesize episodeResults=_episodeResults - In the implementation block
@property (nonatomic,retain) MTTextQuery * query;                                         //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) UIView * dismissView;                                        //@synthesize dismissView=_dismissView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MTLibrary * library;                                         //@synthesize library=_library - In the implementation block
-(void)reachabilityChangedFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(void)dismissSearch:(id)arg1 ;
-(void)configureCell:(id)arg1 indexPath:(id)arg2 ;
-(NSArray *)podcastResults;
-(NSArray *)episodeResults;
-(void)performSearch:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 searchBar:(id)arg2 ;
-(void)setPodcastResults:(NSArray *)arg1 ;
-(void)setEpisodeResults:(NSArray *)arg1 ;
-(id)searchBeginBlock;
-(void)setSearchBeginBlock:(id)arg1 ;
-(id)searchEndBlock;
-(void)setSearchEndBlock:(id)arg1 ;
-(void)setContentsController:(UIViewController *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MTSearchDisplayControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<MTSearchDisplayControllerDelegate>)delegate;
-(BOOL)isActive;
-(MTTextQuery *)query;
-(void)viewWillLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setQuery:(MTTextQuery *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UISearchBar *)searchBar;
-(void)setActive:(BOOL)arg1 ;
-(void)keyboardDidHide:(id)arg1 ;
-(UITableView *)tableView;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(BOOL)searchBarShouldEndEditing:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)setDismissView:(UIView *)arg1 ;
-(UIView *)dismissView;
-(MTLibrary *)library;
-(void)setLibrary:(MTLibrary *)arg1 ;
-(UIViewController *)contentsController;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

