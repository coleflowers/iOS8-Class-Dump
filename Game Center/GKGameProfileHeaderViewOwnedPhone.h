/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <Game Center/GKGameProfileHeaderView.h>

@class GKFacebookLikeButton, GKRatingControl, GKLabel, GKHairlineView, UIView;

@interface GKGameProfileHeaderViewOwnedPhone : GKGameProfileHeaderView {

	BOOL _playerIsUnderage;
	GKFacebookLikeButton* _likeButton;
	GKRatingControl* _ratingControl;
	GKLabel* _nameLabel;
	GKHairlineView* _verticalRule;
	UIView* _ratingSpacerLeft;
	UIView* _ratingSpacerRight;

}

@property (nonatomic,retain) GKFacebookLikeButton * likeButton;              //@synthesize likeButton=_likeButton - In the implementation block
@property (nonatomic,retain) GKRatingControl * ratingControl;                //@synthesize ratingControl=_ratingControl - In the implementation block
@property (assign,nonatomic) BOOL playerIsUnderage;                          //@synthesize playerIsUnderage=_playerIsUnderage - In the implementation block
@property (nonatomic,retain) GKLabel * nameLabel;                            //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) GKHairlineView * verticalRule;                  //@synthesize verticalRule=_verticalRule - In the implementation block
@property (nonatomic,retain) UIView * ratingSpacerLeft;                      //@synthesize ratingSpacerLeft=_ratingSpacerLeft - In the implementation block
@property (nonatomic,retain) UIView * ratingSpacerRight;                     //@synthesize ratingSpacerRight=_ratingSpacerRight - In the implementation block
-(void)rateGame;
-(void)applyIconAndNameConstraints;
-(void)applyLikeButtonAndVerticalRuleVerticalPositioning;
-(void)applyCenteredRatingControlConstraint;
-(void)applyRatingAndLikeButtonConstraints;
-(void)applyRatingControlVerticalPositioning;
-(void)applyRatingLabelConstraints;
-(void)updateRating;
-(GKFacebookLikeButton *)likeButton;
-(void)setLikeButton:(GKFacebookLikeButton *)arg1 ;
-(void)setRatingControl:(GKRatingControl *)arg1 ;
-(BOOL)playerIsUnderage;
-(void)setPlayerIsUnderage:(BOOL)arg1 ;
-(GKHairlineView *)verticalRule;
-(void)setVerticalRule:(GKHairlineView *)arg1 ;
-(UIView *)ratingSpacerLeft;
-(void)setRatingSpacerLeft:(UIView *)arg1 ;
-(UIView *)ratingSpacerRight;
-(void)setRatingSpacerRight:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setNameLabel:(GKLabel *)arg1 ;
-(GKLabel *)nameLabel;
-(void)didUpdateModel;
-(void)applyConstraints;
-(GKRatingControl *)ratingControl;
@end
