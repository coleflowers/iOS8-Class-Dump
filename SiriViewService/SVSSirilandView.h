/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <UIKit/UIView.h>

@protocol SVSSirilandViewDelegate;
@class UIView, SiriUIKeyline, CALayer;

@interface SVSSirilandView : UIView {

	UIView* _contentView;
	UIView* _conversationView;
	SiriUIKeyline* _keyline;
	CALayer* _contentMaskingLayer;
	BOOL _showingDeviceLockView;
	BOOL _masksContent;
	BOOL _pageTransitionKeylineVisible;
	id<SVSSirilandViewDelegate> _delegate;
	UIOffset _topChevronOffset;

}

@property (assign,nonatomic) UIOffset topChevronOffset;                                                            //@synthesize topChevronOffset=_topChevronOffset - In the implementation block
@property (nonatomic,retain) UIView * conversationView;                                                            //@synthesize conversationView=_conversationView - In the implementation block
@property (getter=isShowingDeviceLockView,nonatomic,readonly) BOOL showingDeviceLockView;                          //@synthesize showingDeviceLockView=_showingDeviceLockView - In the implementation block
@property (assign,nonatomic,__weak) id<SVSSirilandViewDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL masksContent;                                                                    //@synthesize masksContent=_masksContent - In the implementation block
@property (assign,getter=isPageTransitionKeylineVisible,nonatomic) BOOL pageTransitionKeylineVisible;              //@synthesize pageTransitionKeylineVisible=_pageTransitionKeylineVisible - In the implementation block
+(id)sirilandView;
-(void)statusBarFrameDidChange;
-(void)setConversationView:(UIView *)arg1 ;
-(void)setMasksContent:(BOOL)arg1 ;
-(void)setPageTransitionKeylineVisible:(BOOL)arg1 ;
-(BOOL)isShowingDeviceLockView;
-(UIView *)conversationView;
-(UIOffset)topChevronOffset;
-(void)setTopChevronOffset:(UIOffset)arg1 ;
-(BOOL)masksContent;
-(BOOL)isPageTransitionKeylineVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SVSSirilandViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<SVSSirilandViewDelegate>)delegate;
@end
