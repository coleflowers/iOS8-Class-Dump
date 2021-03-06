/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <UIKit/UIView.h>

@class GKBubbleSegmentedControlContext, _UIBackdropView, UIView;

@interface GKBubbleSegmentedControlFloatInAnimatorView : UIView {

	GKBubbleSegmentedControlContext* _context;
	_UIBackdropView* _backdropView;
	UIView* _knockoutView;
	UIView* _dimmingView;

}

@property (nonatomic,retain) GKBubbleSegmentedControlContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                         //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIView * knockoutView;                                  //@synthesize knockoutView=_knockoutView - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                   //@synthesize dimmingView=_dimmingView - In the implementation block
+(id)animatorForContext:(id)arg1 ;
-(double)ez;
-(void)updateTargetBubblesAnimations;
-(void)floatInGamesBubble;
-(void)floatInPointsBubble;
-(void)floatInFriendsBubble;
-(void)setKnockoutView:(UIView *)arg1 ;
-(void)animateWithHandler:(/*^block*/id)arg1 ;
-(UIView *)knockoutView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(GKBubbleSegmentedControlContext *)context;
-(void)setContext:(GKBubbleSegmentedControlContext *)arg1 ;
-(UIView *)dimmingView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)setDimmingView:(UIView *)arg1 ;
@end

