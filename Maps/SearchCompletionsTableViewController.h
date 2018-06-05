/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Maps/MKSearchCompleterDelegate.h>
#import <Maps/ExtendedTableViewDelegate.h>
#import <Maps/SearchBarSearchManagerDelegate.h>

@protocol SearchCompletionsTableViewControllerDelegate, HistoryUIHold;
@class SearchBarSearchManager, MKLocalSearchCompleter, NSArray, UIView, NSString, SearchResult, SearchBarSearchResults, RTRoutineManager, SearchInfo;

@interface SearchCompletionsTableViewController : UITableViewController <MKSearchCompleterDelegate, ExtendedTableViewDelegate, SearchBarSearchManagerDelegate> {

	id<SearchCompletionsTableViewControllerDelegate> _delegate;
	SearchBarSearchManager* _searchManager;
	MKLocalSearchCompleter* _searchCompleter;
	NSArray* _systemCompletions;
	NSArray* _localCompletions;
	NSArray* _tableSafeLocalCompletions;
	NSArray* _serverCompletions;
	NSArray* _tableSafeServerCompletions;
	NSArray* _routineCompletions;
	NSArray* _tableSafeRoutineCompletions;
	UIView* _bottomLine;
	NSString* _query;
	NSString* _visibleQuery;
	SearchResult* _customSearchResult;
	BOOL _suggestsDroppedPin;
	BOOL _suggestsCurrentLocation;
	BOOL _suggestsRouteCompletions;
	BOOL _suggestsServerCompletions;
	BOOL _stopShowingDefaultSuggestions;
	BOOL _delegateRespondsToScrollViewDidScroll;
	BOOL _suggestsRoutinePredictedLocations;
	int _searchMode;
	long long _idiom;
	NSArray* _orderedSections;
	BOOL _pendingReset;
	BOOL _showContacts;
	BOOL _finishedLocalCompletions;
	BOOL _finishedServerCompletions;
	id<HistoryUIHold> _historyUIHold;
	SearchBarSearchResults* _localSearchResults;
	RTRoutineManager* _routineManager;
	BOOL _suggestsHistory;
	BOOL _opaque;
	BOOL _showsLocalSuggestionsForEmptyQuery;
	BOOL _showsQueryAsCompletionIfNoneFound;
	BOOL _showsQueryAsCompletionAsDisambiguation;
	BOOL _showsCollectionsButton;
	SearchInfo* _refinementResults;
	UIView* _noContentView;

}

