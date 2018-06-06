/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:44 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Game Center/GKPlayerProfileCollectionViewController.h>

@interface GKNonFriendProfileViewController : GKPlayerProfileCollectionViewController {

	BOOL _profileWasShownFromRecommendations;

}

@property (assign,nonatomic) BOOL profileWasShownFromRecommendations;              //@synthesize profileWasShownFromRecommendations=_profileWasShownFromRecommendations - In the implementation block
+(Class)headerViewClass;
-(void)animateOutBubbleWithFocus:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setProfileWasShownFromRecommendations:(BOOL)arg1 ;
-(void)updateSegmentMessages;
-(void)didTouchAction;
-(BOOL)profileWasShownFromRecommendations;
-(BOOL)shouldShowRemoveAction;
-(void)sendRequestTapped:(id)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(id)init;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setHeaderView:(id)arg1 ;
-(void)willAnimateAppearingWithBubbleFlow;
@end

