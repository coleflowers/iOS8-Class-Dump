/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:47 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIViewControllerContextTransitioning.h>

@class MTGridTransitionAnimator, UIViewController, NSString;

@interface MTGridTransitionContext : NSObject <UIViewControllerContextTransitioning> {

	BOOL _animated;
	MTGridTransitionAnimator* _animator;
	UIViewController* _fromVC;
	UIViewController* _toVC;

}

@property (nonatomic,retain) MTGridTransitionAnimator * animator;              //@synthesize animator=_animator - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * fromVC;                 //@synthesize fromVC=_fromVC - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * toVC;                   //@synthesize toVC=_toVC - In the implementation block
@property (assign,nonatomic) BOOL animated;                                    //@synthesize animated=_animated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)containerView;
-(id)viewControllerForKey:(id)arg1 ;
-(CGRect)initialFrameForViewController:(id)arg1 ;
-(CGRect)finalFrameForViewController:(id)arg1 ;
-(BOOL)isInteractive;
-(BOOL)transitionWasCancelled;
-(void)completeTransition:(BOOL)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(double)arg1 ;
-(BOOL)isAnimated;
-(long long)presentationStyle;
-(BOOL)animated;
-(void)setAnimator:(MTGridTransitionAnimator *)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
-(MTGridTransitionAnimator *)animator;
-(UIViewController *)toVC;
-(UIViewController *)fromVC;
-(void)setToVC:(UIViewController *)arg1 ;
-(void)setFromVC:(UIViewController *)arg1 ;
@end

