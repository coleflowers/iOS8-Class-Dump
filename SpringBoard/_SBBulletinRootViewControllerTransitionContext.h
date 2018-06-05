/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewControllerContextTransitioning.h>

@class UIView, UIViewController, NSString;

@interface _SBBulletinRootViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioning> {

	BOOL _animated;
	BOOL _presenting;
	UIView* _containerView;
	UIViewController* _presentingViewController;
	UIViewController* _presentedViewController;
	/*^block*/id _presentationCompletion;
	/*^block*/id _dismissalCompletion;

}

@property (nonatomic,retain) UIView * containerView;                                   //@synthesize containerView=_containerView - In the implementation block
@property (assign,getter=isAnimated,nonatomic) BOOL animated;                          //@synthesize animated=_animated - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                      //@synthesize presenting=_presenting - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) UIViewController * presentedViewController;               //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,copy) id presentationCompletion;                                  //@synthesize presentationCompletion=_presentationCompletion - In the implementation block
@property (nonatomic,copy) id dismissalCompletion;                                     //@synthesize dismissalCompletion=_dismissalCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(void)setPresentationCompletion:(id)arg1 ;
-(void)setDismissalCompletion:(id)arg1 ;
-(BOOL)isPresenting;
-(id)presentationCompletion;
-(id)dismissalCompletion;
-(void)dealloc;
-(UIView *)containerView;
-(id)viewControllerForKey:(id)arg1 ;
-(id)viewForKey:(id)arg1 ;
-(CGRect)initialFrameForViewController:(id)arg1 ;
-(CGRect)finalFrameForViewController:(id)arg1 ;
-(BOOL)isInteractive;
-(BOOL)transitionWasCancelled;
-(void)completeTransition:(BOOL)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(double)arg1 ;
-(UIViewController *)presentingViewController;
-(BOOL)isAnimated;
-(UIViewController *)presentedViewController;
-(void)setContainerView:(UIView *)arg1 ;
-(long long)presentationStyle;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setPresenting:(BOOL)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
-(CGAffineTransform)targetTransform;
@end
