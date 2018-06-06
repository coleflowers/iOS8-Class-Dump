/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <Game Center/GKGameProfileHeaderView.h>

@class GKFacebookLikeButton, GKRatingControl;

@interface GKGameProfileHeaderViewOwnedPad : GKGameProfileHeaderView {

	BOOL _playerIsUnderage;
	GKFacebookLikeButton* _likeButton;
	GKRatingControl* _ratingControl;

}

@property (nonatomic,retain) GKFacebookLikeButton * likeButton;              //@synthesize likeButton=_likeButton - In the implementation block
@property (nonatomic,retain) GKRatingControl * ratingControl;                //@synthesize ratingControl=_ratingControl - In the implementation block
@property (assign,nonatomic) BOOL playerIsUnderage;                          //@synthesize playerIsUnderage=_playerIsUnderage - In the implementation block
-(void)rateGame;
-(void)updateRating;
-(GKFacebookLikeButton *)likeButton;
-(void)setLikeButton:(GKFacebookLikeButton *)arg1 ;
-(void)setRatingControl:(GKRatingControl *)arg1 ;
-(BOOL)playerIsUnderage;
-(void)setPlayerIsUnderage:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didUpdateModel;
-(void)applyConstraints;
-(GKRatingControl *)ratingControl;
@end

