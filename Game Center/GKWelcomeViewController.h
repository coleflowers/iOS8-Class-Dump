/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <GameCenterPrivateUI/GKViewController.h>
#import <Game Center/GKBubbleFlowableViewController.h>

@class NSString;

@interface GKWelcomeViewController : GKViewController <GKBubbleFlowableViewController>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_shouldAnimateBubblesIn;
-(void)viewDidLoad;
-(double)bubbleFlowAnimateOutDuration;
-(double)bubbleFlowAnimateInDuration;
-(BOOL)_gkCanBeRemovedFromParentWhenCovered;
-(BOOL)_gkUsesBubbleFlowModalPresentation;
-(id)bubbleAnimatorForTransitionFromViewController:(id)arg1 ;
-(id)bubbleAnimatorForTransitionToViewController:(id)arg1 ;
-(CGRect)finalScreenFrameInViewCoordinatesForBubbleOfType:(long long)arg1 ;
-(void)configureControlForBubble:(id)arg1 ;
-(BOOL)updateBubbleTextImmediatelyForTransitionFromViewController:(id)arg1 ;
@end