@property (assign,nonatomic,__weak) id<SearchCompletionsTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsQueryAsCompletionIfNoneFound;                                        //@synthesize showsQueryAsCompletionIfNoneFound=_showsQueryAsCompletionIfNoneFound - In the implementation block
@property (assign,nonatomic) BOOL showsQueryAsCompletionAsDisambiguation;                                   //@synthesize showsQueryAsCompletionAsDisambiguation=_showsQueryAsCompletionAsDisambiguation - In the implementation block
@property (nonatomic,retain) UIView * bottomLine;                                                           //@synthesize bottomLine=_bottomLine - In the implementation block
@property (nonatomic,retain) NSString * query;                                                              //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) SearchResult * customSearchResult;                                             //@synthesize customSearchResult=_customSearchResult - In the implementation block
@property (assign,nonatomic) BOOL showsCollectionsButton;                                                   //@synthesize showsCollectionsButton=_showsCollectionsButton - In the implementation block
@property (assign,nonatomic) BOOL suggestsDroppedPin;                                                       //@synthesize suggestsDroppedPin=_suggestsDroppedPin - In the implementation block
@property (assign,nonatomic) BOOL suggestsCurrentLocation;                                                  //@synthesize suggestsCurrentLocation=_suggestsCurrentLocation - In the implementation block
@property (assign,nonatomic) BOOL suggestsServerCompletions;                                                //@synthesize suggestsServerCompletions=_suggestsServerCompletions - In the implementation block
@property (assign,nonatomic) BOOL suggestsHistory;                                                          //@synthesize suggestsHistory=_suggestsHistory - In the implementation block
@property (assign,nonatomic) BOOL stopShowingDefaultSuggestions;                                            //@synthesize stopShowingDefaultSuggestions=_stopShowingDefaultSuggestions - In the implementation block
@property (assign,nonatomic) BOOL showsLocalSuggestionsForEmptyQuery;                                       //@synthesize showsLocalSuggestionsForEmptyQuery=_showsLocalSuggestionsForEmptyQuery - In the implementation block
@property (assign,nonatomic) BOOL suggestsRouteCompletions;                                                 //@synthesize suggestsRouteCompletions=_suggestsRouteCompletions - In the implementation block
@property (assign,nonatomic) BOOL suggestsRoutinePredictedLocations;                                        //@synthesize suggestsRoutinePredictedLocations=_suggestsRoutinePredictedLocations - In the implementation block
@property (getter=isShowingSuggestions,nonatomic,readonly) BOOL showingSuggestions; 
@property (nonatomic,retain) UIView * noContentView;                                                        //@synthesize noContentView=_noContentView - In the implementation block
@property (nonatomic,retain) SearchInfo * refinementResults;                                                //@synthesize refinementResults=_refinementResults - In the implementation block
@property (assign,getter=isOpaque,nonatomic) BOOL opaque;                                                   //@synthesize opaque=_opaque - In the implementation block
@property (nonatomic,retain) NSString * visibleQuery;                                                       //@synthesize visibleQuery=_visibleQuery - In the implementation block
@property (nonatomic,retain) NSArray * systemCompletions;                                                   //@synthesize systemCompletions=_systemCompletions - In the implementation block
@property (nonatomic,retain) NSArray * localCompletions;                                                    //@synthesize localCompletions=_localCompletions - In the implementation block
@property (nonatomic,retain) NSArray * serverCompletions;                                                   //@synthesize serverCompletions=_serverCompletions - In the implementation block
@property (nonatomic,retain) NSArray * routineCompletions;                                                  //@synthesize routineCompletions=_routineCompletions - In the implementation block
@property (nonatomic,retain) NSArray * orderedSections;                                                     //@synthesize orderedSections=_orderedSections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_locationManagerApprovalDidChange:(id)arg1 ;
-(SearchResult *)customSearchResult;
-(void)setCustomSearchResult:(SearchResult *)arg1 ;
-(void)extendedTableViewDataSourceContentDidChange:(id)arg1 ;
-(void)receivedSearchResults:(id)arg1 forSearchString:(id)arg2 ;
-(BOOL)showsCollectionsButton;
-(void)setShowsCollectionsButton:(BOOL)arg1 ;
-(id)_directionsHomeHistoryItem;
-(void)setStopShowingDefaultSuggestions:(BOOL)arg1 ;
-(id)firstSuggestionCell;
-(BOOL)isShowingSuggestions;
-(void)setShowsLocalSuggestionsForEmptyQuery:(BOOL)arg1 ;
-(void)setSuggestsServerCompletions:(BOOL)arg1 ;
-(void)setSuggestsHistory:(BOOL)arg1 ;
-(void)setSuggestsRoutinePredictedLocations:(BOOL)arg1 ;
-(void)setShowsQueryAsCompletionAsDisambiguation:(BOOL)arg1 ;
-(void)queryString:(id)arg1 traits:(id)arg2 forSearchMode:(int)arg3 withSource:(int)arg4 ;
-(id)_initWithStyle:(long long)arg1 idiom:(long long)arg2 ;
-(id)_sectionsForIdiom:(long long)arg1 ;
-(void)setOrderedSections:(NSArray *)arg1 ;
-(void)_setTableViewBackgroundColor;
-(void)_recentsChanged;
-(BOOL)_shouldShowDefaultCompletions;
-(id)_defaultCompletionsForSearchMode:(int)arg1 ;
-(unsigned long long)_indexOfSection:(int)arg1 ;
-(NSArray *)orderedSections;
-(void)setLocalCompletions:(NSArray *)arg1 ;
-(void)reloadTableViewData;
-(void)_defaultRoutineCompletionsForSearchMode:(int)arg1 ;
-(void)setVisibleQuery:(NSString *)arg1 ;
-(BOOL)showsLocalSuggestionsForEmptyQuery;
-(BOOL)suggestsRouteCompletions;
-(NSArray *)localCompletions;
-(void)setRoutineCompletions:(NSArray *)arg1 ;
-(id)_filterPredictedLocationsOfInterest:(id)arg1 ;
-(void)setServerCompletions:(NSArray *)arg1 ;
-(BOOL)stopShowingDefaultSuggestions;
-(SearchInfo *)refinementResults;
-(NSArray *)serverCompletions;
-(void)updateLocalResultsForSearchString:(id)arg1 ;
-(void)updateDelegateAfterCompletionResults;
-(NSArray *)routineCompletions;
-(int)_sectionAtIndex:(long long)arg1 ;
-(long long)numberOfCustomInitialItemCells;
-(BOOL)showsQueryAsCompletionIfNoneFound;
-(BOOL)showsQueryAsCompletionAsDisambiguation;
-(id)cellWithMainScreenClass:(Class)arg1 starkClass:(Class)arg2 ;
-(id)cellForCustomInitialItemAtIndex:(long long)arg1 ;
-(void)didSelectCustomInitialItemAtIndex:(long long)arg1 ;
-(BOOL)_isDisplayingAnyRows;
-(BOOL)hasCompletionsForQuery:(id)arg1 ;
-(void)reloadCustomInitialItemsWithAnimation:(long long)arg1 ;
-(void)reloadCustomInitialItemAtIndex:(long long)arg1 animation:(long long)arg2 ;
-(long long)indexOfCustomInitialItemForIndexPath:(id)arg1 ;
-(void)setShowsQueryAsCompletionIfNoneFound:(BOOL)arg1 ;
-(void)setRefinementResults:(SearchInfo *)arg1 ;
-(NSArray *)systemCompletions;
-(void)setSystemCompletions:(NSArray *)arg1 ;
-(NSString *)visibleQuery;
-(BOOL)suggestsDroppedPin;
-(void)setSuggestsDroppedPin:(BOOL)arg1 ;
-(BOOL)suggestsCurrentLocation;
-(void)setSuggestsCurrentLocation:(BOOL)arg1 ;
-(BOOL)suggestsServerCompletions;
-(BOOL)suggestsHistory;
-(void)setSuggestsRouteCompletions:(BOOL)arg1 ;
-(BOOL)suggestsRoutinePredictedLocations;
-(UIView *)bottomLine;
-(void)setBottomLine:(UIView *)arg1 ;
-(void)completerDidUpdateResults:(id)arg1 finished:(BOOL)arg2 ;
-(void)_contentSizeCategoryDidChange;
-(void)setOpaque:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SearchCompletionsTableViewControllerDelegate>)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<SearchCompletionsTableViewControllerDelegate>)delegate;
-(NSString *)query;
-(BOOL)isOpaque;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)setQuery:(NSString *)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setNoContentView:(UIView *)arg1 ;
-(UIView *)noContentView;
-(id)initWithIdiom:(long long)arg1 ;
-(void)_resetTableView;
@end
