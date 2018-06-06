/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIInputView.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol FindOnPageToolbarDelegate;
@class UIToolbar, UIBarButtonItem, UILabel, UISearchBar, NSTimer, UIActivityIndicatorView, NSArray, NSString;

@interface FindOnPageToolbar : UIInputView <UISearchBarDelegate> {

	UIToolbar* _leftToolbar;
	UIToolbar* _rightToolbar;
	UIBarButtonItem* _previousButtonItem;
	UIBarButtonItem* _nextButtonItem;
	UILabel* _currentMatchLabel;
	UIBarButtonItem* _currentMatchBarButtonItem;
	UIBarButtonItem* _matchLabelLeftSpacer;
	UISearchBar* _inputBar;
	UIBarButtonItem* _inputFieldBarButtonItem;
	UIBarButtonItem* _doneBarButtonItem;
	id<FindOnPageToolbarDelegate> _findDelegate;
	NSTimer* _textChangedUpdateTimer;
	UIActivityIndicatorView* _indicatorView;
	NSArray* _keyCommands;
	BOOL _ownedByAddressView;
	BOOL _useActivityView;

}

@property (assign,nonatomic) BOOL ownedByAddressView;               //@synthesize ownedByAddressView=_ownedByAddressView - In the implementation block
@property (assign,nonatomic) BOOL useActivityView;                  //@synthesize useActivityView=_useActivityView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedToolbar;
+(id)toolbarWithItems:(id)arg1 ;
-(void)setOwnedByAddressView:(BOOL)arg1 ;
-(void)updateFindOnPageDelegate;
-(id)inputField;
-(void)setUseActivityView:(BOOL)arg1 ;
-(BOOL)useActivityView;
-(void)_doUpdateSearchText;
-(void)_transitionToFindOnPageMode;
-(double)_widthForInputBarButton;
-(void)_showNextResult;
-(void)_showPreviousResult;
-(void)_showActivityIndicatorIfNeeded;
-(BOOL)ownedByAddressView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)keyCommands;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)didEndSplitTransition;
-(void)_previousTapped:(id)arg1 ;
-(void)_nextTapped:(id)arg1 ;
-(void)updateUI;
-(void)_done;
@end

