/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:47:45 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIViewController.h>
#import <Reminders/RemindersCardStackViewDataSource.h>
#import <Reminders/RemindersCardStackViewDelegate.h>
#import <Reminders/RemindersArchiving.h>
#import <Reminders/RemindersListControllerDelegate.h>
#import <Reminders/RemindersSearchViewControllerDelegate.h>
#import <Reminders/RemindersInvitationControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class RemindersCardStackView, RemindersListController, UIView, RemindersCardController, EKCalendar, RemindersSearchViewController, NSString;

@interface RemindersCardStackViewController : UIViewController <RemindersCardStackViewDataSource, RemindersCardStackViewDelegate, RemindersArchiving, RemindersListControllerDelegate, RemindersSearchViewControllerDelegate, RemindersInvitationControllerDelegate, UIScrollViewDelegate> {

	RemindersCardStackView* _stackView;
	RemindersListController* _highlightedList;
	UIView* _containerView;
	RemindersCardController* _newListCard;
	CGPoint _scrollOffsetAtDragStart;
	double _originalCardHeight;
	BOOL _isDeleting;
	EKCalendar* _reorderingCalendar;
	EKCalendar* _cachedInvitation;
	BOOL _isPresentingScheduledCard;
	BOOL _needsReload;
	BOOL _hasPerformedInitialLoad;
	RemindersSearchViewController* _searchViewController;

}

@property (assign,nonatomic) BOOL isPresentingScheduledCard;                            //@synthesize isPresentingScheduledCard=_isPresentingScheduledCard - In the implementation block
@property (readonly) RemindersSearchViewController * searchViewController;              //@synthesize searchViewController=_searchViewController - In the implementation block
@property (assign) BOOL needsReload;                                                    //@synthesize needsReload=_needsReload - In the implementation block
@property (assign) BOOL hasPerformedInitialLoad;                                        //@synthesize hasPerformedInitialLoad=_hasPerformedInitialLoad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(id)_stackView;
-(void)invitationControllerDeclined:(id)arg1 ;
-(void)invitationControllerAccepted:(id)arg1 ;
-(void)alarmsFired;
-(void)applyArchive:(id)arg1 ;
-(void)highlightReminder:(id)arg1 withSearchTerm:(id)arg2 ;
-(id)sortedCalendars;
-(id)displayedCard;
-(void)eventStoreChangedWithChangedObjectIDs:(id)arg1 ;
-(void)displayCalendar:(id)arg1 ;
-(void)displayScheduledCard;
-(void)setNeedsReload:(BOOL)arg1 ;
-(BOOL)listControllerIsOnTop:(id)arg1 ;
-(void)listControllerBeganEditing:(id)arg1 ;
-(void)listControllerEndedEditing:(id)arg1 ;
-(void)listControllerFinishedLoadingData:(id)arg1 ;
-(void)listControllerWillBeShown:(id)arg1 ;
-(void)listControllerWillBeHidden:(id)arg1 ;
-(void)listControllerDeletedList:(id)arg1 atIndex:(long long)arg2 ;
-(void)swapDisplayedCard:(id)arg1 ;
-(void)searchController:(id)arg1 willBecomeActive:(BOOL)arg2 ;
-(void)searchController:(id)arg1 didSelectReminder:(id)arg2 forSearchTerm:(id)arg3 ;
-(void)listControllerCanceledEditing:(id)arg1 ;
-(void)listControllerBeganModalEditing:(id)arg1 ;
-(void)listControllerEndedModalEditing:(id)arg1 ;
-(void)listControllerCreatedNewList:(id)arg1 ;
-(void)setIsPresentingScheduledCard:(BOOL)arg1 ;
-(id)cardAtIndex:(long long)arg1 ;
-(void)_toggleScheduledCard;
-(BOOL)cardStackView:(id)arg1 cardShouldSlideBackIntoStackWhenDismissed:(id)arg2 ;
-(double)cardSpacing;
-(void)cardStackViewDidPresentCard:(id)arg1 ;
-(void)cardStackView:(id)arg1 willAddGestureRecognizer:(id)arg2 toCardAtIndex:(long long)arg3 ;
-(void)cardStackView:(id)arg1 didDismissCard:(id)arg2 ;
-(long long)indexOfCard:(id)arg1 ;
-(long long)cardStackView:(id)arg1 targetIndexForMoveFromIndex:(long long)arg2 toProposedIndex:(long long)arg3 ;
-(void)cardStackView:(id)arg1 cardDidMoveFromIndex:(long long)arg2 toIndex:(long long)arg3 ;
-(void)cardStackViewDidEndReordering:(id)arg1 ;
-(BOOL)cardStackView:(id)arg1 canReorderCardAtIndex:(long long)arg2 ;
-(void)deleteCard:(id)arg1 atIndex:(long long)arg2 ;
-(void)_loadInitialList;
-(void)_reloadStack;
-(BOOL)hasPerformedInitialLoad;
-(void)setHasPerformedInitialLoad:(BOOL)arg1 ;
-(BOOL)isPresentingScheduledCard;
-(long long)numberOfInvitations;
-(void)_presentScheduledCard;
-(void)unhighlightReminder;
-(void)_loadSecondaryListsIfNeeded;
-(RemindersSearchViewController *)searchViewController;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)state;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)endEditing;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)numberOfCards;
-(BOOL)needsReload;
-(id)archive;
@end

