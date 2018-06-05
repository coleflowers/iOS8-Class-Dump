/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:43:31 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/_UICompatibilityTextView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol NoteTextViewActionDelegate, NoteTextViewLayoutDelegate;
@class UILongPressGestureRecognizer, NSLayoutConstraint, NSString;

@interface NoteTextView : _UICompatibilityTextView <UIGestureRecognizerDelegate> {

	id<NoteTextViewActionDelegate> _actionDelegate;
	id<NoteTextViewLayoutDelegate> _layoutDelegate;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	NSLayoutConstraint* _contentSizeHeightConstraint;
	NSLayoutConstraint* _contentSizeWidthConstraint;

}

@property (assign,nonatomic,__weak) id<NoteTextViewActionDelegate> actionDelegate;                   //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<NoteTextViewLayoutDelegate> layoutDelegate;                   //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentSizeHeightConstraint;                       //@synthesize contentSizeHeightConstraint=_contentSizeHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentSizeWidthConstraint;                        //@synthesize contentSizeWidthConstraint=_contentSizeWidthConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contentAsPasteboardItems;
-(id)htmlDocument;
-(void)menuControllerWillHideNotification:(id)arg1 ;
-(void)insertImage:(id)arg1 ;
-(void)updateMenuController;
-(id<NoteTextViewLayoutDelegate>)layoutDelegate;
-(id)selectedContentAsPasteboardItems;
-(id)_contentAsPasteboardItemsForWebArchive:(id)arg1 selectionRange:(NSRange)arg2 ;
-(void)setGestureRecognizersPriorities;
-(void)setLayoutDelegate:(id<NoteTextViewLayoutDelegate>)arg1 ;
-(NSLayoutConstraint *)contentSizeHeightConstraint;
-(void)setContentSizeHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentSizeWidthConstraint;
-(void)setContentSizeWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_accessibilitySpeakSelectionAssociatedScrollView;
-(void)setActionDelegate:(id<NoteTextViewActionDelegate>)arg1 ;
-(id<NoteTextViewActionDelegate>)actionDelegate;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)handleLongPressGesture:(id)arg1 ;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(id)nodeAtPoint:(CGPoint*)arg1 ;
-(void)dealloc;
-(void)addGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(CGSize)intrinsicContentSize;
-(BOOL)_forwardsToParentScroller;
-(id)_enclosingScrollerIncludingSelf;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setEditable:(BOOL)arg1 ;
-(id)selectedDOMRange;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 font:(id)arg2 ;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)webArchive;
@end
