/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:57 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SiriViewService/SiriUISuggestionsViewDelegate.h>
#import <SiriViewService/SVSSuggestionsDelegate.h>

@protocol SVSSuggestionsViewControllerDelegate;
@class SVSSuggestions, SiriUISuggestionsView, NSString;

@interface SVSSuggestionsViewController : UIViewController <SiriUISuggestionsViewDelegate, SVSSuggestionsDelegate> {

	SVSSuggestions* _suggestions;
	id<SVSSuggestionsViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) SVSSuggestions * suggestions;                                          //@synthesize suggestions=_suggestions - In the implementation block
@property (assign,nonatomic,__weak) id<SVSSuggestionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SiriUISuggestionsView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showEmptyView;
-(void)showGreeting;
-(BOOL)shouldShowBorealisEducation;
-(void)showSuggestions;
-(void)_showHeaderText:(id)arg1 subheaderText:(id)arg2 largeSubheaderText:(id)arg3 ;
-(id)_borealisHeaderText;
-(id)_borealisSubheaderText;
-(id)_initialHeaderText;
-(id)_suggestingHeaderText;
-(void)suggestionsDidChange:(id)arg1 ;
-(void)showUnavailable;
-(void)showNeedsFirstUnlock;
-(void)setSuggestions:(SVSSuggestions *)arg1 ;
-(SVSSuggestions *)suggestions;
-(void)setDelegate:(id<SVSSuggestionsViewControllerDelegate>)arg1 ;
-(id<SVSSuggestionsViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)animateOut;
-(double)statusBarHeightForSuggestionsView:(id)arg1 ;
-(double)statusViewHeightForSuggestionsView:(id)arg1 ;
-(void)getNextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)didShowSuggestionsForSuggestionsView:(id)arg1 ;
-(void)suggestionsView:(id)arg1 didHideVibrantView:(id)arg2 ;
-(void)showAcousticIDSpinner;
-(void)hideAcousticIDSpinner;
@end

