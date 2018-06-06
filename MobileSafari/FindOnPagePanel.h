/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <MobileSafari/BrowserPanel.h>
#import <UIKit/UIKeyInput.h>

@class NSArray, UILabel, UIBarButtonItem, UIActivityIndicatorView, NSString;

@interface FindOnPagePanel : UIView <BrowserPanel, UIKeyInput> {

	BOOL _requiresKeyboard;
	NSArray* _toolbarItems;
	UILabel* _currentResultLabel;
	UIBarButtonItem* _previousButtonItem;
	UIBarButtonItem* _nextButtonItem;
	UIActivityIndicatorView* _indicatorView;
	BOOL _useActivityView;

}

@property (assign,nonatomic) BOOL useActivityView;                                       //@synthesize useActivityView=_useActivityView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
-(int)panelType;
-(int)pausesPages;
-(BOOL)ignoresPrivateBrowsingStyle;
-(BOOL)shouldHideOnSuspend;
-(void)setRequiresKeyboard:(BOOL)arg1 ;
-(id)findTextField;
-(BOOL)_willShowActivityIndicator;
-(id)_currentResultLabel;
-(void)setUseActivityView:(BOOL)arg1 ;
-(BOOL)useActivityView;
-(BOOL)shouldShowToolbarInFullscreen;
-(BOOL)canBecomeFirstResponder;
-(BOOL)_requiresKeyboardWhenFirstResponder;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(id)toolbarItems;
-(id)inputAccessoryView;
-(void)_previousTapped:(id)arg1 ;
-(void)_nextTapped:(id)arg1 ;
-(void)updateUI;
-(void)_done;
@end

