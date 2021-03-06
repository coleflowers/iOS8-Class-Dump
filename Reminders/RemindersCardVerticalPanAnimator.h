/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:47:44 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Reminders/Reminders-Structs.h>
@class _UIDynamicValueAnimation, UIPanGestureRecognizer, UIView;

@interface RemindersCardVerticalPanAnimator : NSObject {

	_UIDynamicValueAnimation* _panningAnimation;
	UIPanGestureRecognizer* _gestureRecognizer;
	UIView* _panningCardView;
	double _panningViewTargetScale;
	CGPoint _panningViewStartPosition;
	CGPoint _panningViewTargetPosition;

}

@property (nonatomic,retain) UIPanGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) UIView * panningCardView;                                //@synthesize panningCardView=_panningCardView - In the implementation block
@property (assign,nonatomic) CGPoint panningViewStartPosition;                        //@synthesize panningViewStartPosition=_panningViewStartPosition - In the implementation block
@property (assign,nonatomic) CGPoint panningViewTargetPosition;                       //@synthesize panningViewTargetPosition=_panningViewTargetPosition - In the implementation block
@property (assign,nonatomic) double panningViewTargetScale;                           //@synthesize panningViewTargetScale=_panningViewTargetScale - In the implementation block
-(void)setPanningCardView:(UIView *)arg1 ;
-(id)initWithCardView:(id)arg1 ;
-(void)dismissWithStartVelocity:(double)arg1 completion:(/*^block*/id)arg2 ;
-(UIView *)panningCardView;
-(CGPoint)panningViewStartPosition;
-(void)layoutViewsWithY:(double)arg1 ;
-(void)setPanningViewStartPosition:(CGPoint)arg1 ;
-(void)setPanningViewTargetPosition:(CGPoint)arg1 ;
-(void)setPanningViewTargetScale:(double)arg1 ;
-(id)_dynamicAnimationWithStart:(double)arg1 target:(double)arg2 initialVelocity:(double)arg3 ;
-(CGPoint)panningViewTargetPosition;
-(double)panningViewTargetScale;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(void)stop;
@end

