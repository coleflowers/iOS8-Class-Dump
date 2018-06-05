/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:43:31 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIWebFindOnPageHighlighter.h>

@protocol UIWebFindOnPageHighlighterDelegate;
@class NSString, NSMutableArray, NSArray, UIView, UIWebDocumentView, UIScrollView;

@interface NotesFindOnPageHighlighter : NSObject <UIWebFindOnPageHighlighter> {

	NSMutableArray* _highlightBubbleViews;
	NSArray* _pdfHighlightViews;
	UIView* _highlightHostView;
	UIWebDocumentView* _documentView;
	UIScrollView* _scrollView;
	NSString* _searchText;
	id<UIWebFindOnPageHighlighterDelegate> _delegate;
	unsigned long long _numberOfMatches;
	unsigned long long _highlightedMatchIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * searchText;                                 //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic) id<UIWebFindOnPageHighlighterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfMatches;                         //@synthesize numberOfMatches=_numberOfMatches - In the implementation block
@property (nonatomic,readonly) unsigned long long highlightedMatchIndex;                   //@synthesize highlightedMatchIndex=_highlightedMatchIndex - In the implementation block
+(BOOL)expandedRectsWouldIntersect:(id)arg1 ;
-(BOOL)hasActiveHighlights;
-(id)initWithDocumentView:(id)arg1 inScrollView:(id)arg2 ;
-(void)clearSelectionAnimated:(BOOL)arg1 ;
-(void)_clearHighlightViews:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<UIWebFindOnPageHighlighterDelegate>)arg1 ;
-(id<UIWebFindOnPageHighlighterDelegate>)delegate;
-(NSString *)searchText;
-(BOOL)updateHighlightBubbleWobble:(BOOL)arg1 ;
-(void)_clearHighlightViews;
-(void)_addContentViewAtIndex:(unsigned long long)arg1 withRect:(CGRect)arg2 ;
-(void)_setSelectionRect:(CGRect)arg1 textRects:(id)arg2 contentImage:(CGImageRef)arg3 contentViews:(id)arg4 wobble:(BOOL)arg5 ;
-(void)setSelectionRect:(CGRect)arg1 textRects:(id)arg2 contentImage:(CGImageRef)arg3 wobble:(BOOL)arg4 ;
-(unsigned long long)findOnPageOptions;
-(void)_updateHighlightedMatchIndex:(BOOL)arg1 ;
-(BOOL)_highlightSelection;
-(void)_highlightFindOnPageMatch:(BOOL)arg1 ;
-(void)setSearchText:(id)arg1 matchLimit:(unsigned long long)arg2 ;
-(void)setSelectionRect:(CGRect)arg1 textRects:(id)arg2 contentViews:(id)arg3 wobble:(BOOL)arg4 ;
-(void)highlightNextMatch;
-(void)highlightPreviousMatch;
-(unsigned long long)numberOfMatches;
-(unsigned long long)highlightedMatchIndex;
@end

